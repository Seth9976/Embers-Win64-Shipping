// 函数: sub_142bc7690
// 地址: 0x142bc7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg2[6]
int64_t* r13 = arg2
*arg1 = r12
arg1[0x19] = &arg1[0x18]
arg1[1].d = arg3
uint64_t rbx = zx.q(arg4)
arg1[0x18] = 0
int32_t result = sub_142b97060(r13, arg3, arg5)
int32_t result_1 = result

if (result == 0)
    result = sub_142b96500(r13, rbx.d)
    result_1 = result
    
    if (result == 0)
        arg1[0x1b] = r13[7]
        char* rdx_2 = r13[7]
        void* r15_1 = &rdx_2[rbx]
        
        if (&rdx_2[0xf] u> r15_1)
            result_1 = 8
        else
            *(arg1 + 0xc) = zx.d(*rdx_2) << 8 | zx.d(rdx_2[1])
            arg1[2].d = zx.d(rdx_2[2]) << 8 | zx.d(rdx_2[3])
            *(arg1 + 0x14) = zx.d(rdx_2[4]) << 8 | zx.d(rdx_2[5])
            arg1[3].d = sx.d(zx.w(rdx_2[6]) << 8) | zx.d(rdx_2[7])
            *(arg1 + 0x1c) = sx.d(zx.w(rdx_2[8]) << 8) | zx.d(rdx_2[9])
            arg1[4].d = sx.d(zx.w(rdx_2[0xa]) << 8) | zx.d(rdx_2[0xb])
            *(arg1 + 0x24) = sx.d(zx.w(rdx_2[0xc]) << 8) | zx.d(rdx_2[0xd])
            uint32_t r14_1 = zx.d(rdx_2[0xe])
            void* rdx_3 = &rdx_2[0xf]
            uint32_t var_48_1 = r14_1
            int32_t rax_15 = r14_1 & 4
            arg1[5].d = r14_1
            void* var_40 = rdx_3
            
            if (rax_15 != 0)
                goto label_142bc77ff
            
            rdx_3 += 2
            
            if (rdx_3 u> r15_1)
                result_1 = 8
            else
                int32_t rcx_20 = sx.d(zx.w(*(rdx_3 - 2)) << 8) | zx.d(*(rdx_3 - 1))
                var_40 = rdx_3
                *(arg1 + 0x2c) = rcx_20
            label_142bc77ff:
                
                if (r14_1.b s>= 0)
                    goto label_142bc782f
                
                int32_t result_2 = EnumC13Lines::clone(&var_40, r15_1, &data_1436875c0, arg1)
                result_1 = result_2
                
                if (result_2 == 0)
                    rdx_3 = var_40
                label_142bc782f:
                    void* i_2 = rdx_3 + 3
                    
                    if (i_2 u> r15_1)
                        result_1 = 8
                    else
                        uint32_t rsi_5 =
                            (zx.d(*(i_2 - 3)) << 8 | zx.d(*(i_2 - 2))) << 8 | zx.d(*(i_2 - 1))
                        
                        if (rsi_5 u<= 0)
                        label_142bc793b:
                            void* rbx_4 = i_2 + 1
                            
                            if (rbx_4 u> r15_1)
                                result_1 = 8
                            else
                                uint32_t i_6 = zx.d(*i_2)
                                arg1[0x11].d = i_6
                                
                                if (zx.q(i_6 * 2) + rbx_4 u> r15_1)
                                    result_1 = 8
                                else
                                    int64_t rax_31 = sub_142b99a90(r12, 4, 0, i_6, 0, &result_1)
                                    bool cond:1_1 = result_1 != 0
                                    arg1[0x12] = rax_31
                                    
                                    if (not(cond:1_1))
                                        if (i_6 != 0)
                                            int64_t rdx_17 = 0
                                            uint64_t i_4 = zx.q(i_6)
                                            uint64_t i
                                            
                                            do
                                                rdx_17 += 4
                                                uint16_t rax_32 = zx.w(*rbx_4) << 8
                                                rbx_4 += 2
                                                *(rdx_17 + arg1[0x12] - 4) =
                                                    sx.d(rax_32) | zx.d(*(rbx_4 - 1))
                                                i = i_4
                                                i_4 -= 1
                                            while (i != 1)
                                        
                                        if (rbx_4 + 8 u> r15_1)
                                            result_1 = 8
                                        else
                                            arg1[0x13].d = zx.d(*rbx_4)
                                            *(arg1 + 0x9c) = zx.d(*(rbx_4 + 1))
                                            arg1[0xa].d =
                                                zx.d(*(rbx_4 + 2)) << 8 | zx.d(*(rbx_4 + 3))
                                            void* rbx_5 = rbx_4 + 8
                                            arg1[8].d = zx.d(*(rbx_4 + 4)) << 8 | zx.d(*(rbx_4 + 5))
                                            uint32_t i_7 =
                                                zx.d(*(rbx_5 - 2)) << 8 | zx.d(*(rbx_5 - 1))
                                            arg1[0x14].d = i_7
                                            arg1[0x15] = zx.q(arg3) - r13[7] + rbx_5
                                            int32_t rax_45 = r14_1 & 2
                                            int32_t rax_46
                                            rax_46.b = rax_45 != 0
                                            int32_t rcx_34 = rax_46 + 6
                                            
                                            if (rax_15 == 0)
                                                rcx_34 = rax_46 + 4
                                            
                                            int32_t r14_3 = r14_1 & 8
                                            int32_t rax_48 = rcx_34 + 1
                                            
                                            if (r14_3 == 0)
                                                rax_48 = rcx_34
                                            
                                            int32_t rbp_2 = var_48_1 & 0x10
                                            int32_t rcx_35 = rax_48 + 1
                                            
                                            if (rbp_2 == 0)
                                                rcx_35 = rax_48
                                            
                                            int32_t rdx_19 = var_48_1 & 0x20
                                            int32_t rax_49 = rcx_35 + 1
                                            
                                            if (rdx_19 == 0)
                                                rax_49 = rcx_35
                                            
                                            if (zx.q(rax_49 * i_7) + rbx_5 u> r15_1)
                                                result_1 = 8
                                            else
                                                int64_t rax_52 =
                                                    sub_142b99a90(r12, 0x10, 0, i_7, 0, &result_1)
                                                bool cond:7_1 = result_1 != 0
                                                arg1[0x16] = rax_52
                                                
                                                if (not(cond:7_1) && i_7 != 0)
                                                    int64_t r8_1 = 0
                                                    uint64_t i_5 = zx.q(i_7)
                                                    uint64_t i_1
                                                    
                                                    do
                                                        uint32_t* rdx_21 = arg1[0x16] + r8_1
                                                        uint32_t rcx_39
                                                        void* rbx_6
                                                        
                                                        if (rax_45 == 0)
                                                            rcx_39 = zx.d(*rbx_5)
                                                            rbx_6 = rbx_5 + 1
                                                        else
                                                            rbx_6 = rbx_5 + 2
                                                            rcx_39 =
                                                                zx.d(*rbx_5) << 8 | zx.d(*(rbx_6 - 1))
                                                        
                                                        *rdx_21 = rcx_39
                                                        int32_t rcx_41
                                                        
                                                        if (rax_15 == 0)
                                                            rcx_41 = *(arg1 + 0x2c)
                                                        else
                                                            uint16_t rax_54 = zx.w(*rbx_6)
                                                            rbx_6 += 2
                                                            rcx_41 =
                                                                sx.d(rax_54 << 8) | zx.d(*(rbx_6 - 1))
                                                        
                                                        rdx_21[1] = rcx_41
                                                        
                                                        if (r14_3 != 0)
                                                            rbx_6 += 1
                                                        
                                                        uint32_t rcx_44
                                                        void* rbx_7
                                                        
                                                        if (rbp_2 == 0)
                                                            rcx_44 = zx.d(*rbx_6)
                                                            rbx_7 = rbx_6 + 1
                                                        else
                                                            rbx_7 = rbx_6 + 2
                                                            rcx_44 =
                                                                zx.d(*rbx_6) << 8 | zx.d(*(rbx_7 - 1))
                                                        
                                                        rdx_21[2] = rcx_44
                                                        uint32_t rcx_47
                                                        
                                                        if (rdx_19 == 0)
                                                            rcx_47 = zx.d(*rbx_7)
                                                            rbx_5 = rbx_7 + 2
                                                        else
                                                            rbx_5 = rbx_7 + 3
                                                            rcx_47 =
                                                                zx.d(*rbx_7) << 8 | zx.d(*(rbx_5 - 2))
                                                        
                                                        r8_1 += 0x10
                                                        rdx_21[3] = rcx_47 << 8 | zx.d(*(rbx_5 - 1))
                                                        i_1 = i_5
                                                        i_5 -= 1
                                                    while (i_1 != 1)
                                                    r13 = arg2
                        else
                            void* i_3 = i_2
                            i_2 += zx.q(rsi_5)
                            
                            if (i_2 u<= r15_1)
                                while (i_3 + 4 u<= i_2)
                                    uint32_t rbx_3 = zx.d(*i_3) << 8 | zx.d(*(i_3 + 1))
                                    
                                    if (rbx_3 u< 4)
                                        break
                                    
                                    if (rbx_3 u> rsi_5)
                                        break
                                    
                                    uint32_t rdx_7 = zx.d(*(i_3 + 2)) << 8 | zx.d(*(i_3 + 3))
                                    void* i_8 = zx.q(rbx_3) + i_3
                                    void* r9_1
                                    
                                    if (rdx_7 == 1)
                                        r9_1 = &arg1[0xd]
                                    label_142bc7917:
                                        result = sub_142bc5e20(i_3 + 4, rbx_3 - 4, r12, r9_1)
                                        result_1 = result
                                        
                                        if (result != 0)
                                            return result
                                    else if (rdx_7 == 2)
                                        if (i_3 + 0x24 u<= i_8)
                                            arg1[6].d =
                                                sx.d(zx.w(*(i_3 + 0xe)) << 8) | zx.d(*(i_3 + 0xf))
                                            *(arg1 + 0x34) =
                                                sx.d(zx.w(*(i_3 + 0x10)) << 8) | zx.d(*(i_3 + 0x11))
                                            arg1[7].d =
                                                sx.d(zx.w(*(i_3 + 0x12)) << 8) | zx.d(*(i_3 + 0x13))
                                    else if (rdx_7 == 3)
                                        r9_1 = &arg1[0xe]
                                        goto label_142bc7917
                                    i_3 = i_8
                                    uint32_t temp3_1 = rsi_5
                                    rsi_5 -= rbx_3
                                    
                                    if (temp3_1 == rbx_3)
                                        break
                                
                                r14_1 = var_48_1
                                goto label_142bc793b
                            
                            result_1 = 8
        
        sub_142b96620(r13)
        arg1[0x1a].d = sub_1408e52d0(r13)
        result = result_1
        arg1[0x1b] = 0

return result
