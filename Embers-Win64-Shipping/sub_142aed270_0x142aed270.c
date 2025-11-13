// 函数: sub_142aed270
// 地址: 0x142aed270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128

if (arg2 u<= 0x68)
    char rsi_1 = 0
    int32_t var_100
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_e8
    int64_t rax_2
    void* rcx_437
    int32_t rdx_136
    int32_t rdx_146
    int32_t rdi_31
    
    switch (arg2)
        case 0
            void* rax_318 = sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1)
            sub_142a9db60(&var_e8)
            sub_142a9e9d0(&var_e8, 0xa, 0xd)
            sub_142a9e7d0(&var_e8, 0x85)
            sub_142a9e9d0(&var_e8, 0x2028, 0x2029)
            sub_142a9f070(&var_e8)
            sub_142a9ebe0(rax_318, &var_e8)
            sub_142a9dbc0(&var_e8)
            goto label_142aefec4
        case 1
            void* rax_315 = sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1)
            sub_142a9db60(&var_e8)
            sub_142b66390(&var_e8, 0x2000, 0x1000, *(arg1 + 8))
            sub_142a9e7d0(&var_e8, 9)
            sub_142a9ebe0(rax_315, &var_e8)
            sub_142a9dbc0(&var_e8)
            goto label_142aefec4
        case 2, 0x5a
            rax_2 = j_sub_142a7dd00(0x40)
            int64_t var_108_7 = rax_2
            
            if (rax_2 == 0)
                rax_2 = 0
            else
                *rax_2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                *(rax_2 + 8) = 2
            
            *(arg1 + 0x208) = rax_2
            
            if (rax_2 == 0)
                sub_142af0120(arg1, (rax_2 + 7).d)
            
            goto label_142aefec4
        case 3
            sub_142af0340(arg1, 0)
            *(arg1 + 0x124) = *(arg1 + 0x128)
            goto label_142aefec4
        case 5
            sub_142af0340(arg1, 0)
            int32_t* r8_10 = *(arg1 + 8)
            int32_t rax_44 = *r8_10
            int64_t rdi_7 = 0x7000000
            int64_t rcx_45 = 0x7000000
            
            if (rax_44 s> 0)
                rcx_45 = 0
            
            var_100.q = rcx_45
            
            if (rax_44 s<= 0)
                void* r9_4 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_24 = *(r9_4 + 8)
                char rax_46
                
                if (rdx_24 + 1 s< 0 || *(r9_4 + 0xc) s< rdx_24 + 1)
                    rax_46 = sub_142aeb240(r9_4, rdx_24 + 1, r8_10)
                
                if ((rdx_24 + 1 s>= 0 && *(r9_4 + 0xc) s>= rdx_24 + 1) || rax_46 != 0)
                    *(*(r9_4 + 0x18) + (sx.q(*(r9_4 + 8)) << 3)) = var_100.q
                    *(r9_4 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t rax_50 = sub_142aeb7b0(arg1, 3)
            int32_t* r8_11 = *(arg1 + 8)
            int32_t rcx_51 = *r8_11
            int32_t var_f8_1
            
            if (rcx_51 s<= 0)
                if (rax_50 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_50 s< 0)
                    abort()
                    noreturn
                
                var_f8_1 = rax_50 | 0x8000000
            else
                var_f8_1 = 0
            
            if (rcx_51 s<= 0)
                void* r9_5 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_27 = *(r9_5 + 8)
                char rax_53
                
                if (rdx_27 + 1 s< 0 || *(r9_5 + 0xc) s< rdx_27 + 1)
                    rax_53 = sub_142aeb240(r9_5, rdx_27 + 1, r8_11)
                
                if ((rdx_27 + 1 s>= 0 && *(r9_5 + 0xc) s>= rdx_27 + 1) || rax_53 != 0)
                    *(*(r9_5 + 0x18) + (sx.q(*(r9_5 + 8)) << 3)) = sx.q(var_f8_1)
                    *(r9_5 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_12 = *(arg1 + 8)
            int32_t rax_57 = *r8_12
            
            if (rax_57 s> 0)
                rdi_7 = 0
            
            if (rax_57 s<= 0)
                void* r9_6 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_30 = *(r9_6 + 8)
                char rax_59
                
                if (rdx_30 + 1 s< 0 || *(r9_6 + 0xc) s< rdx_30 + 1)
                    rax_59 = sub_142aeb240(r9_6, rdx_30 + 1, r8_12)
                
                if ((rdx_30 + 1 s>= 0 && *(r9_6 + 0xc) s>= rdx_30 + 1) || rax_59 != 0)
                    *(*(r9_6 + 0x18) + (sx.q(*(r9_6 + 8)) << 3)) = rdi_7
                    *(r9_6 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            sub_142af2700(arg1 + 0x178, *(arg1 + 0x124), *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, 0xfffffffe, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 3, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            sub_142a6f090(*(*(arg1 + 0x10) + 0x88), rax_50, *(arg1 + 8))
            int64_t rdx_40 = *(arg1 + 0x208)
            
            if (rdx_40 == 0)
                goto label_142aefec4
            
            void* rcx_66 = *(arg1 + 0x10)
            rax_2 = sub_142a86f70(*(rcx_66 + 0xd0), rdx_40, *(*(rcx_66 + 0x88) + 8), *(arg1 + 8))
            *(arg1 + 0x208) = 0
            
            if (rax_2.d s<= 0 || **(arg1 + 8) s> 0)
                goto label_142aefec4
            
            goto label_142aed94e
        case 6, 0x67
            sub_142a48580(*(arg1 + 0x208), *(arg1 + 0x48))
        label_142aefec4:
            rax_2.b = 1
            goto label_142aefed0
        case 7
            sub_142aeb6b0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), 0x200, *(arg1 + 8))
            goto label_142aefec4
        case 8
            *(arg1 + 0x128) = *(arg1 + 0x124)
            *(arg1 + 0x12c) = 1
            goto label_142aefec4
        case 9
            sub_142af0340(arg1, 0)
            int32_t rdx_208 = 0x13000000
            
            if (**(arg1 + 8) s> 0)
                rdx_208 = 0
            
            sub_142aeb830(arg1, rdx_208)
            goto label_142aefec4
        case 0xa
            rax_2 = sub_142af2950(arg1, arg3)
        label_142aefe47:
            
            if (rax_2 == 0)
                goto label_142aefec4
            
            sub_142a9ebe0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), rax_2)
            sub_142a9dbc0(rax_2)
            sub_142a47920(rax_2)
            goto label_142aefec4
        case 0xb
            sub_142af0120(arg1, 0x10308)
            goto label_142aefec4
        case 0xc
            if ((*(arg1 + 0x124) & 0x200) != 0)
                int32_t rcx_447 = *(arg1 + 0x48)
                
                if (rcx_447 - 0x41 u<= 0x19 || rcx_447 - 0x61 u<= 0x19)
                    sub_142af0120(arg1, 0x10303)
            
            goto label_142aefd1d
        case 0xd
            sub_142a9ebe0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), 
                *(data_144016850 + 0x20))
            goto label_142aefec4
        case 0xe
            goto label_142aefec4
        case 0xf
            sub_142af0340(arg1, 0)
            int32_t rdx_205 = 0x3a000000
            
            if (**(arg1 + 8) s> 0)
                rdx_205 = 0
            
            sub_142aeb830(arg1, rdx_205)
            goto label_142aefec4
        case 0x10
            sub_142af0340(arg1, 0)
            int32_t rax_166 = sub_142aeb730(arg1, 4)
            int32_t rdx_108
            
            if (**(arg1 + 8) s<= 0)
                if (rax_166 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_166 s< 0)
                    abort()
                    noreturn
                
                rdx_108 = rax_166 | 0x2c000000
            else
                rdx_108 = 0
            
            sub_142aeb830(arg1, rdx_108)
            int32_t rdi_20
            
            if (**(arg1 + 8) s<= 0)
                if (rax_166 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_166 s< 0)
                    abort()
                    noreturn
                
                rdi_20 = rax_166 | 0x2d000000
            else
                rdi_20 = 0
            
            sub_142aeb830(arg1, rdi_20)
            sub_142aeb830(arg1, 0)
            sub_142aeb830(arg1, 0)
            int32_t rdi_21 = 0x7000000
            int32_t rdx_111 = 0x7000000
            
            if (**(arg1 + 8) s> 0)
                rdx_111 = 0
            
            sub_142aeb830(arg1, rdx_111)
            
            if (**(arg1 + 8) s> 0)
                rdi_21 = 0
            
            sub_142aeb830(arg1, rdi_21)
            sub_142af2700(arg1 + 0x178, *(arg1 + 0x124), *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, 0xfffffff9, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 2, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            goto label_142aefec4
        case 0x11
            int32_t* r8_1 = *(arg1 + 8)
            int32_t rax_3 = *r8_1
            int64_t rcx_2 = 0x6000002
            
            if (rax_3 s> 0)
                rcx_2 = 0
            
            if (rax_3 s<= 0)
                void* rdi_1 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx = *(rdi_1 + 8)
                char rax_5
                
                if (rdx + 1 s< 0 || *(rdi_1 + 0xc) s< rdx + 1)
                    rax_5 = sub_142aeb240(rdi_1, rdx + 1, r8_1)
                
                if ((rdx + 1 s>= 0 && *(rdi_1 + 0xc) s>= rdx + 1) || rax_5 != 0)
                    *(*(rdi_1 + 0x18) + (sx.q(*(rdi_1 + 8)) << 3)) = rcx_2
                    *(rdi_1 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_2 = *(arg1 + 8)
            int32_t rax_9 = *r8_2
            int64_t rcx_7 = 0xd000003
            
            if (rax_9 s> 0)
                rcx_7 = 0
            
            if (rax_9 s<= 0)
                void* rdi_2 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_3 = *(rdi_2 + 8)
                char rax_11
                
                if (rdx_3 + 1 s< 0 || *(rdi_2 + 0xc) s< rdx_3 + 1)
                    rax_11 = sub_142aeb240(rdi_2, rdx_3 + 1, r8_2)
                
                if ((rdx_3 + 1 s>= 0 && *(rdi_2 + 0xc) s>= rdx_3 + 1) || rax_11 != 0)
                    *(*(rdi_2 + 0x18) + (sx.q(*(rdi_2 + 8)) << 3)) = rcx_7
                    *(rdi_2 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_3 = *(arg1 + 8)
            int32_t rax_15 = *r8_3
            int64_t rcx_12 = 0xe000000
            
            if (rax_15 s> 0)
                rcx_12 = 0
            
            if (rax_15 s<= 0)
                void* rdi_3 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_6 = *(rdi_3 + 8)
                char rax_17
                
                if (rdx_6 + 1 s< 0 || *(rdi_3 + 0xc) s< rdx_6 + 1)
                    rax_17 = sub_142aeb240(rdi_3, rdx_6 + 1, r8_3)
                
                if ((rdx_6 + 1 s>= 0 && *(rdi_3 + 0xc) s>= rdx_6 + 1) || rax_17 != 0)
                    *(*(rdi_3 + 0x18) + (sx.q(*(rdi_3 + 8)) << 3)) = rcx_12
                    *(rdi_3 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            sub_142aed270(arg1, 0x4d)
            goto label_142aefec4
        case 0x12
            int32_t rax_225 = sub_142aeb8c0(arg1, 0)
            sub_142aec180(arg1, 0x19, 0x1c)
            sub_142af0ee0(arg1, rax_225)
            rdi_31 = sub_142aeb730(arg1, 1)
            int32_t rax_228
            
            if (**(arg1 + 8) s<= 0)
                if (rdi_31 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rdi_31 s< 0)
                    abort()
                    noreturn
                
                rax_228 = rdi_31 | 0x20000000
            else
                rax_228 = 0
            
            sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rax_228), rax_225)
            void* rdx_178 = *(*(arg1 + 0x10) + 0x20)
            int32_t rax_231 = 0
            int32_t rcx_261 = *(rdx_178 + 8)
            
            if (rcx_261 s> 0)
                *(rdx_178 + 8) = rcx_261 - 1
                rax_231 = (*(*(rdx_178 + 0x18) + (sx.q(rcx_261 - 1) << 3))).d
            
            sub_142af2740(*(*(arg1 + 0x10) + 0x20), sx.q(rax_231 + 1), *(arg1 + 8))
            
            if (**(arg1 + 8) s> 0)
                goto label_142aeed70
            
            if (rdi_31 s> 0xffffff)
                abort()
                noreturn
            
            if (rdi_31 s< 0)
                abort()
                noreturn
            
        label_142aeed8e:
            sub_142aeb830(arg1, rdi_31 | 0x21000000)
            goto label_142aefec4
        case 0x13
            sub_142af0340(arg1, 0)
            int32_t* r8_25 = *(arg1 + 8)
            int32_t rax_80 = *r8_25
            int64_t rdi_9 = 0x7000000
            int64_t rcx_84 = 0x7000000
            
            if (rax_80 s> 0)
                rcx_84 = 0
            
            var_100.q = rcx_84
            
            if (rax_80 s<= 0)
                void* r9_10 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_53 = *(r9_10 + 8)
                char rax_82
                
                if (rdx_53 + 1 s< 0 || *(r9_10 + 0xc) s< rdx_53 + 1)
                    rax_82 = sub_142aeb240(r9_10, rdx_53 + 1, r8_25)
                
                if ((rdx_53 + 1 s>= 0 && *(r9_10 + 0xc) s>= rdx_53 + 1) || rax_82 != 0)
                    *(*(r9_10 + 0x18) + (sx.q(*(r9_10 + 8)) << 3)) = var_100.q
                    *(r9_10 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t rax_86 = sub_142aeb730(arg1, 1)
            int32_t* r8_26 = *(arg1 + 8)
            int32_t rcx_90 = *r8_26
            int32_t var_f8_2
            
            if (rcx_90 s<= 0)
                if (rax_86 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_86 s< 0)
                    abort()
                    noreturn
                
                var_f8_2 = rax_86 | 0x20000000
            else
                var_f8_2 = 0
            
            if (rcx_90 s<= 0)
                void* r9_11 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_56 = *(r9_11 + 8)
                char rax_89
                
                if (rdx_56 + 1 s< 0 || *(r9_11 + 0xc) s< rdx_56 + 1)
                    rax_89 = sub_142aeb240(r9_11, rdx_56 + 1, r8_26)
                
                if ((rdx_56 + 1 s>= 0 && *(r9_11 + 0xc) s>= rdx_56 + 1) || rax_89 != 0)
                    *(*(r9_11 + 0x18) + (sx.q(*(r9_11 + 8)) << 3)) = sx.q(var_f8_2)
                    *(r9_11 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_27 = *(arg1 + 8)
            int32_t rax_93 = *r8_27
            
            if (rax_93 s> 0)
                rdi_9 = 0
            
            if (rax_93 s<= 0)
                void* r9_12 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_59 = *(r9_12 + 8)
                char rax_95
                
                if (rdx_59 + 1 s< 0 || *(r9_12 + 0xc) s< rdx_59 + 1)
                    rax_95 = sub_142aeb240(r9_12, rdx_59 + 1, r8_27)
                
                if ((rdx_59 + 1 s>= 0 && *(r9_12 + 0xc) s>= rdx_59 + 1) || rax_95 != 0)
                    *(*(r9_12 + 0x18) + (sx.q(*(r9_12 + 8)) << 3)) = rdi_9
                    *(r9_12 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            sub_142af2700(arg1 + 0x178, *(arg1 + 0x124), *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, 0xfffffffd, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 3, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            goto label_142aefec4
        case 0x14
            sub_142af0340(arg1, 0)
            int32_t rax_150 = sub_142aeb730(arg1, 2)
            int32_t* r8_43 = *(arg1 + 8)
            int32_t rcx_144 = *r8_43
            int32_t var_f8_4
            
            if (rcx_144 s<= 0)
                if (rax_150 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_150 s< 0)
                    abort()
                    noreturn
                
                var_f8_4 = rax_150 | 0x25000000
            else
                var_f8_4 = 0
            
            if (rcx_144 s<= 0)
                void* rdi_17 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_95 = *(rdi_17 + 8)
                char rax_153
                
                if (rdx_95 + 1 s< 0 || *(rdi_17 + 0xc) s< rdx_95 + 1)
                    rax_153 = sub_142aeb240(rdi_17, rdx_95 + 1, r8_43)
                
                if ((rdx_95 + 1 s>= 0 && *(rdi_17 + 0xc) s>= rdx_95 + 1) || rax_153 != 0)
                    *(*(rdi_17 + 0x18) + (sx.q(*(rdi_17 + 8)) << 3)) = sx.q(var_f8_4)
                    *(rdi_17 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_44 = *(arg1 + 8)
            int32_t rax_157 = *r8_44
            int64_t rdi_18 = 0x6000000
            
            if (rax_157 s> 0)
                rdi_18 = 0
            
            if (rax_157 s<= 0)
                void* r9_18 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_98 = *(r9_18 + 8)
                char rax_159
                
                if (rdx_98 + 1 s< 0 || *(r9_18 + 0xc) s< rdx_98 + 1)
                    rax_159 = sub_142aeb240(r9_18, rdx_98 + 1, r8_44)
                
                if ((rdx_98 + 1 s>= 0 && *(r9_18 + 0xc) s>= rdx_98 + 1) || rax_159 != 0)
                    *(*(r9_18 + 0x18) + (sx.q(*(r9_18 + 8)) << 3)) = rdi_18
                    *(r9_18 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t rdx_100 = 0x7000000
            
            if (**(arg1 + 8) s> 0)
                rdx_100 = 0
            
            sub_142aeb830(arg1, rdx_100)
            sub_142af2700(arg1 + 0x178, *(arg1 + 0x124), *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, 0xfffffffb, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 2, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            goto label_142aefec4
        case 0x15
            sub_142af0340(arg1, 0)
            int32_t rdx_197 = 0x16000000
            
            if (**(arg1 + 8) s> 0)
                rdx_197 = 0
            
            sub_142aeb830(arg1, rdx_197)
            goto label_142aefec4
        case 0x16
            sub_142af0340(arg1, 0)
        label_142aef1ee:
            int32_t rdx_209 = 0x18000000
            
            if (**(arg1 + 8) s> 0)
                rdx_209 = 0
            
            sub_142aeb830(arg1, rdx_209)
            goto label_142aefec4
        case 0x17
            if (*(arg1 + 0x1a4) s< 0)
                *(arg1 + 0x1a4) = 0
            
            int64_t rcx_252 = sx.q(sub_142a53ce0(*(arg1 + 0x48))) + sx.q(*(arg1 + 0x1a4)) * 0xa
            
            if (rcx_252 s> 0x7fffffff)
                sub_142af0120(arg1, 0x10307)
                goto label_142aefec4
            
            *(arg1 + 0x1a4) = rcx_252.d
            goto label_142aefec4
        case 0x18
        label_142aed94e:
            sub_142af0120(arg1, 0x10315)
            goto label_142aefec4
        case 0x19
            sub_142af2e00(arg1, 0x30004)
            goto label_142aefec4
        case 0x1a
            sub_142a9e7d0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), 0x26)
            goto label_142aefec4
        case 0x1b
            int32_t rax_327 = sub_142af2790(arg1, arg3)
            sub_142af2c80(arg1, 0x40006)
            sub_142a9e7d0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), rax_327)
            *(arg1 + 0x200) = rax_327
            goto label_142aefec4
        case 0x1c
            sub_142a48580(arg1 + 0x130, sub_142af2790(arg1, arg3))
            goto label_142aefec4
        case 0x1d
            void* rax_316 = sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1)
            sub_142a9db60(&var_e8)
            sub_142b66390(&var_e8, 0x2000, 0x1000, *(arg1 + 8))
            sub_142a9e7d0(&var_e8, 9)
            sub_142a9f070(&var_e8)
            sub_142a9ebe0(rax_316, &var_e8)
            sub_142a9dbc0(&var_e8)
            goto label_142aefec4
        case 0x1e
            sub_142af0340(arg1, 0)
            int32_t rdx_194
            
            if (**(arg1 + 8) s<= 0)
                int32_t rdx_195 = 0x10
                
                if ((*(arg1 + 0x124) & 0x100) != 0)
                    rdx_195 = 0x35
                
                rdx_194 = rdx_195 << 0x18
            else
                rdx_194 = 0
            
            sub_142aeb830(arg1, rdx_194)
            goto label_142aefec4
        case 0x1f
            sub_142af0340(arg1, 0)
            int32_t rdx_210 = 0x14000000
            
            if (**(arg1 + 8) s> 0)
                rdx_210 = 0
            
            sub_142aeb830(arg1, rdx_210)
            goto label_142aefec4
        case 0x20
            sub_142af2e00(arg1, 0x40007)
        label_142aefc32:
            sub_142ae70c0(arg1 + 0x1d8, 1, *(arg1 + 8))
            
            if ((*(arg1 + 0x124) & 2) == 0)
                goto label_142aefec4
            
            rcx_437 = arg1 + 0x1d8
            goto label_142aefc4b
        case 0x21
            sub_142af0340(arg1, 0)
            int32_t rax_101 = sub_142aeb730(arg1, 2)
            int32_t* r8_32 = *(arg1 + 8)
            int32_t rcx_105 = *r8_32
            int32_t var_f8_3
            
            if (rcx_105 s<= 0)
                if (rax_101 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_101 s< 0)
                    abort()
                    noreturn
                
                var_f8_3 = rax_101 | 0x25000000
            else
                var_f8_3 = 0
            
            if (rcx_105 s<= 0)
                void* rdi_10 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_68 = *(rdi_10 + 8)
                char rax_104
                
                if (rdx_68 + 1 s< 0 || *(rdi_10 + 0xc) s< rdx_68 + 1)
                    rax_104 = sub_142aeb240(rdi_10, rdx_68 + 1, r8_32)
                
                if ((rdx_68 + 1 s>= 0 && *(rdi_10 + 0xc) s>= rdx_68 + 1) || rax_104 != 0)
                    *(*(rdi_10 + 0x18) + (sx.q(*(rdi_10 + 8)) << 3)) = sx.q(var_f8_3)
                    *(rdi_10 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            void* r9_13 = *(*(arg1 + 0x10) + 0x20)
            var_f8_3.q = r9_13
            int32_t rax_110 = *(r9_13 + 8) + 2
            int32_t* r8_33 = *(arg1 + 8)
            int32_t rcx_110 = *r8_33
            int32_t rdi_11
            
            if (rcx_110 s<= 0)
                if (rax_110 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_110 s< 0)
                    abort()
                    noreturn
                
                rdi_11 = rax_110 | 0x6000000
            else
                rdi_11 = 0
            
            if (rcx_110 s<= 0)
                int32_t rdx_71 = *(r9_13 + 8)
                
                if (rdx_71 + 1 s< 0 || *(r9_13 + 0xc) s< rdx_71 + 1)
                    if (sub_142aeb240(r9_13, rdx_71 + 1, r8_33) != 0)
                        r9_13 = var_f8_3.q
                        *(*(r9_13 + 0x18) + (sx.q(*(r9_13 + 8)) << 3)) = sx.q(rdi_11)
                        *(r9_13 + 8) += 1
                else
                    *(*(r9_13 + 0x18) + (sx.q(*(r9_13 + 8)) << 3)) = sx.q(rdi_11)
                    *(r9_13 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            void* r9_14 = *(*(arg1 + 0x10) + 0x20)
            var_f8_3.q = r9_14
            int32_t rax_118 = *(r9_14 + 8) + 3
            int32_t* r8_34 = *(arg1 + 8)
            int32_t rcx_115 = *r8_34
            int32_t rdi_12
            
            if (rcx_115 s<= 0)
                if (rax_118 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_118 s< 0)
                    abort()
                    noreturn
                
                rdi_12 = rax_118 | 0xd000000
            else
                rdi_12 = 0
            
            if (rcx_115 s<= 0)
                int32_t rdx_74 = *(r9_14 + 8)
                
                if (rdx_74 + 1 s< 0 || *(r9_14 + 0xc) s< rdx_74 + 1)
                    if (sub_142aeb240(r9_14, rdx_74 + 1, r8_34) != 0)
                        r9_14 = var_f8_3.q
                        *(*(r9_14 + 0x18) + (sx.q(*(r9_14 + 8)) << 3)) = sx.q(rdi_12)
                        *(r9_14 + 8) += 1
                else
                    *(*(r9_14 + 0x18) + (sx.q(*(r9_14 + 8)) << 3)) = sx.q(rdi_12)
                    *(r9_14 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_35 = *(arg1 + 8)
            int32_t rax_124 = *r8_35
            int32_t rdi_13
            
            if (rax_124 s<= 0)
                if (rax_101 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_101 s< 0)
                    abort()
                    noreturn
                
                rdi_13 = rax_101 | 0x26000000
            else
                rdi_13 = 0
            
            if (rax_124 s<= 0)
                void* r9_15 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_77 = *(r9_15 + 8)
                char rax_126
                
                if (rdx_77 + 1 s< 0 || *(r9_15 + 0xc) s< rdx_77 + 1)
                    rax_126 = sub_142aeb240(r9_15, rdx_77 + 1, r8_35)
                
                if ((rdx_77 + 1 s>= 0 && *(r9_15 + 0xc) s>= rdx_77 + 1) || rax_126 != 0)
                    *(*(r9_15 + 0x18) + (sx.q(*(r9_15 + 8)) << 3)) = sx.q(rdi_13)
                    *(r9_15 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_36 = *(arg1 + 8)
            int32_t rax_130 = *r8_36
            int64_t rcx_124 = 0x1000000
            
            if (rax_130 s> 0)
                rcx_124 = 0
            
            if (rax_130 s<= 0)
                void* rdi_15 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_80 = *(rdi_15 + 8)
                char rax_132
                
                if (rdx_80 + 1 s< 0 || *(rdi_15 + 0xc) s< rdx_80 + 1)
                    rax_132 = sub_142aeb240(rdi_15, rdx_80 + 1, r8_36)
                
                if ((rdx_80 + 1 s>= 0 && *(rdi_15 + 0xc) s>= rdx_80 + 1) || rax_132 != 0)
                    *(*(rdi_15 + 0x18) + (sx.q(*(rdi_15 + 8)) << 3)) = rcx_124
                    *(rdi_15 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_37 = *(arg1 + 8)
            int32_t rax_136 = *r8_37
            int64_t rdi_16 = 0x7000000
            int64_t rcx_129 = 0x7000000
            
            if (rax_136 s> 0)
                rcx_129 = 0
            
            var_100.q = rcx_129
            
            if (rax_136 s<= 0)
                void* r9_16 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_83 = *(r9_16 + 8)
                char rax_138
                
                if (rdx_83 + 1 s< 0 || *(r9_16 + 0xc) s< rdx_83 + 1)
                    rax_138 = sub_142aeb240(r9_16, rdx_83 + 1, r8_37)
                
                if ((rdx_83 + 1 s>= 0 && *(r9_16 + 0xc) s>= rdx_83 + 1) || rax_138 != 0)
                    *(*(r9_16 + 0x18) + (sx.q(*(r9_16 + 8)) << 3)) = var_100.q
                    *(r9_16 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_38 = *(arg1 + 8)
            int32_t rax_142 = *r8_38
            
            if (rax_142 s> 0)
                rdi_16 = 0
            
            if (rax_142 s<= 0)
                void* r9_17 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_86 = *(r9_17 + 8)
                char rax_144
                
                if (rdx_86 + 1 s< 0 || *(r9_17 + 0xc) s< rdx_86 + 1)
                    rax_144 = sub_142aeb240(r9_17, rdx_86 + 1, r8_38)
                
                if ((rdx_86 + 1 s>= 0 && *(r9_17 + 0xc) s>= rdx_86 + 1) || rax_144 != 0)
                    *(*(r9_17 + 0x18) + (sx.q(*(r9_17 + 8)) << 3)) = rdi_16
                    *(r9_17 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            sub_142af2700(arg1 + 0x178, *(arg1 + 0x124), *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, 0xfffffffc, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 2, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            goto label_142aefec4
        case 0x22
            sub_142af0340(arg1, 0)
            int32_t rdi_39 = 0x7000000
            int32_t rdx_234 = 0x7000000
            
            if (**(arg1 + 8) s> 0)
                rdx_234 = 0
            
            sub_142aeb830(arg1, rdx_234)
            
            if (**(arg1 + 8) s> 0)
                rdi_39 = 0
            
            sub_142aeb830(arg1, rdi_39)
            sub_142af2700(arg1 + 0x178, *(arg1 + 0x124), *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, 0xfffffffa, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 2, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            *(arg1 + 0x124) = *(arg1 + 0x128)
            goto label_142aefec4
        case 0x23
            sub_142af0340(arg1, 0)
            int32_t rdx_204 = 0x3a000001
            
            if (**(arg1 + 8) s> 0)
                rdx_204 = 0
            
            sub_142aeb830(arg1, rdx_204)
            goto label_142aefec4
        case 0x24
            int64_t rcx_248 = sx.q(sub_142a53ce0(*(arg1 + 0x48))) + sx.q(*(arg1 + 0x1a0)) * 0xa
            
            if (rcx_248 s<= 0x7fffffff)
                *(arg1 + 0x1a0) = rcx_248.d
                goto label_142aefec4
            
            sub_142af0120(arg1, 0x10307)
            goto label_142aefec4
        case 0x25
            sub_142af0340(arg1, 0)
            int32_t rcx_274 = *(arg1 + 0x124)
            rax_2 = zx.q(rcx_274) & 9
            
            if (rax_2.d == 0)
                goto label_142aeef69
            
            if (rax_2.d == 8)
                int32_t rdx_185 = 0x2b000000
                
                if (**(arg1 + 8) s> 0)
                    rdx_185 = 0
                
                sub_142aeb830(arg1, rdx_185)
                goto label_142aefec4
            
            if ((rcx_274.b & 8) == 0 && (rcx_274.b & 1) != 0)
                goto label_142aeef69
            
            if (rax_2.d != 9)
                goto label_142aefec4
            
            int32_t rdx_186 = 0x1e000000
            
            if (**(arg1 + 8) s> 0)
                rdx_186 = 0
            
            sub_142aeb830(arg1, rdx_186)
            goto label_142aefec4
        case 0x26
            sub_142af2c80(arg1, 0x10002)
            sub_142b10330(arg1 + 0x1d8)
            goto label_142aefec4
        case 0x27
            rcx_437 = arg1 + 0x1d8
            
            if (sub_142ae72f0(arg1 + 0x1d8, *(arg1 + 0x1e0) - 1) != 0x20009)
                sub_142ae70c0(rcx_437, 0x20003, *(arg1 + 8))
                goto label_142aefec4
            
            sub_142b10330(rcx_437)
            sub_142ae70c0(arg1 + 0x1d8, 0x20003, *(arg1 + 8))
            rcx_437 = arg1 + 0x1d8
        label_142aefc4b:
            sub_142ae70c0(rcx_437, 0x20009, *(arg1 + 8))
            goto label_142aefec4
        case 0x28
            sub_142af0340(arg1, 0)
            int32_t rdx_202 = 0x31000004
            
            if (**(arg1 + 8) s> 0)
                rdx_202 = 0
            
            sub_142aeb830(arg1, rdx_202)
            goto label_142aefec4
        case 0x29
            sub_142af0340(arg1, 0)
            int32_t r8_5 = 0
            int32_t rax_24 = *(arg1 + 0x180)
            
            if (rax_24 s> 0)
                *(arg1 + 0x180) = rax_24 - 1
                r8_5 = *(*(arg1 + 0x190) + (sx.q(rax_24 - 1) << 2))
            
            void* r9_1 = *(*(arg1 + 0x10) + 0x20)
            int32_t rcx_28 = *(r9_1 + 8) + 1
            int32_t rcx_29
            
            if (**(arg1 + 8) s<= 0)
                if (rcx_28 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rcx_28 s< 0)
                    abort()
                    noreturn
                
                rcx_29 = rcx_28 | 0x6000000
            else
                rcx_29 = 0
            
            sub_142aeb3c0(r9_1, sx.q(rcx_29), r8_5)
            int32_t* r8_6 = *(arg1 + 8)
            int32_t rax_29 = *r8_6
            int64_t rdi_5 = 0xd000000
            
            if (rax_29 s> 0)
                rdi_5 = 0
            
            if (rax_29 s<= 0)
                void* r9_2 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_13 = *(r9_2 + 8)
                char rax_31
                
                if (rdx_13 + 1 s< 0 || *(r9_2 + 0xc) s< rdx_13 + 1)
                    rax_31 = sub_142aeb240(r9_2, rdx_13 + 1, r8_6)
                
                if ((rdx_13 + 1 s>= 0 && *(r9_2 + 0xc) s>= rdx_13 + 1) || rax_31 != 0)
                    *(*(r9_2 + 0x18) + (sx.q(*(r9_2 + 8)) << 3)) = rdi_5
                    *(r9_2 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            int32_t* r8_8 = *(arg1 + 8)
            int32_t rax_36 = *r8_8
            int64_t rdi_6 = 0x7000000
            
            if (rax_36 s> 0)
                rdi_6 = 0
            
            if (rax_36 s<= 0)
                void* r9_3 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_17 = *(r9_3 + 8)
                char rax_38
                
                if (rdx_17 + 1 s< 0 || *(r9_3 + 0xc) s< rdx_17 + 1)
                    rax_38 = sub_142aeb240(r9_3, rdx_17 + 1, r8_8)
                
                if ((rdx_17 + 1 s>= 0 && *(r9_3 + 0xc) s>= rdx_17 + 1) || rax_38 != 0)
                    *(*(r9_3 + 0x18) + (sx.q(*(r9_3 + 8)) << 3)) = rdi_6
                    *(r9_3 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            goto label_142aefec4
        case 0x2a
            sub_142af0340(arg1, 0)
            int32_t rdx_191
            
            if (**(arg1 + 8) s<= 0)
                int32_t rdx_192 = 0x10
                
                if ((*(arg1 + 0x124) & 0x100) != 0)
                    rdx_192 = 0x35
                
                rdx_191 = rdx_192 << 0x18 | 1
            else
                rdx_191 = 0
            
            sub_142aeb830(arg1, rdx_191)
            goto label_142aefec4
        case 0x2b
            sub_142af0340(arg1, 0)
            int32_t rdx_207 = 0xa000001
            
            if (**(arg1 + 8) s> 0)
                rdx_207 = 0
            
            sub_142aeb830(arg1, rdx_207)
            goto label_142aefec4
        case 0x2c
            sub_142af0340(arg1, 0)
            int32_t rdx_201 = 0x39000000
            
            if (**(arg1 + 8) s> 0)
                rdx_201 = 0
            
            sub_142aeb830(arg1, rdx_201)
            goto label_142aefec4
        case 0x2d, 0x39, 0x57
            sub_142af0120(arg1, 0x10301)
            goto label_142aefec4
        case 0x2e
            sub_142af0340(arg1, 0)
            char rax_238 = (*(arg1 + 0x124)).b
            
            if ((rax_238 & 0x20) == 0)
                int32_t* rax_240 = *(arg1 + 8)
                
                if ((rax_238 & 1) == 0)
                    int32_t rdx_184 = 0xc000000
                    
                    if (*rax_240 s> 0)
                        rdx_184 = 0
                    
                    sub_142aeb830(arg1, rdx_184)
                else
                    int32_t rdx_183 = 0x1b000000
                    
                    if (*rax_240 s> 0)
                        rdx_183 = 0
                    
                    sub_142aeb830(arg1, rdx_183)
            else
                int32_t rdx_182 = 0x15000000
                
                if (**(arg1 + 8) s> 0)
                    rdx_182 = 0
                
                sub_142aeb830(arg1, rdx_182)
            
            goto label_142aefec4
        case 0x2f
            int32_t rdx_232 = 0
            
            switch (*(arg1 + 0x48) - 0x2d)
                case 0
                    *(arg1 + 0x12c) = 0
                    goto label_142aef788
                case 0x37
                    rdx_232 = 1
                    goto label_142aef788
                case 0x3c
                    rdx_232 = 2
                label_142aef788:
                    rax_2.b = 1
                    
                    if (*(arg1 + 0x12c) == 0)
                        *(arg1 + 0x128) &= not.d(rdx_232)
                    else
                        *(arg1 + 0x128) |= rdx_232
                case 0x40
                    rdx_232 = 8
                    goto label_142aef788
                case 0x46
                    rdx_232 = 0x20
                    goto label_142aef788
                case 0x48
                    goto label_142aef788
                case 0x4a
                    rdx_232 = 0x100
                    goto label_142aef788
                case 0x4b
                    rdx_232 = 4
                    goto label_142aef788
                default
                    abort()
                    noreturn
            
            goto label_142aefed0
        case 0x30
            void* rax_320 = sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1)
            sub_142a9d8c0(&var_e8, *(data_144016850 + 8))
            sub_142a9f070(&var_e8)
            sub_142a9ebe0(rax_320, &var_e8)
            sub_142a9dbc0(&var_e8)
            goto label_142aefec4
        case 0x31
            rdx_146 = sub_142aeb8c0(arg1, 0)
            
            if (**(arg1 + 8) s> 0)
            label_142aee7ad:
                sub_142aeb830(arg1, 0)
                goto label_142aefec4
            
            if (rdx_146 s> 0xffffff)
                abort()
                noreturn
            
            if (rdx_146 s< 0)
                abort()
                noreturn
            
        label_142aee7d0:
            sub_142aeb830(arg1, rdx_146 | 0x6000000)
            goto label_142aefec4
        case 0x32
            void* rax_314 = sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1)
            sub_142a9db60(&var_e8)
            sub_142b66390(&var_e8, 0x2000, 0x200, *(arg1 + 8))
            sub_142a9f070(&var_e8)
            sub_142a9ebe0(rax_314, &var_e8)
            sub_142a9dbc0(&var_e8)
            goto label_142aefec4
        case 0x33
            arg2.b = 1
            int32_t rax_296 = sub_142aeb8c0(arg1, arg2.b)
            sub_142af0ee0(arg1, rax_296)
            int32_t rax_297 = sub_142aeb730(arg1, 1)
            rdi_31 = rax_297
            int32_t rax_298
            
            if (**(arg1 + 8) s<= 0)
                if (rdi_31 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rdi_31 s< 0)
                    abort()
                    noreturn
                
                rax_298 = rax_297 | 0x20000000
            else
                rax_298 = 0
            
            sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rax_298), rax_296)
            int64_t rdx_231 = sx.q(sub_142aeb970(arg1, 6, *(*(*(arg1 + 0x10) + 0x20) + 8) + 1))
            sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), rdx_231, rax_296 + 1)
            
            if (**(arg1 + 8) s> 0)
            label_142aeed70:
                sub_142aeb830(arg1, 0)
                goto label_142aefec4
            
            if (rdi_31 s> 0xffffff)
                abort()
                noreturn
            
            if (rdi_31 s>= 0)
                goto label_142aeed8e
            
            abort()
            noreturn
        case 0x34
            int32_t rax_329 = sub_142af2790(arg1, arg3)
            
            if (**(arg1 + 8) s<= 0)
                int32_t rax_330 = *(arg1 + 0x200)
                
                if (rax_330 == 0xffffffff || rax_330 s> rax_329)
                    sub_142af0120(arg1, 0x10310)
            
            sub_142a9e9d0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), *(arg1 + 0x200), 
                rax_329)
            *(arg1 + 0x200) = rax_329
            goto label_142aefec4
        case 0x35, 0x56
            sub_142af0120(arg1, 0x10305)
            goto label_142aefec4
        case 0x36
            sub_142af0340(arg1, 0)
            int32_t rdx_203 = 0xa000004
            
            if (**(arg1 + 8) s> 0)
                rdx_203 = 0
            
            sub_142aeb830(arg1, rdx_203)
            goto label_142aefec4
        case 0x37
            arg2.b = 1
            int32_t rax_286 = sub_142aeb8c0(arg1, arg2.b)
            sub_142af0ee0(arg1, rax_286)
            int32_t rax_287 = sub_142aeb730(arg1, 1)
            rdi_31 = rax_287
            int32_t rax_288
            
            if (**(arg1 + 8) s<= 0)
                if (rax_287 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_287 s< 0)
                    abort()
                    noreturn
                
                rax_288 = rax_287 | 0x20000000
            else
                rax_288 = 0
            
            sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rax_288), rax_286)
            int64_t rdx_227 = sx.q(sub_142aeb970(arg1, 6, *(*(*(arg1 + 0x10) + 0x20) + 8) + 1))
            sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), rdx_227, rax_286 + 1)
            int32_t rax_292
            
            if (**(arg1 + 8) s<= 0)
                if (rax_286 + 1 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_286 + 1 s< 0)
                    abort()
                    noreturn
                
                rax_292 = (rax_286 + 1) | 0xd000000
                rdi_31 = rax_287
            else
                rax_292 = 0
            
            sub_142aeb830(arg1, rax_292)
            
            if (**(arg1 + 8) s> 0)
                goto label_142aeed70
            
            if (rdi_31 s> 0xffffff)
                abort()
                noreturn
            
            if (rdi_31 s>= 0)
                goto label_142aeed8e
            
            abort()
            noreturn
        case 0x38
            int64_t rdi_25 = sx.q(sub_142aeb8c0(arg1, 0))
            void* rdx_132 = *(*(arg1 + 0x10) + 0x20)
            int32_t r9_19 = *(rdx_132 + 8)
            
            if (rdi_25.d != r9_19 - 1)
            label_142aee6c1:
                
                if (sub_142af1df0(arg1, rdi_25.d, r9_19 - 1) != 0)
                    int32_t rdi_26
                    
                    if (**(arg1 + 8) s<= 0)
                        if (rdi_25.d s> 0xffffff)
                            abort()
                            noreturn
                        
                        if (rdi_25.d s< 0)
                            abort()
                            noreturn
                        
                        rdi_26 = rdi_25.d | 0xf000000
                    else
                        rdi_26 = 0
                    
                    sub_142aeb830(arg1, rdi_26)
                else
                    sub_142af0ee0(arg1, rdi_25.d)
                    int32_t rax_192 = sub_142aeb7b0(arg1, 1)
                    int32_t rax_193
                    
                    if (**(arg1 + 8) s<= 0)
                        if (rax_192 s> 0xffffff)
                            abort()
                            noreturn
                        
                        if (rax_192 s< 0)
                            abort()
                            noreturn
                        
                        rax_193 = rax_192 | 0x23000000
                    else
                        rax_193 = 0
                    
                    sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rax_193), rdi_25.d)
                    int32_t rdx_143 = (rdi_25 + 1).d
                    int32_t rdx_144
                    
                    if (**(arg1 + 8) s<= 0)
                        if (rdx_143 s> 0xffffff)
                            abort()
                            noreturn
                        
                        if (rdx_143 s< 0)
                            abort()
                            noreturn
                        
                        rdx_144 = rdx_143 | 0x12000000
                    else
                        rdx_144 = 0
                    
                    sub_142aeb830(arg1, rdx_144)
                
                goto label_142aefec4
            
            int32_t rdx_133
            
            if (rdi_25.d s< 0 || rdi_25.d s>= r9_19)
                rdx_133 = 0
            else
                rdx_133 = *(*(rdx_132 + 0x18) + (rdi_25 << 3))
            
            uint32_t r8_58 = rdx_133 u>> 0x18
            
            if (r8_58 == 0xb)
                int32_t rdx_135
                
                if (**(arg1 + 8) s<= 0)
                    rdx_135 = (rdx_133 & 0xffffff) | 0x32000000
                else
                    rdx_135 = 0
                
                sub_142aeb830(arg1, rdx_135)
                rdx_136 = sub_142aeb7b0(arg1, 1)
                
                if (**(arg1 + 8) s<= 0)
                    if (rdx_136 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rdx_136 s>= 0)
                        goto label_142aee625
                    
                    abort()
                    noreturn
                
            label_142aee607:
                sub_142aeb830(arg1, 0)
                goto label_142aefec4
            
            if (r8_58 u> 0x1b || not(test_bit(0x8201000, r8_58)))
                goto label_142aee6c1
            
            int32_t r9_20 = 0x34000000
            
            if (**(arg1 + 8) s> 0)
                r9_20 = 0
            
            int32_t rcx_192 = r9_20 | 1
            
            if (r8_58 != 0x15)
                rcx_192 = r9_20
            
            int32_t rdx_139 = rcx_192 | 2
            
            if (((*(arg1 + 0x124)).b & 1) == 0)
                rdx_139 = rcx_192
            
            sub_142aeb830(arg1, rdx_139)
            rdx_136 = sub_142aeb7b0(arg1, 1)
            
            if (**(arg1 + 8) s> 0)
                goto label_142aee607
            
            if (rdx_136 s> 0xffffff)
                abort()
                noreturn
            
            if (rdx_136 s< 0)
                abort()
                noreturn
            
        label_142aee625:
            sub_142aeb830(arg1, rdx_136 | 0x33000000)
            goto label_142aefec4
        case 0x3a
            sub_142af0790(arg1)
            
            if (*(arg1 + 0x180) s> 0)
                goto label_142aefec4
            
            goto label_142aee56e
        case 0x3b
            sub_142aec180(arg1, 0x1a, 0x1d)
            goto label_142aefec4
        case 0x3c
            rax_2 = sub_142af2b70(arg1, arg3)
            goto label_142aefe47
        case 0x3d
            int32_t i = *(*(*(arg1 + 0x10) + 0x88) + 8)
            int32_t rax_269 = sub_142a53ce0(*(arg1 + 0x48))
            uint64_t rdi_33 = zx.q(rax_269)
            
            if (rax_269 s< i)
                do
                    int32_t rax_270 = sub_142af26d0(arg1, arg3)
                    char rax_271
                    rax_271, arg3 = sub_142a9f280(*(data_144016850 + 0xaa0), zx.q(rax_270))
                    
                    if (rax_271 == 0)
                        break
                    
                    sub_142af2620(arg1, arg3)
                    rdi_33 = zx.q(sub_142a53ce0(rax_270) + ((rdi_33 * 5).d << 1))
                while (rdi_33.d s< i)
                
                rsi_1 = 0
            
            sub_142af0340(arg1, 0)
            int32_t* rax_273 = *(arg1 + 8)
            
            if ((*(arg1 + 0x124) & 2) == 0)
                int32_t rdi_35
                
                if (*rax_273 s<= 0)
                    if (rdi_33.d s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rdi_33.d s< 0)
                        abort()
                        noreturn
                    
                    rdi_35 = rdi_33.d | 0x22000000
                else
                    rdi_35 = 0
                
                sub_142aeb830(arg1, rdi_35)
            else
                int32_t rdi_34
                
                if (*rax_273 s<= 0)
                    if (rdi_33.d s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rdi_33.d s< 0)
                        abort()
                        noreturn
                    
                    rdi_34 = rdi_33.d | 0x29000000
                else
                    rdi_34 = 0
                
                sub_142aeb830(arg1, rdi_34)
            
            goto label_142aefec4
        case 0x3e
            sub_142af2e00(arg1, 0x40006)
            goto label_142aefc32
        case 0x3f
            sub_142af0120(arg1, 0x10303)
            goto label_142aefec4
        case 0x40
            arg2.b = 1
            int32_t rax_198 = sub_142aeb8c0(arg1, arg2.b)
            void* r9_21 = *(*(arg1 + 0x10) + 0x20)
            int32_t rdx_148 = *(r9_21 + 8)
            int32_t rdx_149
            
            if (**(arg1 + 8) s<= 0)
                if (rdx_148 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rdx_148 s< 0)
                    abort()
                    noreturn
                
                rdx_149 = rdx_148 | 0x6000000
            else
                rdx_149 = 0
            
            sub_142aeb3c0(r9_21, sx.q(rdx_149), rax_198)
            goto label_142aefec4
        case 0x41
            sub_142af2e00(arg1, 0x40008)
            goto label_142aefc32
        case 0x42
            arg2.b = 1
            int32_t rax_277 = sub_142aeb8c0(arg1, arg2.b)
            int32_t rdi_38 = rax_277
            int32_t rax_278 = sub_142aeb730(arg1, 1)
            int32_t rax_279
            
            if (**(arg1 + 8) s<= 0)
                if (rax_278 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_278 s< 0)
                    abort()
                    noreturn
                
                rax_279 = rax_278 | 0x20000000
            else
                rax_279 = 0
            
            sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rax_279), rdi_38)
            int32_t rdx_220 = *(*(*(arg1 + 0x10) + 0x20) + 8) + 2
            int32_t rdx_221
            
            if (**(arg1 + 8) s<= 0)
                if (rdx_220 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rdx_220 s< 0)
                    abort()
                    noreturn
                
                rdx_221 = rdx_220 | 0x6000000
                rdi_38 = rax_277
            else
                rdx_221 = 0
            
            sub_142aeb830(arg1, rdx_221)
            int32_t rdx_223
            
            if (**(arg1 + 8) s<= 0)
                if (rdi_38 + 1 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rdi_38 + 1 s< 0)
                    abort()
                    noreturn
                
                rdx_223 = (rdi_38 + 1) | 0xd000000
            else
                rdx_223 = 0
            
            sub_142aeb830(arg1, rdx_223)
            int32_t rax_284
            
            if (**(arg1 + 8) s<= 0)
                if (rax_278 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_278 s< 0)
                    abort()
                    noreturn
                
                rax_284 = rax_278 | 0x21000000
            else
                rax_284 = 0
            
            sub_142aeb830(arg1, rax_284)
            goto label_142aefec4
        case 0x43
            sub_142af0340(arg1, 0)
            int32_t rdx_196 = 0x16000001
            
            if (**(arg1 + 8) s> 0)
                rdx_196 = 0
            
            sub_142aeb830(arg1, rdx_196)
            goto label_142aefec4
        case 0x44
            sub_142af0340(arg1, 0)
            int32_t rax_173 = sub_142aeb730(arg1, 4)
            int32_t rdx_120
            
            if (**(arg1 + 8) s<= 0)
                if (rax_173 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_173 s< 0)
                    abort()
                    noreturn
                
                rdx_120 = rax_173 | 0x2c000000
            else
                rdx_120 = 0
            
            sub_142aeb830(arg1, rdx_120)
            int32_t rdi_23
            
            if (**(arg1 + 8) s<= 0)
                if (rax_173 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_173 s< 0)
                    abort()
                    noreturn
                
                rdi_23 = rax_173 | 0x2f000000
            else
                rdi_23 = 0
            
            sub_142aeb830(arg1, rdi_23)
            sub_142aeb830(arg1, 0)
            sub_142aeb830(arg1, 0)
            sub_142aeb830(arg1, 0)
            int32_t rdi_24 = 0x7000000
            int32_t rdx_123 = 0x7000000
            
            if (**(arg1 + 8) s> 0)
                rdx_123 = 0
            
            sub_142aeb830(arg1, rdx_123)
            
            if (**(arg1 + 8) s> 0)
                rdi_24 = 0
            
            sub_142aeb830(arg1, rdi_24)
            sub_142af2700(arg1 + 0x178, *(arg1 + 0x124), *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, 0xfffffff8, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 2, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            goto label_142aefec4
        case 0x45
            sub_142af0340(arg1, 0)
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_321 =
                j_sub_142a7dd00(0xc8)
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_108_21 = rax_321
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_322
            
            if (rax_321 == 0)
                rax_322 = nullptr
            else
                rax_322 = sub_142a9db60(rax_321)
            
            sub_142ae7110(arg1 + 0x1b0, rax_322, *(arg1 + 8))
            goto label_142aefc32
        case 0x46
            sub_142af2e00(arg1, 0x30005)
            goto label_142aefec4
        case 0x47
            int32_t rax_274 = sub_142a86c70(*(*(arg1 + 0x10) + 0xd0), *(arg1 + 0x208))
            
            if (rax_274 != 0)
                sub_142af0340(arg1, 0)
                int32_t* rax_275 = *(arg1 + 8)
                int32_t rdi_37
                
                if ((*(arg1 + 0x124) & 2) == 0)
                    if (*rax_275 s<= 0)
                        if (rax_274 s> 0xffffff)
                            abort()
                            noreturn
                        
                        if (rax_274 s< 0)
                            abort()
                            noreturn
                        
                        rdi_37 = rax_274 | 0x22000000
                    else
                        rdi_37 = 0
                else if (*rax_275 s<= 0)
                    if (rax_274 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rax_274 s< 0)
                        abort()
                        noreturn
                    
                    rdi_37 = rax_274 | 0x29000000
                else
                    rdi_37 = 0
                
                sub_142aeb830(arg1, rdi_37)
            else
                sub_142af0120(arg1, 0x10315)
            
            int64_t* rcx_340 = *(arg1 + 0x208)
            
            if (rcx_340 != 0)
                (**rcx_340)(rcx_340, 1)
            
            *(arg1 + 0x208) = 0
            goto label_142aefec4
        case 0x48
            int32_t rax_334 = *(arg1 + 0x200)
            
            if (rax_334 == 0xffffffff || rax_334 s> *(arg1 + 0x48))
                sub_142af0120(arg1, 0x10310)
            
            sub_142a9e9d0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), *(arg1 + 0x200), 
                *(arg1 + 0x48))
            goto label_142aefec4
        case 0x49
            sub_142af0340(arg1, 0)
            int32_t rcx_278 = *(arg1 + 0x124)
            rax_2 = zx.q(rcx_278) & 9
            
            if (rax_2.d == 0)
                goto label_142aef1ee
            
            if (rax_2.d == 8)
                int32_t rdx_187 = 0x2a000000
                
                if (**(arg1 + 8) s> 0)
                    rdx_187 = 0
                
                sub_142aeb830(arg1, rdx_187)
            else if ((rcx_278.b & 8) == 0 && (rcx_278.b & 1) != 0)
                int32_t rdx_188 = 0x36000000
                
                if (**(arg1 + 8) s> 0)
                    rdx_188 = 0
                
                sub_142aeb830(arg1, rdx_188)
            else if (rax_2.d == 9)
                int32_t rdx_189 = 0x37000000
                
                if (**(arg1 + 8) s> 0)
                    rdx_189 = 0
                
                sub_142aeb830(arg1, rdx_189)
            
            goto label_142aefec4
        case 0x4a
            sub_142af0340(arg1, 0)
            int32_t rdx_199 = 0x38000001
            
            if (**(arg1 + 8) s> 0)
                rdx_199 = 0
            
            sub_142aeb830(arg1, rdx_199)
            goto label_142aefec4
        case 0x4b
            sub_142af0340(arg1, 0)
            rax_2.b = 0
        label_142aefed0:
            
            if (**(arg1 + 8) s<= 0)
                rsi_1 = rax_2.b
            
            __security_check_cookie(rax_1 ^ &var_128)
            return zx.q(rsi_1)
        case 0x4c
            arg2.b = 1
            int32_t rax_199 = sub_142aeb8c0(arg1, arg2.b)
            void* r9_22 = *(*(arg1 + 0x10) + 0x20)
            int32_t rax_200 = *(r9_22 + 8)
            int32_t rdx_152
            
            if (**(arg1 + 8) s<= 0)
                if (rax_200 + 1 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_200 + 1 s< 0)
                    abort()
                    noreturn
                
                rdx_152 = (rax_200 + 1) | 0xd000000
            else
                rdx_152 = 0
            
            sub_142aeb3c0(r9_22, sx.q(rdx_152), rax_199)
            int32_t rdx_156
            
            if (**(arg1 + 8) s<= 0)
                if (rax_200 + 2 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_200 + 2 s< 0)
                    abort()
                    noreturn
                
                rdx_156 = (rax_200 + 2) | 0xd000000
            else
                rdx_156 = 0
            
            sub_142aeb830(arg1, rdx_156)
            rdx_146 = rax_199 + 1
            
            if (**(arg1 + 8) s> 0)
                goto label_142aee7ad
            
            if (rdx_146 s> 0xffffff)
                abort()
                noreturn
            
            if (rdx_146 s>= 0)
                goto label_142aee7d0
            
            abort()
            noreturn
        case 0x4d
            sub_142af0340(arg1, 0)
            int32_t* r8_19 = *(arg1 + 8)
            int32_t rax_66 = *r8_19
            int64_t rdi_8 = 0x7000000
            int64_t rcx_70 = 0x7000000
            
            if (rax_66 s> 0)
                rcx_70 = 0
            
            var_100.q = rcx_70
            
            if (rax_66 s<= 0)
                void* r9_8 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_41 = *(r9_8 + 8)
                char rax_68
                
                if (rdx_41 + 1 s< 0 || *(r9_8 + 0xc) s< rdx_41 + 1)
                    rax_68 = sub_142aeb240(r9_8, rdx_41 + 1, r8_19)
                
                if ((rdx_41 + 1 s>= 0 && *(r9_8 + 0xc) s>= rdx_41 + 1) || rax_68 != 0)
                    *(*(r9_8 + 0x18) + (sx.q(*(r9_8 + 8)) << 3)) = var_100.q
                    *(r9_8 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            int32_t* r8_20 = *(arg1 + 8)
            int32_t rax_72 = *r8_20
            
            if (rax_72 s> 0)
                rdi_8 = 0
            
            if (rax_72 s<= 0)
                void* r9_9 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_44 = *(r9_9 + 8)
                char rax_74
                
                if (rdx_44 + 1 s< 0 || *(r9_9 + 0xc) s< rdx_44 + 1)
                    rax_74 = sub_142aeb240(r9_9, rdx_44 + 1, r8_20)
                
                if ((rdx_44 + 1 s>= 0 && *(r9_9 + 0xc) s>= rdx_44 + 1) || rax_74 != 0)
                    *(*(r9_9 + 0x18) + (sx.q(*(r9_9 + 8)) << 3)) = rdi_8
                    *(r9_9 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            sub_142af2700(arg1 + 0x178, *(arg1 + 0x124), *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, 0xffffffff, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 2, *(arg1 + 8))
            sub_142af2700(arg1 + 0x178, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1, *(arg1 + 8))
            goto label_142aefec4
        case 0x4e
            sub_142af0340(arg1, 0)
        label_142aeef69:
            int32_t rdx_190 = 0x17000000
            
            if (**(arg1 + 8) s> 0)
                rdx_190 = 0
            
            sub_142aeb830(arg1, rdx_190)
            goto label_142aefec4
        case 0x4f
            void* rax_317 = sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1)
            sub_142a9e9d0(rax_317, 0xa, 0xd)
            sub_142a9e7d0(rax_317, 0x85)
            sub_142a9e9d0(rax_317, 0x2028, 0x2029)
            goto label_142aefec4
        case 0x50
            sub_142af0340(arg1, 0)
            int32_t rdx_200 = 0x38000000
            
            if (**(arg1 + 8) s> 0)
                rdx_200 = 0
            
            sub_142aeb830(arg1, rdx_200)
            goto label_142aefec4
        case 0x51
            sub_142af0120(arg1, 0x1030b)
            goto label_142aefec4
        case 0x52
            sub_142af0120(arg1, 0x1030f)
            goto label_142aefec4
        case 0x53
            *(arg1 + 0x1a4) = *(arg1 + 0x1a0)
            goto label_142aefec4
        case 0x54
            sub_142a9e7d0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), 0x2d)
            goto label_142aefec4
        case 0x55
            sub_142af0340(arg1, 0)
            int32_t rdx_206 = 0x31000001
            
            if (**(arg1 + 8) s> 0)
                rdx_206 = 0
            
            sub_142aeb830(arg1, rdx_206)
            goto label_142aefec4
        case 0x58
        label_142aefd1d:
            sub_142af2c80(arg1, 0x40006)
            sub_142a9e7d0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), *(arg1 + 0x48))
            *(arg1 + 0x200) = *(arg1 + 0x48)
            goto label_142aefec4
        case 0x59
            sub_142af0790(arg1)
            
            if (*(arg1 + 0x180) s> 0)
                sub_142af0120(arg1, 0x10306)
            
            int32_t* r8_4 = *(arg1 + 8)
            int64_t rcx_20 = 0x2000000
            int32_t temp4_1 = *r8_4
            
            if (temp4_1 s> 0)
                rcx_20 = 0
            
            if (temp4_1 s<= 0)
                void* rdi_4 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_9 = *(rdi_4 + 8)
                char rax_22
                
                if (rdx_9 + 1 s< 0 || *(rdi_4 + 0xc) s< rdx_9 + 1)
                    rax_22 = sub_142aeb240(rdi_4, rdx_9 + 1, r8_4)
                
                if ((rdx_9 + 1 s>= 0 && *(rdi_4 + 0xc) s>= rdx_9 + 1) || rax_22 != 0)
                    *(*(rdi_4 + 0x18) + (sx.q(*(rdi_4 + 8)) << 3)) = rcx_20
                    *(rdi_4 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
            
            rax_2.b = 0
            goto label_142aefed0
        case 0x5b
            if ((*(arg1 + 0x124) & 0x200) != 0)
                int32_t rcx_268 = *(arg1 + 0x48)
                
                if (rcx_268 - 0x41 u<= 0x19 || rcx_268 - 0x61 u<= 0x19)
                    sub_142af0120(arg1, 0x10303)
            
            goto label_142aeee01
        case 0x5c
        label_142aeee01:
            sub_142a48580(arg1 + 0x130, *(arg1 + 0x48))
            goto label_142aefec4
        case 0x5d
            *(arg1 + 0x2a) = 0
            goto label_142aefec4
        case 0x5e
        label_142aee56e:
            sub_142af0120(arg1, 0x10306)
            goto label_142aefec4
        case 0x5f
            arg2.b = 1
            int32_t rax_221 = sub_142aeb8c0(arg1, arg2.b)
            void* r9_25 = *(*(arg1 + 0x10) + 0x20)
            int32_t rdx_170 = *(r9_25 + 8)
            int32_t rdx_171
            
            if (**(arg1 + 8) s<= 0)
                if (rdx_170 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rdx_170 s< 0)
                    abort()
                    noreturn
                
                rdx_171 = rdx_170 | 0xd000000
            else
                rdx_171 = 0
            
            sub_142aeb3c0(r9_25, sx.q(rdx_171), rax_221)
            rdx_146 = rax_221 + 1
            
            if (**(arg1 + 8) s> 0)
                goto label_142aee7ad
            
            if (rdx_146 s> 0xffffff)
                abort()
                noreturn
            
            if (rdx_146 s>= 0)
                goto label_142aee7d0
            
            abort()
            noreturn
        case 0x60
            sub_142aec2f0(arg1, sub_142b102e0(arg1 + 0x1b0))
            goto label_142aefec4
        case 0x61
            if (sub_142aebef0(arg1).b == 0)
                sub_142aec180(arg1, 0x19, 0x1c)
            
            goto label_142aefec4
        case 0x62
            sub_142af0340(arg1, 0)
            int32_t rdx_198 = 0x11000000
            
            if (**(arg1 + 8) s> 0)
                rdx_198 = 0
            
            sub_142aeb830(arg1, rdx_198)
            goto label_142aefec4
        case 0x63
            int32_t rax_203
            int32_t rdx_158
            rax_203, rdx_158 = sub_142aeb8c0(arg1, 0)
            int64_t r8_63 = sx.q(rax_203)
            void* r10_1 = *(*(arg1 + 0x10) + 0x20)
            
            if (r8_63.d == *(r10_1 + 8) - 1)
                if (rax_203 s< 0 || r8_63.d s>= *(r10_1 + 8))
                    rdx_158 = 0
                else
                    rdx_158 = *(*(r10_1 + 0x18) + (r8_63 << 3))
                
                uint32_t rcx_219 = rdx_158 u>> 0x18
                
                if (rcx_219 != 0xb)
                    if (rcx_219 u> 0x1b || not(test_bit(0x8201000, rcx_219)))
                        goto label_142aeea17
                    
                    int32_t r9_23 = 0x34000000
                    
                    if (**(arg1 + 8) s> 0)
                        r9_23 = 0
                    
                    int32_t rdx_163 = r9_23 | 1
                    
                    if (rcx_219 != 0x15)
                        rdx_163 = r9_23
                    
                    int32_t rcx_223 = rdx_163 | 2
                    
                    if (((*(arg1 + 0x124)).b & 1) == 0)
                        rcx_223 = rdx_163
                    
                    sub_142aeb3c0(r10_1, zx.q(rcx_223), r8_63.d)
                    rdx_136 = sub_142aeb7b0(arg1, 1)
                    
                    if (**(arg1 + 8) s> 0)
                        goto label_142aee607
                    
                    if (rdx_136 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rdx_136 s>= 0)
                        goto label_142aee625
                    
                    abort()
                    noreturn
                
                int32_t rdx_160
                
                if (**(arg1 + 8) s<= 0)
                    rdx_160 = (rdx_158 & 0xffffff) | 0x32000000
                else
                    rdx_160 = 0
                
                sub_142aeb3c0(r10_1, sx.q(rdx_160), r8_63.d)
                rdx_136 = sub_142aeb7b0(arg1, 1)
                
                if (**(arg1 + 8) s> 0)
                    goto label_142aee607
                
                if (rdx_136 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rdx_136 s< 0)
                    abort()
                    noreturn
                
                goto label_142aee625
            
        label_142aeea17:
            rdx_158.b = 1
            int32_t rax_212 = sub_142aeb8c0(arg1, rdx_158.b)
            int32_t rdi_27 = rax_212
            int32_t var_f8_5
            
            if (**(arg1 + 8) s<= 0)
                if (rax_212 + 1 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rax_212 + 1 s< 0)
                    abort()
                    noreturn
                
                var_f8_5 = (rax_212 + 1) | 0xf000000
                rdi_27 = rax_212
            else
                var_f8_5 = 0
            
            if (sub_142af1df0(arg1, rdi_27, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1) == 0)
                sub_142af0ee0(arg1, rdi_27)
                int32_t rax_216 = sub_142aeb7b0(arg1, 1)
                int32_t rax_217
                
                if (**(arg1 + 8) s<= 0)
                    if (rax_216 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rax_216 s< 0)
                        abort()
                        noreturn
                    
                    rax_217 = rax_216 | 0x23000000
                else
                    rax_217 = 0
                
                sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rax_217), rdi_27 + 1)
                
                if (**(arg1 + 8) s<= 0)
                    if (rdi_27 + 2 s> 0xffffff)
                        abort()
                        noreturn
                    
                    if (rdi_27 + 2 s< 0)
                        abort()
                        noreturn
                    
                    var_f8_5 = (rdi_27 + 2) | 0x12000000
                else
                    var_f8_5 = 0
            
            void* r9_24 = *(*(arg1 + 0x10) + 0x20)
            int32_t rcx_238 = *(r9_24 + 8) + 1
            int32_t rcx_239
            
            if (**(arg1 + 8) s<= 0)
                if (rcx_238 s> 0xffffff)
                    abort()
                    noreturn
                
                if (rcx_238 s< 0)
                    abort()
                    noreturn
                
                rcx_239 = rcx_238 | 0x6000000
                rdi_27 = rax_212
            else
                rcx_239 = 0
            
            sub_142aeb3c0(r9_24, sx.q(rcx_239), rdi_27)
            sub_142aeb830(arg1, var_f8_5)
            goto label_142aefec4
        case 0x64
            sub_142a9ebe0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), *(data_144016850 + 8))
            goto label_142aefec4
        case 0x65
            void* rax_312 = sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1)
            sub_142a9d8c0(&var_e8, *(data_144016850 + 0x20))
            sub_142a9f070(&var_e8)
            sub_142a9ebe0(rax_312, &var_e8)
            sub_142a9dbc0(&var_e8)
            goto label_142aefec4
        case 0x66
            sub_142aec2f0(arg1, sub_142af2b70(arg1, sub_142af0340(arg1, 0)))
            goto label_142aefec4
        case 0x68
            *(arg1 + 0x1a0) = 0
            *(arg1 + 0x1a4) = 0xffffffff
            goto label_142aefec4

abort()
noreturn
