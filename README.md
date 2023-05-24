# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Iterator 疊代器模式  
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 目的
Iterator設計模式是一種行為模式，它允許使用者透過提供統一的介面以迭代容器中的元素，而不必了解內部實現的細節。<br>
此模式可提高代碼的可讀性和可維護性，同時允許更容易地在不同類型的容器中實現迭代。

---

## 使用時機
當需要對容器中的元素進行迭代操作時，Iterator模式非常適合使用。<br>
例如，當你需要瀏覽一個文件夾中的所有文件或遍歷一個數據庫中的所有記錄時，<br>
Iterator模式可以幫助你簡化代碼，使其更容易理解和維護。

---

## URL結構圖
![](https://drive.google.com/uc?id=1zgHN0yujkHH4gWyyN6SetCsPkN_pvTYO)
> 圖片來源：[Refactoring.Guru - Iterator](https://refactoring.guru/design-patterns/iterator)

---

## 實作成員
* Iterator
  * 定義一個統一的介面，以便迭代容器中的元素。
* ConcreteIterator
  * 實現Iterator介面，提供一種方法來迭代容器中的元素。
* Aggregate
  * 定義一個接口，用於創建一個Iterator對象。
* ConcreteAggregate
  * 實現Aggregate介面，創建一個ConcreteIterator對象來迭代容器中的元素。

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/design-pattern-iterator/blob/main/C%2B%2B/main.cpp) - Iterator Pattern (C++) 

---

## 參考資料
* [Wiki - Iterator Pattern](https://en.wikipedia.org/wiki/Iterator_pattern) <br>
* [Refactoring.Guru - Iterator](https://refactoring.guru/design-patterns/iterator) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
