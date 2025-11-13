// 函数: sub_1406d0b50
// 地址: 0x1406d0b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_28
int64_t* arg_20 = &var_28
var_28 = 0
int32_t rbx = arg1[1].d
int64_t rsi = *arg1
int32_t var_20 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_28, rbx, 0)
    memcpy(var_28, rsi, rbx * 2)
else
    int32_t var_1c_1 = 0

arg_20 = &var_28
int64_t var_18
int64_t* rax = sub_140686ab0(&var_18, &var_28, arg3)
arg_8 = 1
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

uint64_t result = sub_1406c99f0(rax, arg2, 0, 0)
int64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
