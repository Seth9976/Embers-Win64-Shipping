// 函数: sub_1426c7870
// 地址: 0x1426c7870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6d30(arg1, arg2)
*arg1 = &data_14346d098
arg1[5] = &data_14346d370
__builtin_memset(&arg1[0xe], 0, 0x20)
*(arg1 + 0x94) &= 0xfffffffe
arg1[0x12].b = 0xff
int64_t var_18 = 0
int64_t var_10 = 0
sub_1405947f0(&var_18, 0xf)
int32_t r14 = var_10:4.d
int32_t rbp = var_10.d + 0xf
var_10.d = rbp

if (rbp s> r14)
    sub_140594770(&var_18)
    r14 = var_10:4.d
    rbp = var_10.d

int64_t rsi = var_18
sub_1405a7220(rsi, 0xf, "BlackboardBase", 0xf, 0x3f)

if (&arg1[6] != &var_18)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rsi
    arg1[7].d = rbp
    *(arg1 + 0x3c) = r14
else if (rsi != 0)
    sub_140a74f90(rsi)

return arg1
