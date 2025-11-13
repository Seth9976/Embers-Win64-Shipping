// 函数: sub_141c8dba0
// 地址: 0x141c8dba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
void** result = __security_cookie ^ &var_e8
void** result_1 = result

if (*(arg1 + 0x1b9) != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t r15_1 = *arg2
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    int64_t* rdi_1 = arg2[1]
    void* var_c0_1 = arg1
    int64_t var_b8_1 = r15_1
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t r14_1 = *arg3
    int64_t* rbx_1 = arg3[1]
    int64_t var_a8_1 = r14_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_98_1 = zmm6.q
    char var_90_1 = arg4
    void*** rax_1 = sub_140a82f30(0x40, 8)
    *rax_1 = &data_14320fc40
    rax_1[1] = arg1
    rax_1[2] = r15_1
    rax_1[3] = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    rax_1[4] = r14_1
    rax_1[5] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rax_1[6] = zmm6.q
    rax_1[7].b = arg4
    *rax_1 = &data_14320fc60
    void*** var_78_1 = rax_1
    void* var_88
    void* const rax_2 = var_88
    
    if (rax_1 != -8)
        rax_2 = &data_141c852e0
    
    void* const var_88_1 = rax_2
    result = j_sub_140a82f30(0x50)
    void** result_2 = result
    int128_t var_68
    
    if (result != 0)
        *result = nullptr
        result[2] = var_88_1
        result[4] = var_78_1
        var_78_1 = nullptr
        *(result + 0x30) = var_68
        int128_t var_58
        *(result + 0x40) = var_58
        void* const rax_3 = var_88_1
        
        if (result_2[2] != 0)
            rax_3 = nullptr
        
        var_88_1 = rax_3
        void** result_3 = *(arg1 + 0x1d0)
        *(arg1 + 0x1d0) = result_2
        result = result_3
        void** result_4 = *result
        *result = result_2
        result_2 = result_4
    
    if (var_88_1 != 0)
        void*** rcx_4 = &var_68
        
        if (var_78_1 != 0)
            rcx_4 = var_78_1
        
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
            int32_t rdi_2 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, zx.q(rdi_2))

__security_check_cookie(result_1 ^ &var_e8)
return result
