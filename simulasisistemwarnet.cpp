#include<iostream>
#include<string>
using namespace std;

class Warnet {
    friend ostream &operator<<(ostream &out, Warnet &warnet);
    friend istream &operator>>(istream &in, Warnet &warnet);

public:
    void tampilanAwal() {
        cout << "==============================================\n";
        cout << "              Warnet Suka Suka                \n";
        cout << "==============================================\n";
    }

    void login() {
        cout << "\nSELAMAT DATANG DI WARNET SUKA-SUKA\n";
        cout << "Silahkan login terlebih dahulu:\n";
        cout << "Masukkan username : ";
        cin >> username;
        cout << "Masukkan password : ";
        cin >> password;

        if (username == "admin" && password == 1234) {
            roles = 1;
        } else {
            roles = 2;
        }
    }

    void admin() {
        cout << "\nAnda login sebagai ADMIN\n";
        //fitur admin di sini
    }

    void anggota() {
        cout << "\nAnda login sebagai MEMBER\n";
        //fitur anggota di sini
    }

    void cekRole() {
        if (roles == 1) {
            admin();
        } else {
            anggota();
        }
    }

private:
    int roles;        
    int password;
    string username;
};


ostream &operator<<(ostream &out, Warnet &warnet) {
    warnet.tampilanAwal();
    return out;
}


istream &operator>>(istream &in, Warnet &warnet) {
    warnet.login();
    warnet.cekRole();
    return in;
}

int main() {
	
    Warnet x;
    cout << x;   
    cin >> x;    
    return 0;
}
