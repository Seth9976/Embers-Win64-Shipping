// 函数: sub_141bdbb80
// 地址: 0x141bdbb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
sub_1409d7d20(&arg1[0x5d], &arg_10)
int64_t var_20 = 1
int64_t var_18 = 0
int64_t var_10 = 0
int64_t* var_28 = nullptr
sub_1405a4d70(&var_28)
*var_28 = arg_10
int64_t result = (*(*arg1 + 0x2d8))(arg1, &var_18, &var_28)
int64_t* rcx_4 = arg1[0x41]

if (rcx_4 != 0)
    result = (*(*rcx_4 + 0x240))(rcx_4)

int64_t* rcx_5 = var_28

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = var_18

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
