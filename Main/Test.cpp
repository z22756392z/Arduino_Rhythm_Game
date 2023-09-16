#include "Test.h" 

TestMenu::TestMenu(Test*& currentTestPointer) : m_CurrnetTest(currentTestPointer)
{

}

void TestMenu::Update() {
    if (m_CurrnetTest != this)   return;
    if (m_inputHandler->IsButton1PressOnce()) {
        m_currentOption = m_currentOption - 1 < -1 ? -1 : m_currentOption - 1;
        Clear();
    }
    if (m_inputHandler->IsButton2PressOnce()) {
        m_currentOption = m_currentOption + 1 > m_TestSize - 1? m_TestSize - 1: m_currentOption + 1;
        Clear();
    }
    if (m_inputHandler->IsButton3PressOnce()) {
        if (m_currentOption < 0) return;
        Clear();
        m_CurrnetTest = m_Tests[m_currentOption].test();
    }
}

void TestMenu::Clear()
{
    m_renderer->ClearBoard();
}

void TestMenu::Render() {
    m_renderer->DrawText("O", 0, 15);
    if (m_currentOption == -1) {
        m_renderer->DrawText(m_Tests[m_currentOption + 1].name, 1, 0);
        return;
    }
    if (m_currentOption == m_TestSize - 1) {
        m_renderer->DrawText(m_Tests[m_currentOption].name, 0, 3);
        return;
    }
    m_renderer->DrawText(m_Tests[m_currentOption].name, 0, 1);
    m_renderer->DrawText(m_Tests[m_currentOption+1].name, 1, 0);
}
