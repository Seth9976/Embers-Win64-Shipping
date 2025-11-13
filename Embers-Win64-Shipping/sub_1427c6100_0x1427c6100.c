// 函数: sub_1427c6100
// 地址: 0x1427c6100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0

if (arg1 == 0 || arg3 u> 1)
    return 1

char* var_20
int32_t arg_8
uint32_t arg_20
int32_t result_2 = sub_1427c6960(arg1, arg2, arg3, &var_20, &arg_20, &arg_8)
int32_t result_1 = result_2

if (result_2 == 0)
    int32_t rax_2 = arg_8 u>> 4 & 0xf
    
    if (rax_2 != 0xc)
        if (rax_2 - 0xa u> 1)
            return 3
        
        *arg4 = 1
    else
        uint32_t rdx = arg_20
        char* rcx = var_20
        int64_t var_28 = 0
        arg_8.q = 0
        void* var_18
        void var_10
        int32_t result = sub_1427c63c0(rcx, rdx, arg4, &var_28, &arg_8, &var_10, &var_18)
        result_1 = result
        
        if (result != 0)
            return result

return zx.q(result_1)
