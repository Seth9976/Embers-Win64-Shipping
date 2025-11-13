// 函数: sub_14213df90
// 地址: 0x14213df90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r12 = *(arg1 + 0x410)
void* r15 = arg1
int32_t i = 0
int32_t i_1 = 0

if (*(r15 + 0x440) s> 0)
    int64_t* rsi_1 = r12 + 0x88
    int64_t* r14_1 = nullptr
    int64_t* var_78_1 = nullptr
    
    do
        void* rdi_1 = *(r14_1 + *(r15 + 0x438))
        int32_t arg_20
        sub_140865c40(rsi_1, &arg_20, *(rdi_1 + 0x10))
        int64_t rax_1 = sx.q(arg_20)
        void* const rcx_1
        
        if (rax_1.d == 0xffffffff)
            rcx_1 = nullptr
        else
            rcx_1 = *rsi_1 + rax_1 * 0x18
        
        void** rax_3 = rcx_1 + 8
        
        if (rcx_1 == 0)
            rax_3 = nullptr
        
        if (rax_3 == 0)
            void*** rax_4 = j_sub_140a82f30(zx.q((&rax_3[6]).d))
            
            if (rax_4 == 0)
                rax_4 = nullptr
            else
                rax_4[1].d = 0xffffffff
                *(rax_4 + 0xc) = 4
                rax_4[2] = 0
                *rax_4 = &data_1432dae58
                rax_4[3] = 0
                rax_4[4] = 0
                rax_4[5].b = 1
            
            void*** var_70 = rax_4
            void* var_58 = rdi_1 + 0x10
            void** var_50_1 = &var_70
            int32_t var_88
            sub_142135f00(rsi_1, &var_88, &var_58, nullptr)
            rax_3 = *rsi_1 + sx.q(var_88) * 0x18 + 8
        
        void* rbx_2 = *rax_3
        int32_t j = 0
        *(rdi_1 + 0x40) = rbx_2
        void* var_68_1 = rbx_2
        int32_t j_1 = 0
        *(rdi_1 + 0x48) = *(rbx_2 + 0x20)
        *(rdi_1 + 0x4c) = 0
        *(rdi_1 + 0x50) = 0xffffffff
        *(rdi_1 + 0x54) = 0
        *(rdi_1 + 0x64) = data_143dbb1f8.q
        int32_t rax_9 = data_143dbb200
        *(rdi_1 + 0x6c) = rax_9
        *(rdi_1 + 0x58) = *(rdi_1 + 0x64)
        *(rdi_1 + 0x60) = rax_9
        *(rdi_1 + 0x70) = 0
        
        if (*(rdi_1 + 0x20) s> 0)
            void* rcx_5 = nullptr
            void* var_80_1 = nullptr
            
            do
                uint32_t rcx_6 = zx.d(*(rcx_5 + *(rdi_1 + 0x18)))
                
                if (rcx_6 s< *(r12 + 0x30))
                    void* rsi_4 = (zx.q(rcx_6) << 6) + *(r12 + 0x28)
                    
                    if (*(rsi_4 + 0x36) != 0)
                        int64_t rax_11 = sx.q(*(rsi_4 + 0x14))
                        
                        if (rax_11.d s>= 0 && rax_11.d s< *(r12 + 0x70))
                            void* rax_14 = rax_11 * 0x50 + *(r12 + 0x68)
                            
                            if ((*(rax_14 + 8) & 0x4000000) == 0)
                                int32_t k = 0
                                int32_t rax_32
                                
                                do
                                    uint32_t rax_21 = zx.d(*(rsi_4 + 0x36))
                                    int32_t rdx_4 = 0
                                    
                                    if (rax_21.b != 0)
                                        do
                                            int64_t rax_19 = sx.q(*(*(r12 + 0x38)
                                                + sx.q(*(rsi_4 + 0x10) + rdx_4) * 0x18)) * 3
                                            int64_t rcx_9 = *(r12 + 0x58)
                                            
                                            if (*(rdi_1 + 0x70) == 0)
                                                *(rdi_1 + 0x64) = *(rcx_9 + (rax_19 << 2))
                                                int32_t rax_20 = *(rcx_9 + (rax_19 << 2) + 8)
                                                *(rdi_1 + 0x6c) = rax_20
                                                *(rdi_1 + 0x58) = *(rdi_1 + 0x64)
                                                *(rdi_1 + 0x60) = rax_20
                                                *(rdi_1 + 0x70) = 1
                                            else
                                                int64_t temp0_1 = __minss_xmmss_memss(
                                                    (*(rdi_1 + 0x58)).d, *(rcx_9 + (rax_19 << 2)))
                                                int32_t zmm1 = *(rdi_1 + 0x64)
                                                *(rdi_1 + 0x58) = temp0_1.d
                                                *(rdi_1 + 0x5c) = __minss_xmmss_memss(
                                                    (*(rdi_1 + 0x5c)).d, 
                                                    *(rcx_9 + (rax_19 << 2) + 4)).d
                                                *(rdi_1 + 0x60) = __minss_xmmss_memss(
                                                    (*(rdi_1 + 0x60)).d, 
                                                    *(rcx_9 + (rax_19 << 2) + 8)).d
                                                int32_t temp0_4 = __maxss_xmmss_memss(zmm1, 
                                                    *(rcx_9 + (rax_19 << 2)))
                                                int64_t zmm0 = *(rdi_1 + 0x68)
                                                *(rdi_1 + 0x64) = temp0_4
                                                *(rdi_1 + 0x68) = __maxss_xmmss_memss(zmm0.d, 
                                                    *(rcx_9 + (rax_19 << 2) + 4)).d
                                                *(rdi_1 + 0x6c) = __maxss_xmmss_memss(
                                                    *(rcx_9 + (rax_19 << 2) + 8), *(rdi_1 + 0x6c))
                                            
                                            rax_21 = zx.d(*(rsi_4 + 0x36))
                                            rdx_4 += 1
                                        while (rdx_4 s< rax_21)
                                    
                                    int32_t r15_1 = 2
                                    
                                    if (rax_21.b u> 2)
                                        uint32_t rcx_16
                                        
                                        do
                                            int64_t r14_2 = sx.q(*(rbx_2 + 0x20))
                                            int32_t rax_22 = (r14_2 + 1).d
                                            int32_t rbp_2 = zx.d(rax_21.b) * k + *(rsi_4 + 0x18)
                                            *(rbx_2 + 0x20) = rax_22
                                            
                                            if (rax_22 s> *(rbx_2 + 0x24))
                                                sub_1405a4cf0(rbx_2 + 0x18)
                                            
                                            *(*(rbx_2 + 0x18) + (r14_2 << 2)) = rbp_2
                                            int64_t r14_3 = sx.q(*(rbx_2 + 0x20))
                                            int32_t rax_24 = (r14_3 + 1).d
                                            int32_t rbp_6 =
                                                zx.d(*(rsi_4 + 0x36)) * k + r15_1 + *(rsi_4 + 0x18)
                                            *(rbx_2 + 0x20) = rax_24
                                            
                                            if (rax_24 s> *(rbx_2 + 0x24))
                                                sub_1405a4cf0(rbx_2 + 0x18)
                                            
                                            *(*(rbx_2 + 0x18) + (r14_3 << 2)) = rbp_6
                                            int64_t rbp_7 = sx.q(*(rbx_2 + 0x20))
                                            int32_t rcx_13 = zx.d(*(rsi_4 + 0x36)) * k
                                            int32_t r14_5 = *(rsi_4 + 0x18) - 1
                                            int32_t rax_26 = (rbp_7 + 1).d
                                            *(rbx_2 + 0x20) = rax_26
                                            int32_t r14_6 = r14_5 + rcx_13 + r15_1
                                            
                                            if (rax_26 s> *(rbx_2 + 0x24))
                                                sub_1405a4cf0(rbx_2 + 0x18)
                                            
                                            r15_1 += 1
                                            *(*(rbx_2 + 0x18) + (rbp_7 << 2)) = r14_6
                                            *(rdi_1 + 0x4c) += 1
                                            rcx_16 = zx.d(*(rsi_4 + 0x36))
                                            rax_21 = zx.d(rcx_16.b)
                                        while (r15_1 s< rcx_16)
                                        rbx_2 = var_68_1
                                    
                                    int32_t r8_3 = *(rdi_1 + 0x54)
                                    int32_t rcx_17 = *(rdi_1 + 0x50)
                                    int32_t rax_30 = zx.d(rax_21.b) * k + *(rsi_4 + 0x18)
                                    
                                    if (rax_30 u<= rcx_17)
                                        rcx_17 = rax_30
                                    
                                    *(rdi_1 + 0x50) = rcx_17
                                    k += 1
                                    int32_t rdx_10 = *(rsi_4 + 0x18) - 1 + zx.d(*(rsi_4 + 0x36)) * k
                                    
                                    if (rdx_10 u>= r8_3)
                                        r8_3 = rdx_10
                                    
                                    *(rdi_1 + 0x54) = r8_3
                                    rax_32.b = (*(rax_14 + 8) & 0x100) != 0
                                while (k u< rax_32 + 1)
                                j = j_1
                    else
                        *(rdi_1 + 0x50) = 0
                
                j += 1
                rcx_5 = var_80_1 + 2
                j_1 = j
                var_80_1 = rcx_5
            while (j s< *(rdi_1 + 0x20))
            
            i = i_1
            rsi_1 = r12 + 0x88
            r14_1 = var_78_1
            r15 = arg1
        
        int32_t rdx_11 = *(rbx_2 + 0x20)
        
        if (*(rbx_2 + 0x24) != rdx_11)
            sub_1405dadb0(rbx_2 + 0x18, rdx_11)
        
        result = sub_142293ef0(rbx_2)
        i += 1
        r14_1 = &r14_1[1]
        i_1 = i
        var_78_1 = r14_1
    while (i s< *(r15 + 0x440))

return result
