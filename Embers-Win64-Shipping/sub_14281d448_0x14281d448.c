// 函数: sub_14281d448
// 地址: 0x14281d448
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88[0x2]
sub_1428244a8(&var_88, arg2)
void var_78
sub_1428237b4(&var_78)

if (sub_1428246bc(&var_88, &var_78, arg3) != 0)
    sub_142823eb0(&var_78, arg1)
else
    *arg1 = 1
    *(arg1 + 0x18) = 0
    *(arg1 + 0x20) = 0xf
    arg1[8] = 0
    __builtin_memset(&arg1[0x28], 0, 0x18)

sub_142823998(&var_78)
sub_142824554(&var_88)
return arg1
