<?php 
  require_once 'Nomor 2a.php';
?>

<!DOCTYPE html>
<html lang="id">
    <head>
        <title>Praktikum 3</title>
        <link rel="stylesheet" href="no2.css">
    </head>

    <body>
        <div class="table1">
        <table border="1" width="50%">
                <tr>
                    <td>No</td>
                    <td>Object</td>
                    <td>Jumlah Roda</td>
                    <td>Warna</td>
                    <td>Bahan Bakar</td>
                    <td>Kapasitas Mesin</td>
                    <td>Muatan Maksimal</td>
                    <td>Tarif Awal</td>
                    <td>Tarif Per KM</td>
                    <td>Jumlah Sadel</td>
                    <td>Jumlah Gir</td>
                </tr>
                <tr>
                    <td>1</td>
                    <td>Truk 1</td>
                    <td><?= $truk1->getjmlRoda(); ?></td>
                    <td><?= $truk1->getWarna(); ?></td>
                    <td><?= $truk1->getBahanBakar(); ?></td>
                    <td><?= $truk1->getKapasitasMesin(); ?></td>
                    <td><?= $truk1->getMuatanMaks(); ?></td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                </tr>
                <tr>
                    <td>2</td>
                    <td>Truk 2</td>
                    <td><?= $truk2->getjmlRoda(); ?></td>
                    <td><?= $truk2->getWarna(); ?></td>
                    <td><?= $truk2->getBahanBakar(); ?></td>
                    <td><?= $truk2->getKapasitasMesin(); ?></td>
                    <td><?= $truk2->getMuatanMaks(); ?></td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                </tr>
                <tr>
                    <td>3</td>
                    <td>Taksi 1</td>
                    <td><?= $taksi1->getjmlRoda(); ?></td>
                    <td><?= $taksi1->getWarna(); ?></td>
                    <td><?= $taksi1->getBahanBakar(); ?></td>
                    <td><?= $taksi1->getKapasitasMesin(); ?></td>
                    <td>-</td>
                    <td><?= $taksi1->getTarifAwal(); ?></td>
                    <td><?= $taksi1->getTarifPerKm(); ?></td>
                    <td>-</td>
                    <td>-</td>
                </tr>
                <tr>
                    <td>4</td>
                    <td>Taksi 2</td>
                    <td><?= $taksi2->getjmlRoda(); ?></td>
                    <td><?= $taksi2->getWarna(); ?></td>
                    <td><?= $taksi2->getBahanBakar(); ?></td>
                    <td><?= $taksi2->getKapasitasMesin(); ?></td>
                    <td>-</td>
                    <td><?= $taksi2->getTarifAwal(); ?></td>
                    <td><?= $taksi2->getTarifPerKm(); ?></td>
                    <td>-</td>
                    <td>-</td>
                </tr>
                <tr>
                    <td>5</td>
                    <td>Sepeda 1</td>
                    <td><?= $sepeda1->getjmlRoda(); ?></td>
                    <td><?= $sepeda1->getWarna(); ?></td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                    <td><?= $sepeda1->getJmlSadel(); ?></td>
                    <td><?= $sepeda1->getJmlGir(); ?></td>
                </tr>
                <tr>
                    <td>6</td>
                    <td>Sepeda 2</td>
                    <td><?= $sepeda2->getjmlRoda(); ?></td>
                    <td><?= $sepeda2->getWarna(); ?></td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                    <td>-</td>
                    <td><?= $sepeda2->getJmlSadel(); ?></td>
                    <td><?= $sepeda2->getJmlGir(); ?></td>
                </tr>
        </table>
        </div>
    </body>
</html>