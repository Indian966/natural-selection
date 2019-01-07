#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 60
#define true 1
#define false 0

char Run[];//런
char Data[M];//데이터
char Buffer[4];//보조저장장치
char Mem[4];//메모리

void naturalSelection() {
	int i;
	int n = 0;
	srand((int)time(NULL));//랜덤하게 데이터 100개를 저장
	for (i = 0; i < M; i++) {
		Data[i] = rand() % (M) + 0;
	}
	int f;//버퍼의 방번호
	int dataC;//몇번째 데이터인가
	do {
		Mem[f] = Data[dataC];
	} while (Mem[f] == true);
	
	int com;//런에 저장하는 숫자
	com = Mem[Compare()];
	Run[n] = com;
	n++;
	
}

int FreezeBuffer(int f) {//버퍼 얼리기,f는 몇번째 버퍼인가
	Buffer[f] = false;
}

int Compare() {
	int winner;//제일 작은 수를 찾는 변수
	int i;
	for (i = 0; i < 4; i++) {
		if (Mem[i] >= Mem[i+1]) {
			winner = i;
		}else winner = i+1;
	}//비교해서 winner에 작은수가 있는 방의 번호가 담김
	return winner;
}

int InsertRun() {//시작할때 메모리에 데이터를 채움
	int i;
	for (i = 0; i < 5; i++) {
		Mem[i] = Data[i];
	}
}




int main(void) {
	InsertRun();
	naturalSelection();

}