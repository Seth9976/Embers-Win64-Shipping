// 函数: sub_1422651e0
// 地址: 0x1422651e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t zmm1[0x4] = data_143f3a650
*arg1 = data_143f3a640
int128_t* r9 = arg2
arg1[1] = zmm1

do
    zmm1 = *r9
    i += 0x10
    int32_t zmm0[0x4] = *(arg3 - arg2 + r9)
    r9 = &r9[1]
    *(arg1 - arg2 + r9 - 0x10) = _mm_min_epu8(zmm1, zmm0)
while (i u< 0x20)

return arg1
