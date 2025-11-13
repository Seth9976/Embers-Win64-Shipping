// 函数: sub_142240060
// 地址: 0x142240060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= *(arg1 + 0x168))
    return 

int64_t r9_1 = sx.q(arg2)
float zmm3 = *(r9_1 * 0x60 + *(arg1 + 0x50) + 0xc)
int64_t rdx_2 = r9_1 * 3
int64_t rax = *(arg1 + 0x80)
float zmm1 = zmm3 * arg3[1] f+ *(rax + (rdx_2 << 2) + 4)
float zmm4 = arg3[2] * zmm3 f+ *(rax + (rdx_2 << 2) + 8)
*(rax + (rdx_2 << 2)) = zmm3 * *arg3 f+ *(rax + (rdx_2 << 2))
*(rax + (rdx_2 << 2) + 4) = zmm1
*(rax + (rdx_2 << 2) + 8) = zmm4
