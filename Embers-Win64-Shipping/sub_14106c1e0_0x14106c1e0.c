// 函数: sub_14106c1e0
// 地址: 0x14106c1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* lpCriticalSection = arg1 + 0x50
int64_t result = EnterCriticalSection(lpCriticalSection)

if (arg2 != *(arg1 + 0x88))
    int32_t rbp_1 = -1
    int32_t i = 0
    
    if (*(arg1 + 0x80) s> 0)
        int32_t rdx = 0
        int32_t* r8_1 = nullptr
        
        do
            result = *(arg1 + 0x78)
            int32_t r9_1 = *(r8_1 + result)
            bool cond:0_1 = r9_1 != arg2
            
            if (r9_1 u> arg2)
                if (*(r8_1 + result + 4) u> 0)
                    break
                
                cond:0_1 = r9_1 != arg2
            
            if (not(cond:0_1))
                *(r8_1 + result + 4) -= 1
            
            if (i == rdx && *(r8_1 + result + 4) == 0)
                rbp_1 += 1
                rdx += 1
            
            i += 1
            r8_1 = &r8_1[0x18]
        while (i s< *(arg1 + 0x80))
        
        if (rbp_1 s>= 0)
            int64_t rsi_1 = 0
            int64_t i_2 = sx.q(rbp_1) + 1
            int64_t i_1
            
            do
                void* rdi_2 = *(arg1 + 0x78) + rsi_1
                CRITICAL_SECTION* rcx_1 = *(rdi_2 + 8)
                rcx_1->__offset(0x80).d = 0
                arg5, arg3, arg4 = sub_1405fc0f0(rcx_1, arg5, arg3, arg4)
                int64_t rcx_2 = *(rdi_2 + 0x20)
                
                if (rcx_2 != 0)
                    int64_t rax_2 = *(rdi_2 + 0x30)
                    *(rdi_2 + 0x30) = 0
                    arg5 = *(rdi_2 + 0x50)
                    int128_t var_58 = *(rdi_2 + 0x40)
                    *(rdi_2 + 0x20) = 0
                    int64_t var_a8_1 = 0
                    void*** rax_3 = sub_140a82f30(0x50, 0x10)
                    *rax_3 = &data_142f045c8
                    rax_3[2] = rcx_2
                    rax_3[4] = rax_2
                    int128_t* var_68_2 = nullptr
                    *(rax_3 + 0x30) = var_58
                    *(rax_3 + 0x40) = arg5
                    int64_t rax_4 = rcx_2
                    
                    if (rax_3[2] != 0)
                        rax_4 = 0
                    
                    *rax_3 = &data_142f045e8
                    int64_t (* var_b8)(int64_t* arg1)
                    int64_t (* rax_5)(int64_t* arg1) = var_b8
                    
                    if (rax_3 != -0x10)
                        rax_5 = sub_14106bb20
                    
                    void*** var_a8_2 = rax_3
                    var_b8 = rax_5
                    arg5 = sub_140a20e40(2, &var_b8)
                    
                    if (rax_4 != 0)
                        int128_t* rcx_5 = &var_58
                        
                        if (var_68_2 != 0)
                            rcx_5 = var_68_2
                        
                        (*(*rcx_5 + 0x10))(rcx_5)
                
                rsi_1 += 0x60
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            result = sub_14106dab0(arg1 + 0x78, 0, rbp_1 + 1, 0)
else
    *(arg1 + 0x8c) -= 1

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_e8)
return result
