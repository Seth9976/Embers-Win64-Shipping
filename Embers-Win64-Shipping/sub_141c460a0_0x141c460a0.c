// 函数: sub_141c460a0
// 地址: 0x141c460a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = -0.899999976f
*(arg1 + 0x10) = arg2.d
arg2 ^= data_142d3f780

if (not(arg2.d f< -0.899999976f))
    zmm2 = __minss_xmmss_memss(arg2.d, 0x3f666666)

int32_t* rax = *(arg1 + 0x48)
int32_t rdx

if (rax[7].b == 0)
    rdx = int.d(rax[8] f* rax[3])
else
    rax[7].b = 0
    rdx = 0

rax[4] = rdx
rax[6] = 0

if (rdx != 0)
    float zmm0 = rax[1]
    *rax = zmm0
    rax[2] = zmm2 - zmm0
else
    rax[1] = zmm2

float* result = *(arg1 + 0x78)
*result = *(arg1 + 0x10) - 0.150000006f
return result
