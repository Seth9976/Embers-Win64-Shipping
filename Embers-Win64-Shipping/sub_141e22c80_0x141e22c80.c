// 函数: sub_141e22c80
// 地址: 0x141e22c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*arg2)
int128_t zmm6 = arg4
float zmm1

if (rax.d == 0xffffffff)
    zmm1 = (zx.o(0)).d
else
    zmm1 = *(*(arg1 + 0x178) + rax * 0xc + 8)

int64_t result = sx.q(*arg3)
int128_t zmm2

if (result.d == 0xffffffff)
    zmm2 = *(arg1 + 0x90)
    arg4 = zmm2
else
    zmm2 = *(arg1 + 0x90)
    int64_t rcx = result * 3
    result = *(arg1 + 0x178)
    arg4 = *(result + (rcx << 2) + 8)

float zmm4 = zmm2.d

if (not(zmm1 f< arg4.d))
    zmm1 = zmm1 f- zmm2.d

float zmm0 = (arg4.d - zmm1) f* zmm6.d + zmm1

if (zmm0 >= 0f)
label_141e22d10:
    
    if (not(zmm0 < zmm4))
        zmm0 = zmm4
else
    zmm0 = zmm0 f+ zmm2.d
    zmm4 = zmm2.d
    
    if (zmm0 >= 0f)
        goto label_141e22d10
    
    zmm0 = (zx.o(0)).d

arg4.d = arg4.d f- zmm0
arg2[1] = zmm1 - zmm0
arg3[1] = arg4.d
return result
