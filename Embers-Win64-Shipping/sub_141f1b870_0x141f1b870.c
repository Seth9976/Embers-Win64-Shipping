// 函数: sub_141f1b870
// 地址: 0x141f1b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4
sub_1423ab100(arg2, arg3)
int32_t result = (*(*arg1 + 0x6a0))(arg1)
int32_t result_1 = result
int32_t rbx = 0

if (result s> 0)
    do
        int64_t r9_1 = *arg1
        int128_t var_48
        __builtin_memset(&var_48, 0, 0x14)
        int64_t* var_58
        result = (*(r9_1 + 0x898))(arg1, zx.q(rbx), &var_48, r9_1, var_58)
        
        if (result.b != 0)
            var_58 = arg5
            result, zmm6 = sub_1423b34d0(arg2, &arg1[0x20], &var_48, zmm6, var_58)
        
        rbx += 1
    while (rbx s< result_1)

return result
