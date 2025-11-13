// 函数: sub_1414b3410
// 地址: 0x1414b3410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t result = data_143ed9bc8
int64_t rsi = arg1
int64_t var_f8 = arg1

if (*(result + 4) != 0)
    result = *(arg1 + 0xa0)
    
    if (*(result + 0xd72) == 0)
        int32_t i_3
        
        if (*(*(arg1 + 8) + 0x1b20) == 0)
            sub_14139d2b0(arg2, &i_3)
            int16_t var_bc_1 = i_3.w
            int32_t* rcx_2 = *(rsi + 8) + 0x1b20
            int16_t var_fc
            int16_t var_ba_1 = var_fc
            int32_t var_d8 = 1
            int64_t var_d4_1 = 1
            int16_t var_cc_1 = 0
            int64_t var_60_1 = nullptr
            int32_t var_54_1 = 5
            int32_t var_58_1 = 1
            int64_t var_c8_1 = -1
            int32_t var_c0_1 = 0
            char var_b8_1 = 0
            arg3 = sub_141476640(rcx_2, &var_d8)
            
            if (var_60_1 != 0)
                arg1, arg3 = sub_140a74f90(var_60_1)
        
        int32_t r14_1 = *(*(rsi + 8) + 0x1b18)
        int32_t r14_2 = r14_1 - 1
        
        if (r14_1 - 1 s>= 0)
            int64_t r15_1 = sx.q(r14_2) << 3
            int64_t r13_1 = r15_1
            int64_t r12_2 = sx.q(r14_2 + 1) << 3
            int32_t temp6_1
            
            do
                int64_t* i = *(r15_1 + *(*(rsi + 8) + 0x1b10))
                
                if (i != 0)
                    i[1].d += 1
                
                int64_t r11_1 = sx.q(*(rsi + 0x2f8))
                arg1.b = 0
                int64_t r10_1 = 0
                
                if (r11_1 s<= 0)
                label_1414b35c7:
                    int32_t rcx_4 = i[0xaa].d * 2
                    sub_1414944e0(*(rsi + 8) + 0x1b20, i[0xa8].d, *(i + 0x544), i[0xa9].d + rcx_4, 
                        arg3, *(i + 0x54c) + rcx_4)
                    int64_t** rdi_2 = *(rsi + 8) + 0x1b10
                    int64_t* rcx_7 = *(*rdi_2 + r13_1)
                    
                    if (rcx_7 != 0)
                        rcx_7[1].d -= 1
                        
                        if (rcx_7[1].d == 1)
                            (**rcx_7)(rcx_7, 1)
                    
                    int32_t rax_15 = rdi_2[1].d
                    int32_t rdx_7 = rax_15 - r14_2
                    
                    if (rdx_7 != 1)
                        int64_t* rax_14 = *rdi_2
                        memmove(rax_14 + r13_1, rax_14 + r12_2, (rdx_7 - 1) << 3)
                        rax_15 = rdi_2[1].d
                    
                    rdi_2[1].d = rax_15 - 1
                    arg1, arg3 = sub_1405c53d0(rdi_2)
                else
                    int64_t r9_1 = 0
                    int32_t rax_10
                    
                    do
                        if (arg1.b != 0)
                            goto label_1414b365e
                        
                        int64_t rcx_3 = *(rsi + 0x2f0)
                        int64_t* r8_1 = *(rcx_3 + r9_1 + 0x50)
                        int64_t* rax_9 = r8_1
                        void* rdx_2 = &r8_1[sx.q(*(rcx_3 + r9_1 + 0x58))]
                        
                        if (r8_1 == rdx_2)
                        label_1414b35a7:
                            rax_10 = -1
                        else
                            while (*rax_9 != i)
                                rax_9 = &rax_9[1]
                                
                                if (rax_9 == rdx_2)
                                    goto label_1414b35a7
                            
                            rax_10 = ((rax_9 - r8_1) s>> 3).d
                        
                        arg1.b = rax_10 != 0xffffffff
                        r10_1 += 1
                        r9_1 += 0x70
                    while (r10_1 s< r11_1)
                    
                    if (rax_10 == 0xffffffff)
                        goto label_1414b35c7
                
            label_1414b365e:
                
                if (i != 0)
                    i[1].d -= 1
                    
                    if (i[1].d == 1)
                        (**i)(i, 1)
                
                r12_2 -= 8
                r13_1 -= 8
                r15_1 -= 8
                temp6_1 = r14_2
                r14_2 -= 1
            while (temp6_1 - 1 s>= 0)
        
        bool cond:0_1 = *(rsi + 0x2f8) s<= 0
        int64_t* r12_3 = nullptr
        int64_t* var_f0 = nullptr
        int32_t i_4 = 0
        int32_t rcx_11 = 0
        int32_t var_e4_1 = 0
        int32_t i_1 = 0
        i_3 = 0
        
        if (not(cond:0_1))
            int64_t r13_2 = 0x58
            
            do
                int32_t* rax_18 = *(rsi + 0x2f0)
                int32_t j = 0
                
                if (*(rax_18 + r13_2) s> 0)
                    int64_t* r15_2 = nullptr
                    
                    do
                        int64_t* rbx_3 = *(r15_2 + *(rax_18 + r13_2 - 8))
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d += 1
                        
                        int32_t rax_20
                        
                        if ((rbx_3[0xae].b & 4) != 0)
                            rax_20 = rbx_3[1].d
                        else
                            int64_t i_5 = sx.q(i_4)
                            i_4 = (i_5 + 1).d
                            
                            if (i_4 s> rcx_11)
                                sub_14083a310(&var_f0, i_5.d)
                                r12_3 = var_f0
                            
                            r12_3[i_5] = rbx_3
                            rsi = var_f8
                            rax_20 = rbx_3[1].d + 1
                        
                        rbx_3[1].d = rax_20 - 1
                        
                        if (rax_20 == 1)
                            (**rbx_3)(rbx_3, 1)
                        
                        rax_18 = *(rsi + 0x2f0)
                        j += 1
                        rcx_11 = var_e4_1
                        r15_2 = &r15_2[1]
                    while (j s< *(rax_18 + r13_2))
                    
                    i_1 = i_3
                
                i_1 += 1
                r13_2 += 0x70
                i_3 = i_1
            while (i_1 s< *(rsi + 0x2f8))
        
        char var_108
        result = sub_1414700e0(r12_3, i_4, var_108)
        
        if (i_4 s> 0)
            int64_t* r13_3 = r12_3
            i_3.q = zx.q(i_4)
            
            do
                int64_t* rbx_4 = *r13_3
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                
                int32_t r14_3 = rbx_4[0xa9].d
                int32_t* rsi_2 = *(rsi + 8) + 0x1b20
                int32_t rcx_15 = rbx_4[0xaa].d * 2
                int32_t r15_4 = *(rbx_4 + 0x54c) + rcx_15
                int32_t r14_4 = r14_3 + rcx_15
                int32_t rax_28
                
                if (r14_3 == neg.d(rcx_15) || r15_4 == 0)
                    rbx_4[0xa8] = 0
                label_1414b398a:
                    rbx_4[0xae].d |= 5
                    void* rsi_4 = *(var_f8 + 8)
                    int64_t r14_6 = sx.q(*(rsi_4 + 0x1b18))
                    int32_t rax_42 = (r14_6 + 1).d
                    *(rsi_4 + 0x1b18) = rax_42
                    
                    if (rax_42 s> *(rsi_4 + 0x1b1c))
                        sub_1405a4d70(rsi_4 + 0x1b10)
                    
                    *(*(rsi_4 + 0x1b10) + (r14_6 << 3)) = rbx_4
                    rax_28 = rbx_4[1].d + 1
                else
                    if (*(rsi_2 + 0xd) != 0)
                        r14_4 = (r14_4 + 3) & 0xfffffffc
                        r15_4 = (r15_4 + 3) & 0xfffffffc
                    
                    int32_t var_118
                    var_118.b = 0
                    int32_t rax_26 = sub_141479db0(rsi_2, 0, r14_4, r15_4, var_118.b)
                    int32_t rcx_17 = rax_26
                    int32_t rax_27
                    
                    if (rax_26 == 0xffffffff)
                        var_118.b = 1
                        rax_27 = sub_141479db0(rsi_2, 0, r14_4, r15_4, var_118.b)
                        rcx_17 = rax_27
                    
                    if (rax_26 != 0xffffffff || rax_27 != 0xffffffff)
                        void* rax_29 = *(rsi_2 + 0x78)
                        void* rdx_12 = &rsi_2[4]
                        
                        if (rax_29 != 0)
                            rdx_12 = rax_29
                        
                        int64_t rcx_19 = sx.q(rcx_17) * 5
                        uint32_t rax_31 = zx.d(*(rdx_12 + (rcx_19 << 2) + 8))
                        void* r9_6 = rdx_12 + (rcx_19 << 2)
                        *(r9_6 + 0x10) = 1
                        rbx_4[0xa8].d = rax_31
                        *(rbx_4 + 0x544) = zx.d(*(r9_6 + 0xa))
                        int32_t rdx_14 = zx.d(*(r9_6 + 8)) + r14_4
                        char temp11_1 = rsi_2[3].b
                        
                        if (temp11_1 == 0)
                            if (*rsi_2 u>= rdx_14)
                                rdx_14 = *rsi_2
                            
                            *rsi_2 = rdx_14
                            int32_t rcx_33 = zx.d(*(r9_6 + 0xa)) + r15_4
                            
                            if (rsi_2[1] u>= rcx_33)
                                rcx_33 = rsi_2[1]
                            
                            rsi_2[1] = rcx_33
                        else
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rdx_14)
                            int32_t rcx_20
                            
                            if (temp11_1 == 0)
                                rcx_20 = 0x20
                            else
                                rcx_20 = 0x1f - temp0_2
                            
                            int32_t rcx_22 = rcx_20 << 0x1a s>> 0x1f
                            uint64_t rflags_2
                            char temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rdx_14 - 1)
                            char rdx_15
                            
                            if (rcx_22 == 0)
                                rdx_15 = 0x20
                            else
                                rdx_15 = 0x1f - temp0_3
                            
                            int32_t r8_9 = 1 << ((not.d(rcx_22)).b & (0x20 - rdx_15))
                            
                            if (*rsi_2 u>= r8_9)
                                r8_9 = *rsi_2
                            
                            *rsi_2 = r8_9
                            uint32_t rax_36 = zx.d(*(r9_6 + 0xa))
                            int32_t rax_37 = rax_36 + r15_4
                            uint64_t rflags_3
                            int32_t temp0_4
                            temp0_4, rflags_3 = _bit_scan_reverse(rax_37)
                            int32_t rcx_25
                            
                            if (rax_36 == neg.d(r15_4))
                                rcx_25 = 0x20
                            else
                                rcx_25 = 0x1f - temp0_4
                            
                            uint64_t rflags_4
                            char temp0_5
                            temp0_5, rflags_4 = _bit_scan_reverse(rax_37 - 1)
                            char rdx_17
                            
                            if (rax_37 == 1)
                                rdx_17 = 0x20
                            else
                                rdx_17 = 0x1f - temp0_5
                            
                            int32_t rdx_18 =
                                1 << ((not.d(rcx_25 << 0x1a s>> 0x1f)).b & (0x20 - rdx_17))
                            int32_t rcx_30 = rsi_2[2]
                            
                            if (rsi_2[1] u>= rdx_18)
                                rdx_18 = rsi_2[1]
                            
                            rsi_2[1] = rdx_18
                            
                            if (rcx_30 == 1)
                                int32_t rax_40 = rdx_18 * 2
                                
                                if (r8_9 u>= rax_40)
                                    rax_40 = r8_9
                                
                                *rsi_2 = rax_40
                                int32_t rax_41 = rax_40 u>> 1
                                
                                if (rdx_18 u>= rax_41)
                                    rax_41 = rdx_18
                                
                                rsi_2[1] = rax_41
                            else if (rcx_30 == 2)
                                if (r8_9 u>= rdx_18)
                                    rdx_18 = r8_9
                                
                                *rsi_2 = rdx_18
                                rsi_2[1] = rdx_18
                        
                        goto label_1414b398a
                    
                    rax_28 = rbx_4[1].d
                
                result = zx.q(rax_28 - 1)
                rbx_4[1].d = result.d
                
                if (rax_28 == 1)
                    result = (**rbx_4)(rbx_4, 1)
                
                rsi = var_f8
                r13_3 = &r13_3[1]
                i_3.q -= 1
            while (i_3.q != 1)
        
        if (i_4 != 0)
            int32_t i_2
            
            do
                int64_t* rcx_36 = *r12_3
                
                if (rcx_36 != 0)
                    rcx_36[1].d -= 1
                    
                    if (rcx_36[1].d == 1)
                        result = (**rcx_36)(rcx_36, 1)
                
                r12_3 = &r12_3[1]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)

__security_check_cookie(rax_1 ^ &var_138)
return result
