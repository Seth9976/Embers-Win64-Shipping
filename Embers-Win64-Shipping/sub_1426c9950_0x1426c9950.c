// 函数: sub_1426c9950
// 地址: 0x1426c9950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_143474418
arg1[5] = &data_143474c78
arg1[0x3e] = &data_143474ca8
arg1[0x81] = 0
arg1[0x82] = 0
sub_1405947f0(&arg1[0x81], 0xe)
int32_t rax = arg1[0x82].d + 0xe
arg1[0x82].d = rax

if (rax s> *(arg1 + 0x414))
    sub_140594770(&arg1[0x81])

sub_1405a7220(arg1[0x81], 0xe, "GameplayDebug", 0xe, 0x3f)
arg1[0x83].d |= 1
__builtin_memset(&arg1[0x84], 0, 0x20)
return arg1
