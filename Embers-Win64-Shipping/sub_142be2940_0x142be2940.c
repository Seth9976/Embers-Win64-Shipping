// 函数: sub_142be2940
// 地址: 0x142be2940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x98)
char* arg_20 = nullptr
uint16_t* rsi = nullptr
int32_t arg_18
int32_t rax = (*(arg1 + 0x2a0))(arg3, 0x4350414c, arg2, &arg_18)
int32_t arg_8 = rax

if (rax == 0)
    int32_t rdx = arg_18
    
    if (rdx u< 0xc)
        arg_8 = 8
    else
        int32_t rax_1 = sub_142b96670(arg2, rdx, &arg_20)
        arg_8 = rax_1
        
        if (rax_1 == 0)
            char* rdi_1 = arg_20
            uint16_t* rax_2 = sub_142b99860(r14, rax_1 + 0x28, &arg_8)
            rsi = rax_2
            
            if (arg_8 == 0)
                uint16_t rdx_2 = zx.w(*rdi_1) << 8 | zx.w(rdi_1[1])
                *rax_2 = rdx_2
                
                if (rdx_2 u> 1)
                    arg_8 = 8
                else
                    *(arg1 + 0x388) = zx.w(rdi_1[2]) << 8 | zx.w(rdi_1[3])
                    *(arg1 + 0x370) = zx.w(rdi_1[4]) << 8 | zx.w(rdi_1[5])
                    uint16_t r8_3 = zx.w(rdi_1[6]) << 8 | zx.w(rdi_1[7])
                    rsi[1] = r8_3
                    int32_t rdx_3 = arg_18
                    uint32_t rcx_11 =
                        ((zx.d(rdi_1[8]) << 8 | zx.d(rdi_1[9])) << 8 | zx.d(rdi_1[0xa])) << 8
                        | zx.d(rdi_1[0xb])
                    
                    if (((zx.q(*(arg1 + 0x370)) << 1) + 0xc).d u> rdx_3 || rcx_11 u>= rdx_3)
                        arg_8 = 8
                    else
                        uint32_t r9_1 = zx.d(r8_3)
                        
                        if (r9_1 << 2 u> rdx_3 - rcx_11 || *(arg1 + 0x388) u> r9_1.w)
                            arg_8 = 8
                        else
                            *(rsi + 0x10) = &rdi_1[0xc]
                            bool cond:0_1 = *rsi != 1
                            *(rsi + 8) = &arg_20[zx.q(rcx_11)]
                            
                            if (cond:0_1)
                            label_142be2d71:
                                *(rsi + 0x18) = arg_20
                                *(rsi + 0x20) = arg_18
                                uint32_t r9_8 = zx.d(*(arg1 + 0x388))
                                *(arg1 + 0x4d0) = rsi
                                int64_t rax_41 = sub_142b99a90(r14, 4, 0, r9_8, 0, &arg_8)
                                bool cond:1_1 = arg_8 != 0
                                *(arg1 + 0x3a0) = rax_41
                                
                                if (not(cond:1_1))
                                    int32_t rax_42 = sub_142be2e50(arg1, 0)
                                    
                                    if (rax_42 == 0)
                                        return rax_42
                                    
                                    arg_8 = 8
                            else
                                uint64_t r9_2 = zx.q(*(arg1 + 0x370))
                                int32_t rdx_5 = arg_18
                                uint32_t r8_4 = (r9_2 * 2).d
                                
                                if (r8_4 + 0x18 u> rdx_5)
                                    arg_8 = 8
                                else
                                    void* rcx_12 = &rdi_1[0xc + (r9_2 << 1)]
                                    uint32_t r12_7 = (
                                        (zx.d(*rcx_12) << 8 | zx.d(rdi_1[(r9_2 << 1) + 0xd])) << 8
                                        | zx.d(*(rcx_12 + 2))) << 8 | zx.d(*(rcx_12 + 3))
                                    uint32_t rdi_9 = (
                                        (zx.d(*(rcx_12 + 4)) << 8 | zx.d(*(rcx_12 + 5))) << 8
                                        | zx.d(*(rcx_12 + 6))) << 8 | zx.d(*(rcx_12 + 7))
                                    uint32_t r15_7 = (
                                        (zx.d(*(rcx_12 + 8)) << 8 | zx.d(*(rcx_12 + 9))) << 8
                                        | zx.d(*(rcx_12 + 0xa))) << 8 | zx.d(*(rcx_12 + 0xb))
                                    
                                    if (r12_7 == 0)
                                    label_142be2bf2:
                                        
                                        if (rdi_9 == 0)
                                        label_142be2cad:
                                            
                                            if (r15_7 == 0)
                                                goto label_142be2d71
                                            
                                            if (r15_7 u>= rdx_5)
                                                arg_8 = 8
                                            else
                                                uint32_t r9_6 = zx.d(*(arg1 + 0x388))
                                                
                                                if (r9_6 * 2 u> rdx_5 - r15_7)
                                                    arg_8 = 8
                                                else
                                                    void* rax_35 =
                                                        sub_142b99a90(r14, 2, 0, r9_6, 0, &arg_8)
                                                    
                                                    if (arg_8 == 0)
                                                        uint64_t rcx_20 = zx.q(*(arg1 + 0x388))
                                                        void* r8_7 = rax_35
                                                        int64_t r9_7 = 0
                                                        uint64_t r10_6 = ((rcx_20 << 1) + 1) u>> 1
                                                        
                                                        if (rax_35 u> rax_35 + (rcx_20 << 1))
                                                            r10_6 = 0
                                                        
                                                        if (r10_6 != 0)
                                                            char* rdx_14 = &arg_20[zx.q(r15_7) - 1]
                                                            
                                                            do
                                                                uint16_t rcx_21 = zx.w(rdx_14[1])
                                                                rdx_14 = &rdx_14[2]
                                                                r8_7 += 2
                                                                r9_7 += 1
                                                                *(r8_7 - 2) =
                                                                    rcx_21 << 8 | zx.w(*rdx_14)
                                                            while (r9_7 u< r10_6)
                                                        
                                                        *(arg1 + 0x390) = rax_35
                                                        goto label_142be2d71
                                        else if (rdi_9 u>= rdx_5)
                                            arg_8 = 8
                                        else
                                            uint32_t r9_4 = zx.d(*(arg1 + 0x370))
                                            
                                            if (r9_4 * 2 u> rdx_5 - rdi_9)
                                                arg_8 = 8
                                            else
                                                void* rax_30 =
                                                    sub_142b99a90(r14, 2, 0, r9_4, 0, &arg_8)
                                                
                                                if (arg_8 == 0)
                                                    uint64_t rcx_17 = zx.q(*(arg1 + 0x370))
                                                    void* r8_6 = rax_30
                                                    int64_t r9_5 = 0
                                                    uint64_t r10_4 = ((rcx_17 << 1) + 1) u>> 1
                                                    
                                                    if (rax_30 u> rax_30 + (rcx_17 << 1))
                                                        r10_4 = 0
                                                    
                                                    if (r10_4 != 0)
                                                        char* rdx_11 = &arg_20[zx.q(rdi_9) - 1]
                                                        
                                                        do
                                                            uint16_t rcx_18 = zx.w(rdx_11[1])
                                                            rdx_11 = &rdx_11[2]
                                                            r8_6 += 2
                                                            r9_5 += 1
                                                            *(r8_6 - 2) =
                                                                rcx_18 << 8 | zx.w(*rdx_11)
                                                        while (r9_5 u< r10_4)
                                                    
                                                    rdx_5 = arg_18
                                                    *(arg1 + 0x378) = rax_30
                                                    goto label_142be2cad
                                    else if (r12_7 u>= rdx_5 || r8_4 u> rdx_5 - r12_7)
                                        arg_8 = 8
                                    else
                                        void* rax_25 = sub_142b99a90(r14, 2, 0, r9_2.d, 0, &arg_8)
                                        
                                        if (arg_8 == 0)
                                            uint64_t rcx_14 = zx.q(*(arg1 + 0x370))
                                            void* r8_5 = rax_25
                                            int64_t r9_3 = 0
                                            uint64_t r10_2 = ((rcx_14 << 1) + 1) u>> 1
                                            
                                            if (rax_25 u> rax_25 + (rcx_14 << 1))
                                                r10_2 = 0
                                            
                                            if (r10_2 != 0)
                                                char* rdx_8 = &arg_20[zx.q(r12_7) - 1]
                                                
                                                do
                                                    uint16_t rcx_15 = zx.w(rdx_8[1])
                                                    rdx_8 = &rdx_8[2]
                                                    r8_5 += 2
                                                    r9_3 += 1
                                                    *(r8_5 - 2) = rcx_15 << 8 | zx.w(*rdx_8)
                                                while (r9_3 u< r10_2)
                                            
                                            rdx_5 = arg_18
                                            *(arg1 + 0x380) = rax_25
                                            goto label_142be2bf2

sub_142b97020(arg2, &arg_20)
sub_142b99980(r14, rsi)
*(arg1 + 0x4d0) = 0
return arg_8
