// 函数: sub_14076f920
// 地址: 0x14076f920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x38))
int32_t rax = (rdi + 1).d
*(arg1 + 0x38) = rax

if (rax s> *(arg1 + 0x3c))
    sub_1405a4f90(arg1 + 0x30)

sub_140596d10((rdi << 4) + *(arg1 + 0x30), arg2)
return sub_140a53700(arg1 + 0x10, arg2) __tailcall
