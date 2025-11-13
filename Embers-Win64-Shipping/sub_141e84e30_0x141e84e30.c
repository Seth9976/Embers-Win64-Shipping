// 函数: sub_141e84e30
// 地址: 0x141e84e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0xf8
EnterCriticalSection(lpCriticalSection)
int32_t arg_8
sub_140865c40(arg1 + 0x10, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rsi_1 = *(arg1 + 0x10) + rax * 0x18
    
    if (rsi_1 != 0)
        int64_t* rsi_2 = *(rsi_1 + 8)
        
        if (rsi_2 != 0)
            sub_140868c90(arg1 + 0x10, arg2)
            
            for (int32_t i = 0; i s< 3; i += 1)
                sub_141e760a0(rsi_2, zx.o(0))
                
                if (sub_141e8cb60(rsi_2) == 0)
                    break
            
            void* i_1 = rsi_2[2]
            
            for (void* rbp_3 = (sx.q(rsi_2[3].d) << 5) + i_1; i_1 != rbp_3; i_1 += 0x20)
                int64_t* rcx_5 = *(i_1 + 8)
                
                if (rcx_5 != 0)
                    (*(*rcx_5 + 0x28))(rcx_5)
                    int64_t* rcx_6 = *(i_1 + 8)
                    (*(*rcx_6 + 0x10))(rcx_6, zx.o(0))
                    int64_t* rcx_7 = *(i_1 + 8)
                    
                    if (rcx_7 != 0)
                        (**rcx_7)(rcx_7, 1)
                    
                    *(i_1 + 8) = 0
                    sub_141e82770(rsi_2[9])
                
                int64_t rcx_9 = *i_1
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                *i_1 = 0
                *(i_1 + 0x10) = 0
                *(i_1 + 0x18) = 0
            
            EnterCriticalSection(arg1 + 0xd0)
            int32_t rbp_4 = *(arg1 + 0xc8)
            int32_t rbp_5 = rbp_4 - 1
            
            if (rbp_4 - 1 s>= 0)
                void** r15_1 = sx.q(rbp_5) << 3
                void** r12_1 = r15_1
                int32_t temp1_1
                
                do
                    void* rcx_11 = *(r15_1 + *(arg1 + 0xc0))
                    
                    if (*(rcx_11 + 8) == rsi_2)
                        j_sub_140a74f90(rcx_11)
                        int32_t rdx_3 = *(arg1 + 0xc8)
                        int32_t rax_10 = rdx_3 - rbp_5 - 1
                        
                        if (rax_10 s>= 1)
                            rax_10 = 1
                        
                        if (rax_10 != 0)
                            void* rcx_12 = *(arg1 + 0xc0)
                            memcpy(rcx_12 + r12_1, rcx_12 + (sx.q(rdx_3 - rax_10) << 3), 
                                rax_10 << 3)
                            rdx_3 = *(arg1 + 0xc8)
                        
                        *(arg1 + 0xc8) = rdx_3 - 1
                    
                    r12_1 -= 8
                    r15_1 -= 8
                    temp1_1 = rbp_5
                    rbp_5 -= 1
                while (temp1_1 - 1 s>= 0)
                lpCriticalSection = arg1 + 0xf8
            
            if (arg1 != -0xd0)
                LeaveCriticalSection(arg1 + 0xd0)
            
            int64_t rcx_15 = rsi_2[6]
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            int64_t rcx_16 = rsi_2[4]
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            int64_t rcx_17 = rsi_2[2]
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            j_sub_140a74f90(rsi_2)

uint64_t result = sub_141e845c0(arg1 + 0x70, arg2)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection) __tailcall
