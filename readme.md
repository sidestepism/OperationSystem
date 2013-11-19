## OperationSystem

EEIC 3年次のオペレーションシステム演習。

- <http://www.logos.t.u-tokyo.ac.jp/~tau/lecture/operating_systems/>
- <http://www.logos.t.u-tokyo.ac.jp/~tau/lecture/operating_systems/gen/ex/para_basic/>

## 演習

- 演習0
    - global, static 変数は共通。local 変数はスレッドごとに異なる。スレッド間の受け渡しは異なる論理アドレス
    - 結果は以下の通り

        thread id = 4463185920
        thread id = 4463722496
        thread id = 4465332224
        thread id = 4464795648
        thread id = 4464259072
        g = 986b044
        g = 986b044
        g = 986b044
        g = 986b044
        g = 986b044
        s = 986b040
        s = 986b040
        s = 986b040
        s = 986b040
        s = 986b040
        x = a06cedc
        x = a0efedc
        x = a278edc
        x = a1f5edc
        x = a172edc
        y = 56395868
        y = 56395878
        y = 563958a8
        y = 56395898
        y = 56395888
        OK: elapsed time: 0.000406

- 演習1, 2
    - 30 threads, 100K increment
    - pthread_mutex_lock: 7.197097 sec
    - __sync_fetch_and_add: 0.073962 sec
- 演習3
    - 1.

        Assertion failed: (x != -1), function thread_func1, file pthread_queue.c, line 91.
        zsh: abort      ./a.out