【このフォルダについて】

このフォルダは Windows 側の実体ディレクトリ：
C:\c_projects

このフォルダは VirtualBox を通して Arch Linux から
「shared」という名前で参照されている。

Arch 側でのパス：
/mnt/shared

つまり：

/mnt/shared ＝ C:\c_projects

完全に同一のフォルダであり、
どちらから操作しても同じ内容が変更される。


【目的】

・VM（Arch）でコードを書く
・Windows側に即保存される
・VMが壊れてもコードは消えない


【重要ルール】

・コードは必ずこのフォルダ内で作業する
・VM内（/homeなど）に保存しない
・このフォルダが「唯一の正本」


【Gitについて】

・Git操作は基本 Windows 側で行う
・このフォルダがそのままリポジトリになる


【構造まとめ】

[Arch]
  /mnt/shared ← 作業場所

[Windows]
  C:\c_projects ← 実体（最重要）

[GitHub]
  バックアップ


【トラブル時チェック】

・/mnt/shared にアクセスできるか
・Windowsにファイルが反映されるか
・権限エラーが出ていないか


【結論】

このフォルダ＝作業場兼保存場所
ここ以外で作業するな