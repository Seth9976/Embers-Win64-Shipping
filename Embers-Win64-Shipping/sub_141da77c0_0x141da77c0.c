// 函数: sub_141da77c0
// 地址: 0x141da77c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result

if ((*(*arg1 + 0x1a8))() == 0)
    int64_t* rcx_16 = *arg2
    result = (*(*rcx_16 + 0x30))(rcx_16)
    uint32_t count_2 = result[1].d
    
    if (count_2 != 0)
        int32_t rcx_17 = arg3[1].d
        int32_t rdx_5 = rcx_17 + count_2
        
        if (rdx_5 s> *(arg3 + 0xc))
            sub_1405c5510(arg3, rdx_5)
            rcx_17 = arg3[1].d
        
        memcpy(sx.q(rcx_17) + *arg3, *result, count_2)
        arg3[1].d += count_2
    
label_141da797a:
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rdi_2 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_2))
    
    result.b = 1
else
    void** var_c8
    sub_140b4c2a0(&var_c8)
    int64_t* rcx_1 = *arg2
    var_c8 = &data_143239ba8
    int64_t var_38
    __builtin_memset(&var_38, 0, 0x15)
    int64_t* rax_3 = (*(*rcx_1 + 0x30))(rcx_1)
    
    if (&var_38 != rax_3)
        uint32_t count_1 = rax_3[1].d
        int64_t var_30
        int32_t r8 = var_30:4.d
        int64_t r15_1 = *rax_3
        var_30.d = count_1
        
        if (count_1 != 0 || r8 != 0)
            sub_1405da9e0(&var_38, count_1, r8)
            memcpy(var_38, r15_1, count_1)
        else
            var_30:4.d = 0
    
    int64_t rax_4 = *arg1
    int64_t var_d8 = 0
    uint32_t count = 0
    
    if ((*(rax_4 + 0x1b8))(arg1, &var_c8, &var_d8) != 0)
        if (count != 0)
            int32_t rax_6 = arg3[1].d
            int32_t rdx_3 = rax_6 + count
            
            if (rdx_3 s> *(arg3 + 0xc))
                sub_1405c5510(arg3, rdx_3)
                rax_6 = arg3[1].d
            
            memcpy(sx.q(rax_6) + *arg3, var_d8, count)
            arg3[1].d += count
        
        int64_t rcx_13 = var_d8
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_38
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        sub_140b4cb40(&var_c8)
        goto label_141da797a
    
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0)
        sub_1405c5510(arg3, 0)
    
    int64_t rcx_6 = var_d8
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = var_38
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_140b4cb40(&var_c8)
    sub_140669db0(arg2)
    result.b = 0

return result
