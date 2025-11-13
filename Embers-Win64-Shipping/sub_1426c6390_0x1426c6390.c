// 函数: sub_1426c6390
// 地址: 0x1426c6390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6c70(arg1, arg2)
*arg1 = &data_143469958
arg1[5] = &data_143469c40
__builtin_memset(&arg1[0xd], 0, 0x20)
*(arg1 + 0x8c) &= 0xfffffffe
arg1[0x11].b = 0xff
__builtin_memset(&arg1[0x13], 0, 0x30)
int64_t var_28 = 0
int64_t var_20 = 0
sub_1405947f0(&var_28, 0x17)
int32_t r15 = var_20:4.d
int32_t rbp = var_20.d + 0x17
var_20.d = rbp

if (rbp s> r15)
    sub_140594770(&var_28)
    r15 = var_20:4.d
    rbp = var_20.d

int64_t rsi = var_28
sub_1405a7220(rsi, 0x17, "Gameplay Tag Condition", 0x17, 0x3f)

if (&arg1[6] != &var_28)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rsi
    arg1[7].d = rbp
    *(arg1 + 0x3c) = r15
else if (rsi != 0)
    sub_140a74f90(rsi)

void* rax = sub_142452380()
void arg_8
sub_1426a9410(&arg1[0xd], arg1, *sub_140b58260(&arg_8, u"ActorToCheck", 1), rax)
arg1[0xc].d &= 0xfffffff8
arg1[0xf] = data_143f721c0
return arg1
