// 函数: sub_1420e67a0
// 地址: 0x1420e67a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg5 = 0
void* rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax != 0)
    int64_t var_18 = 0
    int64_t var_10_1 = 0
    char rax_1 = sub_140bb93b0(arg2, &var_18, nullptr)
    *arg5 = rax_1
    
    if (rax_1 != 0)
        int32_t rax_2 = arg4[1].d
        int64_t var_38 = *arg4
        int32_t var_30_1 = rax_2
        int32_t rax_3 = arg3[1].d
        int64_t var_28 = *arg3
        int32_t var_20_1 = rax_3
        int64_t* result = sub_1420e69b0(rax, &var_18, &var_28, &var_38, arg5)
        int64_t rcx_5 = var_18
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *arg2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        return result
    
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg2

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return nullptr
