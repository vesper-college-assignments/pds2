#include <iostream>
#include <map>

using namespace std;

int main(){

    long long int n, size;
    char l;

    cin >> n;
    map<int, int> pe_esquerdo;
    map<int, int> pe_direito;
    long long int numero_de_pares_corretos=0;

    while(n){
        cin >> size >> l;
        cout << size<< " " << l <<endl;
        if (l == 'E'){
            if (pe_direito.find(size) == pe_direito.end()){
                cout << "Ainda não tem esse tamanho" <<endl;
                pe_esquerdo.insert(pair<int, int>(size, 1));
            }
            else if (pe_direito[size]!=0){
                cout << "Achei um par pra ele" <<endl;
                pe_direito[size]--;
                numero_de_pares_corretos++;
            }
            else{
                cout << "não achei par pra ele" <<endl;
                pe_esquerdo[size]++;
            }
        }
        else if (l == 'D'){
            if (pe_esquerdo.find(size) == pe_esquerdo.end()){
                cout << "Ainda não tem esse tamanho" <<endl;

                pe_direito.insert(pair<int, int>(size, 1));
            }
            else if (pe_esquerdo[size]!=0){
                cout << "Achei um par pra ele" <<endl;

                pe_esquerdo[size]--;
                numero_de_pares_corretos++;
            }
            else{
                cout << "não achei par pra ele" <<endl;
                pe_direito[size]++;
            }
        }

//        map<int, bool>::iterator it;
//        for (it=pe_esquerdo.begin(); it!=pe_direito.end(); ++it) {
//            if (pe_direito.count(it->first) > 0) {
//                numero_de_pares_corretos += min(it->first, pe_direito[it->second]);
//            }
//        }
        n--;
    }
    cout << numero_de_pares_corretos <<  endl;


}