// 函数: sub_141f8bae0
// 地址: 0x141f8bae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
int64_t result = (*(*(arg1 + 0x28) + 0x10))(arg1 + 0x28, &var_28)
int32_t var_20

if (var_20 s> 0)
    int64_t* rcx_1 = *(var_28 + 8)
    result = (*(*rcx_1 + 0x68))(rcx_1, arg2, arg3)
    int32_t rdi_1 = 1
    
    if (var_20 s> 1)
        int64_t rbx_1 = 0x10
        
        do
            int64_t* rcx_2 = *(rbx_1 + var_28 + 8)
            int32_t arg_8
            int32_t arg_20
            result = (*(*rcx_2 + 0x68))(rcx_2, &arg_8, &arg_20)
            rbx_1 += 0x10
            rdi_1 += 1
            *arg2 = __minss_xmmss_memss(*arg2, arg_8)
            *arg3 = __maxss_xmmss_memss(*arg3, arg_20)
        while (rdi_1 s< var_20)

void* rcx_3 = var_28

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
