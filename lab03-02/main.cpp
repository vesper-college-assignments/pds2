#include <iostream>
#include <map>

using namespace std;

int main(){

    long long int n, m;
    char l;


    while(cin >> n && n){

        map<int, int> pe_esquerdo;
        map<int, int> pe_direito;
        map<int, int>::iterator it;
        long long int numero_de_pares_corretos=0;

        for (long long int i = 0; i<n; i++){
            cin >> m >> l;

            if (l == 'E'){
                pe_esquerdo[m]++;
            }
        }

        for (it=pe_esquerdo.begin(); it!=pe_direito.end(); ++it) {
            if (pe_direito.count(it->first) > 0) {
                numero_de_pares_corretos += min(it->first, pe_direito[it->second]);
            }
        }

        cout << numero_de_pares_corretos;
        n--;
    }


}