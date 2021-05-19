#include <iostream>
#include <string>
using namespace std;

int N, M;
//链式前向星
struct msg
{
    string cont;
    int next;
} msgList[100000];
int first[10005] = {0};
bool vis[10005] = {0};
int msgSeq[100000];
int num = 0;

void addMsg(int id, string message)
{
    msgList[++num].cont = message;
    msgList[num].next = first[id];
    msgSeq[num] = id;
    first[id] = num;
}

void showMsg(int id)
{
    cout << id << endl;
    for (int i = first[id]; i != 0; i = msgList[i].next)
    {
        cout << msgList[i].cont << endl;
    }
}

int main()
{
    int id;
    string message;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> id >> message;
        int tmpBegin = 0;
        for (int j = 0; j < message.length(); j++)
        {
            if (message[j] == '/')                                          //经典==号
            {
                addMsg(id, message.substr(tmpBegin, j - tmpBegin));
                tmpBegin = j + 1;                                           //在条件里不是外
            }
        }
        addMsg(id, message.substr(tmpBegin, message.length() - tmpBegin));
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> id >> message;
        addMsg(id, message);
    }

    for(int i=num;i!=0;i--){
        int tmpId = msgSeq[i];
        if(!vis[tmpId]){
            showMsg(tmpId);
            vis[tmpId]=true;            //这个人已经输出过
        }
    }

    return 0;
}