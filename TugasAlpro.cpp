#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

void data()
{
    char pelayan[50], tamu[50], nomorhp[50];
    cout<<"Masukan Nama Pelayan\t: ";
    cin>>pelayan;
    cout<<"Masukan Nama Tamu\t: ";
    cin>>tamu;
    cout<<"Masukan Nomor HP Tamu\t: ";
    cin>>nomorhp;
    system("cls");

}

void pesanan()
{
    int Pilihan, Tambahan;
    double Porsi,Nasiputih,Total,Esteh,Anekajus,Total_tambahan,Pembayaran,Kembalian;

    cout<<"Selamat Datang di Resto Cuma 3 Rasa\n";
    cout<<"===================================\n";
    cout<<"\n";
    cout<<"Daftar Menu Makanan\n";
    cout<<"-------------------\n";
    cout<<"1.Paket Hemat\n";
    cout<<"  (Nasi + Ayam/Ikan + Es Teh)"<<endl;
    cout<<"2.Paket Mantap\n";
    cout<<"  (Nasi + Ayam/Bebek/Ikan + Aneka Jus + Lalapan + Tahu + Tempe)"<<endl;
    cout<<"3.Paket Jumbo\n";
    cout<<"  (Nasi + 2Ayam/Bebek/Ikan + Aneka Jus + Lalapan + Tahu/Tempe)"<<endl;
    cout<<"4.Double Jumbo\n";
    cout<<"  (2Nasi + Ayam + Bebek + Ikan + 2Aneka Jus + Lalapan + Tahu + Tempe)"<<endl;
    cout<<"5.Paket Family\n";
    cout<<"  (3nasi + 2Ayam + Bebek + Ikan + 3Aneka Jus + Lalapan + Tahu + Tempe)"<<endl;
    cout<<"-------------------------\n";
    cout<<"Masukkan Menu Makanan : ";cin>>Pilihan;
    cout<<"-------------------------\n";
    switch(Pilihan)
    {
        case 1:
            cout<<"Paket Hemat\n";
            cout<<"-----------\n";
            cout<<"Harga : Rp 15000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"-----------\n";
            cout<<"1.Nasi Putih\n";
            cout<<"2.Es Teh\n";
            cout<<"3.Aneka Jus\n";
            cout<<"Note : Tambahan Hanya Untuk 1 Item\n";
            cout<<"-----------\n";
            cout<<"Tambahan : ";cin>>Tambahan;
            switch(Tambahan)
            {
                case 1:
                    cout<<"Nasi Putih\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 2000\n";
                    cout<<"Porsi : ";cin>>Nasiputih;
                    Total_tambahan = 2000*Nasiputih;
                    break;
                case 2:
                    cout<<"Es Teh\n";
                    cout<<"------------\n";
                    cout<<"Harga : Rp 2000\n";
                    cout<<"Porsi : ";cin>>Esteh;
                    Total_tambahan = 2000*Esteh;
                    break;
                case 3:
                    cout<<"Aneka Jus\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 5000\n";
                    cout<<"Porsi : ";cin>>Anekajus;
                    Total_tambahan = 5000*Anekajus;
                    break;
                }
        cout<<"-----\n";
        Total=(15000*Porsi)+Total_tambahan;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"_______________________________________________\n";
        break;
        case 2:
            cout<<"Paket Mantap\n";
            cout<<"------------\n";
            cout<<"Harga : Rp 20000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"------------\n";
            cout<<"1.Nasi Putih\n";
            cout<<"2.Es Teh\n";
            cout<<"3.Aneka Jus\n";
            cout<<"Note : Tambahan Hanya Untuk 1 Item\n";
            cout<<"------------\n";
            cout<<"Tambahan : ";cin>>Tambahan;
            switch(Tambahan)
            {
                case 1:
                    cout<<"Nasi Putih\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 2000\n";
                    cout<<"Porsi : ";cin>>Nasiputih;
                    Total_tambahan = 2000*Nasiputih;
                    break;
                case 2:
                    cout<<"Es Teh\n";
                    cout<<"------------\n";
                    cout<<"Harga : Rp 2000\n" ;
                    cout<<"Porsi : ";cin>>Esteh;
                    Total_tambahan = 2000*Esteh;
                    break;
                case 3:
                    cout<<"Aneka Jus\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 5000\n";
                    cout<<"Porsi : ";cin>>Anekajus;
                    Total_tambahan = 2000*Anekajus;
            }
        cout<<"-----\n";
        Total=(15000*Porsi)+Total_tambahan;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"_______________________________________________\n";
        break;
        case 3:
            cout<<"Paket Jumbo\n";
            cout<<"-----------\n";
            cout<<"Harga : Rp 25000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"-----------\n";
            cout<<"1.Nasi Putih\n";
            cout<<"2.Es Teh\n";
            cout<<"3.Aneka Jus\n";
            cout<<"Note : Tambahan Hanya Untuk 1 Item\n";
            cout<<"-----------\n";
            cout<<"Tambahan : ";cin>>Tambahan;
            switch(Tambahan)
            {
                case 1:
                    cout<<"Nasi Putih\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 2000\n";
                    cout<<"Porsi : ";cin>>Nasiputih;
                    Total_tambahan = 2000*Nasiputih;
                    break;
                case 2:
                    cout<<"Es Teh\n";
                    cout<<"------------\n";
                    cout<<"Harga : Rp 2000\n";
                    cout<<"Porsi : ";cin>>Esteh;
                    Total_tambahan = 2000*Esteh;
                    break;
                case 3:
                    cout<<"Aneka Jus\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 5000\n";
                    cout<<"Porsi : ";cin>>Anekajus;
                    Total_tambahan = 2000*Anekajus;
            }
        cout<<"-----\n";
        Total=(15000*Porsi)+Total_tambahan;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"_______________________________________________\n";
        break;
        case 4:
            cout<<"Double Jumbo\n";
            cout<<"------------\n";
            cout<<"Harga : Rp 40000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"------------\n";
            cout<<"1.Nasi Putih\n";
            cout<<"2.Es Teh\n";
            cout<<"3.Aneka Jus\n";
            cout<<"Note : Tambahan Hanya Untuk 1 Item\n";
            cout<<"------------\n";
            cout<<"Tambahan : ";cin>>Tambahan;
            switch(Tambahan)
            {
                case 1:
                    cout<<"Nasi Putih\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 2000\n";
                    cout<<"Porsi : ";cin>>Nasiputih;
                    Total_tambahan = 2000*Nasiputih;
                    break;
                case 2:
                    cout<<"Es Teh\n";
                    cout<<"------------\n";
                    cout<<"Harga : Rp 2000\n";
                    cout<<"Porsi : ";cin>>Esteh;
                    Total_tambahan = 2000*Esteh;
                    break;
                case 3:
                    cout<<"Aneka Jus\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp 5000\n";
                    cout<<"Porsi : ";cin>>Anekajus;
                    Total_tambahan = 2000*Anekajus;
            }
        cout<<"-----\n";
        Total=(15000*Porsi)+Total_tambahan;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"_______________________________________________\n";
        break;
        case 5:
            cout<<"Paket Family\n";
            cout<<"------------\n";
            cout<<"Harga : Rp 60000\n";
            cout<<"Porsi : ";cin>>Porsi;
            cout<<"------------\n";
            cout<<"1.Nasi Putih\n";
            cout<<"2.Es Teh\n";
            cout<<"3.Aneka Jus\n";
            cout<<"Note : Tambahan Hanya Untuk 1 Item\n";
            cout<<"------------\n";
            cout<<"Tambahan : ";cin>>Tambahan;
            switch(Tambahan)
            {
                case 1:
                    cout<<"Nasi Putih\n";
                    cout<<"----------\n";
                    cout<<"Harga : Rp 2000\n";
                    cout<<"Porsi : ";cin>>Nasiputih;
                    Total_tambahan = 2000*Nasiputih;
                    break;
                case 2:
                    cout<<"Es Teh\n";
                    cout<<"------------\n";
                    cout<<"Harga : Rp2.000,00\n";
                    cout<<"Porsi : ";cin>>Esteh;
                    Total_tambahan = 2000*Esteh;
                    break;
                case 3:
                    cout<<"Aneka Jus\n";
                    cout<<"---------\n";
                    cout<<"Harga : Rp5.000,00";
                    cout<<"Porsi : ";cin>>Anekajus;
                    Total_tambahan = 2000*Anekajus;
            }
        cout<<"-----\n";
        Total=(15000*Porsi)+Total_tambahan;
        cout<<"Total yang Harus Dibayar = Rp "<<Total<<endl;
        cout<<"Pembayaran = Rp ";cin>>Pembayaran;
        Kembalian=Pembayaran-Total;
        cout<<"Kembalian = Rp "<<Kembalian<<endl;
        cout<<"Terima Kasih Telah Mengunjungi Rumah Makan Kami\n";
        cout<<"_______________________________________________\n";
        break;
        default :
            cout<<"Anda Hanya Bisa Memilih Paket Yang Sudah Tersedia. (Pilih 1-5)!!!\n";
            break;
    }
}

main()
{
    data();
    char ulang;
    int a=1;
    do
    {
        pesanan();
        cout<<"\n Sudah Selesai Memesan? [Y/N] = ";
        cin>>ulang;
        a++;
        system("cls");
        getch();
    }
    while((ulang=='N') || (ulang=='n'));
    system("cls");
}
