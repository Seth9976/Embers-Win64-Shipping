// 函数: sub_142b2cea0
// 地址: 0x142b2cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t var_10 = rsi
int64_t var_148 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
char* var_168 = arg2
void var_b8
char result = (*(*arg3 + 0x50))(arg3, &var_b8, arg4)

if (*arg4 s<= 0)
    int32_t r12_1 = 0
    result = sub_142ac2da0(&var_b8, 0, &var_168, arg3)
    
    if (result != 0)
        while (true)
            int64_t rcx_2 = 0
            
            while (true)
                char rax_3 = var_168[rcx_2]
                rcx_2 += 1
                
                if (rax_3 != *(rcx_2 + &x03a0a8a6::ParseDataSink::operator[]::ParseDataSink::`vftable'{for `icu_64::ResourceSink'}
                        .__offset(0x17)))
                    void var_e0
                    result = (*(*arg3 + 0x50))(arg3, &var_e0, arg4)
                    
                    if (*arg4 s> 0)
                        goto label_142b2d4ee
                    
                    int32_t r15_1 = 0
                    
                    if (sub_142ac2da0(&var_e0, 0, &var_168, arg3) != 0)
                        while (true)
                            int64_t rax_6 = 0
                            bool cond:0_1
                            
                            while (true)
                                char rcx_5 = var_168[rax_6]
                                rax_6 += 1
                                char temp0_1 = *(rax_6 + 0x14366b44f)
                                cond:0_1 = rcx_5 == temp0_1
                                
                                if (rcx_5 != temp0_1)
                                    break
                                
                                if (rax_6 == 8)
                                    cond:0_1 = rcx_5 == *(rax_6 + 0x14366b44f)
                                    break
                            
                            rsi.b = cond:0_1
                            void var_160
                            result = (*(*arg3 + 0x48))(arg3, &var_160, arg4)
                            
                            if (*arg4 s> 0)
                                goto label_142b2d4ee
                            
                            int32_t rdi_1 = 0
                            int32_t var_150
                            
                            if (var_150 s> 0)
                                while (true)
                                    sub_142ac33b0(&var_160, rdi_1, arg3)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                        var_88
                                    sub_142a9c7e0(arg3, &var_88)
                                    
                                    if (*arg4 s<= 0)
                                        int16_t var_80
                                        int32_t var_7c
                                        int32_t r9_4
                                        
                                        if (var_80 s< 0)
                                            r9_4 = var_7c
                                        else
                                            r9_4 = sx.d(var_80) s>> 5
                                        
                                        if (sub_142a491f0(&var_88, 0x2e, 0, r9_4) == 0xffffffff)
                                            int32_t r9_6
                                            
                                            if (var_80 s< 0)
                                                r9_6 = var_7c
                                            else
                                                r9_6 = sx.d(var_80) s>> 5
                                            
                                            if (sub_142a491f0(&var_88, 0x2c, 0, r9_6) == 0xffffffff)
                                                int32_t r9_8
                                                
                                                if (var_80 s< 0)
                                                    r9_8 = var_7c
                                                else
                                                    r9_8 = sx.d(var_80) s>> 5
                                                
                                                if (sub_142a491f0(&var_88, 0x2b, 0, r9_8)
                                                        == 0xffffffff)
                                                    int32_t r9_10
                                                    
                                                    if (var_80 s< 0)
                                                        r9_10 = var_7c
                                                    else
                                                        r9_10 = sx.d(var_80) s>> 5
                                                    
                                                    if (sub_142a491f0(&var_88, 0x2d, 0, r9_10)
                                                            == 0xffffffff)
                                                        int32_t r9_12
                                                        
                                                        if (var_80 s< 0)
                                                            r9_12 = var_7c
                                                        else
                                                            r9_12 = sx.d(var_80) s>> 5
                                                        
                                                        if (sub_142a491f0(&var_88, 0x24, 0, r9_12)
                                                                == 0xffffffff)
                                                            int32_t r9_14
                                                            
                                                            if (var_80 s< 0)
                                                                r9_14 = var_7c
                                                            else
                                                                r9_14 = sx.d(var_80) s>> 5
                                                            
                                                            if (
                                                                    sub_142a491f0(&var_88, 0xa3, 0, r9_14)
                                                                    == 0xffffffff)
                                                                int32_t r9_16
                                                                
                                                                if (var_80 s< 0)
                                                                    r9_16 = var_7c
                                                                else
                                                                    r9_16 = sx.d(var_80) s>> 5
                                                                
                                                                if (
                                                                        sub_142a491f0(&var_88, 0x20b9, 0, r9_16)
                                                                        == 0xffffffff)
                                                                    int32_t r9_18
                                                                    
                                                                    if (var_80 s< 0)
                                                                        r9_18 = var_7c
                                                                    else
                                                                        r9_18 = sx.d(var_80) s>> 5
                                                                    
                                                                    if (
                                                                            sub_142a491f0(&var_88, 0xa5, 0, r9_18)
                                                                            == 0xffffffff)
                                                                        int32_t r9_20
                                                                        
                                                                        if (var_80 s< 0)
                                                                            r9_20 = var_7c
                                                                        else
                                                                            r9_20 = sx.d(var_80) s>> 5
                                                                        
                                                                        if (
                                                                                sub_142a491f0(&var_88, 0x20a9, 0, r9_20)
                                                                                == 0xffffffff)
                                                                            int32_t r9_22
                                                                            
                                                                            if (var_80 s< 0)
                                                                                r9_22 = var_7c
                                                                            else
                                                                                r9_22 = sx.d(var_80) s>> 5
                                                                            
                                                                            if (
                                                                                    sub_142a491f0(&var_88, 0x25, 0, r9_22)
                                                                                    == 0xffffffff)
                                                                                int32_t r9_24
                                                                                
                                                                                if (var_80 s< 0)
                                                                                    r9_24 = var_7c
                                                                                else
                                                                                    r9_24 = sx.d(var_80) s>> 5
                                                                                
                                                                                if (
                                                                                        sub_142a491f0(&var_88, 0x2030, 0, r9_24)
                                                                                        == 0xffffffff)
                                                                                    int32_t r9_26
                                                                                    
                                                                                    if (var_80 s< 0)
                                                                                        r9_26 = var_7c
                                                                                    else
                                                                                        r9_26 = sx.d(var_80) s>> 5
                                                                                    
                                                                                    if (
                                                                                            sub_142a491f0(&var_88, 0x2019, 0, r9_26)
                                                                                            != 0xffffffff)
                                                                                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                                            ** rax_47 = j_sub_142a7dd00(0xc8)
                                                                                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                                            ** var_e8_1 = rax_47
                                                                                        
                                                                                        if (rax_47 != 0)
                                                                                            rax_47 =
                                                                                                sub_142b661f0(rax_47, &var_88, arg4)
                                                                                        
                                                                                        data_1440169e8 = rax_47
                                                                                else
                                                                                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                                        ** rax_44 = j_sub_142a7dd00(0xc8)
                                                                                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                                        ** var_f0_1 = rax_44
                                                                                    
                                                                                    if (rax_44 != 0)
                                                                                        rax_44 =
                                                                                            sub_142b661f0(rax_44, &var_88, arg4)
                                                                                    
                                                                                    data_144016a20 = rax_44
                                                                            else
                                                                                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                                    ** rax_41 = j_sub_142a7dd00(0xc8)
                                                                                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                                    ** var_f8_1 = rax_41
                                                                                
                                                                                if (rax_41 != 0)
                                                                                    rax_41 =
                                                                                        sub_142b661f0(rax_41, &var_88, arg4)
                                                                                
                                                                                data_144016a18 = rax_41
                                                                        else
                                                                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                                ** rax_38 = j_sub_142a7dd00(0xc8)
                                                                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                                ** var_100_1 = rax_38
                                                                            
                                                                            if (rax_38 != 0)
                                                                                rax_38 =
                                                                                    sub_142b661f0(rax_38, &var_88, arg4)
                                                                            
                                                                            data_144016a50 = rax_38
                                                                    else
                                                                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                            ** rax_35 = j_sub_142a7dd00(0xc8)
                                                                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                            ** var_108_1 = rax_35
                                                                        
                                                                        if (rax_35 != 0)
                                                                            rax_35 =
                                                                                sub_142b661f0(rax_35, &var_88, arg4)
                                                                        
                                                                        data_144016a48 = rax_35
                                                                else
                                                                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                        ** rax_32 = j_sub_142a7dd00(0xc8)
                                                                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                        ** var_110_1 = rax_32
                                                                    
                                                                    if (rax_32 != 0)
                                                                        rax_32 =
                                                                            sub_142b661f0(rax_32, &var_88, arg4)
                                                                    
                                                                    data_144016a40 = rax_32
                                                            else
                                                                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                    ** rax_29 = j_sub_142a7dd00(0xc8)
                                                                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                    ** var_118_1 = rax_29
                                                                
                                                                if (rax_29 != 0)
                                                                    rax_29 =
                                                                        sub_142b661f0(rax_29, &var_88, arg4)
                                                                
                                                                data_144016a38 = rax_29
                                                        else
                                                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                ** rax_26 = j_sub_142a7dd00(0xc8)
                                                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                                ** var_120_1 = rax_26
                                                            
                                                            if (rax_26 != 0)
                                                                rax_26 =
                                                                    sub_142b661f0(rax_26, &var_88, arg4)
                                                            
                                                            data_144016a30 = rax_26
                                                    else
                                                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                            ** rax_23 = j_sub_142a7dd00(0xc8)
                                                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                            ** var_128_1 = rax_23
                                                        
                                                        if (rax_23 != 0)
                                                            rax_23 =
                                                                sub_142b661f0(rax_23, &var_88, arg4)
                                                        
                                                        data_144016a08 = rax_23
                                                else
                                                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                        ** rax_20 = j_sub_142a7dd00(0xc8)
                                                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                        ** var_130_1 = rax_20
                                                    
                                                    if (rax_20 != 0)
                                                        rax_20 =
                                                            sub_142b661f0(rax_20, &var_88, arg4)
                                                    
                                                    data_144016a10 = rax_20
                                            else
                                                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                    ** rax_15 = j_sub_142a7dd00(0xc8)
                                                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                    ** var_138_1 = rax_15
                                                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                    ** rcx_14
                                                
                                                if (rax_15 == 0)
                                                    rcx_14 = nullptr
                                                else
                                                    rcx_14 = sub_142b661f0(rax_15, &var_88, arg4)
                                                
                                                int64_t rax_17 = 0x28
                                                
                                                if (rsi.b != 0)
                                                    rax_17 = 0x18
                                                
                                                *(rax_17 + &data_1440169b0) = rcx_14
                                        else
                                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                ** rax_10 = j_sub_142a7dd00(0xc8)
                                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                ** var_140_1 = rax_10
                                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                ** rcx_11
                                            
                                            if (rax_10 == 0)
                                                rcx_11 = nullptr
                                            else
                                                rcx_11 = sub_142b661f0(rax_10, &var_88, arg4)
                                            
                                            int64_t rax_12 = 0x30
                                            
                                            if (rsi.b != 0)
                                                rax_12 = 0x20
                                            
                                            *(rax_12 + &data_1440169b0) = rcx_11
                                        
                                        if (*arg4 s<= 0)
                                            sub_142a47ff0(&var_88)
                                            rdi_1 += 1
                                            
                                            if (rdi_1 s>= var_150)
                                                goto label_142b2d498
                                            
                                            continue
                                    
                                    result = sub_142a47ff0(&var_88)
                                    break
                                
                                goto label_142b2d4ee
                            
                        label_142b2d498:
                            r15_1 += 1
                            
                            if (sub_142ac2da0(&var_e0, r15_1, &var_168, arg3) == 0)
                                break
                    
                    goto label_142b2d4be
                
                if (rcx_2 == 5)
                    break
            
        label_142b2d4be:
            r12_1 += 1
            result = sub_142ac2da0(&var_b8, r12_1, &var_168, arg3)
            
            if (result == 0)
                break

label_142b2d4ee:
__security_check_cookie(rax_1 ^ &var_188)
return result
