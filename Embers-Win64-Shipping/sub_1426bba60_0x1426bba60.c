// 函数: sub_1426bba60
// 地址: 0x1426bba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
sub_140d3a3a0(&arg_10, arg3)
int64_t arg_20
sub_140d3a3a0(&arg_20, arg2)
sub_141f3b1e0(arg1 + 0xd8, arg_20, arg_10)
void var_38
sub_140d3a3a0(&var_38, arg3)
void var_30
sub_140d3a3a0(&var_30, arg2)
void* var_28 = &var_30
void* var_20 = &var_38
int32_t arg_8
int32_t* result = sub_141f2beb0(arg1 + 0xd8, &arg_8, &var_28, nullptr)

for (void* i = *(arg2 + 0x30); i != 0; i = *(i + 0x30))
    sub_140d3a3a0(&arg_10, arg3)
    sub_140d3a3a0(&arg_20, i)
    sub_141f3b1e0(arg1 + 0xd8, arg_20, arg_10)
    sub_140d3a3a0(&var_38, arg3)
    sub_140d3a3a0(&var_30, i)
    result = sub_141f2beb0(arg1 + 0xd8, &arg_8, &var_28, nullptr)

return result
