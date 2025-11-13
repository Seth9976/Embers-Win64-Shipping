// 函数: sub_141dd97e0
// 地址: 0x141dd97e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4
void* rbp
void* var_10 = rbp
char rsi = arg3
int16_t* r14 = arg2
uint64_t count_1 = zx.q(arg4)
EnterCriticalSection(arg1 + 0x108)

if (*(arg1 + 0x130) != 0)
    memset(r14, 0, count_1)
    rbp.b = 1
else if (r14 == 0 || count_1.d == 0)
label_141dd9b10:
    rbp.b = 0
else
    int32_t rax_1 = *(arg1 + 0xa0)
    
    if (rax_1 == 0)
        memset(r14, 0, count_1)
        rbp.b = 1
    else
        int32_t r13_1 = rax_1 * 2
        
        if (modu.dp.d(0:(count_1.d), r13_1) != 0)
            memset(r14, 0, count_1)
            rbp.b = 1
        else
            sub_141dd2d90(arg1)
            rbp.b = 0
            char arg_8 = 0
            
            if (count_1.d != 0)
                if (*(arg1 + 0xa4) != 2)
                    int32_t* r12 = arg1 + 0xbc
                    void* rsi_2 = arg1 + 0xb4
                    int32_t i
                    
                    do
                        int64_t r10_3 = *(arg1 + 0xd8)
                        int32_t* r8_11 = r12
                        int32_t r9_2
                        int32_t r8_12
                        
                        if (r10_3 == 0)
                            r8_12 = *rsi_2
                        label_141dd9ba8:
                            int64_t rax_24 = sub_141dc9ec0(arg1, *(arg1 + 8), r8_12, r12)
                            *(arg1 + 0xd8) = rax_24
                            r10_3 = rax_24
                            
                            if (rax_24 == 0)
                                memset(r14, 0, zx.q(i_2))
                                int32_t rax_35 = *(arg1 + 0x10) + 1
                                *(arg1 + 0x10) = rax_35
                                rbp.b = rax_35 s> data_143a2cfac
                                break
                            
                            char rdx_6 = *(arg1 + 0x13c)
                            *(arg1 + 0x10) = 0
                            
                            if ((rdx_6 & 1) != 0)
                                r9_2 = *(arg1 + 0xb8)
                            else if (*rsi_2 != *(arg1 + 0xd0))
                                r9_2 = 0
                                *(arg1 + 0xb8) = 0
                            else
                                r9_2 = *(arg1 + 0xcc)
                                *(arg1 + 0xb8) = r9_2
                            
                            r8_11 = r12
                            *(arg1 + 0x13c) = rdx_6 & 0xfe
                        else
                            r9_2 = *(arg1 + 0xb8)
                            
                            if (r9_2 u>= *r12)
                                *(arg1 + 0xb4) += 1
                                r8_12 = *(arg1 + 0xb4)
                                goto label_141dd9ba8
                        r12 = r8_11
                        uint32_t rcx_20 = divu.dp.d(0:i_2, r13_1)
                        uint32_t temp0_4 = divu.dp.d(0:(*r8_11 - r9_2), r13_1)
                        
                        if (temp0_4 u<= rcx_20)
                            rcx_20 = temp0_4
                        
                        rbp = zx.q(*(arg1 + 0xc4) - *(arg1 + 0xc0))
                        
                        if (rcx_20 u<= rbp.d)
                            rbp = zx.q(rcx_20)
                        
                        uint32_t count = rbp.d * r13_1
                        memcpy(r14, zx.q(r9_2) + r10_3, count)
                        uint64_t rax_31 = zx.q(rbp.d * *(arg1 + 0xa0))
                        i = i_2 - count
                        *(arg1 + 0xc0) += rbp.d
                        i_2 = i
                        *(arg1 + 0xb8) += count
                        rsi_2 = arg1 + 0xb4
                        r14 = &r14[rax_31]
                        
                        if (*(arg1 + 0xc0) u< *(arg1 + 0xc4))
                            rbp = zx.q(arg_8)
                        else
                            rbp.b = 1
                            arg_8 = 1
                            *rsi_2 = *(arg1 + 0xd0)
                            *(arg1 + 0xb8) = 0
                            *(arg1 + 0xc0) = 0
                            *(arg1 + 0xd8) = 0
                            
                            if (arg3 == 0)
                                memset(r14, 0, zx.q(i))
                                break
                    while (i != 0)
                else
                    rbp = arg1 + 0xb8
                    
                    while (true)
                        int32_t rcx_4
                        void* rsi_1
                        int32_t r8_1
                        void* r9
                        
                        if (*(arg1 + 0xd8) == 0)
                            r9 = arg1 + 0xbc
                            rsi_1 = rbp
                        label_141dd9910:
                            int64_t rax_6 = sub_141dc9ec0(arg1, *(arg1 + 8), *(arg1 + 0xb4), r9)
                            *(arg1 + 0xd8) = rax_6
                            
                            if (rax_6 == 0)
                                memset(r14, 0, zx.q(count_1.d))
                                goto label_141dd9b10
                            
                            char rdx_2 = *(arg1 + 0x13c)
                            
                            if ((rdx_2 & 1) != 0)
                                rcx_4 = *rsi_1
                            else if (*(arg1 + 0xb4) != *(arg1 + 0xd0))
                                rcx_4 = 0
                                *(arg1 + 0xb8) = 0
                            else
                                rcx_4 = *(arg1 + 0xcc)
                                *(arg1 + 0xb8) = rcx_4
                            
                            r8_1 = *(arg1 + 0x8c)
                            *(arg1 + 0x13c) = rdx_2 & 0xfe
                            goto label_141dd996a
                        
                        r8_1 = *(arg1 + 0x8c)
                        int32_t rcx_3 = *(arg1 + 0xb0)
                        int32_t r11_1
                        
                        if (rcx_3 u< r8_1 u>> 1)
                            r11_1 = rcx_3
                        else
                            rsi_1 = arg1 + 0xb8
                            rcx_4 = *rsi_1
                            r9 = arg1 + 0xbc
                            
                            if (rcx_4 u>= *r9)
                                *(arg1 + 0xb4) += 1
                                goto label_141dd9910
                            
                        label_141dd996a:
                            int32_t i_1 = 0
                            
                            if (*(arg1 + 0xa0) s> 0)
                                do
                                    int32_t rdx_3 = *(arg1 + 0x90)
                                    sub_141e58b50(zx.q(rdx_3 * i_1) + zx.q(*rbp) + *(arg1 + 0xd8), 
                                        rdx_3, zx.q(i_1 * *(arg1 + 0x8c)) + *(arg1 + 0xa8))
                                    i_1 += 1
                                while (i_1 s< *(arg1 + 0xa0))
                                
                                rcx_4 = *rbp
                                r8_1 = *(arg1 + 0x8c)
                            
                            r11_1 = 0
                            int32_t rax_10 = *(arg1 + 0x90) * *(arg1 + 0xa0)
                            rsi = arg3
                            *(arg1 + 0xb0) = 0
                            rcx_3 = 0
                            *rbp = rax_10 + rcx_4
                        
                        uint32_t r8_7 = (r8_1 u>> 1) - rcx_3
                        int32_t rcx_10 = *(arg1 + 0xc0)
                        int32_t r9_1 = 0
                        uint32_t rax_13 = divu.dp.d(0:(count_1.d), r13_1)
                        int32_t rdx_4 = *(arg1 + 0xc4)
                        
                        if (r8_7 u<= rax_13)
                            rax_13 = r8_7
                        
                        uint32_t r10_2 = rdx_4 - rcx_10
                        
                        if (rax_13 u<= r10_2)
                            r10_2 = rax_13
                        
                        if (r10_2 != 0)
                            int32_t rax_14 = *(arg1 + 0xa0)
                            
                            do
                                int32_t r8_8 = 0
                                
                                if (rax_14 s> 0)
                                    do
                                        uint64_t rax_16 = zx.q(r8_8 * *(arg1 + 0x8c))
                                        r8_8 += 1
                                        *r14 = *(rax_16 + (zx.q(*(arg1 + 0xb0) + r9_1) << 1)
                                            + *(arg1 + 0xa8))
                                        r14 = &r14[1]
                                        rax_14 = *(arg1 + 0xa0)
                                    while (r8_8 s< rax_14)
                                
                                r9_1 += 1
                            while (r9_1 u< r10_2)
                            
                            r11_1 = *(arg1 + 0xb0)
                            rcx_10 = *(arg1 + 0xc0)
                            rdx_4 = *(arg1 + 0xc4)
                        
                        *(arg1 + 0xb0) = r10_2 + r11_1
                        rbp = arg1 + 0xb8
                        count_1 = zx.q(count_1.d - r10_2 * r13_1)
                        int32_t rax_21 = r10_2 + rcx_10
                        *(arg1 + 0xc0) = rax_21
                        
                        if (rax_21 u>= rdx_4)
                            *(arg1 + 0xb4) = *(arg1 + 0xd0)
                            arg_8 = 1
                            *(arg1 + 0xb0) = 0
                            *rbp = 0
                            *(arg1 + 0xc0) = 0
                            *(arg1 + 0xd8) = 0
                            
                            if (rsi == 0)
                                memset(r14, 0, zx.q(count_1.d))
                                rbp.b = 1
                                break
                        
                        if (count_1.d == 0)
                            rbp = zx.q(arg_8)
                            break

if (arg1 != -0x108)
    LeaveCriticalSection(arg1 + 0x108)

return zx.q(rbp.b)
