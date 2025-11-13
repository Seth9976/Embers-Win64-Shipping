// 函数: sub_142ae7d00
// 地址: 0x142ae7d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 8

if (arg2 s>= 1)
    rbx = arg2

int32_t rdx = *(arg1 + 0x10)

if (rdx s> 0 && rdx s< rbx)
    rbx = rdx

if (rbx s> 0x1fffffff)
    rbx = sub_142a92b70(8, rdx)

int64_t result = sub_142a7dd00(sx.q(rbx) << 2)
*(arg1 + 0x18) = result

if (result != 0)
    *(arg1 + 0xc) = rbx
    return result

*arg3 = 7
return result
