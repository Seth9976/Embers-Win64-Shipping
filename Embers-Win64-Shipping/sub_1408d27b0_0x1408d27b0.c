// 函数: sub_1408d27b0
// 地址: 0x1408d27b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x58)
int64_t result = sx.q(*(arg1 + 0x60))
void* r12_2 = result * 0xa0 + r15

if (r15 != r12_2)
    void* rbx_1 = r15 + 0x60
    
    do
        int32_t i = 0
        
        if (*(rbx_1 - 0x38) s> 0)
            int32_t rbp_1 = 1
            void** rdi_1 = nullptr
            
            do
                void* r9_1 = *rbx_1
                int32_t i_1 = i
                void* rcx = *(rbx_1 - 0x20)
                
                if (i s< 0)
                    i_1 = i + 0x1f
                
                int64_t rdx_1 = sx.q(i_1 s>> 5) << 2
                void* rax_2 = rbx_1 - 0x30
                
                if (rcx != 0)
                    rax_2 = rcx
                
                void* rcx_1 = *(rbx_1 + 0x20)
                void* rax_3 = rbx_1 + 0x10
                
                if (rcx_1 != 0)
                    rax_3 = rcx_1
                
                void* rax_4 = rbx_1 - 0x10
                int32_t r14_2 = *(rax_3 + rdx_1) & rbp_1
                
                if (r9_1 != 0)
                    rax_4 = r9_1
                
                rcx_1.b = (*(rax_4 + rdx_1) & rbp_1) != 0
                int32_t r8_2 = *(rax_2 + rdx_1) & rbp_1
                rax_4.b = r8_2 != 0
                int64_t* rcx_2
                
                if (rax_4.b != rcx_1.b)
                    rcx_2 = *(rdi_1 + *(rbx_1 - 0x40))
                    int64_t rax_6 = *rcx_2
                    
                    if (r8_2 == 0)
                        rcx_1 = (*(rax_6 + 0x340))(rcx_2, 0)
                    else
                        rdx_1.b = 1
                        rcx_1 = (*(rax_6 + 0x340))(rcx_2, rdx_1)
                else if (r8_2 == 0)
                    int64_t* rcx_3 = *(rdi_1 + *(rbx_1 - 0x40))
                    char rax_9
                    rax_9, rcx_1 = (*(*rcx_3 + 0x350))(rcx_3)
                    
                    if (rax_9 != 0)
                        rcx_2 = *(rdi_1 + *(rbx_1 - 0x40))
                        rcx_1 = (*(*rcx_2 + 0x340))(rcx_2, 0)
                void* rdx_2 = *(rdi_1 + *(rbx_1 - 0x40))
                rcx_1.b = sbb.b(rcx_1.b, rcx_1.b, r14_2 != 0)
                rcx_1.b &= 0x20
                rcx_1.b |= *(rdx_2 + 0x5a7) & 0xdf
                *(rdx_2 + 0x5a7) = rcx_1.b
                char rdx_3 = 3
                
                if (r14_2 != 0)
                    rdx_3 = 0
                
                i += 1
                rbp_1 = rol.d(rbp_1, 1)
                void* rcx_4 = *(rdi_1 + *(rbx_1 - 0x40))
                rdi_1 = &rdi_1[1]
                *(rcx_4 + 0x5a4) = rdx_3
            while (i s< *(rbx_1 - 0x38))
        
        void* rbp_2 = rbx_1 - 0x10
        void* rsi_1 = rbx_1 - 0x30
        
        if (rbp_2 != rsi_1)
            sub_14059a8e0(rbp_2, *(rbx_1 - 0x18))
            int32_t rax_15 = *(rbx_1 - 0x18)
            *(rbx_1 + 8) = rax_15
            
            if (rax_15 != 0)
                void* rdi_2 = *(rbx_1 - 0x20)
                void* r9_2 = *rbx_1
                void* rdx_5 = rsi_1
                
                if (rdi_2 != 0)
                    rdx_5 = rdi_2
                
                if (r9_2 != 0)
                    rbp_2 = r9_2
                
                memcpy(rbp_2, rdx_5, (zx.q(rax_15 + 0x1f) u>> 5 << 2).d)
        
        int32_t rax_16 = *(rbx_1 + 8)
        int32_t rcx_8 = *(rbx_1 - 0x14) + 0x1f
        *(rbx_1 - 0x18) = rax_16
        uint64_t rcx_9 = zx.q(rcx_8 u>> 5)
        uint32_t rbp_4 = (rax_16 + 0x1f) u>> 5
        
        if (rbp_4 u<= rcx_9.d)
            void* rax_22 = *(rbx_1 - 0x20)
            
            if (rax_22 != 0)
                rsi_1 = rax_22
            
            if (rcx_9.d u> 8)
                memset(rsi_1, 0, zx.q(rcx_9.d) << 2)
            else if (rcx_9.d != 0)
                __builtin_memset(rsi_1, 0, rcx_9 << 2)
        else
            sub_1405a4a00(rsi_1, 0, rbp_4, 4)
            *(rbx_1 - 0x14) = rbp_4 << 5
            void* rax_19 = *(rbx_1 - 0x20)
            
            if (rax_19 != 0)
                rsi_1 = rax_19
            
            if (rbp_4 u> 8)
                memset(rsi_1, 0, zx.q(rbp_4) << 2)
            else if (rbp_4 != 0)
                __builtin_memset(rsi_1, 0, zx.q(rbp_4) << 2)
            
            void* rdx_6 = rsi_1 + (zx.q(rbp_4 - 1) << 2)
            *rdx_6 &= 0xffffffff u>> ((neg.d(*(rbx_1 - 0x18))).b & 0x1f)
        
        int64_t result_1 = rbx_1 + 0x10
        uint32_t rsi_4 = (*(rbx_1 + 0x28) + 0x1f) u>> 5
        uint64_t rcx_19 = zx.q((*(rbx_1 + 0x2c) + 0x1f) u>> 5)
        
        if (rsi_4 u<= rcx_19.d)
            result = *(rbx_1 + 0x20)
            
            if (result != 0)
                result_1 = result
            
            if (rcx_19.d u> 8)
                result = memset(result_1, 0, zx.q(rcx_19.d) << 2)
            else if (rcx_19.d != 0)
                result = 0
                __builtin_memset(result_1, 0, rcx_19 << 2)
        else
            sub_1405a4a00(result_1, 0, rsi_4, 4)
            *(rbx_1 + 0x2c) = rsi_4 << 5
            int64_t result_2 = *(rbx_1 + 0x20)
            
            if (result_2 != 0)
                result_1 = result_2
            
            if (rsi_4 u> 8)
                memset(result_1, 0, zx.q(rsi_4) << 2)
            else if (rsi_4 != 0)
                __builtin_memset(result_1, 0, zx.q(rsi_4) << 2)
            
            int32_t* rdx_7 = result_1 + (zx.q(rsi_4 - 1) << 2)
            result = zx.q(0xffffffff u>> ((neg.d(*(rbx_1 + 0x28))).b & 0x1f))
            *rdx_7 &= result.d
        
        *(rbx_1 - 0x58) = 0xffffffff
        r15 += 0xa0
        rbx_1 += 0xa0
    while (r15 != r12_2)

return result
