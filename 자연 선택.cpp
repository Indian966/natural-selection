#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 60
#define true 1
#define false 0

char Run[];//��
char Data[M];//������
char Buffer[4];//����������ġ
char Mem[4];//�޸�

void naturalSelection() {
	int i;
	int n = 0;
	srand((int)time(NULL));//�����ϰ� ������ 100���� ����
	for (i = 0; i < M; i++) {
		Data[i] = rand() % (M) + 0;
	}
	int f;//������ ���ȣ
	int dataC;//���° �������ΰ�
	do {
		Mem[f] = Data[dataC];
	} while (Mem[f] == true);
	
	int com;//���� �����ϴ� ����
	com = Mem[Compare()];
	Run[n] = com;
	n++;
	
}

int FreezeBuffer(int f) {//���� �󸮱�,f�� ���° �����ΰ�
	Buffer[f] = false;
}

int Compare() {
	int winner;//���� ���� ���� ã�� ����
	int i;
	for (i = 0; i < 4; i++) {
		if (Mem[i] >= Mem[i+1]) {
			winner = i;
		}else winner = i+1;
	}//���ؼ� winner�� �������� �ִ� ���� ��ȣ�� ���
	return winner;
}

int InsertRun() {//�����Ҷ� �޸𸮿� �����͸� ä��
	int i;
	for (i = 0; i < 5; i++) {
		Mem[i] = Data[i];
	}
}




int main(void) {
	InsertRun();
	naturalSelection();

}