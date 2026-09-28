#pragma once

//====================
//ゲーム設定
//====================

const int TARGET_SCORE = 21;
//バースト値
const int BURST_SCORE = 22;
//CPUが自動でカード引ける上限
const int CPU_DROW_LIMIT = 11;

//====================
//カード設定
//====================

//カードの最小値
const int CARD_MIN = 1;
//カードの最大値
const int CARD_MAX = 11;
//同じ数字のカード枚数
const int CARD_DUPLICATE_COUNT = 4;
//カード枚数
const int CARD_TOTAL = 44;

//====================
//初期カード
//====================

//初期のカード枚数
const int START_CARD = 2;

//====================
//プレイヤー入力
//====================

//カードを引く
const int INPUT_YES = 0;
//カードを引かない
const int INPUT_NO = 1;
