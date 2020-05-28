const u8 MapAttrTable[]={
	/* 基本地形 */
	0x04,	// 00h 100 地面
	0x00,	// 01h 000 壁
	0x05,	// 02h 101 草
	0x05,	// 03h 101 長い草
	0x00,	// 04h 000 切れる木
	0x01,	// 05h 001 揺れる木
	0x05,	// 06h 101 深い砂地（砂漠）
	0x04,	// 07h 100 短い草
	0x05,	// 08h 101 地面エンカウント
	0x04,	// 09h 100 長い草（根本）
	0x04,	// 0ah 100 地面（自転車不可）
	0x05,	// 0bh 101 地面エンカウント（屋内）
	0x04,	// 0ch 100 岩地形
	0x00,	// 0dh 000 
	0x00,	// 0eh 000 
	0x04,	// 0fh 100 落とし穴
	/* 水上地形 */
	0x07,	// 10h 111 池、湖
	0x07,	// 11h 111 深い水域１
	0x07,	// 12h 111 深い水域２_1
	0x06,	// 13h 110 滝
	0x06,	// 14h 110 深い水域２_2 （映り込み、波紋あり）
	0x07,	// 15h 111 海
	0x04,	// 16h 100 水たまり
	0x04,	// 17h 100 浅瀬
	0x00,	// 18h 000 海と地上の境目（水面映り込みなし）
	0x06,	// 19h 110 浮上不可
	0x00,	// 1ah 000 池と地上の境目（水面映り込みあり）
	0x04,	// 1bh 100 浅瀬のマット（上向きで機能）
	0x04,	// 1ch 100 浅瀬のマット（上向きで機能）
	0x00,	// 1dh 000 
	0x00,	// 1eh 000 
	0x00,	// 1fh 000 
	/* 特殊地形 */
	0x04,	// 20h 100 氷上
	0x04,	// 21h 100 砂地
	0x07,	// 22h 111 海藻
	0x04,	// 23h 100 回復
	0x05,	// 24h 101 火山灰（草）
	0x05,	// 25h 101 火山灰（地面）
	0x04,	// 26h 100 氷（歩くとヒビが入る氷）
	0x04,	// 27h 100 氷（ヒビが入った氷）
	0x04,	// 28h 100 温泉
	0x04,	// 29h 100 間欠泉
	0x07,	// 2ah 111 海藻（浮上不可）
	0x04,	// 2bh 100 映り込み
	0x00,	// 2ch 000 
	0x00,	// 2dh 000 .
	0x00,	// 2eh 000 
	0x00,	// 2fh 000 
	/* 移動制御 */
	0x04,	// 30h 100 右方向へ移動不可
	0x04,	// 31h 100 左方向へ移動不可
	0x04,	// 32h 100 上方向へ移動不可
	0x04,	// 33h 100 下方向へ移動不可
	0x04,	// 34h 100 右・上方向へ移動不可
	0x04,	// 35h 100 左・上方向へ移動不可
	0x04,	// 36h 100 右・下方向へ移動不可
	0x04,	// 37h 100 左・下方向へ移動不可
	0x00,	// 38h 000 右方向へジャンプ移動
	0x00,	// 39h 000 左方向へジャンプ移動
	0x00,	// 3ah 000 上方向へジャンプ移動
	0x00,	// 3bh 000 下方向へジャンプ移動
	0x04,	// 3ch 100 右・上方向へジャンプ移動（連立）
	0x04,	// 3dh 100 左・上方向へジャンプ移動（連立）
	0x04,	// 3eh 100 右・下方向へジャンプ移動（連立）
	0x04,	// 3fh 100 左・下方向へジャンプ移動（連立）
	/* 陸特殊移動 */
	0x04,	// 40h 100 右に流される（陸上）
	0x04,	// 41h 100 左に流される（陸上）
	0x04,	// 42h 100 上に流される（陸上）
	0x04,	// 43h 100 下に流される（陸上）
	0x04,	// 44h 100 右に押し出される
	0x04,	// 45h 100 左に押し出される
	0x04,	// 46h 100 上に押し出される
	0x04,	// 47h 100 下に押し出される
	0x04,	// 48h 100 進行方向へ流れる
	0x04,	// 49h 100 上・下方向へ移動不可
	0x04,	// 4ah 100 右・左方向へ移動不可
	0x00,	// 4bh 000 
	0x00,	// 4ch 000 
	0x00,	// 4dh 000 
	0x00,	// 4eh 000 
	0x00,	// 4fh 000 
	/* 水特殊移動 */
	0x06,	// 50h 110 右に流される（海上）
	0x06,	// 51h 110 左に流される（海上）
	0x06,	// 52h 110 上に流される（海上）
	0x06,	// 53h 110 下に流される（海上）
	0x00,	// 54h 000 
	0x00,	// 55h 000 
	0x00,	// 56h 000 
	0x00,	// 57h 000 
	0x00,	// 58h 000 
	0x00,	// 59h 000 
	0x00,	// 5ah 000 
	0x00,	// 5bh 000 
	0x00,	// 5ch 000 
	0x00,	// 5dh 000 
	0x00,	// 5eh 000 　
	0x00,	// 5fh 000 
	/* 出入り口 */
	0x04,	// 60h 100 出入り口（一歩移動）下向き
	0x04,	// 61h 100 出入り口（そのまま）
	0x04,	// 62h 100 マット（右向きで機能）
	0x04,	// 63h 100 マット（左向きで機能）
	0x04,	// 64h 100 マット（上向きで機能）
	0x04,	// 65h 100 マット（下向きで機能）
	0x04,	// 66h 100 落とし穴
	0x04,	// 67h 100 ワープゾーン
	0x04,	// 68h 100 砂の穴
	0x04,	// 69h 100 ドア開閉（一歩移動）
	0x04,	// 6ah 100 エスカレーター（上へ）
	0x04,	// 6bh 100 エスカレーター（下へ）
	0x06,	// 6ch 110 「なみのり」出入り口（一歩移動）
	0x06,	// 6dh 110 「なみのり」マット（下向きで機能）
	0x04,	// 6eh 100 出入り口（一歩移動）上向き
	0x06,	// 6fh 110 水中マット（水中のみ使用可）
	/* 橋関連 */
	0x00,	// 70h 000 
	0x04,	// 71h 100 橋（高さ１）
	0x04,	// 72h 100 橋（高さ２）
	0x04,	// 73h 100 橋（高さ３）
	0x04,	// 74h 100 縦丸太（上側）：Ｂダッショ不可
	0x04,	// 75h 100 縦丸太（下側）：Ｂダッショ不可
	0x04,	// 76h 100 横丸太（左側）：Ｂダッショ不可
	0x04,	// 77h 100 横丸太（右側）：Ｂダッショ不可
	0x04,	// 78h 100 吊り橋：Ｂダッショ不可
	0x00,	// 79h 000 
	0x00,	// 7ah 000 　
	0x00,	// 7bh 000 
	0x00,	// 7ch 000 
	0x00,	// 7dh 000 
	0x00,	// 7eh 000 
	0x00,	// 7fh 000 
	/* 話しかけ１ */
	0x00,	// 80h 000 カウンター
	0x00,	// 81h 000 本棚
	0x00,	// 82h 000 自販機
	0x00,	// 83h 000 パソコン
	0x00,	// 84h 000 対戦表
	0x00,	// 85h 000 マップ
	0x00,	// 86h 000 ＴＶ
	0x00,	// 87h 000 キューブ置き場
	0x00,	// 88h 000 棚
	0x00,	// 89h 000 スロット場
	0x00,	// 8ah 000 ルーレット
	0x00,	// 8bh 000 入れないドア
	0x00,	// 8ch 000 合い言葉ドア
	0x00,	// 8dh 000 ダミードア
	0x00,	// 8eh 000 ノート
	0x00,	// 8fh 000 
	/* 秘密基地 */
	0x00,	// 90h 000 洞窟部屋のある壁
	0x00,	// 91h 000 洞窟部屋の入口
	0x00,	// 92h 000 岩の部屋のある岩壁
	0x00,	// 93h 000 岩の部屋の入口
	0x00,	// 94h 000 砂の部屋のある壁
	0x00,	// 95h 000 砂の部屋の入口
	0x00,	// 96h 000 木の部屋のある大きな木（左側）
	0x00,	// 97h 000 木の部屋の入口（左側）
	0x00,	// 98h 000 草の部屋のある草の塊
	0x00,	// 99h 000 草の部屋の入口
	0x00,	// 9ah 000 湿っぽい部屋の入口
	0x00,	// 9bh 000 湿っぽい部屋のある壁
	0x00,	// 9ch 000 木の部屋のある大きな木（右側）
	0x00,	// 9dh 000 木の部屋の入口（右側）
	0x00,	// 9eh 000 
	0x00,	// 9fh 000 
	/* タネ */
	0x00,	// a0h 000 タネを植える土
	0x00,	// a1h 000 
	0x00,	// a2h 000 
	0x00,	// a3h 000 
	0x00,	// a4h 000 
	0x00,	// a5h 000 
	0x00,	// a6h 000 
	0x00,	// a7h 000 
	0x00,	// a8h 000 
	0x00,	// a9h 000 
	0x00,	// aah 000 　
	0x00,	// abh 000 
	0x00,	// ach 000 
	0x00,	// adh 000 
	0x00,	// aeh 000 
	0x00,	// afh 000 
	/* 秘密基地１ */
	0x00,	// b0h 000 基地のパソコン
	0x00,	// b1h 000 相手基地のパソコン
	0x04,	// b2h 100 障害物
	0x04,	// b3h 100 お留守番キャラの位置
	0x00,	// b4h 000 普通のグッズ
	0x04,	// b5h 100 ぬいぐるみが置ける机や場所のグッズ
	0x00,	// b6h 000 反応するグッズ
	0x00,	// b7h 000 壁に掛かるグッズが置ける場所
	0x04,	// b8h 100 水風船＆泥団子
	0x04,	// b9h 100 配置制御
	0x04,	// bah 100 きらきらマット
	0x04,	// bbh 100 ジャンピングマット
	0x04,	// bch 100 くるっとマット
	0x04,	// bdh 100 音マット（計７種）
	0x04,	// beh 100 やぶれるドア
	0x00,	// bfh 000 砂の置物
	/* 秘密基地２ */
	0x04,	// c0h 100 上・下方向へ移動不可
	0x04,	// c1h 100 右・左方向へ移動不可
	0x04,	// c2h 100 地面の穴
	0x04,	// c3h 100 大きいぬいぐるみ配置
	0x04,	// c4h 100 メッセージがでるグッズ
	0x04,	// c5h 100 自宅のパソコン
	0x00,	// c6h 000 
	0x00,	// c7h 000 
	0x00,	// c8h 000 
	0x00,	// c9h 000 
	0x00,	// cah 000 　
	0x00,	// cbh 000 
	0x00,	// cch 000 
	0x00,	// cdh 000 
	0x00,	// ceh 000 
	0x00,	// cfh 000 
	/* 自転車用 */
	0x04,	// d0h 100 すべる坂
	0x04,	// d1h 100 飛び石
	0x04,	// d2h 100 壊れる床
	0x04,	// d3h 100 かにジャンプ用の縦板
	0x04,	// d4h 100 かにジャンプ用の横板
	0x04,	// d5h 100 一本橋（縦）
	0x04,	// d6h 100 一本橋（横）
	0x00,	// d7h 000 
	0x00,	// d8h 000 
	0x00,	// d9h 000 
	0x00,	// dah 000 　
	0x00,	// dbh 000 
	0x00,	// dch 000 
	0x00,	// ddh 000 
	0x00,	// deh 000 
	0x00,	// dfh 000 
	/* 話しかけ２ */
	0x00,	// e0h 000 小さい本棚
	0x00,	// e1h 000 大きな本棚１
	0x00,	// e2h 000 大きな本棚２
	0x00,	// e3h 000 つぼ
	0x00,	// e4h 000 ゴミ箱
	0x00,	// e5h 000 デパート＆ショップの棚
	0x00,	// e6h 000 設計図
	0x00,	// e7h 000 
	0x00,	// e8h 000 
	0x00,	// e9h 000 
	0x00,	// eah 000 　
	0x00,	// ebh 000 
	0x00,	// ech 000 
	0x00,	// edh 000 
	0x00,	// eeh 000 
	0x00,	// efh 000 
};

