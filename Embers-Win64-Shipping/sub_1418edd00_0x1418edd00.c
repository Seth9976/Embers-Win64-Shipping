// 函数: sub_1418edd00
// 地址: 0x1418edd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

sub_141903910(arg4)

if (*(arg4 + 0x68) != 0)
    sub_1418edc60(*(arg1 + 0x20), arg2, arg3, *(*(arg4 + 0x60) + (sx.q(*(arg4 + 0x70)) << 3)))
    return 

uint64_t r9_2 = *(arg4 + 0x48)

if (r9_2 != 0)
    sub_1418ede90(*(arg1 + 0x20), arg2, arg3, r9_2)
    return 

int32_t rax_2 = sub_1418e0ce0(*(arg1 + 0x78), *(arg4 + 0x38))
void* rbx_2 = *(arg1 + 0x20)
char rax = sub_1418f08a0(zx.q(arg2) * 0x58 + *(rbx_2 + 0x98), arg3, arg4 + 0x30, rax_2)
*(rbx_2 + 0x90) |= rax
*(rbx_2 + 0xc0) |= rax
