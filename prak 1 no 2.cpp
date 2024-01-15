#include <iostream>

using namespace std;

int main()
{
	int jumlah_array = 5;
		
	string kode[jumlah_array] = {"001", "002", "003", "004", "005"};
	string nama_barang [jumlah_array] = {"penghapus", "pensil", "buku", "rautan", "penggaris"};
	int jumlah_barang[jumlah_array] = {4, 3, 2, 3, 5};
	int harga_barang[jumlah_array] = {1000, 1500, 2000, 1000, 500};
	
	int total_barang = 0;
	int total_harga = 0;
	cout << "kode\tnama\tjumlah\tharga\ttotal\n" <<endl;
	
	for (int i = 0; i < jumlah_array; i++) 
	{
		int total = jumlah_barang[i] * harga_barang[i];
		
		cout << kode[i] << "\t" << nama_barang[i] 
		<< "\t" << jumlah_barang[i] 
		<< "\t" << harga_barang[i] << endl;
		
		total_barang += jumlah_barang[i];
		total_harga += total;
	}
	
	cout << "\ntotal_barang: " << total_barang << endl;
	cout << "\ntotal harga: " << total_harga  << endl;
	
	return 0;
}
