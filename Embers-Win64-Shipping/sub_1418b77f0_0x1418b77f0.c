// 函数: sub_1418b77f0
// 地址: 0x1418b77f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x30))

if (rdx.d s>= 0)
    int32_t r8_1 = *(arg1 + 0x28)
    
    if (rdx.d s< r8_1)
        int64_t* rcx_2 = *(*(arg1 + 0x20) + rdx * 0x10)
        
        if (rcx_2 != 0)
            if (rdx.d s< 0 || rdx.d s>= r8_1)
                rcx_2 = nullptr
            
            if ((*(*rcx_2 + 0x50))(rcx_2) == 2)
                int64_t rax_4 = sx.q(*(arg1 + 0x30))
                int64_t* rbx_1
                
                if (rax_4.d s>= 0 && rax_4.d s< *(arg1 + 0x28))
                    rbx_1 = *(*(arg1 + 0x20) + rax_4 * 0x10)
                
                if (rax_4.d s>= 0 && rax_4.d s< *(arg1 + 0x28) && rbx_1 != 0)
                    while (true)
                        char rax_7
                        int64_t rdx_1
                        rax_7, rdx_1 = (*(*rbx_1 + 0x40))(rbx_1)
                        
                        if (rax_7 != 0)
                            break
                        
                        arg2 = sub_1418b37f0(arg1, rdx_1, arg2)

EnterCriticalSection(arg1 + 0x80)
char* rcx_8 = *(arg1 + 0x78)

if (rcx_8 != 0)
    sub_1418b21b0(rcx_8)
    char* rbp_1 = *(arg1 + 0x78)
    
    if (rbp_1 != 0)
        sub_1418b21b0(rbp_1)
        int64_t* rsi_1 = *(rbp_1 + 0x28)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t r14_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, zx.q(r14_1))
        
        j_sub_140a74f90(rbp_1)
    
    *(arg1 + 0x78) = 0

int64_t result = sub_1418b76d0(arg1)

if (arg1 == -0x80)
    return result

return LeaveCriticalSection(arg1 + 0x80) __tailcall
