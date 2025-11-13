// 函数: sub_14223bc50
// 地址: 0x14223bc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x10)

if (r14 != 0)
    int64_t* r15_1 = *(arg1 + 8)
    void* rcx = nullptr
    
    if (*(r14 + 0xc) u>= 2)
        rcx = r14
    
    if (rcx != 0)
        sub_14179c500(rcx, &r15_1[0x12], &r15_1[0x1c])
        AcquireSRWLockExclusive(r15_1[4] + 0x3b8)
        void* rcx_3 = r15_1[4]
        int32_t rdi_1 = 0
        int32_t rax_1 = *(rcx_3 + 0x3b0)
        
        if (rax_1 s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                int64_t r9_1 = *(rcx_3 + 0x3a8)
                
                if (*(rsi_1 + r9_1) != r14)
                    rdi_1 += 1
                    rsi_1 = &rsi_1[2]
                else
                    int32_t rcx_6 = rax_1 - rdi_1 - 1
                    
                    if (rcx_6 s>= 1)
                        rcx_6 = 1
                    
                    if (rcx_6 != 0)
                        memcpy((sx.q(rdi_1) << 4) + r9_1, (sx.q(rax_1 - rcx_6) << 4) + r9_1, 
                            rcx_6 << 4)
                        rax_1 = *(rcx_3 + 0x3b0)
                    
                    *(rcx_3 + 0x3b0) = rax_1 - 1
                    sub_1405a5010(rcx_3 + 0x3a8)
                    rax_1 = *(rcx_3 + 0x3b0)
            while (rdi_1 s< rax_1)
            
            rcx_3 = r15_1[4]
        
        ReleaseSRWLockExclusive(rcx_3 + 0x3b8)
    
    int64_t rbx_2 = sx.q(*(r14 + 0x10))
    sub_1417b4570(&r15_1[0x48], rbx_2.d)
    
    if (rbx_2.d u< r15_1[0x4b].d)
        *(*(r15_1[0x4d] + (rbx_2 << 3)) + 0x10) = rbx_2.d
    
    sub_14175b460(r15_1)
    *(arg1 + 0x10) = 0
    int64_t* rcx_14 = *(arg1 + 0x18)
    *(arg1 + 0x18) = 0
    
    if (rcx_14 != 0)
        (**rcx_14)(rcx_14, 1)

int64_t result = sub_14223ba20(arg1 + 0x20)
int64_t* rcx_16 = *(arg1 + 0x18)

if (rcx_16 == 0)
    return result

jump(**rcx_16)
