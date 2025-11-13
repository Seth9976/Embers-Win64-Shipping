// 函数: sub_141839c20
// 地址: 0x141839c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg2 + 0x130))(arg2)
int64_t var_28 = 0
int64_t var_20 = 0
int32_t rsi = rax_1[1].d
sub_1405947f0(&var_28, 7)
int32_t rbp = var_20:4.d
int32_t rdi = var_20.d + 7
var_20.d = rdi

if (rdi s> rbp)
    sub_140594770(&var_28)
    rbp = var_20:4.d
    rdi = var_20.d

int64_t r15 = var_28
UnDecorator::getReferenceType(r15, u"Deltas", 0xe)
int32_t rax_2 = 1

if (rsi == 0)
    rsi = 1

if (rdi != 0 || rsi == 0)
    rax_2 = 0

*arg1 = r15
int32_t rdx_2 = rax_2 + rsi + rdi
arg1[1].d = rdi
*(arg1 + 0xc) = rbp

if (rdx_2 s> rbp)
    sub_1405947f0(arg1, rdx_2)

int32_t rax_3 = rax_1[1].d
int32_t r8 = rax_3 - 1

if (rax_3 == 0)
    r8 = 0

sub_140a2cf70(arg1, *rax_1, r8)
return arg1
