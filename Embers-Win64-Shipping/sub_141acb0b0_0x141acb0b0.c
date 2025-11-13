// 函数: sub_141acb0b0
// 地址: 0x141acb0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = *(arg1 + 0x100)
void* r10_1 = arg1
int64_t r11_1 = sx.q(arg2)

if (rax_1 != 0)
    r10_1 = rax_1

int32_t rax_2 = *(arg1 + 0x108)
int32_t rcx_1 = rax_2 - r11_1.d

if (rcx_1 != arg3)
    memmove((r11_1 << 5) + r10_1, (sx.q(r11_1.d + arg3) << 5) + r10_1, (rcx_1 - arg3) << 5)
    rax_2 = *(arg1 + 0x108)

*(arg1 + 0x108) = rax_2 - arg3

if (arg4 != 0)
    sub_141acb930(arg1)
