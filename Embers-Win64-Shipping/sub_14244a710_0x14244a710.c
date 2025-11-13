// 函数: sub_14244a710
// 地址: 0x14244a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = sub_1419ba670(data_1439c7a08)

if (result.b != 0)
    int64_t arg_20 = arg1
    
    if (sub_140a80f40() != 0)
        return sub_14242b1d0(&arg_20)
    
    if (data_143f138f4 == 0)
        uint32_t rax_2
        
        if (data_143de5480 != 0)
            rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_2.b != 0)
            int64_t var_30 = arg1
            return sub_14242b1d0(&var_30)
    
    void var_28
    int64_t* rax_4 = sub_1424305f0(&var_28, nullptr, 0xff)
    *(*rax_4 + 0x10) = arg1
    void* rcx_5 = *rax_4
    int32_t r8_1 = rax_4[2].d
    int64_t* rdx_3 = rax_4[1]
    int64_t* rbx_1 = *(rcx_5 + 0x20)
    int64_t* var_38_1 = rbx_1
    void* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = var_38_1
    
    result = sub_1405a5630(rcx_5, rdx_3, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(var_38_1)

return result
