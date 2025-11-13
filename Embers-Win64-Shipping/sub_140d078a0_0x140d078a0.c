// 函数: sub_140d078a0
// 地址: 0x140d078a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_28 = 0
int64_t var_20 = 0
void* result = sub_140d06640(arg1, &var_28, arg2, arg4, arg5)

if (result != 0)
    int32_t rax_1 = var_20.d
    int64_t rdx_2 = *(*(arg1 + 0x78) + 0xe8)
    
    if (rax_1 s> 0)
        uint64_t var_18 = var_28
        int32_t var_c = var_20:4.d
        int32_t var_10 = rax_1
        sub_140d2c230(arg4, rdx_2, &var_18)
        *arg3 = 1
        return result
    
    sub_140d1a460(arg4, rdx_2)
    *arg3 = 0

uint64_t rcx_1 = var_28

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return result
