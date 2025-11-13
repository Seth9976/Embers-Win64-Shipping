// 函数: sub_141c439f0
// 地址: 0x141c439f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c335f0(arg1)
CRITICAL_SECTION* lpCriticalSection = &arg1[9]
EnterCriticalSection(lpCriticalSection)
int32_t rbp = arg1[8].d
int32_t r14 = 0x7fffffff
int32_t rbp_1 = rbp - 1

if (rbp - 1 s>= 0)
    int64_t r15_2 = sx.q(rbp_1) * 0x18
    int32_t temp2_1
    
    do
        int64_t* rdi_2 = arg1[7] + r15_2
        int64_t* rcx_1 = *rdi_2
        int32_t rsi_1
        
        if (rcx_1 != 0)
            rsi_1 = sub_141c437f0(rcx_1, arg2, arg3)
            int32_t rax_5 = (rdi_2[2].d + 1) & 0x800000ff
            
            if (rax_5 s< 0)
                rax_5 = ((rax_5 - 1) | 0xffffff00) + 1
            
            rdi_2[2].d = rax_5
            
            if (rax_5 == 0)
                void* rdx_1 = rdi_2[1]
                
                if (rdx_1 != 0)
                    if (rax_5 == *(rdx_1 + 8))
                        *(rdx_1 + 8) = 0
                    else
                        rax_5 = *(rdx_1 + 8)
                    
                    if (rax_5 == 1)
                        int128_t var_48 = zx.o(0)
                        
                        if (rdi_2 != &var_48)
                            *rdi_2 = 0
                            sub_1405aeff0(&rdi_2[1], &var_48:8)
                            void* rcx_3 = var_48:8.q
                            
                            if (rcx_3 != 0)
                                int32_t rax_8 = *(rcx_3 + 8)
                                *(rcx_3 + 8) -= 1
                                
                                if (rax_8 == 1)
                                    int64_t* rdi_3 = var_48:8.q
                                    (**rdi_3)(rdi_3)
                                    int32_t rax_10 = *(rdi_3 + 0xc)
                                    *(rdi_3 + 0xc) -= 1
                                    
                                    if (rax_10 == 1)
                                        int64_t* rcx_5 = var_48:8.q
                                        (*(*rcx_5 + 8))(rcx_5, 1)
        
        if (rcx_1 == 0 || rsi_1 s< 0)
            sub_141c44f40(&arg1[7], rbp_1, 1, 1)
        else
            if (r14 s<= rsi_1)
                rsi_1 = r14
            
            r14 = rsi_1
        
        r15_2 -= 0x18
        temp2_1 = rbp_1
        rbp_1 -= 1
    while (temp2_1 - 1 s>= 0)

if (rbp - 1 s< 0 || r14 == 0x7fffffff)
    r14 = -1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(r14)
