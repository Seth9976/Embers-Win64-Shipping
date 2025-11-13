// 函数: sub_1420773e0
// 地址: 0x1420773e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432b01f0
arg1[5] = 0
arg1[6] = 0
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 8)
int32_t rax = var_40 + 8
var_40 = rax

if (rax s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Default", 0x10)
int64_t var_38
sub_140596d10(&var_38, &var_48)
int64_t rcx_4 = var_48
int128_t var_18 = data_1432bc250

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rsi = sx.q(arg1[6].d)
int32_t rax_1 = (rsi + 1).d
arg1[6].d = rax_1

if (rax_1 s> *(arg1 + 0x34))
    sub_1405c4f50(&arg1[5])

int64_t rax_2 = var_38
int64_t* rcx_8 = &arg1[5][rsi * 6]
__builtin_memset(&var_38, 0, 0x20)
*rcx_8 = rax_2
int32_t var_30
rcx_8[1].d = var_30
int32_t var_2c
*(rcx_8 + 0xc) = var_2c
__builtin_memset(&rcx_8[2], 0, 0x14)
*(rcx_8 + 0x24) = 0x3f800000
rcx_8[5].d = 0xbf800000
*(rcx_8 + 0x2c) = 0x3f800000
int64_t var_28
sub_1420794e0(&var_28)
int64_t rcx_10 = var_38

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return arg1
