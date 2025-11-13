// 函数: sub_141d36450
// 地址: 0x141d36450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d36a60(arg1)
arg1[0x11] = arg2[0x11]

if (&arg1[2] != &arg2[2])
    int64_t rdi_1 = sx.q(arg2[4])
    int64_t rsi_1 = *(arg2 + 8)
    int32_t r8_1 = arg1[5]
    arg1[4] = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1405c4a90(&arg1[2], rdi_1.d, r8_1)
        memcpy(*(arg1 + 8), rsi_1, (rdi_1 << 2).d)
    else
        arg1[5] = rdi_1.d

void* rbx_1 = &arg2[6]

if (&arg1[6] != rbx_1)
    sub_14059a8e0(&arg1[6], *(rbx_1 + 0x18))
    int32_t rax_2 = *(rbx_1 + 0x18)
    arg1[0xc] = rax_2
    
    if (rax_2 != 0)
        void* rcx_3 = *(rbx_1 + 0x10)
        void* r9_1 = *(arg1 + 0x28)
        
        if (rcx_3 != 0)
            rbx_1 = rcx_3
        
        void* rcx_4 = &arg1[6]
        
        if (r9_1 != 0)
            rcx_4 = r9_1
        
        memcpy(rcx_4, rbx_1, (zx.q(rax_2 + 0x1f) u>> 5 << 2).d)

*arg1 = *arg2
uint64_t result = sx.q(arg1[0x11])

if (result.d s> 0)
    *(arg1 + 0x38) = sub_140a82f30(result * 0x28, 8)
    int32_t rcx_7 = arg2[0x10]
    int32_t i = 0
    arg1[0x10] = rcx_7
    result = zx.q(arg2[0x12])
    arg1[0x12] = result.d
    
    if (rcx_7 s> 0)
        do
            void* rax_5 = *(arg1 + 0x28)
            void* r8_7 = &arg1[6]
            
            if (rax_5 != 0)
                r8_7 = rax_5
            
            int32_t i_1 = i
            
            if (i s< 0)
                i_1 = i + 0x1f
            
            result = zx.q(*(r8_7 + (sx.q(i_1 s>> 5) << 2)))
            
            if (test_bit(result.d, i & 0x1f))
                int64_t rcx_10 = sx.q(i) * 5
                int32_t* rdi_2 = *(arg2 + 0x38) + (rcx_10 << 3)
                int32_t* rsi_2 = *(arg1 + 0x38) + (rcx_10 << 3)
                *rsi_2 = *rdi_2
                rsi_2[1] = rdi_2[1]
                *(rsi_2 + 8) = 0
                int64_t r12_1 = sx.q(rdi_2[4])
                int64_t rax_12 = *(rdi_2 + 8)
                rsi_2[4] = r12_1.d
                
                if (r12_1.d != 0)
                    sub_1405c4a90(&rsi_2[2], r12_1.d, 0)
                    memcpy(*(rsi_2 + 8), rax_12, (r12_1 << 2).d)
                else
                    rsi_2[5] = 0
                
                rsi_2[6] = rdi_2[6]
                rsi_2[7] = rdi_2[7]
                result = zx.q(rdi_2[8])
                rsi_2[8] = result.d
            
            i += 1
        while (i s< arg1[0x10])

return result
