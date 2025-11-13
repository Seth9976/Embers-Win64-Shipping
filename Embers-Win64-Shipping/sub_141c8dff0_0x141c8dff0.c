// 函数: sub_141c8dff0
// 地址: 0x141c8dff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
void** result = __security_cookie ^ &var_98
void** result_1 = result

if (*(arg1 + 0x1b9) != 0)
    int64_t performanceCount[0x2]
    QueryPerformanceCounter(&performanceCount)
    int64_t r14_1 = *arg2
    int64_t* rdi_1 = arg2[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t rbp_1 = *arg3
    int64_t* rbx_1 = arg3[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void*** rax_1 = sub_140a82f30(0x30, 8)
    *rax_1 = &data_14320fcc0
    rax_1[1] = arg1
    rax_1[2] = r14_1
    rax_1[3] = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    rax_1[4] = rbp_1
    rax_1[5] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    *rax_1 = &data_14320fce0
    void*** var_58_1 = rax_1
    void* var_68
    void* const rax_2 = var_68
    
    if (rax_1 != -8)
        rax_2 = &data_141c85280
    
    void* const var_68_1 = rax_2
    result = j_sub_140a82f30(0x50)
    void** result_2 = result
    int128_t var_48
    
    if (result != 0)
        *result = nullptr
        result[2] = var_68_1
        result[4] = var_58_1
        var_58_1 = nullptr
        *(result + 0x30) = var_48
        int128_t var_38
        *(result + 0x40) = var_38
        void* const rax_3 = var_68_1
        
        if (result_2[2] != 0)
            rax_3 = nullptr
        
        var_68_1 = rax_3
        void** result_3 = *(arg1 + 0x1d0)
        *(arg1 + 0x1d0) = result_2
        result = result_3
        void** result_4 = *result
        *result = result_2
        result_2 = result_4
    
    if (var_68_1 != 0)
        void*** rcx_4 = &var_48
        
        if (var_58_1 != 0)
            rcx_4 = var_58_1
        
        result = (*rcx_4)[2](rcx_4, result_2)
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        rbx_1[1].d -= 1
        
        if (result.d == 1)
            (**rbx_1)(rbx_1)
            result = zx.q(*(rbx_1 + 0xc))
            *(rbx_1 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rdi_1 != 0)
        result = zx.q(rdi_1[1].d)
        rdi_1[1].d -= 1
        
        if (result.d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t rsi_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

__security_check_cookie(result_1 ^ &var_98)
return result
