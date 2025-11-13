// 函数: sub_140850790
// 地址: 0x140850790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd9) != 0)
    int64_t* rbx_1 = nullptr
    int64_t* rsi_1 = *(arg1 + 0xc8)
    int64_t rdi_1 = 0
    uint64_t r15_2 = sx.q(*(arg1 + 0xd0)) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0xd0))])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t* r14_1 = *rsi_1
            
            if ((*(*r14_1 + 0x20))(r14_1, zx.q(arg2)) != 0 && rbx_1 == 0)
                rbx_1 = r14_1
            
            rsi_1 = &rsi_1[1]
            rdi_1 += 1
        while (rdi_1 != r15_2)
    
    return rbx_1

if (*(arg1 + 0xd8) == 0)
    return nullptr

void* rax_4 = *(arg1 + 0xc0)
int64_t r10_1 = sx.q(*(rax_4 + 0x268))
int32_t temp0_1 = r10_1.d
bool cond:1_1 = temp0_1 != 0

if (temp0_1 s> 0)
    void* r11_1 = *(rax_4 + 0x260)
    int32_t r8_1 = 0
    int64_t rcx_1 = 0
    int32_t* rax_5 = r11_1 + 0x24
    
    do
        if (arg2 u>= rax_5[-1] && arg2 u< *rax_5)
            void* r8_2 = r11_1 + sx.q(r8_1) * 0x28
            
            if (r8_2 == 0)
                goto label_14085086c
            
            int64_t r8_3 = *r8_2
            
            if (r8_3 != 0)
                int64_t** rcx_4 = *(arg1 + 0xc8)
                void* rdx_3 = &rcx_4[sx.q(*(arg1 + 0xd0))]
                
                if (rcx_4 != rdx_3)
                    do
                        int64_t* rax_9 = *rcx_4
                        
                        if (rax_9[3] == r8_3)
                            return rax_9
                        
                        rcx_4 = &rcx_4[1]
                    while (rcx_4 != rdx_3)
                    
                    return nullptr
            
            goto label_1408508ff
        
        r8_1 += 1
        rcx_1 += 1
        rax_5 = &rax_5[0xa]
    while (rcx_1 s< r10_1)
    
label_14085086c:
    cond:1_1 = r10_1.d != 0

if (not(cond:1_1))
    int64_t** rdi_2 = *(arg1 + 0xc8)
    void* r14_2 = &rdi_2[sx.q(*(arg1 + 0xd0))]
    
    if (rdi_2 != r14_2)
        do
            int64_t* rsi_2 = *rdi_2
            
            if ((*(*rsi_2 + 0x20))(rsi_2, zx.q(arg2)) != 0)
                return rsi_2
            
            rdi_2 = &rdi_2[1]
        while (rdi_2 != r14_2)
        
        return nullptr

label_1408508ff:
return nullptr
