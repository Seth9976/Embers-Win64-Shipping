// 函数: sub_1415c63c0
// 地址: 0x1415c63c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *arg2
int64_t zmm0
zmm0.d = (*arg4).d f- zmm7.d
int128_t zmm8 = *(arg2 + 4)
int64_t zmm4
zmm4.d = (*arg3).d f- zmm7.d
int128_t zmm9 = *(arg2 + 8)
float zmm5 = *(arg3 + 4) f- zmm8.d
int128_t zmm6
zmm6.d = arg3[1].d.d f- zmm9.d
zmm0.d = zmm0.d f* zmm4.d
float zmm2 = (*(arg4 + 4) f- zmm8.d) * zmm5 f+ zmm0.d + (arg4[1].d f- zmm9.d) f* zmm6.d
float zmm3

if (not(zmm2 < 0f))
    zmm0.d = zmm4.d f* zmm4.d
    zmm3 = zmm5 * zmm5 f+ zmm0.d + zmm6.d f* zmm6.d

int32_t rax_1

if (zmm2 < 0f || zmm3 < 9.99999975e-05f)
    rax_1 = *(arg2 + 8)
    *arg1 = *arg2
    arg1[1].d = rax_1
else
    zmm2 = zmm2 / zmm3
    
    if (zmm2 <= 1f)
        zmm4.d = zmm4.d f* zmm2
        zmm6.d = zmm6.d f* zmm2
        zmm4.d = zmm4.d f+ zmm7.d
        zmm6.d = zmm6.d f+ zmm9.d
        *arg1 = zmm4.d
        *(arg1 + 4) = zmm5 * zmm2 f+ zmm8.d
        arg1[1].d = zmm6.d
    else
        rax_1 = arg3[1].d
        *arg1 = *arg3
        arg1[1].d = rax_1
return arg1
