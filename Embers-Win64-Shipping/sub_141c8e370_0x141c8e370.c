// 函数: sub_141c8e370
// 地址: 0x141c8e370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t* result = __security_cookie ^ &var_a8
int64_t* result_1 = result

if (*(arg1 + 0x1b9) != 0)
    if (sub_140a54810() != 0)
        if (*(arg1 + 0x58) != 0)
        label_141c8e3fa:
            int64_t* rcx_2 = *(arg1 + 0x70)
            *(arg1 + 0x58) = 1
            (*(*rcx_2 + 0x20))(rcx_2, 0xffffffff, 0)
        else
            int64_t* rbx_1 = *(arg1 + 0x60)
            void* rdi_3 = &rbx_1[sx.q(*(arg1 + 0x68)) * 2]
            
            if (rbx_1 != rdi_3)
                while (true)
                    int64_t* rcx = *rbx_1
                    
                    if ((**rcx)(rcx) != 0)
                        int64_t* rcx_1 = *rbx_1
                        
                        if ((*(*rcx_1 + 8))(rcx_1, arg2) != 0)
                            break
                    
                    rbx_1 = &rbx_1[2]
                    
                    if (rbx_1 == rdi_3)
                        goto label_141c8e415
                
                goto label_141c8e3fa
    
label_141c8e415:
    int64_t performanceCount[0x2]
    QueryPerformanceCounter(&performanceCount)
    int64_t* rbx_2 = arg2[1]
    int64_t rbp_1 = *arg2
    int128_t zmm6
    zmm6.q = float.d(performanceCount[0])
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void*** rax_7 = sub_140a82f30(0x28, 8)
    *rax_7 = &data_142ff86c8
    rax_7[1] = arg1
    rax_7[2] = rbp_1
    rax_7[3] = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    rax_7[4] = zmm6.q
    *rax_7 = &data_142ff86e8
    void*** var_68_1 = rax_7
    void* var_78
    void* const rax_8 = var_78
    
    if (rax_7 != -8)
        rax_8 = &data_141c852d0
    
    void* const var_78_1 = rax_8
    result = j_sub_140a82f30(0x50)
    int64_t* result_2 = result
    int128_t var_58
    
    if (result != 0)
        *result = 0
        result[2] = var_78_1
        result[4] = var_68_1
        var_68_1 = nullptr
        *(result + 0x30) = var_58
        int128_t var_48
        *(result + 0x40) = var_48
        void* const rax_9 = var_78_1
        
        if (result_2[2] != 0)
            rax_9 = nullptr
        
        var_78_1 = rax_9
        int64_t* result_3 = *(arg1 + 0x1d0)
        *(arg1 + 0x1d0) = result_2
        result = result_3
        int64_t* result_4 = *result
        *result = result_2
        result_2 = result_4
    
    if (var_78_1 != 0)
        int64_t* rcx_7 = &var_58
        
        if (var_68_1 != 0)
            rcx_7 = var_68_1
        
        result = (*(*rcx_7 + 0x10))(rcx_7, result_2)
    
    if (rbx_2 != 0)
        result = zx.q(rbx_2[1].d)
        rbx_2[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t rsi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

__security_check_cookie(result_1 ^ &var_a8)
return result
