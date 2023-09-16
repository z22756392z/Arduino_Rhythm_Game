## 微電腦數位實習期末作業

#### 關於此作業

此作業為音樂遊戲，使用Arduino Uno版，LCD2，蜂鳴器，Led燈泡和按鈕*3完成。

* LCD2:      為遊戲主要顯示的地方
* 按鈕:        用於選擇菜單，進入歌曲中及遊玩遊戲
* 蜂鳴器:    發出對應歌曲的音符
* Led燈泡:  用於顯示當按鈕正確的按到顯示於LCD2上的音符的信號

這個音樂遊戲有主菜單，選擇歌曲的目錄及當選擇完歌曲後的遊玩介面。

遊玩開始時，波浪會隨機依據歌曲的音符落下，波浪生成位置分為上下兩排，玩家需要在合適的落點按下對應上下兩排的按鈕，如果成功led燈泡將會亮起，並加入連級數，分數的計算。 每個歌曲有不同的長度，評分會依據玩家成功按下的波浪數 及 歌曲的總波浪數 相除 得到玩家的完成度 並依序分為 F E D C B A S 等評級。 

#### 遇到的困難

* 動態記憶體的不足: 在存放歌曲及動態顯示的音符時，我們遇到動態記憶體不足，在Arduino Uno版中動態記憶體只有2kb。 

  * ###### 解決辦法

  * 把所有變數型態改成可能最小會用到空間的型態，如: 把int改成unsigned char, char, unsigned short, short...等等。

  * 對於歌曲的問題，如上面的歌曲的結構顯示，每個音符及其的節奏需要一個unsigned short(2 byte) 和 unsigned char(1byte) ，一個一音符總共3 byte存儲，假如把一首歌200個節奏  直接當作陣列存放於變數中就需要200 * 3 = 600 byte的空間很快的 2kb的動態空間是會被用完的。  因此我們使用函式的方式儲存 (先使用Parse.cpp轉換)

    ````c++
    static unsigned short GetSakulaMelody(unsigned short index) {
            if (index < 10) {
                if (index == 0) return 293;
                if (index == 1) return 0;
                if (index == 2) return 293;
                if (index == 3) return 261;
                if (index == 4) return 293;
                if (index == 5) return 0;
                if (index == 6) return 293;
                if (index == 7) return 261;
                if (index == 8) return 293;
                if (index == 9) return 0;
            }
            if (index < 20) {
                if (index == 10) return 293;
                if (index == 11) return 261;
                if (index == 12) return 293;
                ...
            }
        ....
    }
    ````

    這樣的方式一次只會有幾個變數在stack中，不像用陣列儲存於變數一次全部在stack中，而是存放Arduino Uno sketch中(有30KB的空間)。   當然這樣我們犧牲了一些效率不過因為lcd2的螢幕刷新時間是相對而言比較慢，所以可以把等待lcd2刷新的時間挪一些來用，因此對整體而言這是不這麼多的效率犧牲，只是這個方法不可避免的是歌曲會隨著時間速度漸漸變慢。