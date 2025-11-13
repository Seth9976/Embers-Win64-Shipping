// 函数: sub_1410626f0
// 地址: 0x1410626f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3 = *arg1

if (rax_3 s< 0)
    return zx.q((rax_3 * 2) s>> 1)

void* rdx = &arg1[2]
void* rcx = *(arg1 + 0x18)

if (rcx != 0)
    rdx = rcx

return zx.q(*(rdx + (sx.q(arg2) << 2)))
