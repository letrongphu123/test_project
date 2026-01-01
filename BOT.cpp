#include <iostream>

using namespace std;

void timdoan(int m [], int n){
    int tong_loinhuan_that = m[0]; // loi nhuan lon nhat 
    int loinhuan = m[0]; // loi nhuan hien tai
    int chiso_dau = 0; // diem bat dau
    int chiso_cuoi = 0; // diem ket thuc
    int tam_dau = 0; // bien luu tam cho gia tri bat dau

    // duyet qua mang
    for(int i = 1; i < n ; i++){
        // neu loi nhuan hien tai + gia tri tiep theo cua mang nho hon gia tri đó thì:
        if(loinhuan + m[i] < m[i]){
            loinhuan = m[i]; // cap nhat lai loi nhuan hien tai la m[i]
            tam_dau = i; // bien tam cua diem bat dau la i;
        }

        // neu lon hon thi cong don vao loi nhuan
        else{
            loinhuan += m[i];
            }

        // so sanh loi nhuan hien tai voi loi nhuan lon nhat 
        if(loinhuan > tong_loinhuan_that){
            tong_loinhuan_that = loinhuan; // cap nhat lai gia tri cua loi nhuan lon nhat
            chiso_dau = tam_dau; 
            chiso_cuoi = i; 
        }    
    }
    cout << chiso_dau + 1 << " " << chiso_cuoi + 1 << " " << tong_loinhuan_that;
}

int main(){
    int n;
    cout << "nhap vao so phan tu cua mang" << endl;
    cin >> n;
    cout << "nhap vao cac phan tu cua mang" << endl;
    int* a = new int[n];
    // nhap tung phan tu cua mang a
    for(int c = 0; c < n; c++){
        cin >> a[c];
    }
    // goi ham tim doan toi uu nhat
    timdoan(a, n);
    system("pause");
    return 0;
}
