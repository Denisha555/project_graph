#include "header.h"
#include <iostream>

using namespace std;

int main() {
    int V = 5;
    int baru1, baru2;
    char pilihan;
    int cari, tujuan;

    Graph* graph = createGraph(V);

    do {
    	cout << "-------------------"<<endl;
        cout << "        MENU" << endl;
        cout << "-------------------" << endl;
        cout << "1. Input" << endl;
        cout << "2. Cek edge" << endl;
        cout << "3. Exit" << endl; 
        cout << "-------------------"<<endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case '1': 
                for (int i = 0; i < V; ++i) {
                    cout << "Masukkan vertex: ";
                    cin >> baru1;
                    cout << "Masukkan vertex tujuan: ";
                    cin >> baru2;
                    addEdge(graph, baru1, baru2);
                }
                printGraph(graph);
                break;
            case '2':
                cout << "Masukkan vertex yang ingin dicari: ";
                cin >> cari;
                cout << "Masukkan vertex tujuan: ";
                cin >> tujuan;
                if (hasEdge(graph, cari, tujuan)) {
                    cout << "Edge dari " << cari << " ke " << tujuan <<" ada "<< endl;
                } else {
                    cout << "Edge dari  " << cari << " ke " << tujuan <<" tidak ada "<< endl;
                }
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi." << endl;
                break;
        }
    } while (pilihan!='3');
    return 0;
}
