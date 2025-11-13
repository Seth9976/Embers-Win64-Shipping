// 函数: sub_1427b36c0
// 地址: 0x1427b36c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140596d10(&var_18, arg2)
int32_t result = sub_14279b600(&arg1[5], &var_18)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

bool cond:0 = result s> 0

if (result s> 0)
    int64_t rdx_1 = *arg1
    (*(rdx_1 + 0x2a8))(arg1, rdx_1)
    cond:0 = result s> 0

result.b = cond:0
return result
