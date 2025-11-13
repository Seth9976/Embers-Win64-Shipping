// 函数: sub_140908f90
// 地址: 0x140908f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = 0x3ff0000000000000
int32_t result = 1
double zmm5 = 2.0
uint128_t zmm4 = zmm1
double zmm2 = zmm1.q
double zmm0 = zmm1.q
double zmm3

do
    zmm4.q = zmm4.q f* 0x3fe0000000000000
    zmm3 = zmm0
    
    if (result != 0)
        zmm2 = zmm2 * zmm5
    
    result ^= 1
    zmm0 = zmm4.q f+ zmm1.q
    
    if (zmm0 f== zmm1.q)
        break
while (zmm0 != zmm3)
zmm2 = zmm2 f+ zmm1.q
data_143cecae8 = zmm4.q
data_143cecb58 = 1
zmm1.q = zmm4.q f* 16.0
data_143cecae0 = zmm2
zmm2 = 3.0
zmm1.q = zmm1.q f+ zmm2
zmm1.q = zmm1.q f* zmm4.q
data_143cecaf0 = (zmm4.q * 8.0 + zmm2) f* zmm4.q
data_143cecaf8 = zmm1.q
zmm1.q = zmm4.q f* 64.0
zmm1.q = zmm1.q f+ 9.0
zmm1.q = zmm1.q f* zmm4.q
data_143cecb00 = (zmm4.q * 12.0 + zmm5) f* zmm4.q
zmm1.q = zmm1.q f* zmm4.q
data_143cecb08 = zmm1.q
zmm1.q = zmm4.q f* 28.0
zmm1.q = zmm1.q f+ zmm2
data_143cecb10 = (zmm4.q * 56.0 + 7.0) f* zmm4.q
zmm1.q = zmm1.q f* zmm4.q
data_143cecb18 = zmm1.q
zmm1.q = zmm4.q f* 48.0
zmm1.q = zmm1.q f+ 4.0
zmm1.q = zmm1.q f* zmm4.q
data_143cecb20 = (zmm4.q * 288.0 + 26.0) f* zmm4.q f* zmm4.q
data_143cecb30 = zmm1.q
zmm1.q = zmm4.q f* 72.0
zmm1.q = zmm1.q f+ 5.0
zmm1.q = zmm1.q f* zmm4.q
data_143cecb28 = (zmm4.q * 96.0 + 10.0) f* zmm4.q
data_143cecb48 = zmm1.q
data_143cecb38 = (zmm4.q * 576.0 + 44.0) f* zmm4.q f* zmm4.q
data_143cecb40 = (zmm4.q * 224.0 + 16.0) f* zmm4.q
data_143cecb50 = (zmm4.q * 1408.0 + 71.0) f* zmm4.q f* zmm4.q
return result
