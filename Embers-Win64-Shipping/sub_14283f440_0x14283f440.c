// 函数: sub_14283f440
// 地址: 0x14283f440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char var_68 = 0
int64_t* rax_2 = sub_14284b270(&var_68)
uint64_t result

if (rax_2 != 0)
    int64_t* var_60 = nullptr
    int32_t result_2 = (*(*rax_2 + 0x50))(rax_2, &var_60)
    int32_t result_1 = result_2
    
    if (result_2 s>= 0)
        int32_t var_58 = 0
        int64_t* rcx_2 = var_60
        
        if ((*(*rcx_2 + 0x48))(rcx_2, arg2, arg3, &var_58) s< 0 || var_58 == 0)
            result_1 = -0x7fff0001
        else
            int64_t rcx_3 = *(arg1 + 0x18)
            int64_t rdx_2
            
            if (rcx_3 u<= 0xffffffff)
                rdx_2 = *(arg1 + 0x20)
            
            if (rcx_3 u> 0xffffffff || rdx_2 u> 0xffffffff || *(arg7 + 0x18) u> 0xffffffff
                    || *(arg7 + 0x20) u> 0xffffffff)
                result_1 = -0x7ff8fdea
            else
                int64_t* var_50 = nullptr
                int32_t result_3 = (*(*rax_2 + 0xa0))(rax_2, zx.q(*arg1), zx.q(arg1[2]), arg2, 
                    rcx_3.d, rdx_2.d, *(arg1 + 0x28), &var_50)
                result_1 = result_3
                
                if (result_3 s>= 0)
                    int32_t rdi_1 = arg4 & 0xf0000
                    int64_t r9_2
                    
                    if (rdi_1 == 0x10000)
                        r9_2 = 1
                    else
                        r9_2 = 8
                        
                        if (rdi_1 != 0x20000)
                            r9_2 = 0
                    
                    int64_t* rcx_5 = var_60
                    int64_t rax_7 = *rcx_5
                    float zmm0[0x2] = arg6
                    zmm0[0] = zmm0[0] * 100f
                    arg5 = _mm_cvtps_pd(zmm0)
                    int64_t var_78_1
                    var_78_1.d = 1
                    int32_t var_80_1
                    var_80_1.q = arg5
                    int32_t var_88_1
                    var_88_1.q = 0
                    int32_t result_4 =
                        (*(rax_7 + 0x40))(rcx_5, var_50, arg3, r9_2, var_88_1, var_80_1, var_78_1)
                    result_1 = result_4
                    
                    if (result_4 s>= 0)
                        int64_t* rcx_6 = var_60
                        var_88_1.q = *(arg7 + 0x28)
                        int32_t result_5 = (*(*rcx_6 + 0x38))(rcx_6, 0, zx.q(*(arg7 + 0x18)), 
                            zx.q(*(arg7 + 0x20)), var_88_1)
                        result_1 = result_5
                        
                        if (result_5 s>= 0)
                            result_1 = 0
                
                int64_t* rcx_7 = var_50
                
                if (rcx_7 != 0)
                    var_50 = nullptr
                    (*(*rcx_7 + 0x10))(rcx_7, arg5)
    
    int64_t* rcx_8 = var_60
    
    if (rcx_8 != 0)
        var_60 = nullptr
        int64_t rdx_5 = *rcx_8
        (*(rdx_5 + 0x10))(rcx_8, rdx_5)
    
    result = zx.q(result_1)
else
    result = 0x80004002

__security_check_cookie(rax_1 ^ &var_a8)
return result
