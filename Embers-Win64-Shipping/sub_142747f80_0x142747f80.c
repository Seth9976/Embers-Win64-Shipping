// 函数: sub_142747f80
// 地址: 0x142747f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi

if (arg2 == 0)
    rdi = 0
else
    int64_t* rcx = *(arg2 + 0x418)
    rdi = (*(*rcx + 0xc0))(rcx)

sub_1427468c0(&arg1[0xcc], rdi)
sub_142743ed0(&arg1[0xcc], rdi)
arg1[0xe0].d = 0

if (rdi s> *(arg1 + 0x704))
    sub_1405a5410(&arg1[0xdf], rdi)

int64_t r14 = sx.q(arg1[0xe0].d)
int32_t rax_3 = r14.d + rdi
arg1[0xe0].d = rax_3

if (rax_3 s> *(arg1 + 0x704))
    sub_1405a4f90(&arg1[0xdf])

memset((r14 << 4) + arg1[0xdf], 0, sx.q(rdi) << 4)
int64_t r8_2
r8_2.b = 1
sub_141f71f00(arg1, arg2, r8_2)
return sub_141ef1240(arg1) __tailcall
