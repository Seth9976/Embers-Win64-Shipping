// 函数: sub_141999340
// 地址: 0x141999340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
int32_t rdi = 0
int32_t r14 = *(rax + 8)

if (r14 s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rbx_1 = *(rsi_1 + **(arg1 + 0x10))
        
        if (*(rbx_1 + 0x20) != 0)
            int64_t* rcx_1 = data_143f0f180
            (*(*rcx_1 + 0x138))(rcx_1, &data_143f02b98, *(rbx_1 + 8))
            *(rbx_1 + 0x20) = 0
            *(rbx_1 + 0x28) = 0
        else if (data_1439c85b0 != 0 && *(rbx_1 + 0x28) == 0)
            *(rbx_1 + 0x2c) += 1
            
            if (*(rbx_1 + 0x2c) s>= data_1439c85b0)
                *(rbx_1 + 0x18) = 0
                sub_1405d16e0(rbx_1 + 8, nullptr)
                sub_1405d16e0(rbx_1 + 0x10, nullptr)
                int64_t* rbx_2 = *(arg1 + 0x10)
                int64_t r15_1 = sx.q(rdi) << 3
                int64_t* rcx_4 = *(r15_1 + *rbx_2)
                
                if (rcx_4 != 0)
                    (**rcx_4)(rcx_4, 1)
                
                int32_t rcx_7 = rbx_2[1].d
                int32_t rax_9 = rcx_7 - rdi - 1
                
                if (rax_9 s>= 1)
                    rax_9 = 1
                
                if (rax_9 != 0)
                    int64_t r9_1 = *rbx_2
                    memcpy(r9_1 + r15_1, r9_1 + (sx.q(rcx_7 - rax_9) << 3), rax_9 << 3)
                    rcx_7 = rbx_2[1].d
                
                rbx_2[1].d = rcx_7 - 1
                sub_1405c53d0(rbx_2)
                rdi -= 1
                rsi_1 -= 8
                r14 -= 1
        
        rdi += 1
        rsi_1 = &rsi_1[1]
    while (rdi s< r14)
    
    rax = *(arg1 + 0x10)

*(rax + 0x10) = 0
int32_t rdi_1 = 0
void* result = *(arg1 + 0x18)
int32_t r14_1 = *(result + 8)

if (r14_1 s> 0)
    int64_t* rsi_2 = nullptr
    
    do
        void* rbx_4 = *(rsi_2 + **(arg1 + 0x18))
        
        if (*(rbx_4 + 0x20) != 0)
            int64_t* rcx_9 = data_143f0f180
            (*(*rcx_9 + 0x138))(rcx_9, &data_143f02b98, *(rbx_4 + 8))
            *(rbx_4 + 0x20) = 0
            *(rbx_4 + 0x28) = 0
        else if (data_1439c85b0 != 0 && *(rbx_4 + 0x28) == 0)
            *(rbx_4 + 0x2c) += 1
            
            if (*(rbx_4 + 0x2c) s>= data_1439c85b0)
                *(rbx_4 + 0x18) = 0
                sub_1405d16e0(rbx_4 + 8, nullptr)
                sub_1405d16e0(rbx_4 + 0x10, nullptr)
                int64_t* rbx_5 = *(arg1 + 0x18)
                int64_t r15_2 = sx.q(rdi_1) << 3
                int64_t* rcx_12 = *(r15_2 + *rbx_5)
                
                if (rcx_12 != 0)
                    (**rcx_12)(rcx_12, 1)
                
                int32_t rcx_15 = rbx_5[1].d
                int32_t rax_20 = rcx_15 - rdi_1 - 1
                
                if (rax_20 s>= 1)
                    rax_20 = 1
                
                if (rax_20 != 0)
                    int64_t r9_2 = *rbx_5
                    memcpy(r9_2 + r15_2, r9_2 + (sx.q(rcx_15 - rax_20) << 3), rax_20 << 3)
                    rcx_15 = rbx_5[1].d
                
                rbx_5[1].d = rcx_15 - 1
                sub_1405c53d0(rbx_5)
                rdi_1 -= 1
                rsi_2 -= 8
                r14_1 -= 1
        
        rdi_1 += 1
        rsi_2 = &rsi_2[1]
    while (rdi_1 s< r14_1)
    
    result = *(arg1 + 0x18)

*(result + 0x10) = 0
*(arg1 + 0x20) = 0
return result
