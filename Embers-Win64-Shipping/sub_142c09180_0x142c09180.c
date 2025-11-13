// 函数: sub_142c09180
// 地址: 0x142c09180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rax_2 = arg3
int64_t var_d0 = arg7
int32_t var_d8 = arg4
int128_t* rbx = arg2
int32_t var_e0 = arg1.d
char const* const var_e8 = "face=%p num_features=%d shaper_list=%p"
int32_t var_f0 = 0
int64_t var_f8 = 0
void* var_c0 = rax_2

while (true)
    int64_t* r14_1 = *(arg1 + 0x168)
    var_118 = var_118
    int32_t rsi_1 = *arg1
    int128_t* result
    
    if (rsi_1 != 0)
        var_d8.q = arg7
        void var_a8
        
        if (sub_142c08db0(&var_a8, 0, arg1, rbx, rax_2, arg4, arg5, arg6, var_d8) == 0)
            __security_check_cookie(rax_1 ^ &var_118)
            return &data_14369a5d0
        
        int64_t* rdi_1 = r14_1
        
        if (r14_1 != 0)
            while (true)
                void* rbx_1 = *rdi_1
                
                if (sub_142bf5ee0(rbx_1 + 0x18, &var_a8) != 0)
                    int32_t r9_2 = *(rbx_1 + 0x40)
                    int32_t var_80
                    
                    if (r9_2 == var_80)
                        int32_t r8_2 = 0
                        
                        if (r9_2 != 0)
                            int64_t r10_1 = *(rbx_1 + 0x38)
                            
                            do
                                uint64_t rcx_8 = zx.q(r8_2) * 2
                                int64_t var_88
                                
                                if (*(r10_1 + (rcx_8 << 3)) != *(var_88 + (rcx_8 << 3)))
                                    goto label_142c09334
                                
                                if (*(r10_1 + (rcx_8 << 3) + 4) != *(var_88 + (rcx_8 << 3) + 4))
                                    goto label_142c09334
                                
                                int32_t rdx_1
                                
                                if (*(r10_1 + (rcx_8 << 3) + 8) != 0
                                        || *(r10_1 + (rcx_8 << 3) + 0xc) != 0xffffffff)
                                    rdx_1 = 0
                                else
                                    rdx_1 = 1
                                
                                int32_t rax_7
                                
                                if (*(var_88 + (rcx_8 << 3) + 8) != 0
                                        || *(var_88 + (rcx_8 << 3) + 0xc) != 0xffffffff)
                                    rax_7 = 0
                                else
                                    rax_7 = 1
                                
                                if (rdx_1 != rax_7)
                                    goto label_142c09334
                                
                                r8_2 += 1
                            while (r8_2 u< r9_2)
                        
                        int64_t var_7c
                        int64_t var_70
                        
                        if (*(rbx_1 + 0x44) == var_7c && *(rbx_1 + 0x50) == var_70)
                            result = *rdi_1
                            
                            if (result != 0 && *result != 0)
                                *result
                                *result += 1
                            
                            break
                
            label_142c09334:
                rdi_1 = rdi_1[1]
                
                if (rdi_1 == 0)
                    rbx = arg2
                    goto label_142c09346
            
            __security_check_cookie(rax_1 ^ &var_118)
            return result
        
    label_142c09346:
        rax_2 = var_c0
    
    result = sub_142c09030(arg1, rbx, rax_2, arg4, arg5, arg6, arg7)
    
    if (rsi_1 == 0)
        __security_check_cookie(rax_1 ^ &var_118)
        return result
    
    int128_t** rax_10 = sub_140dc0ea0(1, 0x10)
    
    if (rax_10 == 0)
        __security_check_cookie(rax_1 ^ &var_118)
        return result
    
    *rax_10 = result
    rax_10[1] = r14_1
    bool z_1
    
    if (r14_1 == *(arg1 + 0x168))
        *(arg1 + 0x168) = rax_10
        z_1 = true
    else
        z_1 = false
    
    if (z_1)
        if (result != 0 && *result != 0)
            *result
            *result += 1
        
        __security_check_cookie(rax_1 ^ &var_118)
        return result
    
    if (result != 0 && *result != 0)
        int32_t rax_12 = *result
        *result -= 1
        
        if (rax_12 == 1)
            *result = 0xffff2153
            CRITICAL_SECTION* lpCriticalSection = *(result + 8)
            var_118 = var_118
            
            if (lpCriticalSection != 0)
                sub_142bf2560(&lpCriticalSection[1], lpCriticalSection)
                DeleteCriticalSection(lpCriticalSection)
                j_sub_140a74f90(lpCriticalSection)
            
            sub_142c070a0(&result[6])
            j_sub_140a74f90(*(result + 0x38))
            j_sub_140a74f90(result)
    
    j_sub_140a74f90(rax_10)
    rax_2 = var_c0
    rbx = arg2
