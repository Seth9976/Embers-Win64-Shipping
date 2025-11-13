// 函数: sub_142a28cf0
// 地址: 0x142a28cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int64_t rbp = *(arg1 + 0x188)
int32_t result_2 = 0
uint64_t r14 = zx.q(arg6)
int32_t rbx = arg9[1].d
int64_t var_498 = rbp
int32_t r11_1 = 0x10 << (arg4 * 2)
int32_t result_3 = 0
int64_t rax_6
rax_6.b = *(**(arg1 + 0x1a8) + 8) s> 0
int64_t r8 = rax_6 + ((sx.q(arg2) + (zx.q(arg4) << 1)) << 1)
void* const r10_1 = &data_143601c10
int64_t r15_1 = r8 * 0x6c + *(arg1 + 0x1e0) + 0xae
int64_t var_460 = r15_1

if (arg4 == 0)
    r10_1 = &data_143602010

int32_t r9 = *(arg9 + 0xc)
int64_t rax_11 = *arg9
int16_t var_4b8 = *arg5
int64_t rdx_3
int64_t r12_1

if (rbp == 0)
    int64_t var_488
    rdx_3 = var_488
    r12_1 = var_488
else
    rdx_3 = rbp + 0x330 + r8 * 0x240
    r12_1 = rbp + 0x2730 + r8 * 0x90

int64_t rcx_7 = sx.q(r11_1)
int64_t var_488_1 = r12_1
int64_t var_4b0 = 0
uint64_t result

if (r11_1 s> 0)
    while (true)
        uint64_t r13_1 = zx.q(*r10_1)
        int64_t r8_1 = sx.q(r14.d)
        void* var_480_1 = r10_1 + 1
        int64_t rdx_4 = r8_1 + r13_1 * 6
        char* r15_3 = rdx_4 * 3 + r15_1
        
        if (rbp != 0)
            *(r12_1 + (rdx_4 << 2)) += 1
        
        uint64_t rsi_3 = zx.q(((rbx - 1) * zx.d(*r15_3) + 0x100) u>> 8)
        uint64_t rbp_2 = zx.q(rsi_3.d) << 0x38
        
        if (r9 s< 0)
            *arg9 = rax_11
            *(arg9 + 0xc) = r9
            sub_142a23140(arg9)
            rax_11 = *arg9
            r9 = *(arg9 + 0xc)
            r8_1 = sx.q(r14.d)
        
        if (rax_11 u< rbp_2)
            uint32_t rdx_50 = zx.d(*(rsi_3 + &data_143603f00))
            result_2 = result_3
            char rcx_122 = rdx_50.b
            rbx = rsi_3.d << rcx_122
            r9 -= rdx_50
            rax_11 <<= rcx_122
            
            if (var_498 != 0)
                int64_t rcx_124 = (r8_1 + r13_1 * 6) * 2
                *(rdx_3 + (rcx_124 << 3) + 0xc) += 1
            
            break
        
        uint64_t rbx_1 = zx.q(rbx - rsi_3.d)
        uint32_t rdx_5 = zx.d(*(rbx_1 + &data_143603f00))
        char rcx_12 = rdx_5.b
        rbx = rbx_1.d << rcx_12
        int64_t rax_13 = (rax_11 - rbp_2) << rcx_12
        r9 -= rdx_5
        char var_458[0x400]
        int64_t rax_15
        uint32_t rdx_10
        int32_t rbx_4
        uint64_t rbp_6
        uint64_t rsi_11
        int32_t r9_1
        
        while (true)
            uint64_t rsi_7 = zx.q((zx.d(r15_3[1]) * (rbx - 1) + 0x100) u>> 8)
            uint64_t rbp_4 = zx.q(rsi_7.d) << 0x38
            
            if (r9 s< 0)
                *arg9 = rax_13
                *(arg9 + 0xc) = r9
                sub_142a23140(arg9)
                rax_13 = *arg9
                r9 = *(arg9 + 0xc)
            
            if (rax_13 u>= rbp_4)
                uint64_t rbx_3 = zx.q(rbx - rsi_7.d)
                rdx_10 = zx.d(*(rbx_3 + &data_143603f00))
                char rcx_29 = rdx_10.b
                rbx_4 = rbx_3.d << rcx_29
                rax_15 = (rax_13 - rbp_4) << rcx_29
                rsi_11 = zx.q(((rbx_4 - 1) * zx.d(r15_3[2]) + 0x100) u>> 8)
                rbp_6 = zx.q(rsi_11.d) << 0x38
                r9_1 = r9 - rdx_10
                break
            
            uint32_t rdx_6 = zx.d(*(rsi_7 + &data_143603f00))
            char rcx_15 = rdx_6.b
            r9 -= rdx_6
            rbx = rsi_7.d << rcx_15
            rax_13 <<= rcx_15
            
            if (var_498 != 0)
                int64_t r8_3 = (sx.q(r14.d) + zx.q(r13_1.d) * 6) * 2
                *(rdx_3 + (r8_3 << 3)) += 1
            
            var_4b8 = arg5[1]
            int64_t rcx_22 = sx.q(*(arg7 + (var_4b0 << 1)))
            
            if (rcx_22 u>= 0x400)
                __report_rangecheckfailure()
                noreturn
            
            var_458[rcx_22] = 0
            int64_t r10_4 = var_4b0 + 1
            int32_t result_1 = result_3 + 1
            var_4b0 = r10_4
            result_3 = result_1
            
            if (r10_4 s>= rcx_7)
                *arg9 = rax_13
                result = zx.q(result_1)
                goto label_142a29a34
            
            uint64_t rcx_26 = zx.q(*var_480_1)
            r13_1 = zx.q(rcx_26.d)
            r14 = zx.q((zx.d(var_458[sx.q(*(arg8 + (r10_4 << 2) + 2))]) + 1
                + zx.d(var_458[sx.q(*(arg8 + (r10_4 << 2)))])) u>> 1)
            var_480_1 += 1
            r15_3 = (r14 + rcx_26 * 6) * 3 + var_460
        
        if (r9 - rdx_10 s< 0)
            *arg9 = rax_15
            *(arg9 + 0xc) = r9_1
            sub_142a23140(arg9)
            rax_15 = *arg9
            r9_1 = *(arg9 + 0xc)
        
        int64_t rax_25
        int32_t rbx_14
        int32_t rsi_33
        int32_t r9_6
        int16_t* r12_2
        int64_t r13_2
        
        if (rax_15 u< rbp_6)
            uint32_t rdx_44 = zx.d(*(rsi_11 + &data_143603f00))
            char rcx_108 = rdx_44.b
            r9_6 = r9_1 - rdx_44
            rbx_14 = rsi_11.d << rcx_108
            rax_25 = rax_15 << rcx_108
            
            if (var_498 != 0)
                int64_t r8_8 = (sx.q(r14.d) + zx.q(r13_1.d) * 6) * 2
                *(rdx_3 + (r8_8 << 3) + 4) += 1
            
            r13_2 = var_4b0
            rsi_33 = sx.d(var_4b8)
            r12_2 = arg7 + (r13_2 << 1)
            var_458[sx.q(*(arg7 + (r13_2 << 1)))] = 1
        else
            uint64_t rbx_5 = zx.q(rbx_4 - rsi_11.d)
            uint32_t rdx_11 = zx.d(*(rbx_5 + &data_143603f00))
            char rcx_32 = rdx_11.b
            int32_t r9_2 = r9_1 - rdx_11
            int32_t rbx_6 = rbx_5.d << rcx_32
            int64_t rax_17 = (rax_15 - rbp_6) << rcx_32
            char* r15_6 = (sx.q(zx.d(r15_3[2]) - 1) << 3) + 0x143602040
            
            if (var_498 != 0)
                int64_t r8_6 = (sx.q(r14.d) + zx.q(r13_1.d) * 6) * 2
                *(rdx_3 + (r8_6 << 3) + 8) += 1
            
            uint64_t rsi_15 = zx.q(((rbx_6 - 1) * zx.d(*r15_6) + 0x100) u>> 8)
            uint64_t rbp_8 = zx.q(rsi_15.d) << 0x38
            
            if (r9_2 s< 0)
                *arg9 = rax_17
                *(arg9 + 0xc) = r9_2
                sub_142a23140(arg9)
                rax_17 = *arg9
                r9_2 = *(arg9 + 0xc)
            
            if (rax_17 u< rbp_8)
                uint32_t rdx_37 = zx.d(*(rsi_15 + &data_143603f00))
                char rcx_95 = rdx_37.b
                int32_t rbx_38 = rsi_15.d << rcx_95
                int64_t rax_37 = rax_17 << rcx_95
                uint64_t rsi_70 = zx.q((zx.d(r15_6[1]) * (rbx_38 - 1) + 0x100) u>> 8)
                uint64_t rbp_32 = zx.q(rsi_70.d) << 0x38
                int32_t r9_10 = r9_2 - rdx_37
                
                if (r9_2 - rdx_37 s< 0)
                    *arg9 = rax_37
                    *(arg9 + 0xc) = r9_10
                    sub_142a23140(arg9)
                    rax_37 = *arg9
                    r9_10 = *(arg9 + 0xc)
                
                r13_2 = var_4b0
                
                if (rax_37 u< rbp_32)
                    uint32_t rdx_43 = zx.d(*(rsi_70 + &data_143603f00))
                    char rcx_105 = rdx_43.b
                    rbx_14 = rsi_70.d << rcx_105
                    r9_6 = r9_10 - rdx_43
                    rax_25 = rax_37 << rcx_105
                    rsi_33 = sx.d(var_4b8) * 2
                    r12_2 = arg7 + (r13_2 << 1)
                    var_458[sx.q(*(arg7 + (r13_2 << 1)))] = 2
                else
                    uint64_t rbx_39 = zx.q(rbx_38 - rsi_70.d)
                    uint32_t rsi_71 = zx.d(r15_6[2])
                    uint32_t rdx_38 = zx.d(*(rbx_39 + &data_143603f00))
                    char rcx_98 = rdx_38.b
                    int32_t rbx_40 = rbx_39.d << rcx_98
                    int64_t rax_39 = (rax_37 - rbp_32) << rcx_98
                    r12_2 = arg7 + (r13_2 << 1)
                    var_458[sx.q(*(arg7 + (r13_2 << 1)))] = 3
                    uint64_t rsi_74 = zx.q((rsi_71 * (rbx_40 - 1) + 0x100) u>> 8)
                    uint64_t rbp_34 = zx.q(rsi_74.d) << 0x38
                    int32_t r9_11 = r9_10 - rdx_38
                    
                    if (r9_10 - rdx_38 s< 0)
                        *arg9 = rax_39
                        *(arg9 + 0xc) = r9_11
                        sub_142a23140(arg9)
                        rax_39 = *arg9
                        r9_11 = *(arg9 + 0xc)
                    
                    if (rax_39 u< rbp_34)
                        uint32_t rdx_41 = zx.d(*(rsi_74 + &data_143603f00))
                        char rcx_104 = rdx_41.b
                        r9_6 = r9_11 - rdx_41
                        rbx_14 = rsi_74.d << rcx_104
                        rax_25 = rax_39 << rcx_104
                        rsi_33 = 3 * sx.d(var_4b8)
                    else
                        uint64_t rbx_41 = zx.q(rbx_40 - rsi_74.d)
                        uint32_t rdx_39 = zx.d(*(rbx_41 + &data_143603f00))
                        char rcx_103 = rdx_39.b
                        r9_6 = r9_11 - rdx_39
                        rbx_14 = rbx_41.d << rcx_103
                        rax_25 = (rax_39 - rbp_34) << rcx_103
                        rsi_33 = 4 * sx.d(var_4b8)
            else
                uint64_t rbx_7 = zx.q(rbx_6 - rsi_15.d)
                uint32_t rdx_14 = zx.d(*(rbx_7 + &data_143603f00))
                char rcx_40 = rdx_14.b
                int32_t rbx_8 = rbx_7.d << rcx_40
                int64_t rax_19 = (rax_17 - rbp_8) << rcx_40
                uint64_t rsi_19 = zx.q((zx.d(r15_6[3]) * (rbx_8 - 1) + 0x100) u>> 8)
                uint64_t rbp_10 = zx.q(rsi_19.d) << 0x38
                int32_t r9_3 = r9_2 - rdx_14
                
                if (r9_2 - rdx_14 s< 0)
                    *arg9 = rax_19
                    *(arg9 + 0xc) = r9_3
                    sub_142a23140(arg9)
                    rax_19 = *arg9
                    r9_3 = *(arg9 + 0xc)
                
                r13_2 = var_4b0
                
                if (rax_19 u< rbp_10)
                    uint32_t rdx_30 = zx.d(*(rsi_19 + &data_143603f00))
                    uint32_t rsi_53 = zx.d(r15_6[4])
                    char rcx_79 = rdx_30.b
                    int32_t rbx_29 = rsi_19.d << rcx_79
                    int64_t rax_32 = rax_19 << rcx_79
                    int16_t* rcx_81 = arg7 + (r13_2 << 1)
                    var_458[sx.q(*rcx_81)] = 4
                    uint64_t rsi_56 = zx.q((rsi_53 * (rbx_29 - 1) + 0x100) u>> 8)
                    uint64_t rbp_26 = zx.q(rsi_56.d) << 0x38
                    int32_t r9_8 = r9_3 - rdx_30
                    
                    if (r9_3 - rdx_30 s< 0)
                        *arg9 = rax_32
                        *(arg9 + 0xc) = r9_8
                        sub_142a23140(arg9)
                        rax_32 = *arg9
                        r9_8 = *(arg9 + 0xc)
                    
                    if (rax_32 u< rbp_26)
                        uint32_t rdx_34 = zx.d(*(rsi_56 + &data_143603f00))
                        char rcx_91 = rdx_34.b
                        int32_t rbx_34 = rsi_56.d << rcx_91
                        int64_t rax_35 = rax_32 << rcx_91
                        uint64_t rsi_65 = zx.q(((rbx_34 - 1) * 0x9f + 0x100) u>> 8)
                        uint64_t rbp_30 = zx.q(rsi_65.d) << 0x38
                        int32_t r9_9 = r9_8 - rdx_34
                        
                        if (r9_8 - rdx_34 s< 0)
                            *arg9 = rax_35
                            *(arg9 + 0xc) = r9_9
                            sub_142a23140(arg9)
                            rax_35 = *arg9
                            r9_9 = *(arg9 + 0xc)
                        
                        int32_t r14_17
                        
                        if (rax_35 u< rbp_30)
                            uint32_t rdx_36 = zx.d(*(rsi_65 + &data_143603f00))
                            char rcx_94 = rdx_36.b
                            r9_6 = r9_9 - rdx_36
                            rbx_14 = rsi_65.d << rcx_94
                            rax_25 = rax_35 << rcx_94
                            r14_17 = 0
                        else
                            uint64_t rbx_35 = zx.q(rbx_34 - rsi_65.d)
                            r14_17 = 1
                            uint32_t rdx_35 = zx.d(*(rbx_35 + &data_143603f00))
                            char rcx_93 = rdx_35.b
                            rbx_14 = rbx_35.d << rcx_93
                            rax_25 = (rax_35 - rbp_30) << rcx_93
                            r9_6 = r9_9 - rdx_35
                        
                        r12_2 = rcx_81
                        rsi_33 = sx.d(var_4b8) * (r14_17 + 5)
                    else
                        uint64_t rbx_30 = zx.q(rbx_29 - rsi_56.d)
                        int32_t r14_14 = 0
                        uint32_t rdx_31 = zx.d(*(rbx_30 + &data_143603f00))
                        char rcx_85 = rdx_31.b
                        r9_6 = r9_8 - rdx_31
                        rbx_14 = rbx_30.d << rcx_85
                        rax_25 = (rax_32 - rbp_26) << rcx_85
                        
                        for (int64_t i = 0; i s< 2; )
                            uint64_t rsi_60 =
                                zx.q((zx.d(*(i + 0x143601bc0)) * (rbx_14 - 1) + 0x100) u>> 8)
                            uint64_t rbp_28 = zx.q(rsi_60.d) << 0x38
                            
                            if (r9_6 s< 0)
                                *arg9 = rax_25
                                *(arg9 + 0xc) = r9_6
                                sub_142a23140(arg9)
                                rax_25 = *arg9
                                r9_6 = *(arg9 + 0xc)
                            
                            int32_t rcx_89
                            
                            if (rax_25 u< rbp_28)
                                uint32_t rdx_33 = zx.d(*(rsi_60 + &data_143603f00))
                                char rcx_90 = rdx_33.b
                                r9_6 -= rdx_33
                                rbx_14 = rsi_60.d << rcx_90
                                rax_25 <<= rcx_90
                                rcx_89 = 0
                            else
                                uint64_t rbx_31 = zx.q(rbx_14 - rsi_60.d)
                                uint32_t rdx_32 = zx.d(*(rbx_31 + &data_143603f00))
                                char rcx_88 = rdx_32.b
                                rbx_14 = rbx_31.d << rcx_88
                                rax_25 = (rax_25 - rbp_28) << rcx_88
                                rcx_89 = 1
                                r9_6 -= rdx_32
                            
                            i += 1
                            r14_14 = (r14_14 * 2) | rcx_89
                        
                        r12_2 = rcx_81
                        rsi_33 = sx.d(var_4b8) * (r14_14 + 7)
                else
                    uint64_t rbx_9 = zx.q(rbx_8 - rsi_19.d)
                    uint32_t rsi_20 = zx.d(r15_6[5])
                    uint32_t rdx_15 = zx.d(*(rbx_9 + &data_143603f00))
                    char rcx_43 = rdx_15.b
                    int32_t rbx_10 = rbx_9.d << rcx_43
                    int64_t rax_21 = (rax_19 - rbp_10) << rcx_43
                    int16_t* rcx_45 = arg7 + (r13_2 << 1)
                    var_458[sx.q(*rcx_45)] = 5
                    uint64_t rsi_23 = zx.q((rsi_20 * (rbx_10 - 1) + 0x100) u>> 8)
                    uint64_t rbp_12 = zx.q(rsi_23.d) << 0x38
                    int32_t r9_4 = r9_3 - rdx_15
                    
                    if (r9_3 - rdx_15 s< 0)
                        *arg9 = rax_21
                        *(arg9 + 0xc) = r9_4
                        sub_142a23140(arg9)
                        rax_21 = *arg9
                        r9_4 = *(arg9 + 0xc)
                    
                    if (rax_21 u< rbp_12)
                        uint32_t rdx_23 = zx.d(*(rsi_23 + &data_143603f00))
                        char rcx_64 = rdx_23.b
                        int32_t rbx_21 = rsi_23.d << rcx_64
                        int64_t rax_28 = rax_21 << rcx_64
                        uint64_t rsi_42 = zx.q((zx.d(r15_6[6]) * (rbx_21 - 1) + 0x100) u>> 8)
                        uint64_t rbp_20 = zx.q(rsi_42.d) << 0x38
                        int32_t r9_7 = r9_4 - rdx_23
                        
                        if (r9_4 - rdx_23 s< 0)
                            *arg9 = rax_28
                            *(arg9 + 0xc) = r9_7
                            sub_142a23140(arg9)
                            rax_28 = *arg9
                            r9_7 = *(arg9 + 0xc)
                        
                        int32_t r14_9 = 0
                        
                        if (rax_28 u< rbp_20)
                            uint32_t rdx_27 = zx.d(*(rsi_42 + &data_143603f00))
                            char rcx_73 = rdx_27.b
                            r9_6 = r9_7 - rdx_27
                            rbx_14 = rsi_42.d << rcx_73
                            rax_25 = rax_28 << rcx_73
                            
                            for (int64_t i_1 = 0; i_1 s< 3; )
                                uint64_t rsi_51 =
                                    zx.q((zx.d(*(i_1 + 0x143601bd0)) * (rbx_14 - 1) + 0x100) u>> 8)
                                uint64_t rbp_24 = zx.q(rsi_51.d) << 0x38
                                
                                if (r9_6 s< 0)
                                    *arg9 = rax_25
                                    *(arg9 + 0xc) = r9_6
                                    sub_142a23140(arg9)
                                    rax_25 = *arg9
                                    r9_6 = *(arg9 + 0xc)
                                
                                int32_t rcx_77
                                
                                if (rax_25 u< rbp_24)
                                    uint32_t rdx_29 = zx.d(*(rsi_51 + &data_143603f00))
                                    char rcx_78 = rdx_29.b
                                    r9_6 -= rdx_29
                                    rbx_14 = rsi_51.d << rcx_78
                                    rax_25 <<= rcx_78
                                    rcx_77 = 0
                                else
                                    uint64_t rbx_26 = zx.q(rbx_14 - rsi_51.d)
                                    uint32_t rdx_28 = zx.d(*(rbx_26 + &data_143603f00))
                                    char rcx_76 = rdx_28.b
                                    rbx_14 = rbx_26.d << rcx_76
                                    rax_25 = (rax_25 - rbp_24) << rcx_76
                                    rcx_77 = 1
                                    r9_6 -= rdx_28
                                
                                i_1 += 1
                                r14_9 = (r14_9 * 2) | rcx_77
                            
                            r12_2 = rcx_45
                            rsi_33 = sx.d(var_4b8) * (r14_9 + 0xb)
                        else
                            uint64_t rbx_22 = zx.q(rbx_21 - rsi_42.d)
                            uint32_t rdx_24 = zx.d(*(rbx_22 + &data_143603f00))
                            char rcx_67 = rdx_24.b
                            r9_6 = r9_7 - rdx_24
                            rbx_14 = rbx_22.d << rcx_67
                            rax_25 = (rax_28 - rbp_20) << rcx_67
                            
                            for (int64_t i_2 = 0; i_2 s< 4; )
                                uint64_t rsi_46 =
                                    zx.q((zx.d(*(i_2 + 0x143601be0)) * (rbx_14 - 1) + 0x100) u>> 8)
                                uint64_t rbp_22 = zx.q(rsi_46.d) << 0x38
                                
                                if (r9_6 s< 0)
                                    *arg9 = rax_25
                                    *(arg9 + 0xc) = r9_6
                                    sub_142a23140(arg9)
                                    rax_25 = *arg9
                                    r9_6 = *(arg9 + 0xc)
                                
                                int32_t rcx_71
                                
                                if (rax_25 u< rbp_22)
                                    uint32_t rdx_26 = zx.d(*(rsi_46 + &data_143603f00))
                                    char rcx_72 = rdx_26.b
                                    r9_6 -= rdx_26
                                    rbx_14 = rsi_46.d << rcx_72
                                    rax_25 <<= rcx_72
                                    rcx_71 = 0
                                else
                                    uint64_t rbx_23 = zx.q(rbx_14 - rsi_46.d)
                                    uint32_t rdx_25 = zx.d(*(rbx_23 + &data_143603f00))
                                    char rcx_70 = rdx_25.b
                                    rbx_14 = rbx_23.d << rcx_70
                                    rax_25 = (rax_25 - rbp_22) << rcx_70
                                    rcx_71 = 1
                                    r9_6 -= rdx_25
                                
                                i_2 += 1
                                r14_9 = (r14_9 * 2) | rcx_71
                            
                            r12_2 = rcx_45
                            rsi_33 = sx.d(var_4b8) * (r14_9 + 0x13)
                    else
                        uint64_t rbx_11 = zx.q(rbx_10 - rsi_23.d)
                        uint32_t rdx_16 = zx.d(*(rbx_11 + &data_143603f00))
                        char rcx_49 = rdx_16.b
                        int32_t rbx_12 = rbx_11.d << rcx_49
                        int64_t rax_23 = (rax_21 - rbp_12) << rcx_49
                        uint64_t rsi_27 = zx.q((zx.d(r15_6[7]) * (rbx_12 - 1) + 0x100) u>> 8)
                        uint64_t rbp_14 = zx.q(rsi_27.d) << 0x38
                        int32_t r9_5 = r9_4 - rdx_16
                        
                        if (r9_4 - rdx_16 s< 0)
                            *arg9 = rax_23
                            *(arg9 + 0xc) = r9_5
                            sub_142a23140(arg9)
                            rax_23 = *arg9
                            r9_5 = *(arg9 + 0xc)
                        
                        int32_t r14_4 = 0
                        
                        if (rax_23 u< rbp_14)
                            uint32_t rdx_20 = zx.d(*(rsi_27 + &data_143603f00))
                            char rcx_58 = rdx_20.b
                            r9_6 = r9_5 - rdx_20
                            rbx_14 = rsi_27.d << rcx_58
                            rax_25 = rax_23 << rcx_58
                            
                            for (int64_t i_3 = 0; i_3 s< 5; )
                                uint64_t rsi_37 =
                                    zx.q((zx.d(*(i_3 + 0x143601bf0)) * (rbx_14 - 1) + 0x100) u>> 8)
                                uint64_t rbp_18 = zx.q(rsi_37.d) << 0x38
                                
                                if (r9_6 s< 0)
                                    *arg9 = rax_25
                                    *(arg9 + 0xc) = r9_6
                                    sub_142a23140(arg9)
                                    rax_25 = *arg9
                                    r9_6 = *(arg9 + 0xc)
                                
                                int32_t rcx_62
                                
                                if (rax_25 u< rbp_18)
                                    uint32_t rdx_22 = zx.d(*(rsi_37 + &data_143603f00))
                                    char rcx_63 = rdx_22.b
                                    r9_6 -= rdx_22
                                    rbx_14 = rsi_37.d << rcx_63
                                    rax_25 <<= rcx_63
                                    rcx_62 = 0
                                else
                                    uint64_t rbx_18 = zx.q(rbx_14 - rsi_37.d)
                                    uint32_t rdx_21 = zx.d(*(rbx_18 + &data_143603f00))
                                    char rcx_61 = rdx_21.b
                                    rbx_14 = rbx_18.d << rcx_61
                                    rax_25 = (rax_25 - rbp_18) << rcx_61
                                    rcx_62 = 1
                                    r9_6 -= rdx_21
                                
                                i_3 += 1
                                r14_4 = (r14_4 * 2) | rcx_62
                            
                            r12_2 = rcx_45
                            rsi_33 = sx.d(var_4b8) * (r14_4 + 0x23)
                        else
                            uint64_t rbx_13 = zx.q(rbx_12 - rsi_27.d)
                            uint32_t rdx_17 = zx.d(*(rbx_13 + &data_143603f00))
                            char rcx_52 = rdx_17.b
                            r9_6 = r9_5 - rdx_17
                            rbx_14 = rbx_13.d << rcx_52
                            rax_25 = (rax_23 - rbp_14) << rcx_52
                            
                            for (int64_t i_4 = 0; i_4 s< 0xe; )
                                uint64_t rsi_31 =
                                    zx.q((zx.d(*(i_4 + 0x143601c00)) * (rbx_14 - 1) + 0x100) u>> 8)
                                uint64_t rbp_16 = zx.q(rsi_31.d) << 0x38
                                
                                if (r9_6 s< 0)
                                    *arg9 = rax_25
                                    *(arg9 + 0xc) = r9_6
                                    sub_142a23140(arg9)
                                    rax_25 = *arg9
                                    r9_6 = *(arg9 + 0xc)
                                
                                int32_t rcx_56
                                
                                if (rax_25 u< rbp_16)
                                    uint32_t rdx_19 = zx.d(*(rsi_31 + &data_143603f00))
                                    char rcx_57 = rdx_19.b
                                    r9_6 -= rdx_19
                                    rbx_14 = rsi_31.d << rcx_57
                                    rax_25 <<= rcx_57
                                    rcx_56 = 0
                                else
                                    uint64_t rbx_15 = zx.q(rbx_14 - rsi_31.d)
                                    uint32_t rdx_18 = zx.d(*(rbx_15 + &data_143603f00))
                                    char rcx_55 = rdx_18.b
                                    rbx_14 = rbx_15.d << rcx_55
                                    rax_25 = (rax_25 - rbp_16) << rcx_55
                                    rcx_56 = 1
                                    r9_6 -= rdx_18
                                
                                i_4 += 1
                                r14_4 = (r14_4 * 2) | rcx_56
                            
                            r12_2 = rcx_45
                            rsi_33 = sx.d(var_4b8) * (r14_4 + 0x43)
        
        uint64_t rbp_37 = zx.q((rbx_14 + 1) << 7 u>> 8)
        uint64_t r14_20 = zx.q(rbp_37.d) << 0x38
        int16_t rsi_76 = (rsi_33 s>> (arg4 == 3)).w
        
        if (r9_6 s< 0)
            *arg9 = rax_25
            *(arg9 + 0xc) = r9_6
            sub_142a23140(arg9)
            rax_25 = *arg9
            r9_6 = *(arg9 + 0xc)
        
        if (rax_25 u< r14_20)
            uint32_t rdx_47 = zx.d(*(rbp_37 + &data_143603f00))
            char rcx_117 = rdx_47.b
            rbx = rbp_37.d << rcx_117
            rax_11 = rax_25 << rcx_117
            r9 = r9_6 - rdx_47
        else
            uint64_t rbx_45 = zx.q(rbx_14 - rbp_37.d)
            uint32_t rdx_46 = zx.d(*(rbx_45 + &data_143603f00))
            char rcx_116 = rdx_46.b
            r9 = r9_6 - rdx_46
            rbx = rbx_45.d << rcx_116
            rax_11 = (rax_25 - r14_20) << rcx_116
            rsi_76 = neg.w(rsi_76)
        
        result_3 += 1
        var_4b0 = r13_2 + 1
        *(arg3 + (sx.q(*r12_2) << 1)) = rsi_76
        r14 = zx.q((zx.d(var_458[sx.q(*(arg8 + ((r13_2 + 1) << 2) + 2))]) + 1
            + zx.d(var_458[sx.q(*(arg8 + ((r13_2 + 1) << 2)))])) u>> 1)
        var_4b8 = arg5[1]
        
        if (r13_2 + 1 s>= rcx_7)
            result_2 = result_3
            break
        
        r10_1 = var_480_1
        rbp = var_498
        r15_1 = var_460
        r12_1 = var_488_1

*arg9 = rax_11
result = zx.q(result_2)
label_142a29a34:
*(arg9 + 0xc) = r9
arg9[1].d = rbx
__security_check_cookie(rax_1 ^ &var_4d8)
return result
