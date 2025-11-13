// 函数: sub_140ca7fa0
// 地址: 0x140ca7fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
void* rax = arg3

if (arg3 == 0)
    rax = sub_140d209c0(arg2)

*arg1 = rax
void** var_18 = arg1
void* var_10 = &arg1[1]
void arg_8
sub_140bd2cc0(&arg1[3], &arg_8, &var_18, nullptr)
uint8_t result = (*(arg2 + 8) u>> 5).b & 1
arg1[2].b = result
return result
