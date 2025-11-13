// 函数: sub_142579ed0
// 地址: 0x142579ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = *(arg2 + 0x20)
int64_t rax
rax.b = r8_1 != 0
int64_t result = rax + r8_1
*(arg2 + 0x20) = result
bool cond:0 = *(arg1 + 0x294) == 0
*(arg1 + 0x290) = 0

if (cond:0)
    return result

return sub_1405c5570(arg1 + 0x288, 0) __tailcall
