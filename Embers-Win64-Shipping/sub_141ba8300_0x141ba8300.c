// 函数: sub_141ba8300
// 地址: 0x141ba8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
int64_t* var_20 = &arg_8
int64_t rax = *(arg1 + 0x28)
int64_t var_28 = arg2

if (rax == 0)
    return rax

int64_t arg_10 = rax
sub_141b97250(&var_28, &arg_10)
void* rcx_1 = *(arg1 + 0x28)
int64_t* (* var_18)(int64_t* arg1, int64_t* arg2) = sub_141b97250
int64_t* var_10 = &var_28
sub_141ba8640(rcx_1, &var_18)
return arg_8
