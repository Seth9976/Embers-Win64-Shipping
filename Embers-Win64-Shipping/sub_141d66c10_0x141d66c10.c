// 函数: sub_141d66c10
// 地址: 0x141d66c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_14245f6d0()
void* rdx = *(arg3 + 0x10)
int64_t rax_1 = sx.q(*(rax + 0x38))
void arg_18

if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
    return sub_140acafe0(&arg1[0xa], &arg_18, arg2, nullptr)
int64_t* rax_5 = sub_141d64b80(arg1, sub_140a6b260(arg2, 0x10), arg2)
int64_t rdi_1 = sx.q(rax_5[1].d)
int32_t rcx_3 = (rdi_1 + 1).d
rax_5[1].d = rcx_3

if (rcx_3 s> *(rax_5 + 0xc))
    sub_1407c3b60(rax_5)

return sub_141d65780(rdi_1 * 0x38 + *rax_5, arg3, arg4)
