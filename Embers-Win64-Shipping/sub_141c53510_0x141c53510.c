// 函数: sub_141c53510
// 地址: 0x141c53510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
float zmm1 = *(arg1 + 0xc)
int64_t rcx = sx.q(arg1[1].d) * 0x3f0
int64_t result = *(rdx + 0xc8)
int32_t r8 = *(rdx + 0x1b0)
bool cond:0 = *(rcx + result + 0xf8) != 0
*(rcx + result + 0xf0) = zmm1

if (not(cond:0) && r8 != 0)
    float zmm2 = *(rcx + result + 0xe8)
    *(rcx + result + 0xf4) = (zmm1 - zmm2) f/ _mm_cvtepi32_ps(zx.o(r8)).d
    *(rcx + result + 0xec) = zmm2
    return result

*(rcx + result + 0xe8) = zmm1
*(rcx + result + 0xf8) = 0
*(rcx + result + 0xf4) = (zx.o(0)).d
*(rcx + result + 0xec) = zmm1
return result
