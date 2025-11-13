// 函数: sub_14128c8e0
// 地址: 0x14128c8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0xa0)
int64_t result = sx.q(*(arg1 + 0xa8))
void* r15_1 = result * 0x5240 + r14

if (r14 != r15_1)
    int32_t* rbx_1 = r14 + 0x4830
    
    do
        int32_t rax = rbx_1[-0xc98]
        void* rsi_1 = &rbx_1[-6]
        int32_t rcx_1 = rbx_1[1] + 0x1f
        *rbx_1 = rax
        uint64_t rcx_2 = zx.q(rcx_1 u>> 5)
        uint32_t rbp_2 = (rax + 0x1f) u>> 5
        
        if (rbp_2 u<= rcx_2.d)
            void* rax_6 = *(rbx_1 - 8)
            
            if (rax_6 != 0)
                rsi_1 = rax_6
            
            if (rcx_2.d u> 8)
                memset(rsi_1, 0, zx.q(rcx_2.d) << 2)
            else if (rcx_2.d != 0)
                __builtin_memset(rsi_1, 0, rcx_2 << 2)
        else
            sub_1410b36b0(rsi_1, 0, rbp_2, 4)
            rbx_1[1] = rbp_2 << 5
            void* rax_3 = *(rbx_1 - 8)
            
            if (rax_3 != 0)
                rsi_1 = rax_3
            
            if (rbp_2 u> 8)
                memset(rsi_1, 0, zx.q(rbp_2) << 2)
            else if (rbp_2 != 0)
                __builtin_memset(rsi_1, 0, zx.q(rbp_2) << 2)
            
            void* rdx_1 = rsi_1 + (zx.q(rbp_2 - 1) << 2)
            *rdx_1 &= 0xffffffff u>> ((neg.d(*rbx_1)).b & 0x1f)
        
        int32_t rax_7 = rbx_1[-0xc6c]
        void* rsi_2 = &rbx_1[2]
        int32_t rcx_11 = rbx_1[9] + 0x1f
        rbx_1[8] = rax_7
        uint64_t rcx_12 = zx.q(rcx_11 u>> 5)
        uint32_t rbp_4 = (rax_7 + 0x1f) u>> 5
        
        if (rbp_4 u<= rcx_12.d)
            void* rax_13 = *(rbx_1 + 0x18)
            
            if (rax_13 != 0)
                rsi_2 = rax_13
            
            if (rcx_12.d u> 8)
                memset(rsi_2, 0, zx.q(rcx_12.d) << 2)
            else if (rcx_12.d != 0)
                __builtin_memset(rsi_2, 0, rcx_12 << 2)
        else
            sub_1410b36b0(rsi_2, 0, rbp_4, 4)
            rbx_1[9] = rbp_4 << 5
            void* rax_10 = *(rbx_1 + 0x18)
            
            if (rax_10 != 0)
                rsi_2 = rax_10
            
            if (rbp_4 u> 8)
                memset(rsi_2, 0, zx.q(rbp_4) << 2)
            else if (rbp_4 != 0)
                __builtin_memset(rsi_2, 0, zx.q(rbp_4) << 2)
            
            void* rdx_2 = rsi_2 + (zx.q(rbp_4 - 1) << 2)
            *rdx_2 &= 0xffffffff u>> ((neg.d(rbx_1[8])).b & 0x1f)
        
        int64_t rsi_3 = sx.q(rbx_1[-0xc54])
        int64_t rdi_5 = sx.q(rbx_1[0xc])
        int32_t rax_14 = (rdi_5 + rsi_3).d
        rbx_1[0xc] = rax_14
        
        if (rax_14 s> rbx_1[0xd])
            sub_14083a440(&rbx_1[0xa], rdi_5.d)
        
        memset(*(rbx_1 + 0x28) + (rdi_5 << 3), 0, rsi_3 << 3)
        void* rbp_5 = &rbx_1[-0xc72]
        void* rsi_4 = &rbx_1[0xe]
        
        if (rsi_4 != rbp_5)
            sub_141095ed0(rsi_4, rbx_1[-0xc6c])
            int32_t rax_16 = rbx_1[-0xc6c]
            rbx_1[0x14] = rax_16
            
            if (rax_16 != 0)
                void* rdi_6 = *(rbx_1 - 0x31b8)
                void* r9_1 = *(rbx_1 + 0x48)
                
                if (rdi_6 != 0)
                    rbp_5 = rdi_6
                
                if (r9_1 != 0)
                    rsi_4 = r9_1
                
                memcpy(rsi_4, rbp_5, (zx.q(rax_16 + 0x1f) u>> 5 << 2).d)
        
        result = &rbx_1[-0xc56]
        
        if (&rbx_1[0x16] != result)
            int64_t rdi_7 = sx.q(rbx_1[-0xc54])
            int64_t rbp_6 = *result
            int32_t r8_16 = rbx_1[0x19]
            rbx_1[0x18] = rdi_7.d
            
            if (rdi_7.d != 0 || r8_16 != 0)
                sub_14119a550(&rbx_1[0x16], rdi_7.d, r8_16)
                result = memcpy(*(rbx_1 + 0x58), rbp_6, (rdi_7 << 3).d)
            else
                rbx_1[0x19] = 0
        
        r14 += 0x5240
        rbx_1 = &rbx_1[0x1490]
    while (r14 != r15_1)

return result
