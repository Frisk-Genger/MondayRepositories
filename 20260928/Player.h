#pragma once
class Player
{
private:
	int total;
public:
	//コンストラクタ
	Player();
	//カードを追加
	void AddCard(int Card);
	//合計点を取得する
	int GetTotal();
	//現在の情報を表示
	void ShowStatus();

};
