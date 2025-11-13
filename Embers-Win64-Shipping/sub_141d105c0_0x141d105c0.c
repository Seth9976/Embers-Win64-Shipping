// 函数: sub_141d105c0
// 地址: 0x141d105c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141d02260(arg1, arg2, nullptr, nullptr)

if (result == 0)
    int32_t rdx = 0
    int64_t var_18 = 0
    int32_t rcx = 0
    int64_t var_10_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (arg2[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_18, rdi_1.d + 1)
            rcx = var_10_1:4.d
            rdx = var_10_1.d
        
        int32_t rax = rdi_1.d + 1 + rdx
        var_10_1.d = rax
        
        if (rax s> rcx)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, arg2, (rdi_1.d + 1) * 2)
    
    result = sub_141d06c80(arg1, &var_18)
    int64_t rcx_5 = var_18
    char result_1 = result
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)
    
    if (result_1 != 0)
        int64_t* rcx_6 = *(arg1 + 8)
        return (*(*rcx_6 + 0xa8))(rcx_6, arg2, arg3)

return result
