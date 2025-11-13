// 函数: sub_142bfcec0
// 地址: 0x142bfcec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_142c04220(&arg1[2])
int32_t r8 = 0
*rax = arg2
int32_t r9 = *arg1
int32_t r10_1 = *(arg3 + 0x18) - r9

if (r9 u<= *(arg3 + 0x10))
    r8 = *(arg3 + 0x10) - r9

if (r8 u< r10_1)
    r10_1 = r8

*(rax + 0x10) = zx.q(r9) + *(arg3 + 8)
rax[6] = r10_1
int32_t result = *(arg3 + 0x18)
*arg1 = result
return result
