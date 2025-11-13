// 函数: sub_1420f61b0
// 地址: 0x1420f61b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    sub_140d25500(arg1)

int128_t var_48
__builtin_memset(&var_48, 0, 0x38)
int32_t var_58
sub_1420f5fc0(arg1 + 0x30, &var_58)
int32_t* var_50
*var_50 = *arg2
sub_1420f3710(&var_50[4], &var_48)
var_50[0x12] = 0xffffffff
int32_t arg_18
sub_1420f7980(arg1 + 0x30, &arg_18, sub_140a6b260(var_50, 0x10), var_50, var_58, nullptr)
int64_t result = *(arg1 + 0x30) + sx.q(arg_18) * 0x50 + 0x10
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int64_t* rcx_10 = var_48:8.q

if (rcx_10 != 0)
    rcx_10[3].d -= 1
    
    if (rcx_10[3].d == 1)
        int64_t rdx_3 = *rcx_10
        (*(rdx_3 + 0x38))(rcx_10, rdx_3)

int64_t* rcx_11 = var_48.q

if (rcx_11 != 0)
    int32_t temp1_1 = *(rcx_11 + 0x1c)
    *(rcx_11 + 0x1c) -= 1
    
    if (temp1_1 == 1)
        int64_t rdx_4 = *rcx_11
        (*(rdx_4 + 0x40))(rcx_11, rdx_4)

return result
