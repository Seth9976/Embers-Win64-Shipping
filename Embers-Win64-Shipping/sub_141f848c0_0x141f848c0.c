// 函数: sub_141f848c0
// 地址: 0x141f848c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
void* rax = sub_141f87c30(arg1, arg2)
int32_t rcx = *(arg1 + 0x78)
int64_t r10 = sx.q(*rax)
int32_t rax_2 = rcx - r10.d

if (rax_2 != 1)
    memmove(r10 * 0x1c + *(arg1 + 0x70), sx.q((r10 + 1).d) * 0x1c + *(arg1 + 0x70), 
        (rax_2 - 1) * 0x1c)
    rcx = *(arg1 + 0x78)

*(arg1 + 0x78) = rcx - 1
sub_1405c5460(arg1 + 0x70)
sub_141f814e0(arg1, (zx.o(0)).d)
return sub_141f96860(arg1 + 8, &arg_10)
