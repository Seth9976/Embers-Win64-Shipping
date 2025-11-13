// 函数: sub_142bd3e10
// 地址: 0x142bd3e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*(*(arg1 + 0x10) + 0x28) = 0
uint64_t r11 = zx.q(*(arg1 + 0x20))

if (r11.d != 0)
    void* rcx = arg1 + 0x20
    void* rbx_1 = arg1 + 0x38
    void* rbp_1 = arg1 + 0x1c
    void* rsi_1 = arg1 + 0x28
    void* r13_1 = arg1 + 0x18
    void* r14_1 = arg1 + 0x3c
    void* arg_18 = rsi_1
    void* arg_10 = arg1 + 0x20
    void* arg_20 = rbx_1
    
    do
        int32_t rax_2 = *rsi_1
        int64_t r12_1 = rdi + 1
        int32_t rdx_2 = rax_2 & 0xc
        
        if (rdx_2 == 0)
            r12_1 = rdi
        
        if (((rax_2 u>> 4).b & 1) == 0)
            int32_t rcx_1 = 0
            int32_t r8_2 = *r14_1 - (*r14_1 & 0xffff0000)
            void* r10_3 = (r12_1 << 5) + arg1
            int32_t r9_2 = neg.d(r8_2)
            int32_t rdx_4 = *(r10_3 + 0x3c) - (*(r10_3 + 0x3c) & 0xffff0000)
            int32_t rbx_3 = neg.d(rdx_4)
            
            if (r8_2 != 0)
                rcx_1 = r9_2 + 0x10000
            
            int32_t r8_3 = 0
            
            if (rdx_4 != 0)
                r8_3 = rbx_3 + 0x10000
            
            if (rcx_1 s< r8_3)
                r8_3 = rcx_1
            
            if (r9_2 s> rbx_3)
                rbx_3 = r9_2
            
            if (r12_1 u>= zx.q((r11 - 1).d) || *(r10_3 + 0x5c) s>= *(r10_3 + 0x3c) + 0x8000 + r8_3)
                if (rdi == 0 || *rbp_1 s<= *r14_1 - 0x8000 + rbx_3)
                    if (neg.d(rbx_3) s< r8_3)
                        r8_3 = rbx_3
                    
                    rbx_3 = r8_3
                else
                    rbx_3 = r8_3
            else if (rdi == 0 || *rbp_1 s<= *r14_1 - 0x8000 + rbx_3)
                int32_t rax_17
                rax_17.b = r8_3 s< neg.d(rbx_3)
                
                if (rax_17.b != 0)
                    goto label_142bd3f64
            else
                rbx_3 = 0
            label_142bd3f64:
                
                if (((*(r10_3 + 0x48) u>> 4).b & 1) == 0)
                    int64_t* rsi_2 = *(arg1 + 0x10)
                    int64_t var_60 = r12_1
                    int32_t var_58_1 = r8_3 - rbx_3
                    int64_t rcx_3 = rsi_2[3]
                    char rax_20
                    
                    if (rsi_2[5] == rcx_3)
                        rax_20 = sub_142bd1560(rsi_2, rsi_2[4] + rcx_3)
                    
                    if (rsi_2[5] != rcx_3 || rax_20 != 0)
                        int64_t r8_5 = rsi_2[2]
                        memcpy(r8_5 * rsi_2[5] + rsi_2[7], &var_60, r8_5.d)
                        rsi_2[5] += 1
                    
                    rsi_1 = arg_18
            
            *r14_1 += rbx_3
            rcx = arg_10
            
            if (rdx_2 != 0)
                *(r10_3 + 0x3c) += rbx_3
            
            rbx_1 = arg_20
        
        if (rdi != 0)
            int32_t rdx_8 = *rbx_1
            int32_t rax_21 = *r13_1
            
            if (rdx_8 != rax_21)
                rcx = arg_10
                *rcx = sub_142b91790(*r14_1 - *rbp_1, rdx_8 - rax_21)
        
        if (rdx_2 != 0)
            int64_t r12_2 = r12_1 << 5
            int32_t rdx_10 = *(r12_2 + arg1 + 0x38)
            int32_t rax_23 = *(r12_2 + arg1 + 0x18)
            
            if (rdx_10 != rax_23)
                rcx = arg_10
                *(r12_2 + arg1 + 0x20) =
                    sub_142b91790(*(r12_2 + arg1 + 0x3c) - *(r12_2 + arg1 + 0x1c), rdx_10 - rax_23)
            
            rdi += 1
            rsi_1 += 0x20
            rbx_1 += 0x20
            r13_1 += 0x20
            r14_1 += 0x20
            rbp_1 += 0x20
            rcx += 0x20
        
        r11 = zx.q(*(arg1 + 0x20))
        rsi_1 += 0x20
        rbx_1 += 0x20
        arg_18 = rsi_1
        rcx += 0x20
        arg_20 = rbx_1
        rdi += 1
        arg_10 = rcx
        r13_1 += 0x20
        r14_1 += 0x20
        rbp_1 += 0x20
    while (rdi u< r11)

uint64_t result = *(arg1 + 0x10)
int64_t i_1 = *(result + 0x28)

if (i_1 != 0)
    int64_t r9_3 = i_1 - 1
    int64_t i
    
    do
        void* rax_25 = *(arg1 + 0x10)
        int64_t rcx_12 = r9_3
        
        if (r9_3 u>= *(rax_25 + 0x28))
            int32_t* rcx_13 = *(rax_25 + 8)
            
            if (rcx_13 != 0 && *rcx_13 == 0)
                *rcx_13 = 0x82
            
            rcx_12 = 0
        
        int64_t* rdx_14 = *(rax_25 + 0x10) * rcx_12 + *(rax_25 + 0x38)
        void* r8_8 = (*rdx_14 << 5) + arg1
        int32_t r11_2 = *(r8_8 + 0x3c) + rdx_14[1].d
        result = zx.q(r11_2 + 0x8000)
        
        if (*(r8_8 + 0x5c) s>= result.d)
            bool cond:2_1 = (*(r8_8 + 0x28) & 0xc) == 0
            *(r8_8 + 0x3c) = r11_2
            
            if (not(cond:2_1))
                result = zx.q(rdx_14[1].d)
                *(r8_8 + 0x1c) += result.d
        
        r9_3 -= 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
