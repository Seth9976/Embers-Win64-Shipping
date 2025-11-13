// 函数: sub_142c19480
// 地址: 0x142c19480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
int64_t r12
r12.b = 0
int64_t r13
r13.b = 0
arg2[0xc].d = 0
void* rdi = arg1 + 8
uint32_t r14_3 =
    (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
uint32_t rax_4 = zx.d(*(arg1 + 7))
uint32_t r14_4 = r14_3 + rax_4
int32_t r15 = 0

if (r14_3 != neg.d(rax_4))
    do
        uint8_t rax_5 = *(rdi + 4)
        
        if ((rax_5 & 0x20) == 0)
            void* r10_1 = arg2[3]
            int32_t rbp_1 = *(r10_1 + 0x38)
            uint32_t rdx
            rdx.b = not.b(rax_5 u>> 7)
            int32_t rcx
            rcx.b = (rbp_1 & 0xfffffffe) == 4
            
            if (rcx == (rdx & 1))
                int32_t rbp_2 = rbp_1 & 0xfffffffd
                int32_t var_80_1 = arg2[0xc].d
                int32_t var_88_1 = 0x6e
                int32_t var_90_1 = 0x72
                
                if (sub_142c22650(r10_1, arg2[1], "start %c%c%c%c subtable %d", 0x6b) != 0)
                    if (r13.b == 0 && (*(rdi + 4) & 0x40) != 0)
                        r13.b = 1
                        void* rax_10 = arg2[3]
                        int32_t i_2 = *(rax_10 + 0x60)
                        
                        if (i_2 != 0)
                            void* rdx_4 = *(rax_10 + 0x80) + 0x10
                            uint64_t i_1 = zx.q(i_2)
                            uint64_t i
                            
                            do
                                *(rdx_4 + 2) = 2
                                int16_t rax_12 = 1
                                
                                if ((*(arg2[3] + 0x38) & 0xfffffffd) == 4)
                                    rax_12 = 0xffff
                                
                                *rdx_4 = rax_12
                                rdx_4 += 0x14
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                    
                    if (rbp_2 == 5)
                        sub_142bf5780(arg2[3])
                    
                    char* rdx_5 = nullptr
                    
                    if (r15 u< r14_4 - 1)
                        rdx_5 = rdi
                    
                    void* arg_8 = &arg2[4]
                    void* rax_14 = arg2[9]
                    int64_t rcx_5 = *(rax_14 + 0x10)
                    arg2[5] = rcx_5
                    int64_t r8_2 = zx.q(*(rax_14 + 0x18)) + rcx_5
                    arg2[6] = r8_2
                    
                    if (rdx_5 != 0)
                        void* rax_20
                        
                        if (rdx_5 u< rcx_5 || r8_2 u<= rdx_5)
                            rax_20 = nullptr
                            arg2[5] = 0
                        else
                            arg2[5] = rdx_5
                            uint64_t rcx_12 = (((((zx.q(*rdx_5) << 8) + zx.q(rdx_5[1])) << 8)
                                + zx.q(rdx_5[2])) << 8) + zx.q(rdx_5[3])
                            uint64_t rax_19 = r8_2 - rdx_5
                            
                            if (rax_19 u>= rcx_12)
                                rax_19 = rcx_12
                            
                            rax_20 = &rdx_5[rax_19]
                        
                        arg2[6] = rax_20
                    
                    uint32_t rax_22 = zx.d(*(rdi + 5))
                    
                    if (rax_22 == 0)
                        void* rcx_17 = *arg2
                        
                        if ((*(rcx_17 + 0xb8) & 1) != 0)
                            void* var_50 = rdi
                            int64_t* var_48_1 = arg2
                            uint8_t rax_24 = *(rdi + 4)
                            void** var_40 = &var_50
                            uint8_t var_38_1 = rax_24 u>> 6 & 1
                            sub_142c210d0(&var_40, arg2[1], arg2[3], *(rcx_17 + 0xb0), 1)
                            rax_22.b = 1
                        else
                            rax_22.b = 0
                    else
                        int32_t rax_21 = rax_22 - 1
                        
                        if (rax_22 == 1)
                            rax_22 = sub_142c193a0(rdi, arg2)
                        else if (rax_21 == 1)
                            void* rcx_14 = *arg2
                            
                            if ((*(rcx_14 + 0xb8) & 1) != 0)
                                void* var_70 = rdi
                                int64_t* var_68_1 = arg2
                                uint8_t rax_23 = *(rdi + 4)
                                void** var_60 = &var_70
                                uint8_t var_58_1 = rax_23 u>> 6 & 1
                                sub_142c21650(&var_60, arg2[1], arg2[3], *(rcx_14 + 0xb0), 1)
                                rax_22.b = 1
                            else
                                rax_22.b = 0
                        else if (rax_21 == 2)
                            rax_22 = sub_142c14a10(arg2, rdi)
                        else
                            rax_22.b = 0
                    
                    r12.b |= rax_22.b
                    void* rax_25 = arg2[9]
                    int64_t rcx_19 = *(rax_25 + 0x10)
                    arg2[5] = rcx_19
                    arg2[6] = zx.q(*(rax_25 + 0x18)) + rcx_19
                    
                    if (rbp_2 == 5)
                        sub_142bf5780(arg2[3])
                    
                    int32_t var_80_2 = arg2[0xc].d
                    int32_t var_88_2 = 0x6e
                    int32_t var_90_2 = 0x72
                    int32_t var_98_1 = 0x65
                    sub_142c22650(arg2[3], arg2[1], "end %c%c%c%c subtable %d", 0x6b)
        
        rdi = rdi + zx.q(*(rdi + 3))
            + (((((zx.q(*rdi) << 8) + zx.q(*(rdi + 1))) << 8) + zx.q(*(rdi + 2))) << 8)
        arg2[0xc].d += 1
        r15 += 1
    while (r15 u< r14_4)

return zx.q(r12.b)
