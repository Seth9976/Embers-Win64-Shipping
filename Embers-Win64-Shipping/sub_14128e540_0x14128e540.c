// 函数: sub_14128e540
// 地址: 0x14128e540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = *(arg1 + 0xa20)
void* r10_1 = arg1
int64_t r11_1 = sx.q(arg2)

if (rax_1 != 0)
    r10_1 = rax_1

int32_t rax_2 = *(arg1 + 0xa28)
int32_t rcx_1 = rax_2 - r11_1.d

if (rcx_1 != arg3)
    memmove(r11_1 * 0x288 + r10_1, sx.q(r11_1.d + arg3) * 0x288 + r10_1, (rcx_1 - arg3) * 0x288)
    rax_2 = *(arg1 + 0xa28)

*(arg1 + 0xa28) = rax_2 - arg3

if (arg4 != 0)
    sub_141295730(arg1)
