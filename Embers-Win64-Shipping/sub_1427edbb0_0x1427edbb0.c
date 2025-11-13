// 函数: sub_1427edbb0
// 地址: 0x1427edbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm5[0x4] = *(arg3 + 4)
uint32_t zmm4[0x4] = *arg3
zmm5[0] = zmm5[0] f* arg2[1]
zmm4[0] = zmm4[0] f* *arg2
int128_t zmm6 = *(arg3 + 8)
zmm4[0] = zmm4[0] f+ zmm5[0]
int128_t zmm1
zmm1.d = zmm6.d f* arg2[2]
zmm4[0] = zmm4[0] f+ zmm1.d
uint32_t var_58[0x4]
uint32_t zmm3[0x4]

if (__andps_xmmxud_memxud(zmm4, data_142d3f770)[0] f< 9.99999997e-07f)
    var_58 = data_142d3f660
else
    zmm3 = arg2[3]
    zmm4[0] = zmm4[0] f* zmm4[0]
    zmm6.d = zmm6.d f* zmm4[0]
    zmm5[0] = zmm5[0] f* zmm4[0]
    zmm4[0] = zmm4[0] f* zmm4[0]
    zmm1.d = zmm6.d f* zmm6.d
    zmm5[0] = zmm5[0] f* zmm5[0]
    zmm5[0] = zmm5[0] f+ zmm4[0]
    zmm3[0] = zmm3[0] f* zmm3[0]
    zmm5[0] = zmm5[0] f+ zmm1.d
    zmm5[0] = zmm5[0] f+ zmm3[0]
    zmm1.d = 1f f/ _mm_sqrt_ss(0, zmm5[0])[0]
    zmm4[0] = zmm4[0] f* zmm1.d
    zmm5[0] = zmm5[0] f* zmm1.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm3[0] = zmm3[0] f* zmm1.d
    var_58[0] = zmm4[0]
    var_58[1] = zmm5[0]
    var_58[2] = zmm6.d
    var_58[3] = zmm3[0]

zmm1 = var_58[0]
uint32_t zmm2[0x4] = var_58[1]
zmm4 = var_58[2]
zmm3 = var_58[3]
int32_t var_48 = zmm1.d
uint32_t var_44 = zmm2[0]
uint32_t var_40 = zmm4[0]
var_58[0] = (zmm1 ^ 0x80000000).d
var_58[1] = (zmm2 ^ 0x80000000)[0]
var_58[2] = (zmm4 ^ 0x80000000)[0]
uint32_t var_3c = zmm3[0]
var_58[3] = zmm3[0]
void var_38
sub_1417c7990(sub_1427ee4f0(&var_58, &var_38, sub_1417c7990(arg2, &var_38, &var_58), arg4), arg1, 
    &var_48)
return arg1
