// ITP_1_10_C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    while (1) {
        int n{ 0 };
        cin >> n;
        if (n == 0) break;
        
        double sum{ 0 };
        vector<double> vScore;
        for (int i = 0; i < n; i++) {
            double s{ 0 };
            cin >> s;
            vScore.push_back(s);
            sum += s;
        }
        double avg = sum / n;
        double work{ 0 };

        for (auto e : vScore) {
            work += (e - avg) * (e - avg);
        }
        printf("%.8lf\n", sqrt(work / n));
    }
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
