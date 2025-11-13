// 函数: sub_1425ef120
// 地址: 0x1425ef120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t var_18 = 0
int64_t var_10 = 0
sub_1405947f0(&var_18, 4)
int32_t rbp = var_10:4.d
int32_t rdi = var_10.d + 4
var_10.d = rdi

if (rdi s> rbp)
    sub_140594770(&var_18)
    rbp = var_10:4.d
    rdi = var_10.d

int64_t r14 = var_18
UnDecorator::getReferenceType(r14, &data_142d630b8, 8)
int64_t rsi = sx.q(arg2[1].d)
int32_t rax = (rsi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t* rax_3 = (rsi << 4) + *arg2
*rax_3 = r14
rax_3[1].d = rdi
*(rax_3 + 0xc) = rbp
return arg2
