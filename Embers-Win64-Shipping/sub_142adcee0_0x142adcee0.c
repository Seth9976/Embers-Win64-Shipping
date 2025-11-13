// 函数: sub_142adcee0
// 地址: 0x142adcee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f0 = -2
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_270 = arg2
struct icu_64::UObject::icu_64::Formattable::VTable* var_168
sub_142aa7770(&var_168)
uint64_t rsi = 0
int32_t var_278 = 0
struct icu_64::UObject::icu_64::ParsePosition::VTable* var_250 =
    &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
int32_t var_248 = 0
int32_t var_244 = 0xffffffff
int64_t rdx = sx.q(sub_142b59b70(arg4))
int32_t var_234 = rdx.d
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1e8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_1e0 = 2
char var_274 = 0
int64_t* var_200
int64_t* rax_9

if (rdx.d != 0x26)
    int64_t rcx_3 = arg1[0x64]
    void* rax_8
    
    if (rcx_3 != 0)
        rax_8 = *(rcx_3 + (rdx << 3))
    
    if (rcx_3 == 0 || rax_8 == 0)
        rax_9 = arg1[0x2a]
    else
        rax_9 = *(rax_8 + 0x18)
    
    var_200 = rax_9

int32_t rbx_3

if (rdx.d == 0x26 || rax_9 == 0)
    rbx_3 = neg.d(*arg3)
else
    int64_t rax_10 = rdx << 2
    int32_t rax_11 = *(rax_10 + 0x1436597d0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
    sub_142a47e10(&var_1a8, "hebr", 4)
    int32_t var_23c = 1
    
    if (arg12 != 0)
        (*(*arg12 + 0x70))(arg12, &var_200, 1)
    
    int64_t* rbx_1 = arg10
    char* rax_14 = (*(*rbx_1 + 0xb0))(rbx_1)
    char var_260_1
    
    for (int64_t i = 0; i != 8; )
        char rcx_7 = rax_14[i]
        i += 1
        
        if (rcx_7 != *(i + 0x14363f54f))
            char* rax_16 = (*(*rbx_1 + 0xb0))(rbx_1, i)
            
            for (int64_t j = 0; j != 6; )
                char rcx_9 = rax_16[j]
                j += 1
                
                if (rcx_9 != data_14363f590[7][j])
                    var_260_1 = 0
                    goto label_142add0b3
            
            break
    
    var_260_1 = 1
label_142add0b3:
    
    while (true)
        int32_t rax_17 = sub_142a4a1f0(var_270)
        int32_t* r8 = arg3
        
        if (*r8 s>= rax_17)
        label_142ade9c9:
            rbx_3 = neg.d(*r8)
            break
        
        int32_t rax_18 = sub_142a486d0(var_270, *r8)
        char rax_19 = sub_142a54330(rax_18)
        char rax_20
        
        if (rax_19 == 0)
            rax_20 = sub_142b13730(rax_18)
        
        if (rax_19 != 0 || rax_20 != 0)
            int32_t rcx_14
            rcx_14.b = rax_18 u> 0xffff
            *arg3 += rcx_14 + 1
            continue
        
        r8 = arg3
        int32_t rcx_16 = *r8
        int32_t var_25c = rcx_16
        int32_t var_248_1 = rcx_16
        int32_t r9_1 = var_234
        int32_t rdx_3
        
        if (r9_1 - 4 u> 1 && r9_1 - 0xf u> 1)
            switch (r9_1)
                case 2
                    rdx_3 = arg5
                    
                    if (rdx_3 s<= r9_1)
                        goto label_142add204
                    
                    goto label_142add408
                case 0x13
                    rdx_3 = arg5
                    
                    if (rdx_3 s<= 2)
                        goto label_142add204
                    
                    goto label_142add408
                case 0x19
                    rdx_3 = arg5
                    
                    if (rdx_3 s<= 2)
                        goto label_142add204
                    
                    goto label_142add408
                case 0x1a
                    rdx_3 = arg5
                    
                    if (rdx_3 s<= 2)
                        goto label_142add204
                    
                    goto label_142add408
                case 0x1b
                    rdx_3 = arg5
                    
                    if (rdx_3 s<= 2)
                        goto label_142add204
                    
                    goto label_142add408
                case 0x1c
                    rdx_3 = arg5
                    
                    if (rdx_3 s<= 2)
                        goto label_142add204
                    
                    goto label_142add408
            
            if (r9_1 u<= 0x1e && test_bit(0x40040002, r9_1))
                goto label_142add204
            
            if (r9_1 != 0)
                if (r9_1 != 8)
                    goto label_142add3f7
                
                goto label_142add204
            
            if (var_260_1 != r9_1.b)
                goto label_142add204
            
            goto label_142add3f7
        
    label_142add204:
        
        if (arg12 == 0 || (r9_1 != 2 && r9_1 != 0x1a))
            goto label_142add2af
        
        int64_t* rax_25 = (*(*arg12 + 0xb8))(arg12, var_270, &var_250, &var_25c)
        void* var_2c8
        char var_2c0
        int64_t* var_2b8
        
        if (rax_25 == 0 || var_25c != 1 || var_248_1 s<= rcx_16)
        label_142add292:
            var_248_1 = rcx_16
            sub_142a6c030(rbx_1, 0x16, 0)
            r8 = arg3
        label_142add2af:
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdx_8
            
            if (arg6 == 0)
                rdx_8 = var_270
            else
                int16_t rax_30 = var_270[1].w
                int32_t rdx_7
                
                if (rax_30 s< 0)
                    rdx_7 = *(var_270 + 0xc)
                else
                    rdx_7 = sx.d(rax_30) s>> 5
                
                int32_t r11_2 = *r8 + arg5
                
                if (r11_2 s> rdx_7)
                    goto label_142ade9c9
                
                (*var_270)->__offset(0x10).q(var_270, 0, zx.q(r11_2), &var_1e8)
                rdx_8 = &var_1e8
            
            var_2b8 = var_200
            var_2c0 = arg7
            var_2c8 = &var_250
            sub_142adb120(arg1, rdx_8, &var_168, 0xffffffff, var_2c8, var_2c0, var_2b8)
        else
            if (sub_142aa7fe0(rax_25) == 0)
                goto label_142add292
            
            sub_142aa8170(&var_168, rax_25[1].d)
            sub_142a6c030(rbx_1, 0x16, 1)
            
            if (rax_25[-1] == 0)
                j_sub_140a74f90(&rax_25[-1])
            else
                (**rax_25)(rax_25, 3)
        
        var_25c = var_248_1
        
        if (var_248_1 s<= rcx_16)
            goto label_142add3e9
        
        int32_t var_160
        rsi = zx.q(var_160)
        var_274 = 1
        
        if (rsi.d s>= 0)
            var_2c8.b = 0
            var_25c = sub_142ad84a0(arg1, var_270, var_248_1, arg11 + 1, var_2c8.b)
        else
            var_2c8.b = 1
            int32_t rax_34 = sub_142ad84a0(arg1, var_270, var_248_1, arg11 + 1, var_2c8.b)
            var_25c = rax_34
            
            if (rax_34 != var_248_1)
                rsi = zx.q(neg.d(rsi.d))
        
        if ((*(*arg1 + 0xd8))(arg1, 0, &var_278) != 0)
        label_142add3e6:
            var_248_1 = var_25c
        label_142add3e9:
            r9_1 = var_234
            r8 = arg3
        label_142add3f7:
            rdx_3 = arg5
        label_142add408:
            
            if (r9_1 - 1 u<= 0x11)
                switch (r9_1)
                    case 1, 8, 0x12
                        if (var_274 == 0)
                            goto label_142ade9c9
                    case 2, 3, 6, 7, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0x11
                        goto label_142add439
                    case 4, 5, 0xf, 0x10
                        if (rsi.d u> 0x18 || var_274 == 0)
                            goto label_142ade9c9
            
        label_142add439:
            
            if (r9_1 u> 0x25)
                goto label_142ade7c6
            
            int64_t* var_2b0
            int64_t* rax_238
            int32_t rdx_37
            uint64_t rdx_60
            int32_t* rsi_9
            int32_t rsi_14
            int32_t r8_18
            void* r9_14
            bool cond:7_1
            
            switch (r9_1)
                case 0
                    if (var_260_1 != 0)
                        if (var_274 != 0)
                            sub_142a6c030(rbx_1, 0, rsi.d)
                            rbx_3 = var_248_1
                            break
                        
                        goto label_142ade9c9
                    
                    int64_t rax_53
                    
                    if (rdx_3 != 5)
                        void* rcx_37 = arg1[0x60]
                        
                        if (rdx_3 != 4)
                            var_2c0.d = *(rcx_37 + 0x10)
                            rax_53 = *(rcx_37 + 8)
                        else
                            var_2c0.d = *(rcx_37 + 0x20)
                            rax_53 = *(rcx_37 + 0x18)
                    else
                        void* rdx_12 = arg1[0x60]
                        var_2c0.d = *(rdx_12 + 0x30)
                        rax_53 = *(rdx_12 + 0x28)
                    
                    int32_t rax_56 =
                        sub_142ada150(arg1, var_270, *r8, 0, rax_53, var_2c0, nullptr, rbx_1)
                    rbx_3 = rax_56 - 1
                    
                    if (rax_56 != neg.d(*arg3))
                        rbx_3 = rax_56
                    
                    break
                case 1
                    if (sub_142a98a20(&arg1[0x34], &var_1a8) != 0 || rsi.d s>= 0x3e8)
                        if (sub_142a4a4f0(var_270, *arg3, 2) != var_248_1 || var_260_1 != 0)
                            rbx_1 = arg10
                        else
                            int32_t* rbx_5 = arg3
                            
                            if (sub_142a54580(sub_142a486d0(var_270, *rbx_5)) == 0)
                                rbx_1 = arg10
                            else if (sub_142a54580(sub_142a486d0(var_270, 
                                    sub_142a4a4f0(var_270, *rbx_5, 1))) == 0)
                                rbx_1 = arg10
                            else
                                rbx_1 = arg10
                                
                                if (arg5 s< 3 && arg1[0x6a].b != 0)
                                    int32_t r8_9 = *(arg1 + 0x31c) s% 0x64
                                    int32_t rcx_49
                                    rcx_49.b = rsi.d == r8_9
                                    *arg8 = rcx_49.b
                                    int32_t rcx_50 = 0
                                    
                                    if (rsi.d s< r8_9)
                                        rcx_50 = 0x64
                                    
                                    int32_t temp24_1
                                    int32_t temp25_1
                                    temp24_1:temp25_1 = muls.dp.d(0x51eb851f, *(arg1 + 0x31c))
                                    int32_t rdx_23 = temp24_1 s>> 5
                                    rsi = zx.q(rsi.d + (rdx_23 + (rdx_23 u>> 0x1f)) * 0x64 + rcx_50)
                    else
                        rsi = zx.q(rsi.d + 0x1388)
                    
                    sub_142a6c030(rbx_1, 1, rsi.d)
                    
                    if (*arg9 s>= 0)
                        char rax_71 = sub_142ad38d0(zx.q(rsi.d))
                        int32_t r8_11
                        
                        if (rax_71 == 0)
                            r8_11 = *arg9
                        
                        if (rax_71 != 0 || r8_11 s< 6)
                            r8_11 = *arg9 - 1
                        
                        sub_142a6c030(rbx_1, 2, r8_11)
                        *arg9 = 0xffffffff
                    
                    rbx_3 = var_248_1
                    break
                    break
                case 2, 0x1a
                    if (var_274 != 0)
                        char* rax_93 = (*(*rbx_1 + 0xb0))(rbx_1)
                        
                        for (int64_t i_1 = 0; i_1 != 7; )
                            char rcx_70 = rax_93[i_1]
                            i_1 += 1
                            
                            if (rcx_70 != data_14363f540[7][i_1])
                                goto label_142add886
                        
                        if (sub_142a6b000(rbx_1, 1) == 0)
                            *arg9 = rsi.d
                            rbx_3 = var_248_1
                            break
                            break
                        
                        var_23c = 0
                        
                        if (sub_142ad38d0(zx.q(sub_142a695b0(rbx_1, 1, &var_23c))) != 0
                            || rsi.d s< 6)
                        label_142add886:
                            r8_18 = (rsi - 1).d
                        else
                            r8_18 = rsi.d
                        
                        rdx_37 = 2
                        goto label_142add892
                    
                    int64_t* var_228_1 = nullptr
                    int64_t* var_230_1 = nullptr
                    void* rdx_38 = arg1[0x60]
                    int64_t* rcx_75 = *(rdx_38 + 0x1b8)
                    
                    if (rcx_75 == 0 || *(rdx_38 + 0x1c0) s< 7)
                        goto label_142add8f5
                    
                    if (var_234 != 2)
                        var_228_1 = &rcx_75[0x18]
                        var_230_1 = &rcx_75[0x20]
                    label_142add8f5:
                        rbx_3 = 0
                        
                        if (var_234 == 2)
                            goto label_142add90f
                        
                        if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 4)
                            void* rcx_83 = arg1[0x60]
                            var_2b0 = arg10
                            var_2b8 = var_228_1
                            var_2c0.d = *(rcx_83 + 0x70)
                            var_2c8 = *(rcx_83 + 0x68)
                            int32_t rax_119 = sub_142ada150(arg1, var_270, *arg3, 2, var_2c8, 
                                var_2c0, var_2b8, var_2b0)
                            rbx_3 = rax_119
                            
                            if (rax_119 s> 0)
                                break
                        
                        if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 3)
                            void* rcx_86 = arg1[0x60]
                            var_2b0 = arg10
                            var_2b8 = var_230_1
                            var_2c0.d = *(rcx_86 + 0x80)
                            var_2c8 = *(rcx_86 + 0x78)
                            rbx_3 = sub_142ada150(arg1, var_270, *arg3, 2, var_2c8, var_2c0, 
                                var_2b8, var_2b0)
                    else
                        var_228_1 = rcx_75
                        var_230_1 = &rcx_75[8]
                        rbx_3 = 0
                    label_142add90f:
                        
                        if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 4)
                            void* rcx_78 = arg1[0x60]
                            var_2b0 = arg10
                            var_2b8 = var_228_1
                            var_2c0.d = *(rcx_78 + 0x40)
                            var_2c8 = *(rcx_78 + 0x38)
                            int32_t rax_105 = sub_142ada150(arg1, var_270, *arg3, 2, var_2c8, 
                                var_2c0, var_2b8, var_2b0)
                            rbx_3 = rax_105
                            
                            if (rax_105 s> 0)
                                break
                        
                        if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 3)
                            void* rcx_81 = arg1[0x60]
                            var_2b0 = arg10
                            var_2b8 = var_230_1
                            var_2c0.d = *(rcx_81 + 0x50)
                            var_2c8 = *(rcx_81 + 0x48)
                            rbx_3 = sub_142ada150(arg1, var_270, *arg3, 2, var_2c8, var_2c0, 
                                var_2b8, var_2b0)
                    
                    cond:7_1 = rbx_3 s> 0
                    goto label_142adda96
                case 3, 6, 7, 0xa, 0xb, 0xc, 0xd, 0x14, 0x15, 0x16, 0x22
                    goto label_142ade7c6
                case 4
                    if (rsi.d == (*(*rbx_1 + 0x70))(rbx_1, 0xb) + 1)
                        rsi = 0
                    
                    goto label_142addae6
                case 5
                label_142addae6:
                    sub_142a6c030(rbx_1, 0xb, rsi.d)
                    rbx_3 = var_248_1
                    break
                    break
                case 8
                    int32_t rax_132 = sub_142ad8ea0(arg1, var_270, *r8, var_25c)
                    
                    if (rax_132 s>= 3)
                        if (rax_132 s> 3)
                            uint64_t i_6 = zx.q(rax_132 - 3)
                            uint64_t rax_133 = 1
                            uint64_t i_2
                            
                            do
                                rax_133 = zx.q((rax_133 * 5).d * 2)
                                i_2 = i_6
                                i_6 -= 1
                            while (i_2 != 1)
                            var_23c = rax_133.d
                        
                        rsi = zx.q(divs.dp.d(sx.q(rsi.d), var_23c))
                    else if (rax_132 s< 3)
                        uint64_t i_5 = zx.q(3 - rax_132)
                        uint64_t i_3
                        
                        do
                            rsi = zx.q((rsi * 5).d * 2)
                            i_3 = i_5
                            i_5 -= 1
                        while (i_3 != 1)
                    
                    sub_142a6c030(rbx_1, 0xe, rsi.d)
                    rbx_3 = var_248_1
                    break
                    break
                case 9
                label_142addb8d:
                    rbx_3 = 0
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278, 0xa, var_2c8, var_2c0, var_2b8) != 0
                            || arg5 == 4)
                        void* rcx_96 = arg1[0x60]
                        var_2b0 = arg10
                        var_2b8 = nullptr
                        var_2c0.d = *(rcx_96 + 0xa0)
                        var_2c8 = *(rcx_96 + 0x98)
                        int32_t rax_144 = sub_142ada150(arg1, var_270, *arg3, 7, var_2c8, var_2c0, 
                            var_2b8, var_2b0)
                        rbx_3 = rax_144
                        
                        if (rax_144 s> 0)
                            break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 3)
                        void* rcx_99 = arg1[0x60]
                        var_2b0 = arg10
                        var_2b8 = nullptr
                        var_2c0.d = *(rcx_99 + 0xb0)
                        var_2c8 = *(rcx_99 + 0xa8)
                        int32_t rax_151 = sub_142ada150(arg1, var_270, *arg3, 7, var_2c8, var_2c0, 
                            var_2b8, var_2b0)
                        rbx_3 = rax_151
                        
                        if (rax_151 s> 0)
                            break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 6)
                        void* rcx_102 = arg1[0x60]
                        var_2b0 = arg10
                        var_2b8 = nullptr
                        var_2c0.d = *(rcx_102 + 0xc0)
                        var_2c8 = *(rcx_102 + 0xb8)
                        int32_t rax_158 = sub_142ada150(arg1, var_270, *arg3, 7, var_2c8, var_2c0, 
                            var_2b8, var_2b0)
                        rbx_3 = rax_158
                        
                        if (rax_158 s> 0)
                            break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 5)
                        void* rcx_105 = arg1[0x60]
                        var_2b0 = arg10
                        var_2b8 = nullptr
                        var_2c0.d = *(rcx_105 + 0xd0)
                        var_2c8 = *(rcx_105 + 0xc8)
                        int32_t rax_165 = sub_142ada150(arg1, var_270, *arg3, 7, var_2c8, var_2c0, 
                            var_2b8, var_2b0)
                        rbx_3 = rax_165
                        
                        if (rax_165 s> 0)
                            break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 1, &var_278) == 0)
                        break
                    
                    if (var_234 == 9)
                        break
                    
                    goto label_142ade26b
                case 0xe
                    char rax_190 =
                        (*(*arg1 + 0xd8))(arg1, 3, &var_278, 0xa, var_2c8, var_2c0, var_2b8)
                    var_23c = 9
                    
                    if (rax_190 != 0)
                        goto label_142addf19
                    
                    int32_t rbx_8 = arg5
                    
                    if (rbx_8 s>= 5)
                        rsi_9 = arg3
                    else
                        rbx_1 = arg10
                    label_142addf19:
                        void* rcx_118 = arg1[0x60]
                        var_2c0.d = *(rcx_118 + 0x120)
                        rsi_9 = arg3
                        int32_t rax_193 = sub_142ada150(arg1, var_270, *rsi_9, 9, 
                            *(rcx_118 + 0x118), var_2c0, nullptr, rbx_1)
                        rbx_3 = rax_193
                        
                        if (rax_193 s> 0)
                            break
                        
                        rbx_8 = arg5
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || rbx_8 s>= 5)
                        void* rcx_121 = arg1[0x60]
                        var_2c0.d = *(rcx_121 + 0x130)
                        int32_t rax_199 = sub_142ada150(arg1, var_270, *rsi_9, var_23c, 
                            *(rcx_121 + 0x128), var_2c0, nullptr, arg10)
                        rbx_3 = rax_199
                        
                        if (rax_199 s> 0)
                            break
                    
                    goto label_142addfdd
                case 0xf
                    if (rsi.d == (*(*rbx_1 + 0x90))(rbx_1, 0xa) + 1)
                        rsi = 0
                    
                    goto label_142ade005
                case 0x10
                label_142ade005:
                    r8_18 = rsi.d
                    rdx_37 = 0xa
                label_142add892:
                    sub_142a6c030(rbx_1, rdx_37, r8_18)
                    rbx_3 = var_248_1
                    break
                    break
                case 0x11
                    int32_t rsi_13
                    rsi_13.b = rdx_3 s< 4
                    rax_238 = sub_142aded70(arg1, &var_278)
                    
                    if (var_278 s<= 0)
                        rdx_60 = zx.q(rsi_13 + 3)
                    label_142ade3d7:
                        int64_t var_2c8_5 = arg13
                        int64_t rax_239 = sub_142ac94f0(rax_238, rdx_60)
                        
                        if (rax_239 != 0)
                            sub_142a67ac0(rbx_1, rax_239)
                            rbx_3 = var_248_1
                            break
                            break
                case 0x12
                    if (sub_142a98a20(&arg1[0x34], &var_1a8) != 0 || rsi.d s>= 0x3e8)
                        if (sub_142a4a4f0(var_270, *arg3, 2) != var_248_1)
                            rbx_1 = arg10
                        else
                            int32_t* rbx_7 = arg3
                            
                            if (sub_142a54580(sub_142a486d0(var_270, *rbx_7)) == 0)
                                rbx_1 = arg10
                            else if (sub_142a54580(sub_142a486d0(var_270, 
                                    sub_142a4a4f0(var_270, *rbx_7, 1))) == 0)
                                rbx_1 = arg10
                            else
                                rbx_1 = arg10
                                
                                if (arg1[0x6a].b != 0)
                                    int32_t rcx_62 = *(arg1 + 0x31c) s% 0x64
                                    int32_t rax_82
                                    rax_82.b = rsi.d == rcx_62
                                    *arg8 = rax_82.b
                                    int32_t rcx_63 = 0
                                    
                                    if (rsi.d s< rcx_62)
                                        rcx_63 = 0x64
                                    
                                    int32_t temp20_1
                                    int32_t temp21_1
                                    temp20_1:temp21_1 = muls.dp.d(0x51eb851f, *(arg1 + 0x31c))
                                    int32_t rdx_34 = temp20_1 s>> 5
                                    rsi = zx.q(rsi.d + (rdx_34 + (rdx_34 u>> 0x1f)) * 0x64 + rcx_63)
                    else
                        rsi = zx.q(rsi.d + 0x1388)
                    
                    sub_142a6c030(rbx_1, 0x11, rsi.d)
                    rbx_3 = var_248_1
                    break
                    break
                case 0x13
                    if (var_274 == 0)
                        goto label_142addb8d
                    
                label_142addb80:
                    sub_142a6c030(rbx_1, 0x12, rsi.d)
                    rbx_3 = var_248_1
                    break
                    break
                case 0x17
                    if (rdx_3 s< 4)
                    label_142ade2a4:
                        rsi_14 = 0xc
                        goto label_142ade3b8
                    
                    rsi_14 = 5
                    
                    if (rdx_3 == 5)
                        rsi_14 = 0xf
                    
                    goto label_142ade3b8
                case 0x18
                    int32_t rsi_15
                    rsi_15.b = rdx_3 s< 4
                    rax_238 = sub_142aded70(arg1, &var_278)
                    
                    if (var_278 s<= 0)
                        rdx_60 = zx.q(rsi_15 + 1)
                        goto label_142ade3d7
                case 0x19
                    if (var_274 != 0)
                        goto label_142addb80
                    
                    rbx_3 = 0
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278, 0xa, var_2c8, var_2c0, var_2b8) != 0
                            || arg5 == 4)
                        void* rcx_109 = arg1[0x60]
                        var_2b0 = arg10
                        var_2b8 = nullptr
                        var_2c0.d = *(rcx_109 + 0xe0)
                        var_2c8 = *(rcx_109 + 0xd8)
                        int32_t rax_174 = sub_142ada150(arg1, var_270, *arg3, 7, var_2c8, var_2c0, 
                            var_2b8, var_2b0)
                        rbx_3 = rax_174
                        
                        if (rax_174 s> 0)
                            break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 3)
                        void* rcx_112 = arg1[0x60]
                        var_2b0 = arg10
                        var_2b8 = nullptr
                        var_2c0.d = *(rcx_112 + 0xf0)
                        var_2c8 = *(rcx_112 + 0xe8)
                        int32_t rax_181 = sub_142ada150(arg1, var_270, *arg3, 7, var_2c8, var_2c0, 
                            var_2b8, var_2b0)
                        rbx_3 = rax_181
                        
                        if (rax_181 s> 0)
                            break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) == 0 && arg5 != 6)
                    label_142addaac:
                        
                        if ((*(*arg1 + 0xd8))(arg1, 1, &var_278) != 0)
                            goto label_142ade26b
                        
                        break
                    
                    void* rcx_115 = arg1[0x60]
                    var_2b0 = arg10
                    var_2b8 = nullptr
                    var_2c0.d = *(rcx_115 + 0x100)
                    var_2c8 = *(rcx_115 + 0xf8)
                    int32_t rax_188 =
                        sub_142ada150(arg1, var_270, *arg3, 7, var_2c8, var_2c0, var_2b8, var_2b0)
                    rbx_3 = rax_188
                    cond:7_1 = rax_188 s> 0
                label_142adda96:
                    
                    if (cond:7_1)
                        break
                    
                    goto label_142addaac
                case 0x1b
                    if (var_274 != 0)
                    label_142ade017:
                        r8_18 = (rsi - 1).d * 3
                        rdx_37 = 2
                        goto label_142add892
                    
                    rbx_3 = 0
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278, 0xa, var_2c8, var_2c0, var_2b8) != 0
                            || arg5 == 4)
                        void* rcx_125 = arg1[0x60]
                        var_2b8 = arg10
                        var_2c0.d = *(rcx_125 + 0x180)
                        var_2c8 = *(rcx_125 + 0x178)
                        int32_t rax_209 =
                            sub_142ada050(arg1, var_270, *arg3, 2, var_2c8, var_2c0, var_2b8)
                        rbx_3 = rax_209
                        
                        if (rax_209 s> 0)
                            break
                    
                    int32_t* rsi_11
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 3)
                        void* rcx_128 = arg1[0x60]
                        var_2b8 = arg10
                        var_2c0.d = *(rcx_128 + 0x190)
                        var_2c8 = *(rcx_128 + 0x188)
                        rsi_11 = arg3
                        int32_t rax_215 =
                            sub_142ada050(arg1, var_270, *rsi_11, 2, var_2c8, var_2c0, var_2b8)
                        rbx_3 = rax_215
                        
                        if (rax_215 s> 0)
                            break
                    else
                        rsi_11 = arg3
                    
                    if ((*(*arg1 + 0xd8))(arg1, 1, &var_278) == 0)
                        break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) == 0)
                        rbx_3 = neg.d(*rsi_11)
                        break
                        break
                    
                label_142ade26b:
                    var_25c = var_248_1
                label_142ade7c6:
                    
                    if (arg6 == 0)
                        rsi_9 = arg3
                    else
                        int64_t* r10_5 = var_270
                        int16_t rax_280 = r10_5[1].w
                        int32_t rax_282
                        
                        if (rax_280 s< 0)
                            rax_282 = *(r10_5 + 0xc)
                        else
                            rax_282 = sx.d(rax_280) s>> 5
                        
                        rsi_9 = arg3
                        int32_t rbx_2 = *rsi_9
                        int32_t r8_78 = arg5 + rbx_2
                        
                        if (r8_78 s> rax_282)
                            rbx_3 = neg.d(rbx_2)
                            break
                            break
                        
                        (*(*r10_5 + 0x10))(r10_5, 0, r8_78, &var_1e8, var_2c8, var_2c0, var_2b8, 
                            var_2b0)
                        var_270 = &var_1e8
                    
                    sub_142adb120(arg1, var_270, &var_168, 0xffffffff, &var_250, arg7, var_200)
                    
                    if (var_248_1 == var_25c)
                    label_142addfdd:
                        rbx_3 = neg.d(*rsi_9)
                        break
                        break
                    
                    var_25c = var_160
                    char rax_288 = (*(*arg1 + 0xd8))(arg1, 1, &var_278)
                    rbx_1 = arg10
                    int32_t rdi_2
                    
                    if (rax_288 == 0)
                        rdi_2 = *(rax_10 + 0x143659a00)
                        var_23c = rdi_2
                    
                    int32_t rdi_3
                    
                    if (rax_288 == 0 && rdi_2 s>= 0)
                        int32_t rax_292 = (*(*rbx_1 + 0x70))(rbx_1, zx.q(rax_11)) + rdi_2
                        rdi_3 = var_25c
                        
                        if (rdi_3 s> rax_292)
                            goto label_142addfdd
                        
                        if (rdi_3 s>= (*(*rbx_1 + 0x60))(rbx_1, zx.q(rax_11)) + var_23c)
                            goto label_142ade8de
                        
                        goto label_142addfdd
                    
                    rdi_3 = var_25c
                label_142ade8de:
                    
                    if (var_234 - 2 u> 0x20)
                    label_142ade9be:
                        rdx_37 = rax_11
                        r8_18 = rdi_3
                        goto label_142add892
                    
                    switch (var_234)
                        case 2
                            char* rax_301 = (*(*rbx_1 + 0xb0))(rbx_1)
                            
                            for (int64_t i_4 = 0; i_4 != 7; )
                                char rcx_178 = rax_301[i_4]
                                i_4 += 1
                                
                                if (rcx_178 != data_14363f540[7][i_4])
                                    r8_18 = var_25c
                                    goto label_142ade986
                            
                            if (sub_142a6b000(rbx_1, 1) == 0)
                                *arg9 = var_25c
                                rbx_3 = var_248_1
                                break
                                break
                            
                            var_23c = 0
                            char rax_304 = sub_142ad38d0(zx.q(sub_142a695b0(rbx_1, 1, &var_23c)))
                            r8_18 = var_25c
                            
                            if (rax_304 != 0 || r8_18 s< 6)
                            label_142ade986:
                                r8_18 -= 1
                            
                            rdx_37 = 2
                            goto label_142add892
                        case 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 
                                0x14, 0x15, 0x16, 0x17, 0x18, 0x1d, 0x1e, 0x1f, 0x20, 0x21
                            goto label_142ade9be
                        case 0x13, 0x19
                            rdx_37 = 0x12
                            r8_18 = rdi_3
                            goto label_142add892
                        case 0x1a
                            r8_18 = rdi_3 - 1
                            rdx_37 = 2
                            goto label_142add892
                        case 0x1b, 0x1c
                            r8_18 = (rdi_3 - 1) * 3
                            rdx_37 = 2
                            goto label_142add892
                        case 0x22
                            (*(*rbx_1 + 0x180))(rbx_1, zx.q(rdi_3))
                            rbx_3 = var_248_1
                            break
                            break
                case 0x1c
                    if (var_274 != 0)
                        goto label_142ade017
                    
                    rbx_3 = 0
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278, 0xa, var_2c8, var_2c0, var_2b8) != 0
                            || arg5 == 4)
                        void* rcx_133 = arg1[0x60]
                        var_2b8 = arg10
                        var_2c0.d = *(rcx_133 + 0x1a0)
                        var_2c8 = *(rcx_133 + 0x198)
                        int32_t rax_226 =
                            sub_142ada050(arg1, var_270, *arg3, 2, var_2c8, var_2c0, var_2b8)
                        rbx_3 = rax_226
                        
                        if (rax_226 s> 0)
                            break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || arg5 == 3)
                        void* rcx_136 = arg1[0x60]
                        var_2b8 = arg10
                        var_2c0.d = *(rcx_136 + 0x1b0)
                        var_2c8 = *(rcx_136 + 0x1a8)
                        rsi_9 = arg3
                        int32_t rax_232 =
                            sub_142ada050(arg1, var_270, *rsi_9, 2, var_2c8, var_2c0, var_2b8)
                        rbx_3 = rax_232
                        
                        if (rax_232 s> 0)
                            break
                    else
                        rsi_9 = arg3
                    
                    if ((*(*arg1 + 0xd8))(arg1, 1, &var_278) == 0)
                        break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) == 0)
                        goto label_142addfdd
                    
                    goto label_142ade26b
                case 0x1d
                    if (rdx_3 == 1)
                        rsi_14 = 0x12
                    else if (rdx_3 == 2)
                        rsi_14 = 0x11
                    else if (rdx_3 == 3)
                        rsi_14 = 0x13
                    else
                        rsi_14 = 0
                    
                    goto label_142ade3b8
                case 0x1e
                    void* rax_86 = arg1[0x60]
                    int64_t rcx_65 = *(rax_86 + 0x1c8)
                    
                    if (rcx_65 != 0)
                        var_2c0.d = *(rax_86 + 0x1d0)
                        int32_t rax_88 =
                            sub_142ada150(arg1, var_270, *r8, 1, rcx_65, var_2c0, nullptr, rbx_1)
                        rbx_3 = rax_88
                        
                        if (rax_88 s> 0)
                            break
                        
                        rbx_1 = arg10
                    
                    if (var_274 != 0 && ((*(*arg1 + 0xd8))(arg1, 1, &var_278) != 0
                            || rsi.d s> *(arg1[0x60] + 0x1d0)))
                        sub_142a6c030(rbx_1, 1, rsi.d)
                        rbx_3 = var_248_1
                        break
                case 0x1f
                    int32_t rsi_16
                    rsi_16.b = rdx_3 s< 4
                    rax_238 = sub_142aded70(arg1, &var_278)
                    
                    if (var_278 s<= 0)
                        rdx_60 = zx.q(rsi_16 + 5)
                        goto label_142ade3d7
                case 0x20
                    if (rdx_3 == 1)
                        rsi_14 = 7
                    else if (rdx_3 == 2)
                        rsi_14 = 9
                    else if (rdx_3 == 3)
                        rsi_14 = 0xd
                    else if (rdx_3 == 4)
                        rsi_14 = 0xb
                    else
                        rsi_14 = 0xf
                    
                    goto label_142ade3b8
                case 0x21
                    if (rdx_3 != 1)
                        if (rdx_3 == 2)
                            rsi_14 = 0xa
                            goto label_142ade3b8
                        
                        if (rdx_3 == 3)
                            rsi_14 = 0xe
                            goto label_142ade3b8
                        
                        if (rdx_3 == 4)
                            goto label_142ade2a4
                        
                        rsi_14 = 0x10
                        goto label_142ade3b8
                    
                    rsi_14 = 8
                label_142ade3b8:
                    rax_238 = sub_142aded70(arg1, &var_278)
                    
                    if (var_278 s<= 0)
                        rdx_60 = zx.q(rsi_14)
                        goto label_142ade3d7
                case 0x23
                    var_2b8.b = arg7
                    var_2c8.d = rdx_3
                    int32_t rax_253 = sub_142adcee0(arg1, var_270, r8, 0x61, var_2c8, arg6, 
                        var_2b8, arg8, arg9, rbx_1, arg11, arg12, arg13, 0)
                    rbx_3 = rax_253
                    
                    if (rax_253 s> 0)
                        break
                    
                    char rax_255 = (*(*arg1 + 0xd8))(arg1, 3, &var_278)
                    int32_t rbx_9
                    
                    if (rax_255 == 0)
                        rbx_9 = arg5
                    
                    if (rax_255 == 0 && rbx_9 != 3)
                        rsi_9 = arg3
                    else
                        var_2c0.q = arg14
                        var_2c8.d = 2
                        rsi_9 = arg3
                        int32_t rax_257 = sub_142ad98d0(arg1, var_270, *rsi_9, 
                            *(arg1[0x60] + 0x340), var_2c8.d, var_2c0)
                        rbx_3 = rax_257
                        
                        if (rax_257 s> 0)
                            break
                        
                        rbx_9 = arg5
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || rbx_9 == 5)
                        var_2c0.q = arg14
                        var_2c8.d = 2
                        int32_t rax_261 = sub_142ad98d0(arg1, var_270, *rsi_9, 
                            *(arg1[0x60] + 0x360), var_2c8.d, var_2c0)
                        rbx_3 = rax_261
                        
                        if (rax_261 s> 0)
                            break
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) == 0)
                        goto label_142addfdd
                    
                    r9_14 = arg1[0x60]
                    var_2c0.q = arg14
                    var_2c8.d = 2
                label_142ade696:
                    int32_t rax_265 =
                        sub_142ad98d0(arg1, var_270, *rsi_9, *(r9_14 + 0x350), var_2c8.d, var_2c0)
                    rbx_3 = rax_265
                    
                    if (rax_265 s> 0)
                        break
                    
                    rbx_3 = neg.d(*rsi_9)
                    break
                    break
                case 0x24
                    char rax_267 =
                        (*(*arg1 + 0xd8))(arg1, 3, &var_278, 0xa, var_2c8, var_2c0, var_2b8)
                    int32_t rbx_10
                    
                    if (rax_267 == 0)
                        rbx_10 = arg5
                    
                    if (rax_267 == 0 && rbx_10 != 3)
                        rsi_9 = arg3
                    else
                        void* r9_16 = arg1[0x60]
                        var_2c0.q = arg14
                        var_2c8.d = *(r9_16 + 0x348)
                        rsi_9 = arg3
                        int32_t rax_270 = sub_142ad98d0(arg1, var_270, *rsi_9, *(r9_16 + 0x340), 
                            var_2c8.d, var_2c0)
                        rbx_3 = rax_270
                        
                        if (rax_270 s> 0)
                            break
                        
                        rbx_10 = arg5
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) != 0 || rbx_10 == 5)
                        void* r9_18 = arg1[0x60]
                        var_2c0.q = arg14
                        var_2c8.d = *(r9_18 + 0x368)
                        int32_t rax_275 = sub_142ad98d0(arg1, var_270, *rsi_9, *(r9_18 + 0x360), 
                            var_2c8.d, var_2c0)
                        rbx_3 = rax_275
                        
                        if (rax_275 s> 0)
                            break
                        
                        rbx_10 = arg5
                    
                    if ((*(*arg1 + 0xd8))(arg1, 3, &var_278) == 0 && rbx_10 != 4)
                        goto label_142addfdd
                    
                    r9_14 = arg1[0x60]
                    var_2c0.q = arg14
                    var_2c8.d = *(r9_14 + 0x358)
                    goto label_142ade696
                case 0x25
                    int32_t var_240_2 = 1
                    int64_t (* var_2c8_6)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable*
                        * arg1) = sub_142a47ff0
                    void var_f8
                    `eh vector constructor iterator'(&var_f8, 0x40, 3)
                    sub_142b59bc0(arg1[0x60], &var_f8)
                    
                    if (sub_142a6f4f0(&var_f8, &data_14365a154, 1) != 0)
                        var_240_2 = 2
                        void var_b8
                        sub_142adbb40(&var_b8, 0x3a)
                    
                    if ((*(*arg1 + 0x58))(arg1) != 0
                            && sub_142a6f4f0(&var_f8, &data_14365a158, 1) != 0)
                        void* rcx_153 = &var_f8 + (zx.q(var_240_2) << 6)
                        var_240_2 += 1
                        sub_142adbb40(rcx_153, 0x2e)
                    
                    var_2c0.d = var_240_2
                    rbx_3 =
                        sub_142ada150(arg1, var_270, *arg3, 0x17, &var_f8, var_2c0, nullptr, rbx_1)
                    `eh vector vbase constructor iterator'(&var_f8, 0x40, 3)
                    break
                    break
        else
            int32_t rax_39 = *(rax_10 + 0x143659a00)
            
            if (rax_39 s< 0)
                goto label_142add3e6
            
            if (rsi.d s<= (*(*rbx_1 + 0x70))(rbx_1, zx.q(rax_11)) + rax_39
                    && rsi.d s>= (*(*rbx_1 + 0x60))(rbx_1, zx.q(rax_11)) + rax_39)
                goto label_142add3e6
        
        rbx_3 = neg.d(*arg3)
        break
    
    sub_142a47ff0(&var_1a8)

sub_142a47ff0(&var_1e8)
sub_142aa8450(&var_250)
sub_142aa7840(&var_168)
__security_check_cookie(rax_1 ^ &var_2e8)
return zx.q(rbx_3)
