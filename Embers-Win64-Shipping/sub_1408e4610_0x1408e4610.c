// 函数: sub_1408e4610
// 地址: 0x1408e4610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *(arg1 + 0x48)
int32_t rsi = 0
int64_t var_28 = 0
int64_t var_20 = 0
sub_1405947f0(&var_28, 0xa)
int32_t rbp = var_20:4.d
int32_t rdi = var_20.d + 0xa
var_20.d = rdi

if (rdi s> rbp)
    sub_140594770(&var_28)
    rbp = var_20:4.d
    rdi = var_20.d

int64_t r15 = var_28
sub_1405a7220(r15, 0xa, "%d Tracks", 0xa, 0x3f)

if (rdi == 0 && r14 != 0)
    rsi = 1

*arg2 = r15
int32_t rdx_2 = rsi + rdi + r14
arg2[1].d = rdi
*(arg2 + 0xc) = rbp

if (rdx_2 s> rbp)
    sub_1405947f0(arg2, rdx_2)

return arg2
