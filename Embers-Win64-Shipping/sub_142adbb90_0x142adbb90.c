// 函数: sub_142adbb90
// 地址: 0x142adbb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1d0 = -2
int128_t zmm6
int128_t var_38 = zmm6
void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t rbx = arg4
int32_t* result = arg9
int32_t* result_1 = result

if (*result s<= 0)
    int32_t result_3 = sub_142b59b70(arg3)
    int16_t rax_4 = *(arg2 + 8)
    int32_t rax_6
    
    if (rax_4 s< 0)
        rax_6 = *(arg2 + 0xc)
    else
        rax_6 = sx.d(rax_4) s>> 5
    
    int32_t var_228_1 = 0
    char* rax_8 = (*(*arg8 + 0xb0))(arg8)
    int64_t rcx_2 = 0
    char rdx
    bool cond:0_1
    
    while (true)
        rdx = rax_8[rcx_2]
        rcx_2 += 1
        char temp0_1 = data_14363f540[7][rcx_2]
        cond:0_1 = rdx == temp0_1
        
        if (rdx != temp0_1)
            break
        
        if (rcx_2 == 7)
            cond:0_1 = rdx == data_14363f540[7][rcx_2]
            break
    
    char* rax_10 = (*(*arg8 + 0xb0))(arg8, rdx)
    char var_208_1
    
    for (int64_t i = 0; i != 8; )
        char rcx_4 = rax_10[i]
        i += 1
        
        if (rcx_4 != *(i + 0x14363f54f))
            char* rax_12 = (*(*arg8 + 0xb0))(arg8, i)
            
            for (int64_t j = 0; j != 6; )
                char rcx_6 = rax_12[j]
                j += 1
                
                if (rcx_6 != data_14363f590[7][j])
                    var_208_1 = 0
                    goto label_142adbcd0
            
            break
    
    var_208_1 = 1
label_142adbcd0:
    result = sx.q(result_3)
    
    if (result.d != 0x26)
        int32_t* result_4 = result
        int32_t* result_2 = result
        int32_t rdx_1 = *((result << 2) + 0x1436597d0)
        int32_t rdi_2 = 0
        
        if (rdx_1 s< 0x17)
            int32_t rax_13
            
            if (result.d == 0x22)
                rax_13 = (*(*arg8 + 0x178))(arg8, result_1)
            else
                rax_13 = sub_142a695b0(arg8, rdx_1, result_1)
            
            result_4 = result_2
            rdi_2 = rax_13
        
        result = result_1
        
        if (*result s<= 0)
            int64_t rcx_8 = *(arg1 + 0x320)
            void* rcx_9
            
            if (rcx_8 != 0)
                rcx_9 = *(rcx_8 + (result_4 << 3))
            
            int64_t* rcx_10
            
            if (rcx_8 == 0 || rcx_9 == 0)
                rcx_10 = *(arg1 + 0x150)
            else
                rcx_10 = *(rcx_9 + 0x18)
            
            if (rcx_10 != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_188
                sub_142a47e10(&var_188, "hebr", 4)
                int64_t result_5 = sx.q(result_3)
                int32_t var_258
                int32_t var_250
                void* rdi_3
                int32_t r9
                
                if (result_5.d u> 0x25)
                label_142adc26d:
                    var_250 = 0xa
                    var_258 = rbx
                label_142adbdd5:
                    r9 = rdi_2
                label_142adbdd8:
                    rdi_3 = arg2
                    sub_142adedf0(arg1, rcx_10, rdi_3, r9, var_258, var_250)
                    goto label_142adccd7
                
                int64_t* var_248
                int64_t* var_240
                int32_t* result_7
                int16_t var_218
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1c8
                int16_t var_1c0
                int32_t var_1bc
                int32_t rax_37
                uint32_t rax_59
                int32_t rdx_17
                int32_t rdx_28
                void* const rdx_36
                int32_t* result_6
                int64_t r8_26
                int32_t r9_11
                
                switch (result_5)
                    case 0
                        if (var_208_1 != 0)
                            var_250 = 9
                            var_258 = 1
                            goto label_142adbdd5
                        
                        void* r8_3 = *(arg1 + 0x300)
                        rdi_3 = arg2
                        
                        if (rbx == 5)
                            sub_142ad7c20(rdi_3, rdi_2, *(r8_3 + 0x28), *(r8_3 + 0x30))
                            rbx = 9
                        else if (rbx != 4)
                            sub_142ad7c20(rdi_3, rdi_2, *(r8_3 + 8), *(r8_3 + 0x10))
                            rbx = 8
                        else
                            sub_142ad7c20(rdi_3, rdi_2, *(r8_3 + 0x18), *(r8_3 + 0x20))
                            rbx = 7
                        
                        goto label_142adccf0
                    case 1, 0x12
                    label_142adbe91:
                        
                        if (sub_142a98a20(arg1 + 0x1a0, &var_188) == 0 && rdi_2 - 0x1389 u<= 0x3e6)
                            rdi_2 -= 0x1388
                        
                        rdi_3 = arg2
                        
                        if (rbx != 2)
                            var_250 = 0xa
                            var_258 = rbx
                            sub_142adedf0(arg1, rcx_10, rdi_3, rdi_2, var_258, var_250)
                        else
                            var_250 = rbx
                            var_258 = rbx
                            sub_142adedf0(arg1, rcx_10, rdi_3, rdi_2, var_258, var_250)
                        
                        goto label_142adccd7
                    case 2, 0x1a
                        if (cond:0_1 != 0)
                            if (sub_142ad38d0(zx.q(sub_142a695b0(arg8, 1, result_1))) != 0
                                    && rdi_2 == 6 && rbx s>= 3)
                                rdi_2 = 0xd
                            
                            if (sub_142ad38d0(zx.q(sub_142a695b0(arg8, 1, result_1))) == 0
                                    && rdi_2 s>= 6 && rbx s< 3)
                                rdi_2 -= 1
                        
                        void* rax_23 = *(arg1 + 0x300)
                        int32_t rax_24
                        
                        if (*(rax_23 + 0x1b8) == 0 || *(rax_23 + 0x1c0) s< 7)
                            rax_24 = 0
                        else
                            rax_24 = sub_142a695b0(arg8, 0x16, result_1)
                        
                        var_218.d = rax_24
                        
                        if (rbx == 5)
                            int64_t rcx_25
                            int64_t r8_13
                            int32_t r9_6
                            
                            if (result_3 != 2)
                                if (rax_24 == 0)
                                    rcx_25 = 0
                                else
                                    rcx_25 = *(*(arg1 + 0x300) + 0x1b8) + 0x140
                                
                                void* r8_14 = *(arg1 + 0x300)
                                r9_6 = *(r8_14 + 0x90)
                                r8_13 = *(r8_14 + 0x88)
                            else
                                if (rax_24 == 0)
                                    rcx_25 = 0
                                else
                                    rcx_25 = *(*(arg1 + 0x300) + 0x1b8) + 0x80
                                
                                void* r8_12 = *(arg1 + 0x300)
                                r9_6 = *(r8_12 + 0x60)
                                r8_13 = *(r8_12 + 0x58)
                            
                            var_250.q = result_1
                            var_258.q = rcx_25
                            rdi_3 = arg2
                            sub_142ad7c60(rdi_3, rdi_2, r8_13, r9_6, var_258, var_250)
                            rbx = 3
                            goto label_142adccf0
                        
                        int64_t rcx_28
                        int64_t rcx_31
                        int64_t r8_16
                        int64_t r8_18
                        int32_t r9_7
                        int32_t r9_8
                        
                        if (rbx == 4)
                            if (result_3 != 2)
                                if (rax_24 == 0)
                                    rcx_31 = 0
                                else
                                    rcx_31 = *(*(arg1 + 0x300) + 0x1b8) + 0xc0
                                
                                void* r8_17 = *(arg1 + 0x300)
                                r9_8 = *(r8_17 + 0x70)
                                r8_18 = *(r8_17 + 0x68)
                                goto label_142adc113
                            
                            if (rax_24 == 0)
                                rcx_28 = 0
                            else
                                rcx_28 = *(*(arg1 + 0x300) + 0x1b8)
                            
                            void* r8_15 = *(arg1 + 0x300)
                            r9_7 = *(r8_15 + 0x40)
                            r8_16 = *(r8_15 + 0x38)
                            goto label_142adc052
                        
                        if (rbx != 3)
                            var_1c8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                            var_1c0 = 2
                            sub_142adedf0(arg1, rcx_10, &var_1c8, rdi_2 + 1, rbx, 0xa)
                            int64_t rcx_37
                            
                            if (var_218.d == 0)
                                rcx_37 = 0
                            else
                                rcx_37 = *(*(arg1 + 0x300) + 0x1b8) + 0x180
                            
                            var_250.q = result_1
                            var_258.q = rcx_37
                            rdi_3 = arg2
                            sub_142ad7c60(rdi_3, 0, &var_1c8, 1, var_258, var_250)
                            sub_142a47ff0(&var_1c8)
                            goto label_142adccd7
                        
                        if (result_3 != 2)
                            if (rax_24 == 0)
                                rcx_31 = 0
                            else
                                rcx_31 = *(*(arg1 + 0x300) + 0x1b8) + 0x100
                            
                            void* r8_20 = *(arg1 + 0x300)
                            r9_8 = *(r8_20 + 0x80)
                            r8_18 = *(r8_20 + 0x78)
                        label_142adc113:
                            var_250.q = result_1
                            var_258.q = rcx_31
                            rdi_3 = arg2
                            sub_142ad7c60(rdi_3, rdi_2, r8_18, r9_8, var_258, var_250)
                            rbx = 2
                            goto label_142adccf0
                        
                        if (rax_24 == 0)
                            rcx_28 = 0
                        else
                            rcx_28 = *(*(arg1 + 0x300) + 0x1b8) + 0x40
                        
                        void* r8_19 = *(arg1 + 0x300)
                        r9_7 = *(r8_19 + 0x50)
                        r8_16 = *(r8_19 + 0x48)
                    label_142adc052:
                        var_250.q = result_1
                        var_258.q = rcx_28
                        rdi_3 = arg2
                        sub_142ad7c60(rdi_3, rdi_2, r8_16, r9_7, var_258, var_250)
                        rbx = 1
                        goto label_142adccf0
                    case 3, 5, 6, 7, 0xa, 0xb, 0xc, 0xd, 0x10, 0x14, 0x15, 0x16, 0x22
                        goto label_142adc26d
                    case 4
                        if (rdi_2 != 0)
                            goto label_142adc26d
                        
                        rax_37 = (*(*arg8 + 0x70))(arg8, zx.q(rdi_2 + 0xb))
                    label_142adc1d9:
                        var_250 = 0xa
                        var_258 = rbx
                        r9 = rax_37 + 1
                        goto label_142adbdd8
                    case 8
                        int32_t rcx_41 = rbx
                        
                        if (rbx s> 3)
                            rcx_41 = 3
                        
                        if (rbx == 1)
                            rdi_2 s/= 0x64
                        else if (rbx == 2)
                            rdi_2 s/= 0xa
                        
                        var_250 = 0xa
                        var_258 = rcx_41
                        rdi_3 = arg2
                        sub_142adedf0(arg1, rcx_10, rdi_3, rdi_2, var_258, var_250)
                        
                        if (rbx s<= 3)
                            goto label_142adccd7
                        
                        var_250 = 0xa
                        var_258 = rbx - 3
                        sub_142adedf0(arg1, rcx_10, rdi_3, 0, var_258, var_250)
                        goto label_142adccd7
                    case 9
                    label_142adc2a0:
                        void* r8_25 = *(arg1 + 0x300)
                        rdx_17 = rdi_2
                        
                        if (rbx != 5)
                            rdi_3 = arg2
                            
                            if (rbx == 4)
                                sub_142ad7c20(rdi_3, rdx_17, *(r8_25 + 0x98), *(r8_25 + 0xa0))
                            else if (rbx != 6)
                                sub_142ad7c20(rdi_3, rdx_17, *(r8_25 + 0xa8), *(r8_25 + 0xb0))
                                rbx = 4
                            else
                                sub_142ad7c20(rdi_3, rdx_17, *(r8_25 + 0xb8), *(r8_25 + 0xc0))
                                rbx = 4
                            
                            goto label_142adccf0
                        
                        r9_11 = *(r8_25 + 0xd0)
                        r8_26 = *(r8_25 + 0xc8)
                    label_142adc2bc:
                        rdi_3 = arg2
                        sub_142ad7c20(rdi_3, rdx_17, r8_26, r9_11)
                        rbx = 6
                    label_142adccf0:
                        int32_t rbx_1
                        
                        if (arg6 != 0 || *(arg1 + 0x358) == 0)
                            rbx_1 = rax_6
                        else
                            int16_t rax_84 = *(rdi_3 + 8)
                            int32_t rax_86
                            
                            if (rax_84 s< 0)
                                rax_86 = *(rdi_3 + 0xc)
                            else
                                rax_86 = sx.d(rax_84) s>> 5
                            
                            if (rax_86 s<= rax_6)
                                rbx_1 = rax_6
                            else if (sub_142a54720(sub_142a486d0(rdi_3, rax_6)) == 0)
                                rbx_1 = rax_6
                            else if (arg5 == 0x102)
                            label_142adcd74:
                                rbx_1 = rax_6
                                Concurrency::details::_SyncOriginator<enum Concurrency::agent_status>::_SyncOriginator<enum Concurrency::agent_status>(
                                    &var_1c8, rdi_3, rbx_1)
                                sub_142b2d520(&var_1c8, *(arg1 + 0x358), arg1 + 0x220, 0x300)
                                int16_t rax_91 = *(rdi_3 + 8)
                                int32_t r8_61
                                
                                if (rax_91 s< 0)
                                    r8_61 = *(rdi_3 + 0xc)
                                else
                                    r8_61 = sx.d(rax_91) s>> 5
                                
                                int32_t rax_94
                                
                                if (var_1c0 s< 0)
                                    rax_94 = var_1bc
                                else
                                    rax_94 = sx.d(var_1c0) s>> 5
                                
                                var_250 = rax_94
                                var_258 = 0
                                sub_142a49310(rdi_3, rbx_1, r8_61 - rbx_1, &var_1c8, var_258, 
                                    var_250)
                                sub_142a47ff0(&var_1c8)
                            else
                                char rdx_54
                                
                                if (arg5 == 0x103)
                                    rdx_54 = *(*(arg1 + 0x300) + (sx.q(rbx) << 1) + 0x320)
                                label_142adcd6c:
                                    
                                    if (rdx_54 != 0)
                                        goto label_142adcd74
                                    
                                    rbx_1 = rax_6
                                else
                                    if (arg5 == 0x104)
                                        rdx_54 = *(*(arg1 + 0x300) + (sx.q(rbx) << 1) + 0x321)
                                        goto label_142adcd6c
                                    
                                    rbx_1 = rax_6
                        
                        int16_t rax_95 = *(rdi_3 + 8)
                        uint64_t r9_36
                        
                        if (rax_95 s< 0)
                            r9_36 = zx.q(*(rdi_3 + 0xc))
                        else
                            r9_36 = zx.q(sx.d(rax_95) s>> 5)
                        
                        (*(*arg7 + 8))(arg7, zx.q(*((result_2 << 2) + 0x143659890)), zx.q(rbx_1), 
                            r9_36, var_258, var_250, var_248, var_240, result_7)
                    case 0xe
                        void* r8_35 = *(arg1 + 0x300)
                        rdi_3 = arg2
                        
                        if (rbx s>= 5)
                            sub_142ad7c20(rdi_3, rdi_2, *(r8_35 + 0x128), *(r8_35 + 0x130))
                        else
                            sub_142ad7c20(rdi_3, rdi_2, *(r8_35 + 0x118), *(r8_35 + 0x120))
                        
                        goto label_142adccd7
                    case 0xf
                        if (rdi_2 != 0)
                            goto label_142adc26d
                        
                        rax_37 = (*(*arg8 + 0x90))(arg8, zx.q(rdi_2 + 0xa))
                        goto label_142adc1d9
                    case 0x11, 0x17, 0x18, 0x1d, 0x1f, 0x20, 0x21
                        int16_t var_148[0x80]
                        sub_142a47d50(&var_1c8, &var_148, 0, 0x80)
                        var_218.q = Concurrency::details::UMSFreeThreadProxy::GetContext(arg8)
                        sub_142a6a540(arg8, result_1)
                        int64_t* rax_50
                        rax_50, zmm6 = sub_142aded70(arg1, result_1)
                        
                        if (*result_1 s> 0)
                            rbx = var_228_1
                        else
                            int512_t zmm3
                            
                            if (result_3 == 0x11)
                                var_250.q = 0
                                zmm3.o = zmm6
                                int64_t r8_38 = var_218.q
                                
                                if (rbx s>= 4)
                                    var_258.q = &var_1c8
                                    (*(*rax_50 + 0x38))(rax_50, 3, r8_38, zmm3, var_258, var_250)
                                    rbx = 0xc
                                else
                                    int64_t r9_22 = *rax_50
                                    var_258.q = &var_1c8
                                    (*(r9_22 + 0x38))(rax_50, 4, r8_38, r9_22, var_258, var_250)
                                    rbx = 0xd
                            else if (result_3 != 0x17)
                                if (result_3 != 0x18)
                                    if (result_3 != 0x1d)
                                        if (result_3 != 0x1f)
                                            if (result_3 != 0x20)
                                                if (result_3 != 0x21)
                                                    abort()
                                                    noreturn
                                                
                                                if (rbx == 1)
                                                    var_250.q = 0
                                                    var_258.q = &var_1c8
                                                    zmm3.o = zmm6
                                                    (*(*rax_50 + 0x38))()
                                                    rbx = var_228_1
                                                else if (rbx == 2)
                                                    var_250.q = 0
                                                    var_258.q = &var_1c8
                                                    zmm3.o = zmm6
                                                    (*(*rax_50 + 0x38))()
                                                    rbx = var_228_1
                                                else if (rbx != 3)
                                                    if (rbx == 4)
                                                        goto label_142adc569
                                                    
                                                    if (rbx != 5)
                                                        rbx = var_228_1
                                                    else
                                                        var_250.q = 0
                                                        var_258.q = &var_1c8
                                                        zmm3.o = zmm6
                                                        (*(*rax_50 + 0x38))()
                                                        rbx = var_228_1
                                                else
                                                    var_250.q = 0
                                                    var_258.q = &var_1c8
                                                    zmm3.o = zmm6
                                                    (*(*rax_50 + 0x38))()
                                                    rbx = var_228_1
                                            else if (rbx == 1)
                                                var_250.q = 0
                                                var_258.q = &var_1c8
                                                zmm3.o = zmm6
                                                (*(*rax_50 + 0x38))()
                                                rbx = var_228_1
                                            else if (rbx == 2)
                                                var_250.q = 0
                                                var_258.q = &var_1c8
                                                zmm3.o = zmm6
                                                (*(*rax_50 + 0x38))()
                                                rbx = var_228_1
                                            else if (rbx == 3)
                                                var_250.q = 0
                                                var_258.q = &var_1c8
                                                zmm3.o = zmm6
                                                (*(*rax_50 + 0x38))()
                                                rbx = var_228_1
                                            else if (rbx == 4)
                                                var_250.q = 0
                                                var_258.q = &var_1c8
                                                zmm3.o = zmm6
                                                (*(*rax_50 + 0x38))()
                                                rbx = var_228_1
                                            else if (rbx != 5)
                                                rbx = var_228_1
                                            else
                                                var_250.q = 0
                                                var_258.q = &var_1c8
                                                zmm3.o = zmm6
                                                (*(*rax_50 + 0x38))()
                                                rbx = var_228_1
                                        else if (rbx == 1)
                                            var_250.q = 0
                                            var_258.q = &var_1c8
                                            zmm3.o = zmm6
                                            (*(*rax_50 + 0x38))()
                                            rbx = var_228_1
                                        else if (rbx != 4)
                                            rbx = var_228_1
                                        else
                                            var_250.q = 0
                                            var_258.q = &var_1c8
                                            zmm3.o = zmm6
                                            (*(*rax_50 + 0x38))()
                                            rbx = var_228_1
                                    else if (rbx == 1)
                                        var_250.q = 0
                                        var_258.q = &var_1c8
                                        zmm3.o = zmm6
                                        (*(*rax_50 + 0x38))()
                                        rbx = var_228_1
                                    else if (rbx == 2)
                                        var_250.q = 0
                                        var_258.q = &var_1c8
                                        zmm3.o = zmm6
                                        (*(*rax_50 + 0x38))()
                                        rbx = var_228_1
                                    else if (rbx == 3)
                                        var_250.q = 0
                                        var_258.q = &var_1c8
                                        zmm3.o = zmm6
                                        (*(*rax_50 + 0x38))()
                                        rbx = var_228_1
                                    else if (rbx != 4)
                                        rbx = var_228_1
                                    else
                                        var_250.q = 0
                                        var_258.q = &var_1c8
                                        zmm3.o = zmm6
                                        (*(*rax_50 + 0x38))(rax_50, 0, var_218.q, zmm3, var_258, 
                                            var_250)
                                        rbx = 0xa
                                else if (rbx == 1)
                                    var_250.q = 0
                                    var_258.q = &var_1c8
                                    zmm3.o = zmm6
                                    (*(*rax_50 + 0x38))(rax_50, zx.q(rbx + 1), var_218.q, zmm3, 
                                        var_258, var_250)
                                    rbx = 0xd
                                else if (rbx != 4)
                                    rbx = var_228_1
                                else
                                    var_250.q = 0
                                    var_258.q = &var_1c8
                                    zmm3.o = zmm6
                                    (*(*rax_50 + 0x38))(rax_50, zx.q(rbx - 3), var_218.q, zmm3, 
                                        var_258, var_250)
                                    rbx = 0xc
                            else if (rbx s>= 4)
                                var_250.q = 0
                                zmm3.o = zmm6
                                var_258.q = &var_1c8
                                (*(*rax_50 + 0x38))()
                                rbx = var_228_1
                            else
                            label_142adc569:
                                var_250.q = 0
                                var_258.q = &var_1c8
                                zmm3.o = zmm6
                                (*(*rax_50 + 0x38))()
                                rbx = var_228_1
                        
                        int32_t r9_24
                        
                        if (var_1c0 s< 0)
                            r9_24 = var_1bc
                        else
                            r9_24 = sx.d(var_1c0) s>> 5
                        
                        rdi_3 = arg2
                        sub_142a48d00(rdi_3, &var_1c8, 0, r9_24)
                        sub_142a47ff0(&var_1c8)
                        goto label_142adccf0
                    case 0x13
                        if (rbx s< 3)
                            goto label_142adc26d
                        
                        rdi_2 = sub_142a695b0(arg8, 7, result_1)
                        
                        if (*result_1 s<= 0)
                            goto label_142adc2a0
                    case 0x19
                        if (rbx s< 3)
                            var_250 = 0xa
                            var_258 = 1
                            goto label_142adbdd5
                        
                        int32_t rax_46 = sub_142a695b0(arg8, 7, result_1)
                        
                        if (*result_1 s<= 0)
                            void* r8_31 = *(arg1 + 0x300)
                            rdx_17 = rax_46
                            
                            if (rbx == 5)
                                r9_11 = *(r8_31 + 0x110)
                                r8_26 = *(r8_31 + 0x108)
                                goto label_142adc2bc
                            
                            rdi_3 = arg2
                            
                            if (rbx == 4)
                                sub_142ad7c20(rdi_3, rdx_17, *(r8_31 + 0xd8), *(r8_31 + 0xe0))
                                rbx = 5
                            else if (rbx != 6)
                                sub_142ad7c20(rdi_3, rdx_17, *(r8_31 + 0xe8), *(r8_31 + 0xf0))
                                rbx = 5
                            else
                                sub_142ad7c20(rdi_3, rdx_17, *(r8_31 + 0xf8), *(r8_31 + 0x100))
                                rbx = 5
                            
                            goto label_142adccf0
                    case 0x1b
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = muls.dp.d(0x55555556, rdi_2)
                        rdx_28 = temp1_1
                        rdi_3 = arg2
                        rax_59 = rdx_28 u>> 0x1f
                        
                        if (rbx s>= 4)
                            void* r8_42 = *(arg1 + 0x300)
                            sub_142ad7c20(rdi_3, rdi_2 s/ 3, *(r8_42 + 0x178), *(r8_42 + 0x180))
                        label_142adccd7:
                            rbx = var_228_1
                            goto label_142adccf0
                        
                        if (rbx == 3)
                            void* r8_44 = *(arg1 + 0x300)
                            sub_142ad7c20(rdi_3, rdi_2 s/ 3, *(r8_44 + 0x188), *(r8_44 + 0x190))
                            goto label_142adccd7
                        
                    label_142adc984:
                        var_250 = 0xa
                        var_258 = rbx
                        sub_142adedf0(arg1, rcx_10, rdi_3, rax_59 + 1 + rdx_28, var_258, var_250)
                        goto label_142adccd7
                    case 0x1c
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = muls.dp.d(0x55555556, rdi_2)
                        rdx_28 = temp3_1
                        rdi_3 = arg2
                        rax_59 = rdx_28 u>> 0x1f
                        
                        if (rbx s>= 4)
                            void* r8_46 = *(arg1 + 0x300)
                            sub_142ad7c20(rdi_3, rdi_2 s/ 3, *(r8_46 + 0x198), *(r8_46 + 0x1a0))
                            goto label_142adccd7
                        
                        if (rbx != 3)
                            goto label_142adc984
                        
                        void* r8_48 = *(arg1 + 0x300)
                        sub_142ad7c20(rdi_3, rdi_2 s/ 3, *(r8_48 + 0x1a8), *(r8_48 + 0x1b0))
                        goto label_142adccd7
                    case 0x1e
                        void* rax_16 = *(arg1 + 0x300)
                        int64_t r8_7 = *(rax_16 + 0x1c8)
                        
                        if (r8_7 == 0)
                            goto label_142adbe91
                        
                        int32_t r9_4 = *(rax_16 + 0x1d0)
                        
                        if (rdi_2 s> r9_4)
                            goto label_142adbe91
                        
                        rdi_3 = arg2
                        sub_142ad7c20(rdi_3, rdi_2 - 1, r8_7, r9_4)
                        goto label_142adccd7
                    case 0x23
                        result_6 = result_1
                        int32_t rax_61 = sub_142a695b0(arg8, 0xb, result_6)
                        
                        if (rax_61 != 0xc)
                        label_142adcb1e:
                            result_7 = result_6
                            var_240 = arg8
                            var_248 = arg7
                            var_250 = arg6
                            var_258 = arg5
                            rdi_3 = arg2
                            sub_142adbb90(arg1, rdi_3, 0x61, zx.q(rbx), var_258, var_250, var_248, 
                                var_240, result_7)
                            goto label_142adccd7
                        
                        int32_t rax_62
                        
                        if (*(arg1 + 0x318) != 0)
                            rax_62 = sub_142a695b0(arg8, rax_61, result_6)
                        
                        if (*(arg1 + 0x318) != 0 && rax_62 != 0)
                            goto label_142adcb1e
                        
                        int32_t rax_63
                        
                        if (*(arg1 + 0x319) != 0)
                            rax_63 = sub_142a695b0(arg8, 0xd, result_6)
                        
                        if (*(arg1 + 0x319) != 0 && rax_63 != 0)
                            goto label_142adcb1e
                        
                        int64_t rdx_34 = sx.q(sub_142a695b0(arg8, 9, result_6))
                        
                        if (rbx s<= 3)
                            rdx_36 = (rdx_34 << 6) + *(*(arg1 + 0x300) + 0x340)
                        else if (rbx == 4 || rbx s> 5)
                            rdx_36 = (rdx_34 << 6) + *(*(arg1 + 0x300) + 0x350)
                        else
                            rdx_36 = (rdx_34 << 6) + *(*(arg1 + 0x300) + 0x360)
                        
                        if (rdx_36 == 0 || (*(rdx_36 + 8) & 1) != 0)
                            goto label_142adcb1e
                        
                    label_142adcac6:
                        int16_t rax_67 = *(rdx_36 + 8)
                        int32_t r9_31
                        
                        if (rax_67 s< 0)
                            r9_31 = *(rdx_36 + 0xc)
                        else
                            r9_31 = sx.d(rax_67) s>> 5
                        
                        rdi_3 = arg2
                        sub_142a48d00(rdi_3, rdx_36, 0, r9_31)
                        goto label_142adccd7
                    case 0x24
                        result_6 = result_1
                        void* rax_68 = sub_142b63800(arg1 + 0x220, result_6)
                        
                        if (*result_6 s> 0)
                            rdi_3 = arg2
                            goto label_142adccd7
                        
                        if (rax_68 == 0)
                            goto label_142adcb1e
                        
                        var_218.d = sub_142a695b0(arg8, 0xb, result_6)
                        int32_t var_1f8_2 = 0
                        
                        if (*(arg1 + 0x318) != 0)
                            var_1f8_2 = sub_142a695b0(arg8, 0xc, result_6)
                        
                        int32_t rax_75 = 0
                        
                        if (*(arg1 + 0x319) != 0)
                            rax_75 = sub_142a695b0(arg8, 0xd, result_6)
                        
                        int64_t r9_33 = sx.q(var_218.d)
                        int64_t rcx_76
                        
                        if (r9_33.d == 0)
                            if (var_1f8_2 != r9_33.d || rax_75 != 0 || *rax_68 == rax_75.b)
                                goto label_142adcbf5
                            
                        label_142adcc6a:
                            rcx_76 = sx.q(*(rax_68 + (r9_33 << 2) + 4))
                            
                            if (rbx s<= 3)
                                rdx_36 = (rcx_76 << 6) + *(*(arg1 + 0x300) + 0x340)
                            else if (rbx == 4 || rbx s> 5)
                                rdx_36 = (rcx_76 << 6) + *(*(arg1 + 0x300) + 0x350)
                            else
                                rdx_36 = (rcx_76 << 6) + *(*(arg1 + 0x300) + 0x360)
                        else if (r9_33.d != 0xc || var_1f8_2 != 0 || rax_75 != 0
                            || *(rax_68 + 1) == rax_75.b)
                        label_142adcbf5:
                            rcx_76 = zx.q(*(rax_68 + (r9_33 << 2) + 4))
                            rdx_36 = nullptr
                            
                            if ((rcx_76 - 0xa).d u> 1)
                                if (rcx_76.d == 0)
                                    goto label_142adcc6a
                                
                                goto label_142adcc0b
                            
                        label_142adcc65:
                            
                            if (rcx_76.d u<= 1)
                                goto label_142adcc6a
                        else
                            rcx_76 = zx.q(rax_75 + 1)
                        label_142adcc0b:
                            
                            if (rbx s<= 3)
                                rdx_36 = (sx.q(rcx_76.d) << 6) + *(*(arg1 + 0x300) + 0x340)
                            else if (rbx == 4 || rbx s> 5)
                                rdx_36 = (sx.q(rcx_76.d) << 6) + *(*(arg1 + 0x300) + 0x350)
                            else
                                rdx_36 = (sx.q(rcx_76.d) << 6) + *(*(arg1 + 0x300) + 0x360)
                            
                            if (rdx_36 == 0 || (*(rdx_36 + 8) & 1) != 0)
                                goto label_142adcc65
                        
                        if ((rcx_76 - 0xa).d u<= 1 || (*(rdx_36 + 8) & 1) != 0)
                            goto label_142adcb1e
                        
                        goto label_142adcac6
                    case 0x25
                        var_1c8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        var_1c0 = 2
                        void* rax_47 = sub_142b59bc0(*(arg1 + 0x300), &var_1c8)
                        int16_t rcx_50 = *(rax_47 + 8)
                        int32_t r9_21
                        
                        if (rcx_50 s< 0)
                            r9_21 = *(rax_47 + 0xc)
                        else
                            r9_21 = sx.d(rcx_50) s>> 5
                        
                        rdi_3 = arg2
                        sub_142a48d00(rdi_3, rax_47, 0, r9_21)
                        sub_142a47ff0(&var_1c8)
                        goto label_142adccd7
                
                result = sub_142a47ff0(&var_188)
            else
                *result = 5
    else if (arg3 != 0x6c)
        *result_1 = 3

__security_check_cookie(rax_1 ^ &var_278)
return result
