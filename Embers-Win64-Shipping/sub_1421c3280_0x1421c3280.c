// 函数: sub_1421c3280
// 地址: 0x1421c3280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rcx = *(arg1 + 0x10)

if (rcx != 0)
    int32_t rax = *(arg1 + 0x188)
    
    if (rax == 0 || rax != *(rcx + 0x48))
        int32_t rsi_1 = 0
        *(arg1 + 0x188) = 0
        
        if (*(arg1 + 0x18c) != 0)
            sub_1405dadb0(arg1 + 0x180, 0)
            rsi_1 = *(arg1 + 0x188)
        
        int64_t rbp_1 = sx.q(*(*(arg1 + 0x10) + 0x48))
        int32_t rax_2 = rsi_1 + rbp_1.d
        *(arg1 + 0x188) = rax_2
        
        if (rax_2 s> *(arg1 + 0x18c))
            sub_1406105e0(arg1 + 0x180)
        
        int64_t rdx_2 = *(arg1 + 0x180)
        memmove(rdx_2 + (rbp_1 << 2), rdx_2, rsi_1 << 2)
        rcx = *(arg1 + 0x10)
    
    int32_t i = 0
    
    if (*(rcx + 0x48) s> 0)
        int64_t* r12_1 = nullptr
        
        do
            int64_t rsi_2 = *(arg1 + 0x100)
            void* rbp_2 = *(r12_1 + *(rcx + 0x40))
            void* rdi_2 = *(rbp_2 + 0x30)
            void* rax_7
            void* rcx_7
            
            if (rsi_2 == 0)
                rax_7 = *(arg1 + 0x18)
                rcx_7 = rax_7 + 0x610
            else
                int32_t arg_8
                sub_140865c40(rcx + 0x100, &arg_8, rdi_2)
                int64_t rax_4 = sx.q(arg_8)
                void* const rcx_5
                
                if (rax_4.d == 0xffffffff)
                    rcx_5 = nullptr
                else
                    rcx_5 = *(rcx + 0x100) + rax_4 * 0x18
                
                int32_t* rax_6 = rcx_5 + 8
                
                if (rcx_5 == 0)
                    rax_6 = nullptr
                
                if (rax_6 == 0)
                    rax_7 = *(arg1 + 0x18)
                    rcx_7 = rax_7 + 0x610
                else
                    uint64_t rcx_6 = zx.q(*rax_6)
                    rcx_7 = rcx_6 + rsi_2
                    
                    if (rcx_6 == neg.q(rsi_2))
                        rax_7 = *(arg1 + 0x18)
                        rcx_7 = rax_7 + 0x610
                    else
                        rax_7 = *(arg1 + 0x18)
            
            float zmm2 = *(rax_7 + 0x4fc) f+ *(rdi_2 + 0xa0)
            *(arg1 + 0x190) = zmm2
            float zmm1
            
            if ((*(rdi_2 + 0xaa) & 2) != 0)
                int32_t rax_9 = *(rcx_7 + 4) * 0xbb38435 + 0x3619636b
                *(rcx_7 + 4) = rax_9
                zmm1 = *(rdi_2 + 0xa4)
                zmm2 = (*(rdi_2 + 0xa0) - zmm1) * ((rax_9 u>> 9 | 0x3f800000) - 1f)
                    + zmm1 f+ *(*(arg1 + 0x18) + 0x4fc)
                *(arg1 + 0x190) = zmm2
            
            if ((*(rdi_2 + 0x5b) & 4) == 0)
                zmm2 = zmm2 f+ *(rdi_2 + 0x5c)
            else
                int32_t rax_14 = *(rcx_7 + 4) * 0xbb38435 + 0x3619636b
                *(rcx_7 + 4) = rax_14
                zmm1 = *(rdi_2 + 0xf4)
                zmm2 = (*(rdi_2 + 0x5c) - zmm1) * ((rax_14 u>> 9 | 0x3f800000) - 1f)
                    + zmm1 f+ *(arg1 + 0x190)
            
            *(*(arg1 + 0x180) + (sx.q(*(rbp_2 + 0x28)) << 2)) = zmm2
            
            if (*(arg1 + 0x170) == 1 && (*(rdi_2 + 0xa8) & 1) != 0)
                int32_t rax_18 = *(rdi_2 + 0xe4)
                
                if (rax_18 s>= 0 && rax_18 != 1)
                    int64_t rcx_9 = sx.q(*(rbp_2 + 0x28))
                    int64_t rax_19 = *(arg1 + 0x180)
                    *(rax_19 + (rcx_9 << 2)) = *(rax_19 + (rcx_9 << 2)) f- *(arg1 + 0x190)
            
            rcx = *(arg1 + 0x10)
            i += 1
            r12_1 = &r12_1[1]
        while (i s< *(rcx + 0x48))
    
    result = *(arg1 + 0x180)
    *(arg1 + 0x178) = *(result + (sx.q(*(arg1 + 0x20)) << 2))

return result
