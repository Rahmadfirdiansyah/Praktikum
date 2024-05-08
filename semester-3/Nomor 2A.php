<?php 

    class Kendaraan {
        protected $jmlRoda, $warna;
            function setjmlRoda($jmlRoda)   {
                $this->jmlRoda = $jmlRoda;
            }
        public function getjmlRoda()    {
                return $this->jmlRoda;
            }
        public function setWarna($warna)    {
                $this->warna = $warna;
            }
        public function getWarna()  {
                return $this->warna;
            }
    }

    class Mobil extends Kendaraan   {
        protected $bahanBakar, $kapasitasMesin;
        public function setBahanBakar($bahanBakar)  {
                $this->bahanBakar = $bahanBakar;
            }
        public function getBahanBakar() {
                return $this->bahanBakar;
            }
        public function setKapasitasMesin($kapasitasMesin)  {
                $this->kapasitasMesin = $kapasitasMesin;
            }
        public function getKapasitasMesin()    {
                return $this->kapasitasMesin;
            }
    }

    class Sepeda extends Kendaraan  {
        protected $jmlSadel, $jmlGir;
        public function setJmlSadel($jmlSadel)  {
                $this->jmlSadel = $jmlSadel;
            }
        public function getJmlSadel()   {
                return $this->jmlSadel;
            }
        public function setJmlGir($jmlGir)  {
                $this->jmlGir = $jmlGir;
            }
        public function getJmlGir() {
                return $this->jmlGir;
            }
    }

    class Truk extends Mobil    {
        private $muatanMaks;
        public function setMuatanMaks($muatanMaks)  {
                $this->muatanMaks = $muatanMaks;
            }
        public function getMuatanMaks() {
                return $this->muatanMaks;
            }
    }

    class Taksi extends Mobil   {
        private $tarifAwal, $tarifperKm;
        public function setTarifAwal($tarifAwal)    {
                $this->tarifAwal = $tarifAwal;
            }
        public function getTarifAwal()  {
                return $this->tarifAwal;
            }
        public function setTarifPerKm($tarifperKm)  {
                $this->tarifperKm = $tarifperKm;
            }
        public function getTarifPerKm() {
                return $this->tarifperKm;
            }
    }

        $truk1 = new Truk;
        $truk1->setjmlRoda(4);
        $truk1->setWarna('Kuning');
        $truk1->setBahanBakar('Solar');
        $truk1->setKapasitasMesin(1500);
        $truk1->setMuatanMaks(1000);

        $truk2 = new Truk;
        $truk2->setjmlRoda(6);
        $truk2->setWarna('Merah');
        $truk2->setBahanBakar('Solar');
        $truk2->setKapasitasMesin(2000);
        $truk2->setMuatanMaks(5000);

        $taksi1 = new Taksi;
        $taksi1->setjmlRoda(4);
        $taksi1->setWarna('Oranye');
        $taksi1->setBahanBakar('Bensin');
        $taksi1->setKapasitasMesin(1500);
        $taksi1->setTarifAwal(10000);
        $taksi1->setTarifPerKm(5000);

        $taksi2 = new Taksi;
        $taksi2->setjmlRoda(4);
        $taksi2->setWarna('Biru');
        $taksi2->setBahanBakar('Bensin');
        $taksi2->setKapasitasMesin(1300);
        $taksi2->setTarifAwal(7000);
        $taksi2->setTarifPerKm(3500);

        $sepeda1 = new Sepeda;
        $sepeda1->setjmlRoda(3);
        $sepeda1->setWarna('Hitam');
        $sepeda1->setJmlSadel(1);
        $sepeda1->setJmlGir(2);

        $sepeda2 = new Sepeda;
        $sepeda2->setjmlRoda(2);
        $sepeda2->setWarna('Putih');
        $sepeda2->setJmlSadel(2);
        $sepeda2->setJmlGir(5);

?>