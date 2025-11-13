// 函数: sub_1408e98a0
// 地址: 0x1408e98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
EnterCriticalSection(&arg1[0x18])
int32_t* r13 = arg1[1]
int32_t* var_a0 = r13
void* rax_4 = &r13[sx.q(arg1[2].d)]
void*** result

if (r13 == rax_4)
label_1408e9bd1:
    result = sub_1408e6bf0(arg1)
    int32_t rsi_3 = arg1[4].d
    int32_t rsi_4 = rsi_3 - 1
    
    if (rsi_3 - 1 s>= 0)
        int64_t rbp_2 = sx.q(rsi_4) << 2
        int64_t r14_6 = rbp_2
        int64_t r15_5 = sx.q(rsi_4 + 1) << 2
        int32_t temp3_1
        
        do
            int32_t* rcx_19 = arg1[1]
            void* r8_6 = arg1[3]
            void* rdx_10 = &rcx_19[sx.q(arg1[2].d)]
            
            if (rcx_19 == rdx_10)
            label_1408e9c39:
                sub_1408d92c0(&arg1[0x11], r14_6 + r8_6)
                int32_t rax_25 = arg1[4].d
                int32_t rcx_22 = rax_25 - rsi_4
                
                if (rcx_22 != 1)
                    int64_t rax_26 = arg1[3]
                    memmove(r14_6 + rax_26, r15_5 + rax_26, (rcx_22 - 1) << 2)
                    rax_25 = arg1[4].d
                
                arg1[4].d = rax_25 - 1
                result = sub_1405dac90(&arg1[3])
            else
                result = zx.q(*(r8_6 + rbp_2))
                
                while (*rcx_19 != result.d)
                    rcx_19 = &rcx_19[1]
                    
                    if (rcx_19 == rdx_10)
                        goto label_1408e9c39
            
            r15_5 -= 4
            r14_6 -= 4
            rbp_2 -= 4
            temp3_1 = rsi_4
            rsi_4 -= 1
        while (temp3_1 - 1 s>= 0)
    
    int32_t rsi_5 = arg1[0x12].d
    int32_t rsi_6 = rsi_5 - 1
    
    if (rsi_5 - 1 s>= 0)
        int64_t r15_6 = sx.q(rsi_6) << 2
        int64_t rbp_3 = r15_6
        int64_t r14_8 = sx.q(rsi_6 + 1) << 2
        int32_t temp4_1
        
        do
            result = zx.q(arg1[6].d)
            void* const rdi_5
            
            if (result.d == *(arg1 + 0x5c))
            label_1408e9d21:
                rdi_5 = nullptr
            else
                void* r8_9 = &arg1[0xc]
                void* rdx_13 = *(r8_9 + 8)
                int64_t r9_2 = sx.q(*(r15_6 + arg1[0x11]))
                
                if (rdx_13 != 0)
                    r8_9 = rdx_13
                
                result = zx.q(*(r8_9 + (((sx.q(arg1[0xe].d) - 1) & r9_2) << 2)))
                
                if (result.d == 0xffffffff)
                label_1408e9d21_1:
                    rdi_5 = nullptr
                else
                    int64_t r8_10 = arg1[5]
                    
                    while (true)
                        int64_t rdx_14 = sx.q(result.d) * 5
                        rdi_5 = r8_10 + (rdx_14 << 3)
                        
                        if (*(r8_10 + (rdx_14 << 3)) == r9_2.d)
                            break
                        
                        result = zx.q(*(rdi_5 + 0x20))
                        
                        if (result.d == 0xffffffff)
                            goto label_1408e9d21_2
                    
                    if (result.d == 0xffffffff)
                    label_1408e9d21_2:
                        rdi_5 = nullptr
            
            if (*(rdi_5 + 0x14) == 0)
                int64_t rcx_30 = *(rdi_5 + 8)
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                __builtin_memset(rdi_5 + 8, 0, 0x18)
                int32_t rax_31 = arg1[0x12].d
                int32_t rcx_32 = rax_31 - rsi_6
                
                if (rcx_32 != 1)
                    int64_t rax_32 = arg1[0x11]
                    memmove(rax_32 + rbp_3, r14_8 + rax_32, (rcx_32 - 1) << 2)
                    rax_31 = arg1[0x12].d
                
                arg1[0x12].d = rax_31 - 1
                result = sub_1405dac90(&arg1[0x11])
            
            r14_8 -= 4
            rbp_3 -= 4
            r15_6 -= 4
            temp4_1 = rsi_6
            rsi_6 -= 1
        while (temp4_1 - 1 s>= 0)
else
    void* r15_1 = &arg1[3]
    
    while (true)
        int32_t* rcx_1 = *r15_1
        int64_t rbp_1 = sx.q(*r13)
        void* rdx_1 = &rcx_1[sx.q(*(r15_1 + 8))]
        
        if (rcx_1 == rdx_1)
        label_1408e9945:
            int32_t* r8_1 = arg1[0x11]
            int64_t rdx_2 = sx.q(arg1[0x12].d)
            int32_t* rax_6 = r8_1
            void* rcx_2 = &r8_1[rdx_2]
            
            if (r8_1 != rcx_2)
                while (true)
                    if (*rax_6 == rbp_1.d)
                        if (rdx_2.d != 0)
                            int32_t r13_1 = 0
                            int32_t rsi_2 = 0
                            int64_t rdi_1 = 0
                            r8_1.b = *r8_1 != rbp_1.d
                            char var_a8_1 = r8_1.b
                            
                            do
                                int64_t r9_1 = sx.q(rsi_2)
                                rdi_1 += 1
                                rsi_2 += 1
                                
                                if (rdi_1 s< rdx_2)
                                    int32_t* rcx_10 = arg1[0x11] + (rdi_1 << 2)
                                    
                                    do
                                        int32_t rax_13
                                        rax_13.b = *rcx_10 != rbp_1.d
                                        
                                        if (zx.d(r8_1.b) != rax_13)
                                            break
                                        
                                        rsi_2 += 1
                                        rdi_1 += 1
                                        rcx_10 = &rcx_10[1]
                                    while (rdi_1 s< rdx_2)
                                
                                int32_t r15_3 = rsi_2 - r9_1.d
                                
                                if (r8_1.b != 0)
                                    if (r13_1 != r9_1.d)
                                        int64_t rcx_11 = arg1[0x11]
                                        memmove(rcx_11 + (sx.q(r13_1) << 2), rcx_11 + (r9_1 << 2), 
                                            r15_3 << 2)
                                        r8_1 = zx.q(var_a8_1)
                                    
                                    r13_1 += r15_3
                                
                                r8_1.b ^= 1
                                var_a8_1 = r8_1.b
                            while (rdi_1 s< rdx_2)
                            
                            arg1[0x12].d = r13_1
                            r15_1 = &arg1[3]
                            r13 = var_a0
                        
                        break
                    
                    rax_6 = &rax_6[1]
                    
                    if (rax_6 == rcx_2)
                        goto label_1408e9975
                
                goto label_1408e9ad1
            
        label_1408e9975:
            int32_t* rcx_3 = arg1[0xf]
            void* rdx_3 = &rcx_3[sx.q(arg1[0x10].d)]
            int64_t rax_7
            
            if (rcx_3 == rdx_3)
            label_1408e99a1:
                rax_7.b = 0
            else
                while (*rcx_3 != rbp_1.d)
                    rcx_3 = &rcx_3[1]
                    
                    if (rcx_3 == rdx_3)
                        goto label_1408e99a1
                
                rax_7.b = 1
            
            if (rax_7.b == 0)
                var_a0.d = rbp_1.d
                int32_t* rdx_4 = &var_a0
                int32_t* r14_5 = rbp_1 * 0x30 + *(*arg1 + 0x68)
                
                if (*(r14_5 + 0x20) == 0)
                    int64_t* rax_17 = sub_1408d9420(&arg1[5], rdx_4)
                    int32_t var_88_1 = rbp_1.d
                    *(rax_17 + 0xc) = 0
                    *rax_17 = 0
                    int32_t rcx_14 = *r14_5
                    rax_17[2] = 0
                    rax_17[1].d = rcx_14
                    void*** var_68_1 = nullptr
                    void** const var_58 = &data_142d42ed8
                    int64_t* (* var_78)(int64_t* arg1, int64_t arg2, int64_t* arg3) = sub_1408df2d0
                    int128_t var_50_1 = arg1.o
                    result = sub_140bc48b0(&r14_5[4], 2, &var_78, 0)
                    rax_17[2] = result
                    
                    if (result == 0)
                        if (var_78 != 0)
                            void*** rcx_39 = &var_58
                            
                            if (var_68_1 != 0)
                                rcx_39 = var_68_1
                            
                            result = (*rcx_39)[2](rcx_39)
                        
                        break
                    
                    int64_t rdi_4 = sx.q(arg1[0x10].d)
                    int32_t rax_18 = (rdi_4 + 1).d
                    arg1[0x10].d = rax_18
                    
                    if (rax_18 s> *(arg1 + 0x84))
                        sub_1405a4cf0(&arg1[0xf])
                    
                    *(arg1[0xf] + (rdi_4 << 2)) = rbp_1.d
                    
                    if (var_78 != 0)
                        void** const* rcx_17 = &var_58
                        
                        if (var_68_1 != 0)
                            rcx_17 = var_68_1
                        
                        (*rcx_17)[2](rcx_17)
                else
                    int64_t* rax_9 = sub_1408d9420(&arg1[5], rdx_4)
                    *(rax_9 + 0xc) = 0
                    *rax_9 = 0
                    rax_9[1].d = *r14_5
                    rax_9[2] = 0
                    *rax_9 = sub_140a82f30(sx.q(*r14_5), 0)
                    int64_t rax_11 = sub_140bcb7a0(&r14_5[4])
                    memcpy(*rax_9, rax_11, *r14_5)
                    sub_140bd1d40(&r14_5[4])
                label_1408e9ad1:
                    int64_t rdi_2 = sx.q(*(r15_1 + 8))
                    int32_t rax_15 = (rdi_2 + 1).d
                    *(r15_1 + 8) = rax_15
                    
                    if (rax_15 s> *(r15_1 + 0xc))
                        sub_1405a4cf0(r15_1)
                    
                    *(*r15_1 + (rdi_2 << 2)) = rbp_1.d
        else
            while (*rcx_1 != rbp_1.d)
                rcx_1 = &rcx_1[1]
                
                if (rcx_1 == rdx_1)
                    goto label_1408e9945
        
        r13 = &r13[1]
        var_a0 = r13
        
        if (r13 == rax_4)
            goto label_1408e9bd1

if (arg1 != -0xc0)
    result = LeaveCriticalSection(&arg1[0x18])

__security_check_cookie(rax_1 ^ &var_c8)
return result
