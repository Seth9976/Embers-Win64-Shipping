// 函数: sub_141da3a50
// 地址: 0x141da3a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg2 + 0x31) != 0)
    void* rbp_1 = nullptr
    int64_t rbx_1 = *(arg1 + 0xf0)
    uint32_t count = *(arg1 + 0xf8)
    void* var_28 = nullptr
    int32_t r12_1
    
    if (count != 0)
        sub_1405da9e0(&var_28, count, 0)
        rbp_1 = var_28
        memcpy(rbp_1, rbx_1, count)
        int32_t var_1c
        r12_1 = var_1c
    else
        r12_1 = 0
    
    int32_t rbx_2 = *(arg1 + 0xb8)
    sub_141d95cb0(arg1 + 0xb8, arg2)
    result = &var_28
    *(arg1 + 0xb8) = rbx_2
    
    if (arg1 + 0xf0 != &var_28)
        int64_t rcx_3 = *(arg1 + 0xf0)
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        *(arg1 + 0xf0) = rbp_1
        *(arg1 + 0xf8) = count
        *(arg1 + 0xfc) = r12_1
    else if (rbp_1 != 0)
        return sub_140a74f90(rbp_1)

return result
