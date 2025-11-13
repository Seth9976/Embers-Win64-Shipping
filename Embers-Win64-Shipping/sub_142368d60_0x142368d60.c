// 函数: sub_142368d60
// 地址: 0x142368d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x288))()
arg1[0x1f].d = arg2
char rax_1

if (0f f!= *(arg1 + 0x30c))
    rax_1 = 0
else
    rax_1 = 1

*(arg1 + 0x16b) &= 0xfe
*(arg1 + 0x16b) |= rax_1
uint32_t rcx = zx.d(arg1[0x61].b)
char result = not.b(arg1[0x62].b) & 1
*(arg1 + 0x31) = result

if (rcx == 0)
    *(arg1 + 0x204) = 1
else if (rcx == 1)
    *(arg1 + 0x204) = 2

return result
