// 函数: sub_142c43060
// 地址: 0x142c43060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg1 + 0x13))
uint32_t rcx = zx.d(*(arg2 + 0x13))

if (r8 u< rcx)
    return 0xffffffff

int64_t result
result.b = r8 != rcx
return result
