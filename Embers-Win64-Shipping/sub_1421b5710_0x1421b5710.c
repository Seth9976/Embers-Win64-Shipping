// 函数: sub_1421b5710
// 地址: 0x1421b5710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t r10_1
int32_t r11_1

if (*(arg1 + 0xf0) == 0)
    r10_1 = 0
    r11_1 = 0
else
    int32_t rax_1 = *(arg1 + 0x114)
    r10_1 = *(arg1 + 0x118) * rax_1
    r11_1 = *(arg1 + 0x120) * rax_1

int32_t rdx_1

if (*(arg1 + 0xf8) == 0)
    rdx_1 = 0
else
    r9 = *(arg1 + 0x118) * 2
    rdx_1 = *(arg1 + 0x120) * 2

*arg2 = r10_1 + 0x1d0 + r9
int32_t result = r11_1 + 0x1d0 + rdx_1
*arg3 = result
return result
