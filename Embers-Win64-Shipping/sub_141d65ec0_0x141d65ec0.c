// 函数: sub_141d65ec0
// 地址: 0x141d65ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[5].b = 0
int64_t var_38 = 0
*arg1 = &data_14322cf48
int32_t var_30 = 0
sub_1405947f0(&var_38, 0x30)
int32_t rax = var_30 + 0x30
var_30 = rax

if (rax s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"/Engine/Sequencer/DefaultBurnIn.DefaultBurnIn_C", 0x60)
__builtin_memset(&arg1[6], 0, 0x18)
void var_18
int128_t var_28 = *sub_140a1dfc0(&var_38, &var_18)
sub_140d2c760(&arg1[6], &var_28)
int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[9] = 0
return arg1
