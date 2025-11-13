// 函数: sub_1422d1cf0
// 地址: 0x1422d1cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = *(arg1 + 8)
uint64_t rdx = zx.q(arg3)
int32_t* r8 = rax_1 + (rdx << 2)
int32_t rax = *(rax_1 + (rdx << 2))
int32_t rdx_4 = (((rax * 2) ^ rax) & 2) ^ rax
*r8 = rdx_4

if (arg4 == 0 && *(arg1 + 0x19) == arg4)
    *r8 = rdx_4 & 0xfffffffe
    return 0

*r8 = (rdx_4 & 0xfffffffe) | 1
return 1
