#include <iostream>
#include <algorithm> //sort �Լ� Ȱ��
using namespace std;

int main(){
    int N, M, K, count = 0, total = 0;
    cin >> N >> M >> K;

    int* number = new int[N]; // �����Ҵ�

    for(int i = 0; i < N; i++){
        cin >> number[i];
    }

    sort(number, number + N); // �⺻������ �������� sort

    for(int i = 0; i < M; i++){ 
        if(count != K){
            total += number[N - 1]; // ���� ū �� ���ϱ�
            count++;
        }
        else{
            total += number[N - 2]; // �� ��°�� ū �� ���ϱ�
            count = 0;
        }
    }

    cout << total << "\n";

    return 0;
}