// 函数: sub_142ac9520
// 地址: 0x142ac9520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t* r13 = arg4
void* rbx = arg3
void* var_180 = rbx
int64_t r12 = sx.q(arg2)
int32_t var_194 = r12.d
void* r15 = arg1
void* var_170 = arg1
int32_t rdi = 0

if (arg6 != 0)
    *arg6 = 0

int32_t rsi = arg4[2]
int16_t rax_3 = *(arg3 + 8)
int32_t rax_5

if (rax_3 s< 0)
    rax_5 = *(arg3 + 0xc)
else
    rax_5 = sx.d(rax_3) s>> 5

if ((r12.d & 0xfffffffc) != 0 || r12.d == 2)
    arg1.b = 0
else
    arg1.b = 1

arg4.b = ((r12 - 2).d & 0xfffffffd) == 0
int32_t var_19c = 0
struct icu_64::UObject::icu_64::ParsePosition::VTable* var_1b0 =
    &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
int32_t var_1a4 = 0xffffffff
int32_t var_198 = 0x7fffffff
int32_t r14 = -1

if (arg1.b == 0 && arg4.b == 0)
    goto label_142ac9664

char var_1b8 = 0
int32_t rax_7 = sub_142acb6d0(r15, rbx, &var_1b0, arg4, &var_1b8)

if (var_1a4 != 0xffffffff)
    goto label_142ac965c

r14 = rsi
struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result

if (r14 == rax_5 || var_1b8 != 0)
    r13[2] = r14
    struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result_1 =
        sub_142ac7c20(r15, rax_7)
    sub_142aa8450(&var_1b0)
    result = result_1
else
    var_198 = rax_7
label_142ac965c:
    var_19c = 0x60
label_142ac9664:
    int32_t var_1a0 = 0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148
    int16_t var_c8[0x20]
    sub_142a47d50(&var_148, &var_c8, 0, 0x20)
    uint32_t rax_9
    rax_9.b = (arg5 u>> 1).b & 1
    uint32_t var_18c = rax_9
    
    if (r12.d u> 0x13)
        goto label_142ac9c48
    
    int32_t* var_1d0
    int32_t* var_1c8
    int32_t var_1a8_1
    int32_t var_1a8_2
    int32_t var_1a4_5
    int32_t rax_10
    struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result_5
    struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result_4
    
    switch (r12)
        case 0, 1, 2
            int32_t rcx_43 = r12.d
            int32_t rbx_4
            
            if (r12.d == 0)
                rbx_4 = 1
            else if (rcx_43 == 1)
                rbx_4 = 3
            else
                if (rcx_43 != 2)
                    abort()
                    noreturn
                
                rbx_4 = 5
            
            var_194 = 0
            void* rax_33 = sub_142ac8f40(r15, &var_1a0)
            
            if (var_1a0 s<= 0)
                var_1c8 = &var_1a0
                var_1d0 = &var_194
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_1d8_8 = &var_148
                rbx = var_180
                int32_t rax_34 = sub_142b51fd0(rax_33, rbx, zx.q(rsi), zx.q(rbx_4))
                
                if (var_1a0 s<= 0)
                    if (rax_34 s<= 0)
                        goto label_142ac9c48
                    
                    if (arg6 != 0)
                        *arg6 = var_194
                    
                    r13[2] = rax_34 + rsi
                    result_5 = sub_142a64de0(&var_148)
                    goto label_142ac975d
            
            r13[3] = rsi
        label_142aca276:
            sub_142a47ff0(&var_148)
            sub_142aa8450(&var_1b0)
            result = nullptr
        case 3, 4
            int32_t rdx_8 = 6
            
            if (r12.d != 3)
                rdx_8 = 0x30
            
            int64_t* rcx_14 = *(r15 + 0x230)
            int64_t* rax_12 = (*(*rcx_14 + 0x70))(rcx_14, rbx, zx.q(rsi), zx.q(rdx_8), &var_1a0)
            int64_t* rbx_2 = rax_12
            
            if (var_1a0 s> 0)
                r13[3] = rsi
                
                if (rax_12 != 0)
                    (**rax_12)(rbx_2, 1)
                
                goto label_142aca276
            
            if (rbx_2 != 0)
                int32_t r12_1 = -1
                int32_t var_1b4_1 = 0
                int32_t rax_14 = sub_142ac69b0(rbx_2)
                int32_t rax_16
                
                if (rax_14 s> 0)
                    int32_t r15_1 = 0
                    int32_t rax_17
                    
                    do
                        rax_16 = sub_142ac67c0(rbx_2, r15_1) + rsi
                        
                        if (rax_16 s> r14)
                            r12_1 = r15_1
                        
                        r15_1 += 1
                        int32_t rcx_18 = rax_16
                        
                        if (rax_16 s<= r14)
                            rcx_18 = r14
                        
                        r14 = rcx_18
                        rax_17 = sub_142ac69b0(rbx_2)
                    while (r15_1 s< rax_17)
                    r15 = var_170
                
                if (rax_14 s> 0 && r12_1 s>= 0)
                    if (arg6 != 0)
                        int32_t rax_18 = sub_142ac6860(rbx_2, r12_1)
                        
                        if (rax_18 == 2)
                            rdi = 1
                        else if (rax_18 == 4)
                            rdi = 2
                        else if (rax_18 == 0x10)
                            rdi = 1
                        else if (rax_18 == 0x20)
                            rdi = 2
                        
                        *arg6 = rdi
                    
                    r13[2] = rax_16
                    sub_142ac8fb0(r15, rbx_2, r12_1, &var_148)
                    result_4 = sub_142a64de0(&var_148)
                    int64_t r8_7 = *rbx_2
                    (*r8_7)(rbx_2, 1, r8_7)
                    goto label_142ac9901
                
                r12 = zx.q(var_194)
            
            if (var_18c.b == 0 || r12.d != 4)
                goto label_142ac9ae5
            
            int64_t* rax_21 = sub_142ac8ea0(r15, &var_1a0)
            
            if (var_1a0 s> 0)
                goto label_142ac9ae5
            
            int64_t* rax_22 = (*(*rax_21 + 0x70))(rax_21, var_180, zx.q(rsi), zx.q(rdx_8), &var_1a0)
            int64_t* var_168_1 = rax_22
            
            if (var_1a0 s> 0)
                r13[3] = rsi
                
                if (rax_22 != 0)
                    (**rax_22)(rax_22, zx.q((r12 - 3).d))
                
                if (rbx_2 != 0)
                    (**rbx_2)(rbx_2, 1)
                
                goto label_142aca276
            
            if (rax_22 == 0)
                goto label_142ac9ad1
            
            int32_t var_1b4_3 = 0xffffffff
            int32_t r12_2 = 0
            int32_t rax_25 = sub_142ac69b0(rax_22)
            int32_t rax_27
            int32_t rbx_3
            
            if (rax_25 s> 0)
                rbx_3 = var_1b4_3
                int32_t r15_2 = 0
                int32_t rax_28
                
                do
                    rax_27 = sub_142ac67c0(rax_22, r15_2) + rsi
                    
                    if (rax_27 s> r14)
                        rbx_3 = r15_2
                    
                    r15_2 += 1
                    int32_t rcx_32 = rax_27
                    
                    if (rax_27 s<= r14)
                        rcx_32 = r14
                    
                    r14 = rcx_32
                    rax_28 = sub_142ac69b0(rax_22)
                while (r15_2 s< rax_28)
                rbx_2 = rax_12
                r15 = var_170
            
            if (rax_25 s<= 0 || rbx_3 s< 0)
                r12 = zx.q(var_194)
            label_142ac9ad1:
                
                if (rax_22 != 0)
                    (**rax_22)(rax_22, 1)
                
                rdi = 0
            label_142ac9ae5:
                
                if (rbx_2 != 0)
                    (**rbx_2)(rbx_2, 1)
                
                rbx = var_180
                goto label_142ac9c48
            
            if (arg6 != 0)
                int32_t rax_29 = sub_142ac6860(rax_22, rbx_3)
                
                if (rax_29 == 2)
                    r12_2 = 1
                else if (rax_29 == 4)
                    r12_2 = 2
                else if (rax_29 == 0x10)
                    r12_2 = 1
                else if (rax_29 == 0x20)
                    r12_2 = 2
                
                *arg6 = r12_2
            
            r13[2] = rax_27
            sub_142ac8fb0(r15, rax_22, rbx_3, &var_148)
            struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result_2 =
                sub_142a64de0(&var_148)
            int64_t r8_10 = *rax_22
            (*r8_10)(rax_22, 1, r8_10)
            
            if (rbx_2 != 0)
                int64_t r8_11 = *rbx_2
                (*r8_11)(rbx_2, 1, r8_11)
            
            sub_142a47ff0(&var_148)
            sub_142aa8450(&var_1b0)
            result = result_2
        case 5
            var_1a8_1 = rsi
            int32_t var_1a4_1 = 0xffffffff
            rax_10 = sub_142acb6d0(r15, rbx, &var_1b0, nullptr, nullptr)
            int32_t rdx_6
            
            if (var_1a4_1 == 0xffffffff)
            label_142ac974f:
                r13[2] = var_1a8_1
                rdx_6 = rax_10
                goto label_142ac9758
            
            var_19c |= 0x40
        label_142ac9c48:
            int32_t var_19c_1 = var_19c | sx.d(*((sx.q(r12.d) << 1) + 0x143656148))
            struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result_3
            
            if (r14 s<= rsi)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108
                int16_t var_88[0x20]
                sub_142a47d50(&var_108, &var_88, 0, 0x20)
                int32_t r12_3 = rax_5
                
                if (r14 s< r12_3)
                    int32_t rcx_54 = var_19c_1
                    
                    if ((rcx_54 & 0x180) == 0x180)
                        goto label_142ac9d1a
                    
                    int32_t var_1a4_6 = 0xffffffff
                    var_1b8 = 0
                    int32_t rax_41
                    int32_t* r9_8
                    rax_41, r9_8 = sub_142acb4f0(r15, rbx, &var_1b0, 0, &var_1b8)
                    int32_t rcx_56
                    
                    if (var_1a4_6 != 0xffffffff)
                    label_142ac9d16:
                        rcx_54 = var_19c_1
                    label_142ac9d1a:
                        
                        if (r14 s>= r12_3)
                            goto label_142ac9df6
                        
                        if ((rcx_54.b & 0x20) != 0)
                            goto label_142ac9d88
                        
                        int32_t var_1a4_7 = 0xffffffff
                        var_1b8 = 0
                        rax_41, r9_8 = sub_142acb6d0(r15, rbx, &var_1b0, nullptr, &var_1b8)
                        
                        if (var_1a4_7 != 0xffffffff)
                        label_142ac9d84:
                            rcx_54 = var_19c_1
                        label_142ac9d88:
                            
                            if (r14 s>= r12_3 || (rcx_54.b & 0x40) != 0)
                                goto label_142ac9df6
                            
                            int32_t var_1a4_8 = 0xffffffff
                            var_1b8 = 0
                            r9_8.b = 1
                            rax_41 = sub_142acb6d0(r15, rbx, &var_1b0, r9_8, &var_1b8)
                            
                            if (var_1a4_8 != 0xffffffff)
                                goto label_142ac9df6
                            
                            rcx_56 = rsi
                            
                            if (rcx_56 != r12_3 && var_1b8 == 0)
                                if (r14 s< rcx_56)
                                    var_198 = rax_41
                                    sub_142a4ab40(&var_108)
                                    r14 = rsi
                                
                                goto label_142ac9df6
                        else
                            rcx_56 = rsi
                            
                            if (rcx_56 != r12_3 && var_1b8 == 0)
                                if (r14 s< rcx_56)
                                    var_198 = rax_41
                                    sub_142a4ab40(&var_108)
                                    r14 = rsi
                                
                                goto label_142ac9d84
                    else
                        rcx_56 = rsi
                        
                        if (rcx_56 != r12_3 && var_1b8 == 0)
                            if (r14 s< rcx_56)
                                var_198 = rax_41
                                sub_142a4ab40(&var_108)
                                r14 = rsi
                            
                            goto label_142ac9d16
                    
                    r13[2] = rcx_56
                    result_3 = sub_142ac7c20(r15, rax_41)
                    sub_142a47ff0(&var_108)
                    goto label_142ac9764
                
            label_142ac9df6:
                uint32_t var_1b4_5 = 0
                int32_t rcx_90
                uint32_t rbx_8
                
                if ((arg5.b & 1) != 0)
                    var_1b4_5 = 0
                    
                    if (r14 s< r12_3)
                        int64_t* rcx_64 = *(r15 + 0x230)
                        int64_t* rax_44 = (*(*rcx_64 + 0x70))(rcx_64, rbx, zx.q(rsi), 0x76, 
                            &var_1a0, var_1d0, var_1c8)
                        int64_t* var_168_2 = rax_44
                        
                        if (var_1a0 s> 0)
                            r13[3] = rsi
                            
                            if (rax_44 != 0)
                                (**rax_44)(rax_44, 1)
                            
                            sub_142a47ff0(&var_108)
                            goto label_142aca276
                        
                        int32_t rax_46 = -1
                        var_194 = 0xffffffff
                        int32_t r12_4 = -1
                        
                        if (rax_44 != 0)
                            if (sub_142ac69b0(rax_44) s> 0)
                                int32_t rax_51
                                
                                do
                                    if (sub_142ac67c0(rax_44, rdi) + rsi s> r12_4)
                                        var_194 = rdi
                                        r12_4 = rsi + sub_142ac67c0(rax_44, rdi)
                                    
                                    rdi += 1
                                    rax_51 = sub_142ac69b0(rax_44)
                                while (rdi s< rax_51)
                            
                            rax_46 = var_194
                            rdi = 0
                        
                        var_1b4_5 = 0
                        
                        if (r14 s< r12_4)
                            r14 = r12_4
                            sub_142ac8fb0(r15, rax_44, rax_46, &var_108)
                            int32_t rax_52 = sub_142ac6860(rax_44, var_194)
                            
                            if (rax_52 == 2)
                                var_1b4_5 = 1
                            else if (rax_52 == 4)
                                var_1b4_5 = 2
                            else if (rax_52 == 0x10)
                                var_1b4_5 = 1
                            else if (rax_52 == 0x20)
                                var_1b4_5 = 2
                            else
                                var_1b4_5 = 0
                            
                            var_198 = 0x7fffffff
                        
                        if (rax_44 != 0)
                            (**rax_44)(rax_44, 1)
                        
                        r12_3 = rax_5
                    
                    if (var_18c.b != 0)
                        if (r14 s>= r12_3)
                            goto label_142aca20c
                        
                        if ((var_19c_1.b & 0x10) == 0)
                            int64_t* rax_54 = sub_142ac8ea0(r15, &var_1a0)
                            
                            if (var_1a0 s<= 0)
                                int64_t* rax_55 = (*(*rax_54 + 0x70))(rax_54, var_180, zx.q(rsi), 
                                    0x76, &var_1a0, var_1d0, var_1c8)
                                int64_t* var_168_3 = rax_55
                                
                                if (var_1a0 s> 0)
                                    r13[3] = rsi
                                    
                                    if (rax_55 != 0)
                                        (**rax_55)(rax_55, 1)
                                    
                                    sub_142a47ff0(&var_108)
                                    goto label_142aca276
                                
                                int32_t rax_57 = -1
                                var_194 = 0xffffffff
                                int32_t r12_5 = -1
                                
                                if (rax_55 != 0)
                                    if (sub_142ac69b0(rax_55) s> 0)
                                        int32_t rax_62
                                        
                                        do
                                            if (sub_142ac67c0(rax_55, rdi) + rsi s> r12_5)
                                                var_194 = rdi
                                                r12_5 = rsi + sub_142ac67c0(rax_55, rdi)
                                            
                                            rdi += 1
                                            rax_62 = sub_142ac69b0(rax_55)
                                        while (rdi s< rax_62)
                                    
                                    rax_57 = var_194
                                
                                if (r14 s< r12_5)
                                    r14 = r12_5
                                    sub_142ac8fb0(r15, rax_55, rax_57, &var_108)
                                    int32_t rax_63 = sub_142ac6860(rax_55, var_194)
                                    
                                    if (rax_63 == 2)
                                        var_1b4_5 = 1
                                    else if (rax_63 == 4)
                                        var_1b4_5 = 2
                                    else if (rax_63 == 0x10)
                                        var_1b4_5 = 1
                                    else if (rax_63 == 0x20)
                                        var_1b4_5 = 2
                                    else
                                        var_1b4_5 = 0
                                    
                                    var_198 = 0x7fffffff
                                
                                if (rax_55 != 0)
                                    (**rax_55)(rax_55, 1)
                    
                    if (r14 s>= rax_5)
                        goto label_142aca20c
                    
                    var_18c = 0
                    void* rcx_83
                    
                    if (var_1a0 s<= 0)
                        sub_142ac8e00()
                        sub_142a860a0(&data_144016550)
                        
                        if (*(r15 + 0x238) == 0)
                            *(r15 + 0x238) = sub_142b519d0(r15 + 0x148, &var_1a0)
                        
                        sub_142ac8e00()
                        sub_142a860d0(&data_144016550)
                        rcx_83 = *(r15 + 0x238)
                    else
                        rcx_83 = nullptr
                    
                    if (var_1a0 s> 0)
                        goto label_142aca264
                    
                    int32_t* var_1c8_1 = &var_1a0
                    uint32_t* var_1d0_1 = &var_18c
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_1d8_14 =
                        &var_148
                    int32_t rax_66 = sub_142b51fd0(rcx_83, var_180, zx.q(rsi), 7)
                    
                    if (var_1a0 s> 0)
                        goto label_142aca264
                    
                    if (rax_66 s> 0)
                        int32_t rax_67 = rax_66 + rsi
                        
                        if (r14 s< rax_67)
                            r14 = rax_67
                            sub_142a48aa0(&var_108, &var_148, 0)
                            var_1b4_5 = var_18c
                            var_198 = 0x7fffffff
                    
                    if (r14 s>= rax_5)
                        goto label_142aca20c
                    
                    int32_t rax_70 = var_19c_1 & 0x200
                    
                    if (rax_70 == 0)
                        int32_t var_1a4_9 = 0xffffffff
                        sub_142acc030(r15, var_180, &var_1b0, &var_148)
                        
                        if (var_1a4_9 == 0xffffffff && r14 s< rsi)
                            r14 = rsi
                            sub_142a48aa0(&var_108, &var_148, 0)
                            var_1b4_5 = 0
                            var_198 = 0x7fffffff
                    
                    if (r14 s>= rax_5 || rax_70 != 0)
                        goto label_142aca20c
                    
                    int32_t var_1a4_10 = 0xffffffff
                    sub_142acbeb0(r15, var_180, &var_1b0, &var_148)
                    
                    if (var_1a4_10 != 0xffffffff || r14 s>= rsi)
                        goto label_142aca20c
                    
                    r14 = rsi
                    sub_142a48aa0(&var_108, &var_148, 0)
                    rbx_8 = 0
                    rcx_90 = 0x7fffffff
                    goto label_142aca214
                
            label_142aca20c:
                rcx_90 = var_198
                rbx_8 = var_1b4_5
            label_142aca214:
                
                if (r14 s<= rsi)
                label_142aca264:
                    r13[3] = rsi
                    sub_142a47ff0(&var_108)
                    goto label_142aca276
                
                int16_t var_100
                int32_t rax_75
                int32_t var_fc
                
                if (var_100 s< 0)
                    rax_75 = var_fc
                else
                    rax_75 = sx.d(var_100) s>> 5
                struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result_6
                
                if (rax_75 s<= 0)
                    result_6 = sub_142ac7c20(r15, rcx_90)
                else
                    result_6 = sub_142a64de0(&var_108)
                
                result_4 = result_6
                uint32_t* rax_76 = arg6
                
                if (rax_76 != 0)
                    *rax_76 = rbx_8
                
                r13[2] = r14
                sub_142a47ff0(&var_108)
            label_142ac9901:
                sub_142a47ff0(&var_148)
                sub_142aa8450(&var_1b0)
                result = result_4
            else
                r13[2] = r14
                rdx_6 = var_198
            label_142ac9758:
                result_5 = sub_142ac7c20(r15, rdx_6)
            label_142ac975d:
                result_3 = result_5
            label_142ac9764:
                sub_142a47ff0(&var_148)
                sub_142aa8450(&var_1b0)
                result = result_3
        case 6
            var_1a8_1 = rsi
            int32_t var_1a4_2 = 0xffffffff
            rax_10 = sub_142acb6d0(r15, rbx, &var_1b0, 1, nullptr)
            
            if (var_1a4_2 == 0xffffffff)
                goto label_142ac974f
            
            var_19c |= 0x20
            goto label_142ac9c48
        case 7, 9, 0xb, 0xd, 0xf
            var_1a8_1 = rsi
            int32_t var_1a4_3 = 0xffffffff
            rax_10 = sub_142acb4f0(r15, rbx, &var_1b0, 0, nullptr)
            
            if (var_1a4_3 != 0xffffffff)
                goto label_142ac9c48
            
            goto label_142ac974f
        case 8, 0xa, 0xc, 0xe, 0x10
            var_1a8_1 = rsi
            int32_t var_1a4_4 = 0xffffffff
            var_1b8 = 0
            rax_10 = sub_142acb4f0(r15, rbx, &var_1b0, 0, &var_1b8)
            
            if (var_1a4_4 != 0xffffffff || var_1b8 == 0)
                goto label_142ac9c48
            
            goto label_142ac974f
        case 0x11
            var_1a8_2 = rsi
            var_1a4_5 = 0xffffffff
            sub_142acc030(r15, rbx, &var_1b0, &var_148)
        label_142ac9bd0:
            
            if (var_1a4_5 != 0xffffffff)
                goto label_142ac9c48
            
            r13[2] = var_1a8_2
            result_5 = sub_142a64de0(&var_148)
            goto label_142ac975d
        case 0x12
            var_1a8_2 = rsi
            var_1a4_5 = 0xffffffff
            sub_142acbeb0(r15, rbx, &var_1b0, &var_148)
            goto label_142ac9bd0
        case 0x13
            var_1a8_2 = rsi
            var_1a4_5 = 0xffffffff
            sub_142acabf0(r15, rbx, &var_1b0, &var_148)
            goto label_142ac9bd0

__security_check_cookie(rax_1 ^ &var_1f8)
return result
