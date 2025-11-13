// 函数: sub_141897f10
// 地址: 0x141897f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x60))
    *(arg1 + 0x60) = 0
else
    rax = *(arg1 + 0x60)

int32_t r8 = *(*(arg1 + 0x10) + 8)
bool z

if (0 == *(arg1 + 0x58))
    *(arg1 + 0x58) = 0
    z = true
else
    *(arg1 + 0x58)
    z = false

uint64_t result

if (z && rax != 0 && r8 - rax u> *(arg1 + 8) * 3)
    result.b = 1
    return result

result.b = 0
return result
