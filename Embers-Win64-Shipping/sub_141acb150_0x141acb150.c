// 函数: sub_141acb150
// 地址: 0x141acb150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = *(arg1 + 0xc0)
void* r10_1 = arg1
int64_t r11_1 = sx.q(arg2)

if (rax_1 != 0)
    r10_1 = rax_1

int32_t rax_2 = *(arg1 + 0xc8)
int32_t rcx_1 = rax_2 - r11_1.d

if (rcx_1 != arg3)
    memmove(r10_1 + r11_1 * 0x18, r10_1 + sx.q(r11_1.d + arg3) * 0x18, (rcx_1 - arg3) * 0x18)
    rax_2 = *(arg1 + 0xc8)

*(arg1 + 0xc8) = rax_2 - arg3

if (arg4 != 0)
    sub_141a64000(arg1)
