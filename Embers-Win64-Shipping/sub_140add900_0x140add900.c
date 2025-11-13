// 函数: sub_140add900
// 地址: 0x140add900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg1
zmm5 - 0f
int128_t zmm10

if (zmm5 < 0f)
    zmm10 = *(arg2 + 0xc)
else
    zmm10 = *arg2

float zmm3 = arg1[1]
void* rax = arg2 + 0xc

if (zmm5 < 0f)
    rax = arg2

float zmm1
int128_t zmm9

if (zmm3 < 0f)
    zmm1 = *(arg2 + 4)
    zmm9 = arg2[1].d
else
    zmm1 = arg2[1].d
    zmm9 = *(arg2 + 4)

int128_t zmm6 = arg1[2]
int128_t zmm7
int128_t zmm8

if (zmm6.d f< 0f)
    zmm8 = *(arg2 + 8)
    zmm7 = *(arg2 + 0x14)
else
    zmm8 = *(arg2 + 0x14)
    zmm7 = *(arg2 + 8)

if (not(zmm5 * *rax + zmm3 * zmm1 + zmm6.d f* zmm8.d f- arg1[3] >= 0f))
    return 0xffffffff

zmm6.d = zmm6.d f* zmm7.d
int64_t result
result.b = zmm3 f* zmm9.d + zmm5 f* zmm10.d f+ zmm6.d f- arg1[3] > 0f
return result
