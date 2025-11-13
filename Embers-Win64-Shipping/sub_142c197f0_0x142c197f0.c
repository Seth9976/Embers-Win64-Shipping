// 函数: sub_142c197f0
// 地址: 0x142c197f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
int64_t r12
r12.b = 0
int64_t r13
r13.b = 0
arg2[0xc].d = 0
void* rsi = arg1 + 4
uint32_t r15_1 = zx.d(*(arg1 + 2)) << 8
uint32_t rax = zx.d(*(arg1 + 3))
uint32_t r15_2 = r15_1 + rax
int32_t r14 = 0

if (r15_1 != neg.d(rax))
    do
        void* r10_1 = arg2[3]
        int32_t rbp_1 = *(r10_1 + 0x38)
        int32_t rcx
        rcx.b = (rbp_1 & 0xfffffffe) == 4
        
        if (rcx == (zx.d(*(rsi + 5)) & 1))
            int32_t rbp_2 = rbp_1 & 0xfffffffd
            int32_t var_80_1 = arg2[0xc].d
            int32_t var_88_1 = 0x6e
            int32_t var_90_1 = 0x72
            
            if (sub_142c22650(r10_1, arg2[1], "start %c%c%c%c subtable %d", 0x6b) != 0)
                if (r13.b == 0 && (*(rsi + 5) & 4) != 0)
                    r13.b = 1
                    void* rax_7 = arg2[3]
                    int32_t i_2 = *(rax_7 + 0x60)
                    
                    if (i_2 != 0)
                        void* rdx_2 = *(rax_7 + 0x80) + 0x10
                        uint64_t i_1 = zx.q(i_2)
                        uint64_t i
                        
                        do
                            *(rdx_2 + 2) = 2
                            int16_t rax_9 = 1
                            
                            if ((*(arg2[3] + 0x38) & 0xfffffffd) == 4)
                                rax_9 = 0xffff
                            
                            *rdx_2 = rax_9
                            rdx_2 += 0x14
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                
                if (rbp_2 == 5)
                    sub_142bf5780(arg2[3])
                
                void* rdx_3 = nullptr
                
                if (r14 u< r15_2 - 1)
                    rdx_3 = rsi
                
                void* arg_8 = &arg2[4]
                void* rax_11 = arg2[9]
                int64_t rcx_5 = *(rax_11 + 0x10)
                arg2[5] = rcx_5
                int64_t r8_2 = zx.q(*(rax_11 + 0x18)) + rcx_5
                arg2[6] = r8_2
                
                if (rdx_3 != 0)
                    void* rax_15
                    
                    if (rdx_3 u< rcx_5 || r8_2 u<= rdx_3)
                        rax_15 = nullptr
                        arg2[5] = 0
                    else
                        arg2[5] = rdx_3
                        uint64_t rcx_8 = (zx.q(*(rdx_3 + 2)) << 8) + zx.q(*(rdx_3 + 3))
                        uint64_t rax_14 = r8_2 - rdx_3
                        
                        if (rax_14 u>= rcx_8)
                            rax_14 = rcx_8
                        
                        rax_15 = rax_14 + rdx_3
                    
                    arg2[6] = rax_15
                
                uint32_t rax_16 = zx.d(*(rsi + 4))
                
                if (rax_16 == 0)
                    void* rcx_11 = *arg2
                    
                    if ((*(rcx_11 + 0xb8) & 1) != 0)
                        void* var_50 = rsi
                        int64_t* var_48_1 = arg2
                        uint8_t rax_18 = *(rsi + 5)
                        void** var_40 = &var_50
                        uint8_t var_38_1 = rax_18 u>> 2 & 1
                        sub_142c21390(&var_40, arg2[1], arg2[3], *(rcx_11 + 0xb0), 1)
                        rax_16.b = 1
                    else
                        rax_16.b = 0
                else
                    uint32_t temp3_1
                    
                    if (rax_16 != 1)
                        temp3_1 = rax_16 - 1
                    
                    if (rax_16 != 1 && temp3_1 == 1)
                        void* rcx_9 = *arg2
                        
                        if ((*(rcx_9 + 0xb8) & 1) != 0)
                            void* var_70 = rsi
                            int64_t* var_68_1 = arg2
                            uint8_t rax_17 = *(rsi + 5)
                            void** var_60 = &var_70
                            uint8_t var_58_1 = rax_17 u>> 2 & 1
                            sub_142c21910(&var_60, arg2[1], arg2[3], *(rcx_9 + 0xb0), 1)
                            rax_16.b = 1
                        else
                            rax_16.b = 0
                    else
                        rax_16.b = 0
                
                r12.b |= rax_16.b
                void* rax_19 = arg2[9]
                int64_t rcx_13 = *(rax_19 + 0x10)
                arg2[5] = rcx_13
                arg2[6] = zx.q(*(rax_19 + 0x18)) + rcx_13
                
                if (rbp_2 == 5)
                    sub_142bf5780(arg2[3])
                
                int32_t var_80_2 = arg2[0xc].d
                int32_t var_88_2 = 0x6e
                int32_t var_90_2 = 0x72
                int32_t var_98_1 = 0x65
                sub_142c22650(arg2[3], arg2[1], "end %c%c%c%c subtable %d", 0x6b)
        
        rsi = rsi + (zx.q(*(rsi + 2)) << 8) + zx.q(*(rsi + 3))
        arg2[0xc].d += 1
        r14 += 1
    while (r14 u< r15_2)

return zx.q(r12.b)
