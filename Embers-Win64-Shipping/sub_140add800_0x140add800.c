// 函数: sub_140add800
// 地址: 0x140add800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *arg1
zmm3 - 0f
int128_t zmm10

if (zmm3 < 0f)
    zmm10 = *(arg2 + 0xc)
else
    zmm10 = *arg2

int128_t zmm6 = arg1[1]
void* rax = arg2 + 0xc

if (zmm3 < 0f)
    rax = arg2

float zmm1
int128_t zmm9

if (zmm6.d f< 0f)
    zmm1 = *(arg2 + 4)
    zmm9 = arg2[1].d
else
    zmm1 = arg2[1].d
    zmm9 = *(arg2 + 4)

float zmm5 = arg1[2]
int128_t zmm7
int128_t zmm8

if (zmm5 < 0f)
    zmm7 = *(arg2 + 8)
    zmm8 = *(arg2 + 0x14)
else
    zmm7 = *(arg2 + 0x14)
    zmm8 = *(arg2 + 8)

int32_t result

if (zmm3 * *rax + zmm6.d * zmm1 + zmm5 f* zmm7.d f- arg1[3] >= 0f)
    zmm6.d = zmm6.d f* zmm9.d
    result.b = zmm3 f* zmm10.d f+ zmm6.d + zmm5 f* zmm8.d f- arg1[3] > 0f
else
    result = -1

result.b = result == 0
return result
