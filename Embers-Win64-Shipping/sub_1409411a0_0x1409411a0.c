// 函数: sub_1409411a0
// 地址: 0x1409411a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_14093f610(arg1, arg2)

if (rax != 0 && *rax == 1)
    *(rax + 8) += arg3
    return rax

int32_t var_28 = 1
int64_t var_20 = 0
int64_t var_18 = 0
var_20.d = arg3
sub_140917800(arg1 + 8, arg2, &var_28)
int32_t rax_1 = var_28

if (rax_1 != 6 && rax_1 != 8 && rax_1 != 0xa)
    return rax_1

return j_sub_140a74f90(var_20)
