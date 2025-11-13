// 函数: sub_142b6e2b0
// 地址: 0x142b6e2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_168 = -2
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t r14 = sx.q(arg4)
int64_t r15 = sx.q(arg3)
int32_t var_2c8 = r15.d
void* rdi = arg1
uint64_t result

if (r15.d s< r14.d)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_150_1 = 2
    uint32_t result_1 = 0
    struct icu_64::UObject::icu_64::UVector32::VTable** rbx_1 = nullptr
    struct icu_64::UObject::icu_64::UVector32::VTable** var_278_1 = nullptr
    int32_t i_5 = 0
    int64_t r8
    
    if ((*(arg2 + 8) & 4) != 0)
        r8 = *(arg2 + 0x20)
    
    int32_t var_14c
    
    if ((*(arg2 + 8) & 4) == 0 || r8 s> r15 || *(arg2 + 0x10) s< r14
            || sx.q(*(arg2 + 0x1c)) s< r14 - r8)
        sub_142aeacd0(arg2, r15)
        
        if (r14 s> sub_142aea860(arg2))
            r14 = sub_142aea860(arg2)
        
        struct icu_64::UObject::icu_64::UVector32::VTable** rax_7 = j_sub_142a7dd00(0x20)
        struct icu_64::UObject::icu_64::UVector32::VTable** var_2d0_1 = rax_7
        struct icu_64::UObject::icu_64::UVector32::VTable** rcx_7
        
        if (rax_7 == 0)
            rcx_7 = nullptr
        else
            rcx_7 = sub_142ae7bc0(rax_7, &i_5)
        
        int32_t i_6 = i_5
        
        if (i_6 s> 0)
            if (rcx_7 != 0)
                (*rcx_7)->__offset(0x0).q(rcx_7, 1)
                i_6 = i_5
            
            goto label_142b6e40b
        
        rbx_1 = rcx_7
        var_278_1 = rcx_7
        
        if (rcx_7 != 0)
        label_142b6e40b:
            
            if (i_6 s<= 0)
                int64_t r15_1 = sx.q(r14.d)
                
                if (sub_142aea6a0(arg2) s< r15_1)
                    while (true)
                        int32_t rax_11
                        int512_t zmm0_1
                        rax_11, zmm0_1 = sub_142aea6a0(arg2)
                        sub_142a48580(&var_158, sub_142aea870(arg2, zmm0_1))
                        
                        while (true)
                            int32_t rdx_5 = rbx_1[1].d
                            int32_t rax_14
                            
                            if (var_150_1 s< 0)
                                rax_14 = var_14c
                            else
                                rax_14 = sx.d(var_150_1) s>> 5
                            
                            if (rdx_5 s>= rax_14)
                                break
                            
                            if ((rdx_5 + 1 s< 0 || *(rbx_1 + 0xc) s< rdx_5 + 1)
                                    && sub_142ae7df0(rbx_1, rdx_5 + 1, &i_5) == 0)
                                continue
                            
                            *(rbx_1[3] + (sx.q(rbx_1[1].d) << 2)) = rax_11
                            rbx_1[1].d = &rbx_1[1].d->__offset(0x0).q + 1
                        
                        if (sub_142aea6a0(arg2) s>= r15_1)
                            break
                    
                    rdi = arg1
                
                int32_t rdx_7 = rbx_1[1].d
                char rax_18
                
                if (rdx_7 + 1 s< 0 || *(rbx_1 + 0xc) s< rdx_7 + 1)
                    rax_18 = sub_142ae7df0(rbx_1, rdx_7 + 1, &i_5)
                
                if ((rdx_7 + 1 s>= 0 && *(rbx_1 + 0xc) s>= rdx_7 + 1) || rax_18 != 0)
                    *(rbx_1[3] + (sx.q(rbx_1[1].d) << 2)) = r14.d
                    rbx_1[1].d = &rbx_1[1].d->__offset(0x0).q + 1
                
                goto label_142b6e4de
        else
            i_5 = 7
    else
        sub_142a4aa20(&var_158, 0, *(arg2 + 0x30) + ((r15 - r8) << 1), r14.d - r15.d)
    label_142b6e4de:
        int64_t* rcx_18 = *(rdi + 0x3f8)
        
        if ((*(*rcx_18 + 0x50))(rcx_18, &var_158, &i_5) != 0)
        label_142b6e823:
            struct icu_64::UObject::icu_64::UVector32::VTable** r14_4 = rbx_1
            int32_t i_8 = sub_142a48c90(&var_158, 0, 0x7fffffff)
            int32_t i_3 = i_8
            int32_t rax_52
            
            if (var_150_1 s< 0)
                rax_52 = var_14c
            else
                rax_52 = sx.d(var_150_1) s>> 5
            
            if (i_3 == rax_52)
            label_142b6e972:
                int32_t i_12 = i_3 + 1
                struct icu_64::UObject::icu_64::UVector32::VTable* var_2c0
                sub_142ae7c20(&var_2c0, i_12, &i_5)
                int32_t var_2b8
                int32_t var_2b4
                int64_t var_2a8
                
                if (var_2b8 + 1 s< 0 || var_2b4 s< var_2b8 + 1)
                    if (sub_142ae7df0(&var_2c0, var_2b8 + 1, &i_5) != 0)
                        *(var_2a8 + (sx.q(var_2b8) << 2)) = 0
                        var_2b8 += 1
                else
                    *(var_2a8 + (sx.q(var_2b8) << 2)) = 0
                    var_2b8 += 1
                
                if (i_3 s>= 1)
                    uint64_t i_10 = zx.q(i_3)
                    uint64_t i
                    
                    do
                        if (var_2b8 + 1 s< 0 || var_2b4 s< var_2b8 + 1)
                            if (sub_142ae7df0(&var_2c0, var_2b8 + 1, &i_5) != 0)
                                *(var_2a8 + (sx.q(var_2b8) << 2)) = 0xffffffff
                                var_2b8 += 1
                        else
                            *(var_2a8 + (sx.q(var_2b8) << 2)) = 0xffffffff
                            var_2b8 += 1
                        
                        i = i_10
                        i_10 -= 1
                    while (i != 1)
                
                struct icu_64::UObject::icu_64::UVector32::VTable* var_268
                sub_142ae7c20(&var_268, i_12, &i_5)
                int32_t var_260
                int64_t var_250
                
                if (i_3 s>= 0)
                    int64_t i_11 = sx.q(i_12)
                    int64_t i_1
                    
                    do
                        int32_t var_25c
                        
                        if (var_260 + 1 s< 0 || var_25c s< var_260 + 1)
                            if (sub_142ae7df0(&var_268, var_260 + 1, &i_5) != 0)
                                *(var_250 + (sx.q(var_260) << 2)) = 0xffffffff
                                var_260 += 1
                        else
                            *(var_250 + (sx.q(var_260) << 2)) = 0xffffffff
                            var_260 += 1
                        
                        i_1 = i_11
                        i_11 -= 1
                    while (i_1 != 1)
                
                struct icu_64::UObject::icu_64::UVector32::VTable* var_220
                sub_142ae7c20(&var_220, i_3, &i_5)
                sub_142ae7f90(&var_220, i_3)
                struct icu_64::UObject::icu_64::UVector32::VTable* var_248
                sub_142ae7c20(&var_248, i_3, &i_5)
                sub_142ae7f90(&var_248, i_3)
                int64_t var_1f8 = 0x345ad82c
                int32_t var_1f0_1 = 0
                int32_t var_1ec_1 = 0x90
                int64_t var_1e8
                __builtin_memset(&var_1e8, 0, 0x80)
                sub_142aeabd0(&var_1f8, &var_158, &i_5)
                int32_t rsi_5 = 0
                int32_t var_2c4_1 = 0
                result_1.b = 0
                char result_2 = 0
                int32_t rdi_4 = 0
                int32_t r12_2 = 0
                
                if (i_3 s> 0)
                    int64_t r9_4 = 0
                    int64_t var_2d0_5 = 0
                    
                    do
                        if (r12_2 s< 0 || var_2b8 s<= 0 || var_2b8 - r12_2 s<= 0
                                || *(var_2a8 + (r9_4 << 2)) != 0xffffffff)
                            sub_142aeacd0(&var_1f8, sx.q(rsi_5))
                            int64_t* rcx_66 = *(arg1 + 0x3f0)
                            int32_t* var_230
                            int64_t var_208
                            int32_t rax_77 = (*(*rcx_66 + 8))(rcx_66, &var_1f8, 0x14, zx.q(i_3), 0, 
                                var_230, var_208, 0)
                            int32_t rdi_5 = rax_77
                            int32_t var_240
                            int32_t r9_6
                            
                            if (rax_77 != 0)
                                r9_6 = var_240
                            
                            if (rax_77 == 0 || r9_6 s<= 0 || *var_230 != 1)
                                if (sub_142a9f280(arg1 + 0xd0, zx.q(sub_142a486d0(&var_158, rsi_5)))
                                        == 0)
                                    sub_142ae7f70(&var_220, 0xff, rdi_5)
                                    sub_142ae7f70(&var_248, 1, rdi_5)
                                    rdi_5 += 1
                                
                                r9_6 = var_240
                            
                            int32_t r14_6 = 0
                            int64_t i_2 = 0
                            
                            if (rdi_5 s> 0)
                                int64_t r11_1 = var_2a8
                                int32_t r8_20 = var_2b8
                                int32_t var_218
                                int32_t r10_2 = var_218
                                
                                do
                                    int32_t rdx_46
                                    
                                    if (r12_2 s< 0 || r8_20 s<= 0 || r8_20 - r12_2 s<= 0)
                                        rdx_46 = 0
                                    else
                                        rdx_46 = *(r11_1 + (var_2d0_5 << 2))
                                    
                                    int32_t rcx_71
                                    
                                    if (i_2 s< 0 || r10_2 s<= 0 || r10_2 - r14_6 s<= 0)
                                        rcx_71 = 0
                                    else
                                        rcx_71 = *(var_208 + (i_2 << 2))
                                    
                                    int32_t rdx_47 = rdx_46 + rcx_71
                                    int32_t rcx_72
                                    
                                    if (i_2 s< 0 || r9_6 s<= 0 || r9_6 - r14_6 s<= 0)
                                        rcx_72 = 0
                                    else
                                        rcx_72 = var_230[i_2]
                                    
                                    int32_t rdi_6 = rcx_72 + r12_2
                                    
                                    if (rdi_6 s>= 0 && r8_20 s> 0 && r8_20 - rdi_6 s> 0
                                            && rdx_47 u< *(r11_1 + (sx.q(rdi_6) << 2)))
                                        sub_142ae7f70(&var_2c0, rdx_47, rdi_6)
                                        sub_142ae7f70(&var_268, r12_2, rdi_6)
                                        r11_1 = var_2a8
                                        r8_20 = var_2b8
                                        r10_2 = var_218
                                        r9_6 = var_240
                                    
                                    r14_6 += 1
                                    i_2 += 1
                                while (i_2 s< sx.q(rdi_5))
                                
                                result_1 = zx.d(result_2)
                            
                            int32_t rax_92 = sub_142a486d0(&var_158, var_2c4_1)
                            int64_t r15_4
                            
                            if (rax_92 - 0x30a1 u> 0x5d)
                                if (rax_92 - 0xff66 u> 0x39)
                                    r15_4.b = 0
                                else
                                    r15_4.b = 1
                            else if (rax_92 != 0x30fb || rax_92 - 0xff66 u<= 0x39)
                                r15_4.b = 1
                            else
                                r15_4.b = 0
                            
                            int64_t rsi_6 = 1
                            int32_t r14_7 = 1
                            
                            if (result_1.b != 0 || r15_4.b == 0)
                            label_142b6ee41:
                                r9_4 = var_2d0_5
                            else
                                int32_t rax_95 = sub_142a4a4f0(&var_158, var_2c4_1, 1)
                                
                                while (true)
                                    int32_t rcx_80
                                    
                                    if (var_150_1 s< 0)
                                        rcx_80 = var_14c
                                    else
                                        rcx_80 = sx.d(var_150_1) s>> 5
                                    
                                    if (rax_95 s>= rcx_80)
                                        break
                                    
                                    if (rsi_6 s>= 0x14)
                                        goto label_142b6ee41_2
                                    
                                    int32_t rax_96 = sub_142a486d0(&var_158, rax_95)
                                    
                                    if ((rax_96 - 0x30a1 u> 0x5d || rax_96 == 0x30fb)
                                            && rax_96 - 0xff66 u> 0x39)
                                        break
                                    
                                    rax_95 = sub_142a4a4f0(&var_158, rax_95, 1)
                                    r14_7 += 1
                                    rsi_6 += 1
                                
                                if (rsi_6 s>= 0x14)
                                label_142b6ee41_1:
                                    r9_4 = var_2d0_5
                                else
                                    int32_t rdx_53
                                    
                                    if (r12_2 s< 0 || var_2b8 s<= 0 || var_2b8 - r12_2 s<= 0)
                                        rdx_53 = 0
                                        r9_4 = var_2d0_5
                                    else
                                        r9_4 = var_2d0_5
                                        rdx_53 = *(var_2a8 + (r9_4 << 2))
                                    
                                    int32_t rax_101
                                    
                                    if (rsi_6 s<= 8)
                                        rax_101 = *(&data_14367aff0 + (rsi_6 << 2))
                                    else
                                        rax_101 = 0x2000
                                    
                                    int32_t rdx_54 = rdx_53 + rax_101
                                    int32_t rdi_9 = r14_7 + r12_2
                                    int64_t rax_102 = r9_4 + rsi_6
                                    
                                    if (rax_102 s>= 0 && var_2b8 s> 0 && var_2b8 - rdi_9 s> 0
                                            && rdx_54 u< *(var_2a8 + (rax_102 << 2)))
                                        sub_142ae7f70(&var_2c0, rdx_54, rdi_9)
                                        sub_142ae7f70(&var_268, r12_2, rdi_9)
                                    label_142b6ee41_2:
                                        r9_4 = var_2d0_5
                            
                            result_1 = zx.d(r15_4.b)
                            result_2 = r15_4.b
                            i_3 = i_8
                            rsi_5 = var_2c4_1
                        
                        r12_2 += 1
                        var_2d0_5 = r9_4 + 1
                        int32_t rax_103 = sub_142a4a4f0(&var_158, rsi_5, 1)
                        rsi_5 = rax_103
                        var_2c4_1 = rax_103
                        r9_4 = var_2d0_5
                    while (r12_2 s< i_3)
                    
                    rbx_1 = var_278_1
                    rdi_4 = 0
                    i_12 = i_3 + 1
                
                sub_142aea470(&var_1f8)
                struct icu_64::UObject::icu_64::UVector32::VTable* var_2a0
                sub_142ae7c20(&var_2a0, i_12, &i_5)
                uint32_t result_3 = 0
                bool cond:0_1 = i_3 s<= 0
                
                if (i_3 s< 0)
                    goto label_142b6ef11
                
                int32_t var_298
                int32_t var_294
                int64_t var_288
                
                if (var_2b8 s<= 0 || var_2b8 - i_3 s<= 0
                        || *(var_2a8 + (sx.q(i_3) << 2)) != 0xffffffff)
                    cond:0_1 = i_3 s<= 0
                label_142b6ef11:
                    
                    if (not(cond:0_1))
                        do
                            if (var_298 + 1 s< 0 || var_294 s< var_298 + 1)
                                if (sub_142ae7df0(&var_2a0, var_298 + 1, &i_5) != 0)
                                    *(var_288 + (sx.q(var_298) << 2)) = i_3
                                    var_298 += 1
                            else
                                *(var_288 + (sx.q(var_298) << 2)) = i_3
                                var_298 += 1
                            
                            result_3 += 1
                            
                            if (var_260 s<= 0)
                                break
                            
                            if (var_260 - i_3 s<= 0)
                                break
                            
                            i_3 = *(var_250 + (sx.q(i_3) << 2))
                        while (i_3 s> 0)
                else
                    if (var_298 + 1 s< 0 || var_294 s< var_298 + 1)
                        if (sub_142ae7df0(&var_2a0, var_298 + 1, &i_5) != 0)
                            *(var_288 + (sx.q(var_298) << 2)) = i_3
                            var_298 += 1
                    else
                        *(var_288 + (sx.q(var_298) << 2)) = i_3
                        var_298 += 1
                    
                    result_3 = 1
                
                int32_t rax_115 = *(arg5 + 8)
                int32_t rdx_61
                int32_t r8_29
                
                if (rax_115 != 0)
                    if (rax_115 - 1 s< 0 || rax_115 s<= 0 || 0 + 1 s<= 0)
                        rdx_61 = 0
                    else
                        rdx_61 = *(*(arg5 + 0x18) + (sx.q(rax_115 - 1) << 2))
                    
                    r8_29 = var_2c8
                
                if (rax_115 == 0 || rdx_61 s< r8_29)
                    if (var_298 + 1 s< 0 || var_294 s< var_298 + 1)
                        if (sub_142ae7df0(&var_2a0, var_298 + 1, &i_5) != 0)
                            *(var_288 + (sx.q(var_298) << 2)) = 0
                            var_298 += 1
                    else
                        *(var_288 + (sx.q(var_298) << 2)) = 0
                        var_298 += 1
                    
                    result_3 += 1
                    r8_29 = var_2c8
                
                int32_t r15_5 = result_3 - 1
                int64_t r14_8 = sx.q(r15_5)
                
                if (r15_5 s>= 0)
                    int32_t rdx_64 = -1
                    int64_t temp13_1
                    
                    do
                        int32_t rcx_101
                        
                        if (r14_8 s< 0 || var_298 s<= 0 || var_298 - r15_5 s<= 0)
                            rcx_101 = 0
                        else
                            rcx_101 = *(var_288 + (r14_8 << 2))
                        
                        if (rbx_1 == 0)
                            rdi_4 = r8_29 + rcx_101
                        else if (rcx_101 s>= 0)
                            int32_t rax_123 = rbx_1[1].d
                            
                            if (rax_123 s> 0 && rax_123 - rcx_101 s> 0)
                                rdi_4 = *(rbx_1[3] + (sx.q(rcx_101) << 2))
                        
                        if (rdi_4 s<= rdx_64)
                            result_3 -= 1
                        else
                            int32_t rdx_65 = *(arg5 + 8)
                            
                            if (rdx_65 + 1 s< 0 || *(arg5 + 0xc) s< rdx_65 + 1)
                                if (sub_142ae7df0(arg5, rdx_65 + 1, &i_5) != 0)
                                    *(*(arg5 + 0x18) + (sx.q(*(arg5 + 8)) << 2)) = rdi_4
                                    *(arg5 + 8) += 1
                            else
                                *(*(arg5 + 0x18) + (sx.q(*(arg5 + 8)) << 2)) = rdi_4
                                *(arg5 + 8) += 1
                        
                        rdx_64 = rdi_4
                        r15_5 -= 1
                        temp13_1 = r14_8
                        r14_8 -= 1
                        rdi_4 = 0
                        r8_29 = var_2c8
                    while (temp13_1 - 1 s>= 0)
                
                result_1 = result_3
                sub_142ae7c50(&var_2a0)
                sub_142ae7c50(&var_248)
                sub_142ae7c50(&var_220)
                sub_142ae7c50(&var_268)
                sub_142ae7c50(&var_2c0)
            else
                if (rbx_1 != 0)
                label_142b6e8c8:
                    int32_t rsi_4 = 0
                    int32_t rdi_3 = 0
                    
                    while (true)
                        if (r14_4 == 0)
                            int32_t rdx_26 = rbx_1[1].d
                            char rax_59
                            
                            if (rdx_26 + 1 s< 0 || *(rbx_1 + 0xc) s< rdx_26 + 1)
                                rax_59 = sub_142ae7df0(rbx_1, rdx_26 + 1, &i_5)
                            
                            if ((rdx_26 + 1 s>= 0 && *(rbx_1 + 0xc) s>= rdx_26 + 1) || rax_59 != 0)
                                *(rbx_1[3] + (sx.q(rbx_1[1].d) << 2)) = var_2c8 + rdi_3
                                rbx_1[1].d = &rbx_1[1].d->__offset(0x0).q + 1
                        else
                            int32_t rax_56
                            
                            if (rdi_3 s>= 0)
                                rax_56 = rbx_1[1].d
                            
                            int32_t rdx_25
                            
                            if (rdi_3 s< 0 || rax_56 s<= 0 || rax_56 - rdi_3 s<= 0)
                                rdx_25 = 0
                            else
                                rdx_25 = *(rbx_1[3] + (sx.q(rdi_3) << 2))
                            
                            sub_142ae7f70(rbx_1, rdx_25, rsi_4)
                        
                        rsi_4 += 1
                        int32_t rax_63
                        
                        if (var_150_1 s< 0)
                            rax_63 = var_14c
                        else
                            rax_63 = sx.d(var_150_1) s>> 5
                        
                        if (rdi_3 == rax_63)
                            break
                        
                        rdi_3 = sub_142a4a4f0(&var_158, rdi_3, 1)
                    
                    i_3 = i_8
                    goto label_142b6e972
                
                struct icu_64::UObject::icu_64::UVector32::VTable** rax_53 =
                    j_sub_142a7dd00(zx.q((&rbx_1[4]).d))
                struct icu_64::UObject::icu_64::UVector32::VTable** var_2d0_4 = rax_53
                struct icu_64::UObject::icu_64::UVector32::VTable** rcx_46
                
                if (rax_53 == 0)
                    rcx_46 = nullptr
                else
                    rcx_46 = sub_142ae7bc0(rax_53, &i_5)
                
                int32_t i_9 = i_5
                
                if (i_9 s> 0)
                    if (rcx_46 != 0)
                        (*rcx_46)->__offset(0x0).q(rcx_46, 1)
                        i_9 = i_5
                    
                    goto label_142b6e8c0
                
                rbx_1 = rcx_46
                var_278_1 = rcx_46
                
                if (rcx_46 != 0)
                label_142b6e8c0:
                    
                    if (i_9 s<= 0)
                        goto label_142b6e8c8
                else
                    i_5 = 7
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_d0_1 = 2
            struct icu_64::UObject::icu_64::UVector32::VTable** rax_22 = j_sub_142a7dd00(0x20)
            struct icu_64::UObject::icu_64::UVector32::VTable** var_2d0_2 = rax_22
            struct icu_64::UObject::icu_64::UVector32::VTable** rdi_2
            
            if (rax_22 == 0)
                rdi_2 = nullptr
            else
                rdi_2 = sub_142ae7bc0(rax_22, &i_5)
            
            struct icu_64::UObject::icu_64::UVector32::VTable** var_2d0_3 = rdi_2
            int32_t i_7 = i_5
            
            if (rdi_2 == 0)
                if (i_7 s<= 0)
                    i_7 = 7
                
                i_5 = i_7
            
            if (i_7 s<= 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_110_1 = 2
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_90_1 = 2
                int32_t rsi_1 = 0
                int32_t rcx_32
                
                while (true)
                    rcx_32 = var_14c
                    int32_t rax_26
                    
                    if (var_150_1 s< 0)
                        rax_26 = rcx_32
                    else
                        rax_26 = sx.d(var_150_1) s>> 5
                    
                    if (rsi_1 s>= rax_26)
                        break
                    
                    if ((var_110_1.b & 1) == 0)
                        var_110_1 &= 0x1f
                    else
                        var_110_1 = 2
                    
                    int64_t r15_2 = sx.q(rsi_1)
                    int32_t r14_2 = sub_142a486d0(&var_158, rsi_1)
                    char i_4
                    
                    do
                        sub_142a48580(&var_118, r14_2)
                        rsi_1 = sub_142a4a4f0(&var_158, rsi_1, 1)
                        int32_t rax_31
                        
                        if (var_150_1 s< 0)
                            rax_31 = var_14c
                        else
                            rax_31 = sx.d(var_150_1) s>> 5
                        
                        if (rsi_1 == rax_31)
                            break
                        
                        r14_2 = sub_142a486d0(&var_158, rsi_1)
                        int64_t* rcx_26 = *(arg1 + 0x3f8)
                        i_4 = (*(*rcx_26 + 0x70))(rcx_26, zx.q(r14_2))
                    while (i_4 == 0)
                    int64_t* rcx_27 = *(arg1 + 0x3f8)
                    (*(*rcx_27 + 0x10))(rcx_27, &var_118, &var_98, &i_5)
                    int32_t r9_3
                    int32_t var_8c
                    
                    if (var_90_1 s< 0)
                        r9_3 = var_8c
                    else
                        r9_3 = sx.d(var_90_1) s>> 5
                    sub_142a48d00(&var_d8, &var_98, 0, r9_3)
                    int32_t r14_3
                    
                    if (rbx_1 == 0)
                        r14_3 = var_2c8 + r15_2.d
                    else
                        int32_t rax_36
                        
                        if (r15_2.d s>= 0)
                            rax_36 = rbx_1[1].d
                        
                        if (r15_2.d s< 0 || rax_36 s<= 0 || rax_36 - r15_2.d s<= 0)
                            r14_3 = 0
                        else
                            r14_3 = *(rbx_1[3] + (r15_2 << 2))
                    
                    do
                        int32_t rdx_19 = rdi_2[1].d
                        int32_t rax_42
                        int32_t var_cc
                        
                        if (var_d0_1 s< 0)
                            rax_42 = var_cc
                        else
                            rax_42 = sx.d(var_d0_1) s>> 5
                        
                        if (rdx_19 s>= rax_42)
                            break
                        
                        char rax_43
                        
                        if (rdx_19 + 1 s< 0 || *(rdi_2 + 0xc) s< rdx_19 + 1)
                            rax_43 = sub_142ae7df0(rdi_2, rdx_19 + 1, &i_5)
                        
                        if ((rdx_19 + 1 s>= 0 && *(rdi_2 + 0xc) s>= rdx_19 + 1) || rax_43 != 0)
                            *(rdi_2[3] + (sx.q(rdi_2[1].d) << 2)) = r14_3
                            rdi_2[1].d = &rdi_2[1].d->__offset(0x0).q + 1
                    while (i_5 s<= 0)
                
                int32_t rsi_2
                
                if (rbx_1 == 0)
                    if (var_150_1 s>= 0)
                        rcx_32 = sx.d(var_150_1) s>> 5
                    
                    rsi_2 = var_2c8 + rcx_32
                else
                    if (var_150_1 s>= 0)
                        rcx_32 = sx.d(var_150_1) s>> 5
                    
                    int32_t rax_45
                    
                    if (rcx_32 s>= 0)
                        rax_45 = rbx_1[1].d
                    
                    if (rcx_32 s< 0 || rax_45 s<= 0 || rax_45 - rcx_32 s<= 0)
                        rsi_2 = 0
                    else
                        rsi_2 = *(rbx_1[3] + (sx.q(rcx_32) << 2))
                
                int32_t rdx_21 = rdi_2[1].d
                char rax_48
                
                if (rdx_21 + 1 s< 0 || *(rdi_2 + 0xc) s< rdx_21 + 1)
                    rax_48 = sub_142ae7df0(rdi_2, rdx_21 + 1, &i_5)
                
                if ((rdx_21 + 1 s>= 0 && *(rdi_2 + 0xc) s>= rdx_21 + 1) || rax_48 != 0)
                    *(rdi_2[3] + (sx.q(rdi_2[1].d) << 2)) = rsi_2
                    rdi_2[1].d = &rdi_2[1].d->__offset(0x0).q + 1
                
                if (rbx_1 != 0)
                    (*rbx_1)->__offset(0x0).q(rbx_1, 1)
                
                rbx_1 = rdi_2
                var_278_1 = rbx_1
                sub_142a48050(&var_158, &var_d8)
                sub_142a47ff0(&var_98)
                sub_142a47ff0(&var_118)
                sub_142a47ff0(&var_d8)
                goto label_142b6e823
            
            if (rdi_2 != 0)
                (*rdi_2)->__offset(0x0).q(rdi_2, 1)
            
            sub_142a47ff0(&var_d8)
    
    if (rbx_1 != 0)
        struct icu_64::UObject::icu_64::UVector32::VTable* r8_32 = *rbx_1
        r8_32->__offset(0x0).q(rbx_1, 1, r8_32)
    
    sub_142a47ff0(&var_158)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_318)
return result
