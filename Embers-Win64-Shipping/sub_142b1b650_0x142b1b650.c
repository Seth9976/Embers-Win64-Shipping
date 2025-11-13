// 函数: sub_142b1b650
// 地址: 0x142b1b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
char* rbx = arg4
int64_t* rsi = arg6
int64_t* var_100 = rsi
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
char var_90 = 2
uint32_t rcx_1 = zx.d(*(arg1 + 0xa))
uint32_t var_124 = rcx_1

if (rcx_1 s> 0x7f)
    if (rcx_1 s> 0x7ff)
        rcx_1.b = 0xe0
    else
        rcx_1.b = (rcx_1 s>> 6).b - 0x40
    
    var_124 = rcx_1

char* rdi = rbx
char* var_118 = rbx

while (true)
    char* rcx_69
    int64_t* r8_49
    
    if (rbx != arg5)
        char rax_3 = *rbx
        
        if (rax_3 u>= rcx_1.b)
            char* r12_1 = rbx
            char* var_f8_1 = rbx
            uint32_t r8 = zx.d(rax_3)
            rbx = &rbx[1]
            
            if (r8.b s< 0)
                if (rbx == arg5)
                    r8 = *(*(arg1 + 0x20) + 0x14) - 1
                else if (r8 u< 0xe0)
                    if (r8 u< 0xc2)
                        r8 = *(*(arg1 + 0x20) + 0x14) - 1
                    else
                        char r8_8 = *rbx - 0x80
                        
                        if (r8_8 u> 0x3f)
                            r8 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            r8 = zx.d(*(**(arg1 + 0x20) + ((zx.q(r8) & 0x1f) << 1))) + zx.d(r8_8)
                            rbx = &rbx[1]
                else if (r8 u< 0xf0)
                    uint64_t r8_1 = zx.q(r8) & 0xf
                    uint32_t r10_1 = zx.d(*rbx)
                    
                    if (not(test_bit(sx.d((*" 000000000000")[r8_1]), zx.d((r10_1 u>> 5).b))))
                        r8 = *(*(arg1 + 0x20) + 0x14) - 1
                    else
                        rbx = &rbx[1]
                        
                        if (rbx == arg5)
                            r8 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            char r9 = *rbx - 0x80
                            
                            if (r9 u> 0x3f)
                                r8 = *(*(arg1 + 0x20) + 0x14) - 1
                            else
                                r8 = zx.d(*
                                    (**(arg1 + 0x20) + (zx.q((r10_1 & 0x3f) + (r8_1.d << 6)) << 1)))
                                    + zx.d(r9)
                                rbx = &rbx[1]
                else if (r8 - 0xf0 s> 4)
                    r8 = *(*(arg1 + 0x20) + 0x14) - 1
                else
                    uint32_t rcx_4 = zx.d(*rbx)
                    
                    if (not(test_bit(sx.d(*((zx.q(rcx_4) u>> 4) + 0x14363c6e8)), r8 - 0xf0)))
                        r8 = *(*(arg1 + 0x20) + 0x14) - 1
                    else
                        int32_t rdx_5 = (zx.d(rcx_4.b) & 0x3f) | (r8 - 0xf0) << 6
                        rbx = &rbx[1]
                        
                        if (rbx == arg5)
                            r8 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            char r8_6 = *rbx - 0x80
                            
                            if (r8_6 u> 0x3f)
                                r8 = *(*(arg1 + 0x20) + 0x14) - 1
                            else
                                rbx = &rbx[1]
                                
                                if (rbx == arg5)
                                    r8 = *(*(arg1 + 0x20) + 0x14) - 1
                                else
                                    char r9_1 = *rbx - 0x80
                                    
                                    if (r9_1 u> 0x3f)
                                        r8 = *(*(arg1 + 0x20) + 0x14) - 1
                                    else
                                        int64_t* rcx_5 = *(arg1 + 0x20)
                                        
                                        if (rdx_5 s< zx.d(*(rcx_5 + 0x1c)))
                                            r8 = sub_142b6a810(rcx_5, rdx_5, r8_6, r9_1)
                                        else
                                            r8 = *(rcx_5 + 0x14) - 2
                                        
                                        rbx = &rbx[1]
            
            uint16_t r15_1 = *(*(*(arg1 + 0x20) + 8) + (sx.q(r8) << 1))
            rcx_1 = var_124
            
            if (r15_1 u< *(arg1 + 0x12))
                continue
            else if (r15_1 u< *(arg1 + 0x1e))
                if (rsi == 0)
                    rbx.b = 0
                    break
                
                if (r15_1 u>= *(arg1 + 0x1a))
                    if ((r15_1.b & 1) == 0)
                    label_142b1b90e:
                        
                        if (sub_142b1e590(arg1, rbx, arg5) == 0)
                            goto label_142b1bf94
                        
                        goto label_142b1b91e
                    
                    if (arg3 != 0 && r15_1 != 1)
                        int32_t rcx_8
                        rcx_8.b = (r15_1.b & 6) u<= 2
                        
                        if (rcx_8 != 0)
                            goto label_142b1b91e
                        
                        goto label_142b1b90e
                    
                label_142b1b91e:
                    char rax_23
                    
                    if (rdi != r12_1)
                        rax_23 = sub_142a8d530(rdi, r12_1, rsi, arg2, arg7, arg8)
                    
                    if (rdi == r12_1 || rax_23 != 0)
                        sub_142b19e40(r12_1, rbx, (zx.d(r15_1) u>> 3) - zx.d(*(arg1 + 0x1c)), rsi, 
                            arg7)
                    label_142b1b977:
                        rdi = rbx
                        var_118 = rbx
                        rcx_1 = var_124
                        continue
                else if (r15_1 u>= *(arg1 + 0x14))
                    if (r15_1 u< *(arg1 + 0x18))
                        goto label_142b1bf94
                    
                    char rax_35 = sub_142b1e590(arg1, rbx, arg5)
                    char rax_36
                    
                    if (rax_35 == 0)
                        rax_36 = sub_142b1e380(arg1, rdi, r12_1, arg3)
                    
                    if (rax_35 == 0 && rax_36 == 0)
                        goto label_142b1bf94
                    
                    char rax_39
                    
                    if (rdi != r12_1)
                        rax_39 = sub_142a8d530(rdi, r12_1, rsi, arg2, arg7, arg8)
                    
                    if (rdi == r12_1 || rax_39 != 0)
                        if (arg7 == 0)
                            goto label_142b1b977
                        
                        sub_142afcad0(arg7, rbx.d - r12_1.d, 0)
                        goto label_142b1b977
                else
                    if ((r15_1.b & 1) == 0)
                    label_142b1b9d6:
                        
                        if (sub_142b1e590(arg1, rbx, arg5) == 0)
                            goto label_142b1bf94
                        
                        goto label_142b1b9e6
                    
                    if (arg3 != 0 && r15_1 != 1)
                        int32_t rcx_12
                        rcx_12.b = *(*(arg1 + 0x30) + (zx.q(r15_1) u>> 1 << 1)) u<= 0x1ff
                        
                        if (rcx_12 != 0)
                            goto label_142b1b9e6
                        
                        goto label_142b1b9d6
                    
                label_142b1b9e6:
                    char rax_30
                    
                    if (rdi != r12_1)
                        rax_30 = sub_142a8d530(rdi, r12_1, rsi, arg2, arg7, arg8)
                    
                    if (rdi == r12_1 || rax_30 != 0)
                        int16_t* r8_17 = *(arg1 + 0x30) + (zx.q(r15_1) u>> 1 << 1)
                        
                        if (sub_142a8d3a0(r12_1, rbx, &r8_17[1], zx.d(*r8_17) & 0x1f, rsi, arg7, 
                                arg8) != 0)
                            goto label_142b1b977
            else if (r15_1 != 0xfe00)
                if (r15_1 u<= 0xfe00)
                    goto label_142b1bf94
                
                uint16_t rsi_2 = r15_1 u>> 1
                char rax_68
                
                if (arg3 != 0)
                    rax_68 = sub_142b1dfe0(arg1, rdi, r12_1)
                
                if (arg3 != 0 && rax_68 u> rsi_2.b)
                    if (var_100 != 0)
                        goto label_142b1bf94
                    
                    rbx.b = 0
                    break
                
                void* rdi_6
                uint16_t r8_41
                
                while (true)
                    if (rbx == arg5)
                        r8_49 = var_100
                        
                        if (r8_49 == 0)
                            goto label_142b1c291
                        
                        rcx_69 = var_118
                        goto label_142b1c28c
                    
                    char r12_4 = rsi_2.b
                    uint32_t r8_31 = zx.d(*rbx)
                    rdi_6 = &rbx[1]
                    
                    if (r8_31.b s< 0)
                        if (rdi_6 == arg5)
                            r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            char r9_14
                            
                            if (r8_31 u< 0xe0)
                                if (r8_31 u< 0xc2)
                                    r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                else
                                    r9_14 = *rdi_6 - 0x80
                                    
                                    if (r9_14 u> 0x3f)
                                        r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                    else
                                        r8_31 =
                                            zx.d(*(**(arg1 + 0x20) + ((zx.q(r8_31) & 0x1f) << 1)))
                                            + zx.d(r9_14)
                                        rdi_6 += 1
                            else if (r8_31 u< 0xf0)
                                uint64_t r8_32 = zx.q(r8_31) & 0xf
                                uint32_t r10_4 = zx.d(*rdi_6)
                                
                                if (not(test_bit(sx.d((*" 000000000000")[r8_32]), 
                                        zx.d((r10_4 u>> 5).b))))
                                    r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                else
                                    rdi_6 += 1
                                    
                                    if (rdi_6 == arg5)
                                        r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                    else
                                        r9_14 = *rdi_6 - 0x80
                                        
                                        if (r9_14 u> 0x3f)
                                            r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                        else
                                            r8_31 = zx.d(*(**(arg1 + 0x20)
                                                + (zx.q((r10_4 & 0x3f) + (r8_32.d << 6)) << 1)))
                                                + zx.d(r9_14)
                                            rdi_6 += 1
                            else if (r8_31 - 0xf0 s> 4)
                                r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                            else
                                uint32_t rcx_46 = zx.d(*rdi_6)
                                
                                if (not(test_bit(sx.d(*((zx.q(rcx_46) u>> 4) + 0x14363c6e8)), 
                                        r8_31 - 0xf0)))
                                    r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                else
                                    int32_t rdx_36 = (zx.d(rcx_46.b) & 0x3f) | (r8_31 - 0xf0) << 6
                                    rdi_6 += 1
                                    
                                    if (rdi_6 == arg5)
                                        r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                    else
                                        char r8_37 = *rdi_6 - 0x80
                                        
                                        if (r8_37 u> 0x3f)
                                            r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                        else
                                            rdi_6 += 1
                                            
                                            if (rdi_6 == arg5)
                                                r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                            else
                                                char r9_15 = *rdi_6 - 0x80
                                                
                                                if (r9_15 u> 0x3f)
                                                    r8_31 = *(*(arg1 + 0x20) + 0x14) - 1
                                                else
                                                    int64_t* rcx_47 = *(arg1 + 0x20)
                                                    
                                                    if (rdx_36 s< zx.d(*(rcx_47 + 0x1c)))
                                                        r8_31 = sub_142b6a810(rcx_47, rdx_36, 
                                                            r8_37, r9_15)
                                                    else
                                                        r8_31 = *(rcx_47 + 0x14) - 2
                                                    
                                                    rdi_6 += 1
                    
                    r8_41 = *(*(*(arg1 + 0x20) + 8) + (sx.q(r8_31) << 1))
                    
                    if (r8_41 u< 0xfe02)
                        rsi = var_100
                        goto label_142b1bf32
                    
                    uint16_t rax_82 = r8_41 u>> 1
                    rsi_2 = zx.w(rax_82.b)
                    
                    if (r12_4 u> rax_82.b)
                        break
                    
                    rbx = rdi_6
                
                rsi = var_100
                
                if (rsi == 0)
                    rbx.b = 0
                    break
                
            label_142b1bf32:
                
                if (r8_41 u< *(arg1 + 0x16)
                        || (*(arg1 + 0x1a) u<= r8_41 && r8_41 u< *(arg1 + 0x1e)))
                    rcx_1 = var_124
                    
                    if (r8_41 u>= *(arg1 + 0x12))
                        rdi = var_118
                        continue
                    else
                        rbx = rdi_6
                        rdi = var_118
                    
                    rcx_1 = var_124
                    continue
                else
                    r12_1 = var_f8_1
                label_142b1bf94:
                    
                    if (var_118 != r12_1 && r15_1 u>= *(arg1 + 0x16)
                            && (*(arg1 + 0x1a) u> r15_1 || r15_1 u>= *(arg1 + 0x1e)))
                        void* rdi_7 = &r12_1[-1]
                        uint32_t rcx_50 = zx.d(*rdi_7)
                        
                        if (rcx_50.b s< 0)
                            int32_t rax_84 = sub_142b6a840(*(arg1 + 0x20), rcx_50, var_118, rdi_7)
                            rdi_7 -= zx.q(rax_84) & 7
                            rcx_50 = rax_84 s>> 3
                        
                        int16_t rdx_39 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rcx_50) << 1))
                        
                        if ((rdx_39.b & 1) == 0)
                            r12_1 = rdi_7
                        else if (arg3 != 0 && rdx_39 != 1)
                            bool cond:4_1
                            
                            if (rdx_39 u< *(arg1 + 0x1a))
                                cond:4_1 = *(*(arg1 + 0x30) + (zx.q(rdx_39) u>> 1 << 1)) u<= 0x1ff
                            else
                                rdx_39.b &= 6
                                cond:4_1 = rdx_39.b u<= 2
                            
                            int32_t r8_43
                            r8_43.b = cond:4_1
                            
                            if (r8_43 == 0)
                                r12_1 = rdi_7
                    
                    void* var_e8 = arg1
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_e0_1 = &var_98
                    void* rax_89 = sub_142a4a0b0(&var_98, 8)
                    void* var_d0_1 = rax_89
                    int32_t var_88
                    int32_t rcx_57 = var_88
                    
                    if ((var_90 & 2) != 0)
                        rcx_57 = 0x1b
                    
                    int32_t var_c0_1 = rcx_57
                    char var_bc_1 = 0
                    
                    if (rax_89 == 0 && *arg8 s<= rax_89.d)
                        *arg8 = 7
                    
                    if (*arg8 s<= 0)
                        int64_t* var_148
                        var_148.b = arg3
                        sub_142b1cc90(arg1, r12_1, rbx, 0, var_148.b, &var_e8, arg8)
                        var_148.b = arg3
                        char* rax_90 = sub_142b1cc90(arg1, rbx, arg5, 1, var_148.b, &var_e8, arg8)
                        rbx = rax_90
                        
                        if (*arg8 s<= 0)
                            if (rax_90 - r12_1 s> 0x7fffffff)
                                *arg8 = 8
                                rbx.b = 1
                            label_142b1c213:
                                
                                if (rax_89 == 0)
                                    break
                                
                                sub_142a4a600(var_e0_1, (0 s>> 1).d)
                                break
                            
                            sub_142b1f620(arg1, &var_e8, 0, arg3)
                            
                            if (sub_142b1d440(&var_e8, r12_1, rbx.d) != 0)
                                goto label_142b1c182
                            
                            if (var_100 == 0)
                                rbx.b = 0
                                goto label_142b1c213
                            
                            if (var_118 == r12_1)
                            label_142b1c171:
                                
                                if (sub_142a8d3a0(r12_1, rbx, rax_89, (0 s>> 1).d, var_100, arg7, 
                                        arg8) != 0)
                                    var_118 = rbx
                                label_142b1c182:
                                    
                                    if (rax_89 != 0)
                                        sub_142a4a600(var_e0_1, (0 s>> 1).d)
                                    
                                    rdi = var_118
                                    rsi = var_100
                                    rcx_1 = var_124
                                    continue
                                else if (rax_89 != 0)
                                    sub_142a4a600(var_e0_1, (0 s>> 1).d)
                            else
                                if (sub_142a8d530(var_118, r12_1, var_100, arg2, arg7, arg8) != 0)
                                    goto label_142b1c171
                                
                                if (rax_89 != 0)
                                    sub_142a4a600(var_e0_1, (0 s>> 1).d)
                        else if (rax_89 != 0)
                            sub_142a4a600(var_e0_1, (0 s>> 1).d)
                    else if (rax_89 != 0)
                        sub_142a4a600(&var_98, 0)
            else
                int32_t rcx_28
                
                if (r12_1 - rdi s< 3)
                    rcx_28 = -1
                else
                    char rcx_22 = r12_1[-3]
                    
                    if (rcx_22 + 0x1f u> 0xc)
                        rcx_28 = -1
                    else
                        char rax_43 = r12_1[-2] - 0x80
                        
                        if (rax_43 u> 0x3f)
                            rcx_28 = -1
                        else
                            char rdx_22 = r12_1[-1] - 0x80
                            
                            if (rdx_22 u> 0x3f || (rcx_22 u>= 0xed && rax_43 u> 0x1f))
                                rcx_28 = -1
                            else
                                rcx_28 =
                                    ((zx.d(rcx_22) & 0xf) << 6 | zx.d(rax_43)) << 6 | zx.d(rdx_22)
                
                char r9_9 = r12_1[1]
                
                if (r9_9 != 0x85)
                    if (rcx_28 - 0xac00 u> 0x2ba3)
                        goto label_142b1bf94
                    
                    if (rcx_28 - 0xac00 != (rcx_28 - 0xac00) s/ 0x1c * 0x1c)
                        goto label_142b1bf94
                    
                    if (rsi == 0)
                        rbx.b = 0
                        break
                    
                    int32_t rax_63
                    
                    if (rbx - r12_1 s< 3 || *r12_1 != 0xe1)
                        rax_63 = -1
                    else if (r9_9 == 0x86)
                        char rdx_30 = r12_1[2]
                        
                        if (rdx_30 + 0x58 u> 0x17)
                            rax_63 = -1
                        else
                            rax_63 = zx.d(rdx_30) - 0xa7
                    else if (r9_9 != 0x87)
                        rax_63 = -1
                    else
                        char rax_64 = r12_1[2]
                        
                        if (rax_64 s> 0x82)
                            rax_63 = -1
                        else
                            rax_63 = zx.d(rax_64) - 0x67
                    
                    if (var_118 == r12_1 - 3)
                        sub_142a8d410(rbx.d - (r12_1 - 3).d, rax_63 + rcx_28, rsi, arg7)
                        goto label_142b1b977
                    
                    if (sub_142a8d530(var_118, r12_1 - 3, rsi, arg2, arg7, arg8) != 0)
                        sub_142a8d410(rbx.d - (r12_1 - 3).d, rax_63 + rcx_28, rsi, arg7)
                        goto label_142b1b977
                else
                    if (rcx_28 - 0x1100 u>= 0x13)
                        goto label_142b1bf94
                    
                    if (var_100 == 0)
                        rbx.b = 0
                        break
                    
                    int32_t rdi_2
                    
                    if (arg5 - rbx s>= 3 && *rbx == 0xe1)
                        char rax_48 = rbx[1]
                        
                        if (rax_48 != 0x86)
                            if (rax_48 != 0x87)
                                goto label_142b1bbce
                            
                            char rax_50 = rbx[2]
                            
                            if (rax_50 s> 0x82)
                                goto label_142b1bbce
                            
                            rdi_2 = zx.d(rax_50) - 0x67
                        else
                            char rcx_29 = rbx[2]
                            
                            if (rcx_29 + 0x58 u> 0x17)
                                goto label_142b1bbce
                            
                            rdi_2 = zx.d(rcx_29) - 0xa7
                        
                        if (rdi_2 s< 0)
                            goto label_142b1bbda
                        
                        rbx = &rbx[3]
                    label_142b1bbe7:
                        
                        if (rdi_2 s< 0)
                            goto label_142b1bf94
                        
                        goto label_142b1bbfd
                    
                label_142b1bbce:
                    rdi_2 = -1
                label_142b1bbda:
                    
                    if (sub_142b1e590(arg1, rbx, arg5) == 0)
                        goto label_142b1bbe7
                    
                    rdi_2 = 0
                label_142b1bbfd:
                    int32_t rdi_4 = rdi_2 + (zx.d(r12_1[2]) + (rcx_28 - 0x1100) * 0x15) * 0x1c
                    rsi = var_100
                    
                    if (var_118 == r12_1 - 3)
                        sub_142a8d410(rbx.d - (r12_1 - 3).d, rdi_4 + 0x9a64, rsi, arg7)
                        goto label_142b1b977
                    
                    if (sub_142a8d530(var_118, r12_1 - 3, rsi, arg2, arg7, arg8) != 0)
                        sub_142a8d410(rbx.d - (r12_1 - 3).d, rdi_4 + 0x9a64, rsi, arg7)
                        goto label_142b1b977
        else
            rbx = &rbx[1]
            continue
    else if (rdi != arg5 && rsi != 0)
        r8_49 = rsi
        rcx_69 = rdi
    label_142b1c28c:
        sub_142a8d530(rcx_69, arg5, r8_49, arg2, arg7, arg8)
label_142b1c291:
    rbx.b = 1
    break

sub_142a47ff0(&var_98)
__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rbx.b)
