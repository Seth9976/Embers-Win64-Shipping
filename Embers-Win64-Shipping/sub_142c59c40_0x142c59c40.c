// 函数: sub_142c59c40
// 地址: 0x142c59c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_143ccb8b8(1, 0x78)
*(arg1 + 0x680) = rax
int32_t rsi = 8

if (rax == 0)
    goto label_142c59d04

*(arg1 + 0x668) = arg3
*(arg1 + 0x67c) = 0
*(arg1 + 0x670) = 0
*(arg1 + 0x678) = 0
*rax = 0

if (sub_142c59d30(rax, arg2, arg3, arg4) == 0)
    goto label_142c59d04

data_143ccb8a0(*(arg1 + 0x660))
int64_t rax_2 = data_143ccb8b0(arg2)
*(arg1 + 0x660) = rax_2

if (rax_2 == 0)
    goto label_142c59d04

uintptr_t result = sub_142c716e0(sub_142c59b30, &rax[3])
*rax = result

if (result != 0)
    result.b = 1
else
    rsi = *_errno()
label_142c59d04:
    sub_142c59a50(arg1 + 0x660)
    *_errno() = rsi
    result.b = 0

return result
