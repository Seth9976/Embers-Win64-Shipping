// 函数: sub_1422ac390
// 地址: 0x1422ac390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_20 = &arg_8
void*** (* var_28)() = sub_140884c50

if (*(sub_140a756e0(&var_28, &data_14397f5f0) + 0x38) == arg1)
    return sub_142221800(&arg1[0x55], arg2) __tailcall

int64_t* result = sub_142216c70(&arg1[0x55], &arg_8)

if (arg2 == *result)
    return result

int32_t rax_2 = sub_142216be0(&arg1[0x55])
sub_142221760(&arg1[0x55], arg2)

if (rax_2 != sub_142216be0(&arg1[0x55]))
    sub_141f11590(arg1)

return (*(*arg1 + 0x818))(arg1, zx.q(arg3))
