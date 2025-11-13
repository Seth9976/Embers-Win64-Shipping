// 函数: sub_142b5d540
// 地址: 0x142b5d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
uint64_t var_10 = rsi
int64_t var_e0 = -2
void var_168
uint64_t result = __security_cookie ^ &var_168
uint64_t result_2 = result
uint64_t r14 = arg1
char* var_128 = arg2
int32_t* result_4 = arg4
int32_t* result_1 = result_4

if (*result_4 s<= 0)
    struct icu_64::UObject::icu_64::UVector::VTable** rdi_1 = nullptr
    int64_t var_100_1 = 0
    void var_b8
    result = (*(*arg3 + 0x50))(arg3, &var_b8, result_4)
    
    if (*result_4 s<= 0)
        int32_t r13_1 = 0
        result = sub_142ac2da0(&var_b8, 0, &var_128, arg3)
        
        if (result.b == 0)
        label_142b5dbc0:
            rsi.b = 0
            int32_t r13_2 = 0
            
            if (*(r14 + 0x170) s> 0)
                void* r12_1 = r14 + 0x168
                void* var_110_2 = r12_1
                
                while (true)
                    int64_t rax_36 = sub_142ae72d0(r12_1, r13_2)
                    void* rax_37 = sub_142a86c30(*(r14 + 8), rax_36)
                    void* r14_2 = rax_37
                    
                    if (rax_37 != 0)
                        void* rax_38 = sub_142ae72d0(r12_1, r13_2 + 1)
                        result = sub_142a86c30(*(arg1 + 8), rax_38)
                        
                        if (result != 0)
                            r14 = arg1
                        else
                            int32_t rax_39 = sub_142a86c70(*(arg1 + 0x60), rax_36)
                            int64_t r12_2 = sx.q(rax_39)
                            int64_t* rax_40
                            
                            if (rax_39 != 0)
                                int64_t rax_41 = 0x40 * r12_2
                                
                                if (mulu.dp.q(0x40, r12_2) u>> 0x40 != zx.o(0))
                                    rax_41 = -1
                                
                                uint64_t rax_42 = rax_41 + 8
                                
                                if (rax_41 u>= -8)
                                    rax_42 = -1
                                
                                rax_40 = j_sub_142a7dd00(rax_42)
                            else
                                rax_40 = j_sub_140a82f30(zx.q(rax_39 + 8))
                            
                            int64_t* var_e8_2 = rax_40
                            void (* r15)()
                            
                            if (rax_40 == 0)
                                r15 = nullptr
                            else
                                *rax_40 = r12_2
                                r15 = &rax_40[1]
                                int64_t (* var_148)(struct 
                                    icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
                                    sub_142a47ff0
                                `eh vector constructor iterator'(r15, 0x40, r12_2)
                            
                            void (* var_118_2)() = r15
                            result = result_1
                            
                            if (r15 == 0 && *result s<= r15.d)
                                *result = 7
                            
                            if (*result s> 0)
                                if (r15 != 0)
                                    if (*(r15 - 8) == 0)
                                        result = j_sub_140a74f90(r15 - 8)
                                    else
                                        result = (**r15)(r15, 3)
                                
                                goto label_142b5de8a
                            
                            rsi = zx.q(r12_2.d)
                            void (* rbx_5)() = r15
                            
                            if (r12_2.d s> 0)
                                do
                                    rsi = zx.q(rsi.d - 1)
                                    void (* rcx_41)() = rbx_5
                                    rbx_5 += 0x40
                                    sub_142a48100(rcx_41, r14_2)
                                    r14_2 += 0x40
                                while (rsi.d s> 0)
                            
                            int64_t var_118_3 = 0
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_43 =
                                j_sub_142a7dd00(0x40)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_f0_2 =
                                rax_43
                            
                            if (rax_43 != 0)
                                rax_43 = sub_142a479b0(rax_43, rax_38)
                            
                            r14 = arg1
                            sub_142a86f50(*(r14 + 8), rax_43, r15, result_1)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_44 =
                                j_sub_142a7dd00(0x40)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_108_3 =
                                rax_44
                            
                            if (rax_44 != 0)
                                rax_44 = sub_142a479b0(rax_44, rax_38)
                            
                            result_4 = result_1
                            result = sub_142a86f70(*(r14 + 0x60), rax_44, r12_2.d, result_4)
                            r12_1 = var_110_2
                        
                        goto label_142b5ddf6
                    
                    r14 = arg1
                    result = sub_142a86c30(*(r14 + 0xb8), rax_36)
                    uint64_t result_3 = result
                    
                    if (result == 0)
                        r13_2 += 2
                    else
                        uint64_t rax_45 = sub_142ae72d0(r12_1, r13_2 + 1)
                        result = sub_142a86c30(*(r14 + 0xb8), rax_45)
                        
                        if (result == 0)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_46 =
                                j_sub_142a7dd00(zx.q((result + 0x40).d))
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_f8_2 =
                                rax_46
                            
                            if (rax_46 != 0)
                                rax_46 = sub_142a479b0(rax_46, rax_45)
                            
                            result = sub_142a86f50(*(r14 + 0xb8), rax_46, result_3, result_4)
                        
                    label_142b5ddf6:
                        
                        if (*result_4 s> 0)
                            goto label_142b5de8a
                        
                        sub_142ae7750(r12_1, zx.q(r13_2 + 1))
                        result = sub_142ae7750(r12_1, zx.q(r13_2))
                        rsi.b = 1
                    
                    if (r13_2 s>= *(r14 + 0x170))
                        if (rsi.b == 0)
                            break
                        
                        if (*(r14 + 0x170) == 0)
                            break
                        
                        goto label_142b5dbc0
            
            if (rdi_1 != 0)
                int64_t* rcx_56 = *(r14 + 0x210)
                
                if (rcx_56 != 0)
                    result = (**rcx_56)(rcx_56, 1)
                
                *(r14 + 0x210) = rdi_1
                rdi_1 = nullptr
        else
            while (true)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                sub_142a47e10(&var_88, var_128, 0xffffffff)
                int32_t rax_2 = sub_142b5caa0(r14, &var_88, arg3, result_4)
                
                if (*result_4 s<= 0)
                    if (rax_2 == 2)
                        goto label_142b5db50
                    
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1
                    
                    if (rax_2 != 1)
                        if (rax_2 != 0)
                            void* rcx_16 = *(r14 + 0x210)
                            int32_t rax_14
                            
                            if (rcx_16 != 0 && *(rcx_16 + 8) != 0)
                                rax_14 = sub_142ae7470(rcx_16, &var_88, 0)
                            
                            char* r10_1
                            
                            if (rcx_16 != 0 && *(rcx_16 + 8) != 0 && rax_14 s< 0)
                                r10_1 = var_128
                                char* rax_15 = r10_1
                                uint32_t i
                                uint32_t rdx_12
                                
                                do
                                    rdx_12 = zx.d(*rax_15)
                                    i = zx.d(rax_15["AmPmMarkersAbbr" - r10_1])
                                    
                                    if (rdx_12 != i)
                                        break
                                    
                                    rax_15 = &rax_15[1]
                                while (i != 0)
                                
                                if (rdx_12 - i == 0)
                                    goto label_142b5d841
                                
                                goto label_142b5db50
                            
                            r10_1 = var_128
                        label_142b5d841:
                            char* rax_16 = r10_1
                            uint32_t i_1
                            uint32_t rdx_14
                            
                            do
                                rdx_14 = zx.d(*rax_16)
                                i_1 = zx.d(rax_16["AmPmMarkers" - r10_1])
                                
                                if (rdx_14 != i_1)
                                    break
                                
                                rax_16 = &rax_16[1]
                            while (i_1 != 0)
                            
                            int32_t* result_5
                            
                            if (rdx_14 - i_1 != 0)
                                char* rax_17 = r10_1
                                uint32_t i_2
                                uint32_t rdx_16
                                
                                do
                                    rdx_16 = zx.d(*rax_17)
                                    i_2 = zx.d(rax_17["AmPmMarkersAbbr" - r10_1])
                                    
                                    if (rdx_16 != i_2)
                                        break
                                    
                                    rax_17 = &rax_17[1]
                                while (i_2 != 0)
                                
                                if (rdx_16 - i_2 == 0)
                                    goto label_142b5da13
                                
                                char* rax_18 = r10_1
                                uint32_t i_3
                                uint32_t rdx_18
                                
                                do
                                    rdx_18 = zx.d(*rax_18)
                                    i_3 = zx.d(rax_18["AmPmMarkersNarrow" - r10_1])
                                    
                                    if (rdx_18 != i_3)
                                        break
                                    
                                    rax_18 = &rax_18[1]
                                while (i_3 != 0)
                                
                                if (rdx_18 - i_3 == 0)
                                    goto label_142b5da13
                                
                                char* rax_19 = r10_1
                                uint32_t i_4
                                uint32_t rdx_20
                                
                                do
                                    rdx_20 = zx.d(*rax_19)
                                    i_4 = zx.d(rax_19["eras" - r10_1])
                                    
                                    if (rdx_20 != i_4)
                                        break
                                    
                                    rax_19 = &rax_19[1]
                                while (i_4 != 0)
                                
                                if (rdx_20 - i_4 == 0)
                                    result_5 = result_4
                                    sub_142b5ce70(r14, &var_88, r10_1, arg3, result_5)
                                else
                                    char* rax_20 = r10_1
                                    uint32_t i_5
                                    uint32_t rdx_22
                                    
                                    do
                                        rdx_22 = zx.d(*rax_20)
                                        i_5 = zx.d(rax_20["dayNames" - r10_1])
                                        
                                        if (rdx_22 != i_5)
                                            break
                                        
                                        rax_20 = &rax_20[1]
                                    while (i_5 != 0)
                                    
                                    if (rdx_22 - i_5 == 0)
                                        result_5 = result_4
                                        sub_142b5ce70(r14, &var_88, r10_1, arg3, result_5)
                                    else
                                        char* rax_21 = r10_1
                                        uint32_t i_6
                                        uint32_t rdx_24
                                        
                                        do
                                            rdx_24 = zx.d(*rax_21)
                                            i_6 = zx.d(rax_21["monthNames" - r10_1])
                                            
                                            if (rdx_24 != i_6)
                                                break
                                            
                                            rax_21 = &rax_21[1]
                                        while (i_6 != 0)
                                        
                                        if (rdx_24 - i_6 == 0)
                                            result_5 = result_4
                                            sub_142b5ce70(r14, &var_88, r10_1, arg3, result_5)
                                        else
                                            void* rax_22 = r10_1
                                            uint32_t i_7
                                            uint32_t rdx_26
                                            
                                            do
                                                rdx_26 = zx.d(*rax_22)
                                                i_7 = zx.d(*(rax_22 + "quarters" - r10_1))
                                                
                                                if (rdx_26 != i_7)
                                                    break
                                                
                                                rax_22 += 1
                                            while (i_7 != 0)
                                            
                                            if (rdx_26 - i_7 == 0)
                                                result_5 = result_4
                                                sub_142b5ce70(r14, &var_88, r10_1, arg3, result_5)
                                            else
                                                void* rax_23 = r10_1
                                                uint32_t i_8
                                                uint32_t rdx_28
                                                
                                                do
                                                    rdx_28 = zx.d(*rax_23)
                                                    i_8 = zx.d(*(rax_23 + "dayPeriod" - r10_1))
                                                    
                                                    if (rdx_28 != i_8)
                                                        break
                                                    
                                                    rax_23 += 1
                                                while (i_8 != 0)
                                                
                                                if (rdx_28 - i_8 == 0)
                                                    result_5 = result_4
                                                    sub_142b5ce70(r14, &var_88, r10_1, arg3, 
                                                        result_5)
                                                else
                                                    void* rax_24 = r10_1
                                                    uint32_t i_9
                                                    uint32_t rdx_30
                                                    
                                                    do
                                                        rdx_30 = zx.d(*rax_24)
                                                        i_9 = zx.d(
                                                            *(rax_24 + "monthPatterns" - r10_1))
                                                        
                                                        if (rdx_30 != i_9)
                                                            break
                                                        
                                                        rax_24 += 1
                                                    while (i_9 != 0)
                                                    
                                                    if (rdx_30 - i_9 == 0)
                                                        result_5 = result_4
                                                        sub_142b5ce70(r14, &var_88, r10_1, arg3, 
                                                            result_5)
                                                    else
                                                        void* rax_25 = r10_1
                                                        uint32_t i_10
                                                        uint32_t rdx_32
                                                        
                                                        do
                                                            rdx_32 = zx.d(*rax_25)
                                                            i_10 = zx.d(
                                                                *(rax_25 + "cyclicNameSets" - r10_1))
                                                            
                                                            if (rdx_32 != i_10)
                                                                break
                                                            
                                                            rax_25 += 1
                                                        while (i_10 != 0)
                                                        
                                                        if (rdx_32 - i_10 == 0)
                                                            result_5 = result_4
                                                            sub_142b5ce70(r14, &var_88, r10_1, 
                                                                arg3, result_5)
                                
                                goto label_142b5db50
                            
                        label_142b5da13:
                            
                            if (sub_142a86c30(*(r14 + 8), &var_88) != 0)
                                goto label_142b5db50
                            
                            void var_d0
                            (*(*arg3 + 0x48))(arg3, &var_d0, result_4)
                            int32_t var_c0
                            int64_t r14_1 = sx.q(var_c0)
                            int64_t* rax_28
                            
                            if (r14_1.d != 0)
                                int64_t rax_29 = 0x40 * r14_1
                                
                                if (mulu.dp.q(0x40, r14_1) u>> 0x40 != zx.o(0))
                                    rax_29 = -1
                                
                                uint64_t rax_30 = rax_29 + 8
                                
                                if (rax_29 u>= -8)
                                    rax_30 = -1
                                
                                rax_28 = j_sub_142a7dd00(rax_30)
                            else
                                rax_28 = j_sub_140a82f30(zx.q((r14_1 + 8).d))
                            
                            int64_t* var_108_2 = rax_28
                            void (* rbx_2)()
                            
                            if (rax_28 == 0)
                                rbx_2 = nullptr
                            else
                                *rax_28 = r14_1
                                rbx_2 = &rax_28[1]
                                result_5 = sub_142a47ff0
                                `eh vector constructor iterator'(rbx_2, 0x40, r14_1)
                            
                            void (* var_130_4)() = rbx_2
                            
                            if (rbx_2 == 0 && *result_4 s<= rbx_2.d)
                                *result_4 = 7
                            
                            (*(*arg3 + 0x60))(arg3, rbx_2, zx.q(r14_1.d), result_4, result_5)
                            int64_t var_130_5 = 0
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_32 =
                                j_sub_142a7dd00(0x40)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_f0_1 =
                                rax_32
                            
                            if (rax_32 != 0)
                                rax_32 = sub_142a479b0(rax_32, &var_88)
                            
                            sub_142a86f50(*(arg1 + 8), rax_32, rbx_2, result_4)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_33 =
                                j_sub_142a7dd00(0x40)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_e8_1 =
                                rax_33
                            
                            if (rax_33 != 0)
                                rax_33 = sub_142a479b0(rax_33, &var_88)
                            
                            r14 = arg1
                            sub_142a86f70(*(r14 + 0x60), rax_33, r14_1.d, result_4)
                            
                            if (*result_4 s<= 0)
                                goto label_142b5db50
                        else
                            if (sub_142a86c30(*(r14 + 8), r14 + 0x218) != 0)
                                goto label_142b5db50
                            
                            int64_t rax_9 = sub_142a86c30(*(r14 + 0xb8), r14 + 0x218)
                            
                            if (rax_9 != 0)
                                goto label_142b5db50
                            
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 =
                                j_sub_142a7dd00(zx.q((rax_9 + 0x40).d))
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_d8_1 =
                                rax_10
                            
                            if (rax_10 == 0)
                                rbx_1 = nullptr
                            else
                                rbx_1 = sub_142a479b0(rax_10, r14 + 0x218)
                            
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_130_2 =
                                rbx_1
                            
                            if (rbx_1 == 0 && *result_4 s<= rbx_1.d)
                                *result_4 = 7
                            
                            sub_142ae7110(r14 + 0x168, rbx_1, result_4)
                            
                            if (*result_4 s> 0)
                                goto label_142b5db95
                            
                            rbx_1 = nullptr
                            int64_t var_130_3 = 0
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_12 =
                                j_sub_142a7dd00(0x40)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_f8_1 =
                                rax_12
                            
                            if (rax_12 == 0)
                                rsi = 0
                            else
                                rsi = sub_142a479b0(rax_12, &var_88)
                            
                            uint64_t var_108_1 = rsi
                            
                            if (rsi == 0 && *result_4 s<= rsi.d)
                                *result_4 = 7
                            
                            sub_142ae7110(r14 + 0x168, rsi, result_4)
                            
                            if (*result_4 s> 0)
                                if (rsi != 0)
                                    (**rsi)(rsi, 1)
                                
                                goto label_142b5db95
                            
                            r14 = arg1
                        label_142b5db50:
                            sub_142a47ff0(&var_88)
                            r13_1 += 1
                            result = sub_142ac2da0(&var_b8, r13_1, &var_128, arg3)
                            
                            if (result.b == 0)
                                goto label_142b5dbc0
                            
                            continue
                    else if (rdi_1 != 0)
                    label_142b5d696:
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_6 =
                            j_sub_142a7dd00(0x40)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_118_1 =
                            rax_6
                        
                        if (rax_6 == 0)
                            rbx_1 = nullptr
                        else
                            rbx_1 = sub_142a479b0(rax_6, r14 + 0x218)
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_130_1 =
                            rbx_1
                        
                        if (rbx_1 == 0 && *result_4 s<= rbx_1.d)
                            *result_4 = 7
                        
                        sub_142ae7110(rdi_1, rbx_1, result_4)
                        
                        if (*result_4 s<= 0)
                            goto label_142b5db50
                        
                    label_142b5db95:
                        
                        if (rbx_1 != 0)
                            (*rbx_1)->__offset(0x0).q(rbx_1, 1)
                    else
                        struct icu_64::UObject::icu_64::UVector::VTable** rax_3 =
                            j_sub_142a7dd00(zx.q(rax_2 + 0x27))
                        struct icu_64::UObject::icu_64::UVector::VTable** var_110_1 = rax_3
                        struct icu_64::UObject::icu_64::UVector::VTable** rcx_6
                        
                        if (rax_3 == 0)
                            rcx_6 = nullptr
                        else
                            rcx_6 = sub_142ae6e40(rax_3, sub_140a4f210, sub_142a4b070, result_4)
                        
                        if (*result_4 s> 0)
                            if (rcx_6 != 0)
                                (*rcx_6)->__offset(0x0).q(rcx_6, 1)
                            
                            goto label_142b5d687
                        
                        rdi_1 = rcx_6
                        struct icu_64::UObject::icu_64::UVector::VTable** var_100_2 = rcx_6
                        
                        if (rcx_6 == 0)
                            *result_4 = 7
                        else
                        label_142b5d687:
                            
                            if (*result_4 s<= 0)
                                goto label_142b5d696
                
                result = sub_142a47ff0(&var_88)
                break
    
label_142b5de8a:
    
    if (rdi_1 != 0)
        result = (*rdi_1)->__offset(0x0).q(rdi_1, 1)

__security_check_cookie(result_2 ^ &var_168)
return result
