# C言語

---

## コンパイル

.cのファイルはファイルそのものを実行することはできない．<br>
コンパイルすることで「単体では実行できないファイル」から「単体で実行可能なファイル」に変換される．
具体的は，<br>
コンパイルするコマンド`gcc`もしくは`cc`をすることでコンパイルできる．（この2つのコマンドの違いは現段階では知らない）

```c
#include <stdio.h>
int main(void){
  printf("hello");
}
```

```sh
$ gcc hello.c
$ ls
hello.c
a.out
```

## 文字列の表示
### 説明書の取り込み(擬似命令)

```c
#include <stdio.h> // これがなにを意味するのか？
~
~
~
```

`#include <stdio.h>`の擬似命令という処理を行っている.
#### 擬似命令とは，
> プログラムではないコードのこと.<br> #includeはprintf関数などの準備をする命令なので、この命令は機械語に翻訳されず、その前段階で処理されます。

printfの説明書は，studio.hと言うファイル

### エスケープシーケンス
`\n` 改行
`\t` tab

## 数値の表示
### 文字列と数値

数字と数値の違い<br>
数字：あくまでも人間から見た数値と同じ文字を持つ文字列<br>
数値：数を表現するもの．計算に使うことができる<br>

### 数値を表示する
**出力変換指定子**

`%d`指定子<br>
整数値を文字列に変換する．
```c
printf("%d",100);
printf("円\n");
```

### 文字列との組み合わせ表示
```c
printf("%d円\n",100);
```
### 複数の数値の表示
期待する出力: "100+200=300"
```c
printf("%d+",100);
printf("%d=",200);
printf("%d\n",300);
```
```c
printf("%d+%d=%d\n",100,200,300);
```

## 数値の種類
- 整数
  - 自然数，0，負の数
  - 書式と種類
    - 数字  (10進数)
    - 0数字 ( 8進数)
    - 0x数字(16進数)
- 実数
  - 整数，少数値
  - 余りの概念がない

**先頭に0をつけない数**は、10進数として扱う<br>
**先頭に0をつけた数**は、8進数として扱う<br>
意外に良く使われるのが**16進数**、これは**先頭に0x** をつけて表します。<br>

### 浮動小数点方式
> 実数値を、数値の並び(仮数部)と、小数点の位置(指数部)で表す方法。 仮数部に、10の何乗などの値を掛け算して実数を表現する。 巨大な数から極小の数まで扱え便利だが、計算は遅い。

## 実数の計算
## 変数の種類
### データ型
| 型名   | 数値の種類 |
| ----   | ---------- |
| int    | 整数       |
| double | 実数       |

