#include <stdio.h>
#include <stdlib.h>

#define DATA_NUM 5

typedef struct p_tag{  /* タグ */
	int dat ;            /* データ */
	struct p_tag *next ; /* 自分自身の型へのポインタ変数 */
} dat_t ;              /* データ型の定義 */


/* 新データの作成 */
dat_t* makeNewNode(int aDat) {
	dat_t *pNewData;

	/*** dat_t 型のメモリ領域確保 ***/
	pNewData = (dat_t *) malloc (sizeof(dat_t)) ;

	/*** データ設定 ***/
	pNewData->dat = aDat;
	pNewData->next = NULL ;

	return pNewData ;
} ;


/* メイン関数 */
int main(void) {
	int data[DATA_NUM] = {4,1,5,2,3} ;  /* テストデータ */
	int i ;
	dat_t *pTop = NULL ;  /* リストの先頭 */
	dat_t *pNow, *pNew ;
	int nowDat ;

	/* テストデータの数だけループ */
	for (i = 0 ; i < DATA_NUM ; i++) {

		// データの取得
		nowDat = data[i] ;
		// ノードの生成
		pNew = makeNewNode(nowDat) ;

		if ( pTop == NULL ) {
			/* リストが空の場合 */
			/* 最初のデータをリストに入れる */
			pTop = pNew ;
		} else if ( nowDat < pTop->dat ) {
			/* 今回のデータがリストの先頭のより小さい場合 */
			/* 今回のデータを先頭データにする */
			pNew->next = pTop ;
			pTop = pNew ;
		} else {
			/* データの挿入位置を探す */
			/*  挿入位置がない場合は，末尾に追加 */
			/*  挿入位置が見つかったら，挿入 */
			// 作業用ポインタの初期化
			pNow = pTop ;
			// リストをたどり挿入ポイントを探す
			while ( pNow != NULL ) {
				// 挿入すべきところがあったら
				if ( (pNow->dat <= nowDat) && (nowDat < pNow->next->dat) ) {
					// 挿入処理
					pNew->next = pNow->next ;
					pNow->next = pNew ;
					// 探索終了
					break ;
				} ;
				// 次のデータへ
				pNow->next = pNow ;
			} ;
		} ;
	} ;

	  //  リストの表示
	pNow = pTop ;
	while (pNow != NULL) {
		printf("%d\n", pNow->dat) ;
		pNow = pNow->next ;
	} ;


} ;
