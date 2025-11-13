// 函数: sub_142b89410
// 地址: 0x142b89410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_238 = -2
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
void* rbx = arg1
void* var_288 = arg1
void* result

if (*(arg2 + 0xd8) == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1e8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_1e0_1 = 2
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (*(arg2 + 8 + rax_2) != 0)
    
    void* r12_1 = "root"
    
    if (rax_2 != 0)
        r12_1 = arg2 + 8
    
    char* rcx_3 = sx.q(*(arg2 + 0x20)) + *(arg2 + 0xd0)
    char (* var_260_1)[0xa0] = rcx_3
    int64_t rax_3 = -1
    
    do
        rax_3 += 1
    while (*(arg2 + 0x14 + rax_3) != 0)
    
    int64_t r13
    r13.b = rax_3 != 0
    int64_t rax_4 = -1
    
    do
        rax_4 += 1
    while (*(arg2 + 0x1a + rax_4) != 0)
    
    uint64_t r15
    r15.b = rax_4 != 0
    int64_t rax_5 = -1
    
    do
        rax_5 += 1
    while (rcx_3[rax_5] != 0)
    
    bool var_294 = rax_5 != 0
    char (* var_2d8)[0xa0]
    int32_t* var_2d0
    int32_t var_2a8
    int32_t var_2a0
    int32_t var_1dc
    char var_e8[0xa0]
    
    if (*(rbx + 0xe8) == 1)
        if (r13.b == 0)
            goto label_142b89852
        
        if (r15.b == 0)
            goto label_142b896c7
        
        int32_t var_2c0 = 0
        void* var_2c8_1 = arg2 + 0x1a
        int16_t* const var_2d0_1 = &data_143613f98
        void* var_2d8_1 = arg2 + 0x14
        sub_142b8abf0(&var_e8, 0x9d, r12_1)
        
        if (*(rbx + 0x490) != 0x201)
        label_142b89610:
            var_2a0 = 0
            var_2a8 = 0
            void* rax_7 = sub_142a951b0(*(rbx + 0xf0), *(rbx + 0x120), "Languages", nullptr, 
                &var_e8, &var_2a8, &var_2a0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_10 = &var_1e8
            
            if (var_2a0 s> 0)
                sub_142a4ab40(rcx_10)
            else
                int32_t rbx_2 = var_2a8
                sub_142a4afe0(rcx_10)
                int32_t r8_4
                
                if (var_1e0_1 s< 0)
                    r8_4 = var_1dc
                else
                    r8_4 = sx.d(var_1e0_1) s>> 5
                
                var_2d0.d = rbx_2
                var_2d8.d = 0
                sub_142a49390(&var_1e8, 0, r8_4, rax_7, var_2d8.d, var_2d0.d)
            
            if ((var_1e0_1.b & 1) != 0)
                rbx = var_288
            label_142b896c7:
                int64_t var_2d0_2 = 0
                void* var_2d8_2 = arg2 + 0x14
                sub_142b8abf0(&var_e8, 0x9d, r12_1)
                
                if (*(rbx + 0x490) != 0x201)
                label_142b8979e:
                    var_2a0 = 0
                    var_2a8 = 0
                    void* rax_9 = sub_142a951b0(*(rbx + 0xf0), *(rbx + 0x120), "Languages", 
                        nullptr, &var_e8, &var_2a8, &var_2a0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_19 = &var_1e8
                    
                    if (var_2a0 s> 0)
                        sub_142a4ab40(rcx_19)
                    else
                        int32_t rbx_4 = var_2a8
                        sub_142a4afe0(rcx_19)
                        int32_t r8_9
                        
                        if (var_1e0_1 s< 0)
                            r8_9 = var_1dc
                        else
                            r8_9 = sx.d(var_1e0_1) s>> 5
                        
                        var_2d0.d = rbx_4
                        var_2d8.d = 0
                        sub_142a49390(&var_1e8, 0, r8_9, rax_9, var_2d8.d, var_2d0.d)
                    
                    if ((var_1e0_1.b & 1) != 0)
                        rbx = var_288
                    label_142b89852:
                        
                        if (r15.b != 0)
                            int64_t var_2d0_3 = 0
                            void* var_2d8_3 = arg2 + 0x1a
                            sub_142b8abf0(&var_e8, 0x9d, r12_1)
                            bool cond:0_1
                            
                            if (*(rbx + 0x490) != 0x201)
                            label_142b89932:
                                var_2a0 = 0
                                var_2a8 = 0
                                void* rax_11 = sub_142a951b0(*(rbx + 0xf0), *(rbx + 0x120), 
                                    "Languages", nullptr, &var_e8, &var_2a8, &var_2a0)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    rcx_28 = &var_1e8
                                
                                if (var_2a0 s> 0)
                                    sub_142a4ab40(rcx_28)
                                else
                                    int32_t rbx_6 = var_2a8
                                    sub_142a4afe0(rcx_28)
                                    int32_t r8_14
                                    
                                    if (var_1e0_1 s< 0)
                                        r8_14 = var_1dc
                                    else
                                        r8_14 = sx.d(var_1e0_1) s>> 5
                                    
                                    var_2d0.d = rbx_6
                                    var_2d8.d = 0
                                    sub_142a49390(&var_1e8, 0, r8_14, rax_11, var_2d8.d, var_2d0.d)
                                
                                cond:0_1 = (var_1e0_1.b & 1) == 0
                            else
                                var_2a0 = 0
                                var_2a8 = 0
                                void* rax_10 = sub_142a951b0(*(rbx + 0xf0), *(rbx + 0x120), 
                                    "Languages%short", nullptr, &var_e8, &var_2a8, &var_2a0)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    rcx_24 = &var_1e8
                                
                                if (var_2a0 s> 0)
                                    sub_142a4ab40(rcx_24)
                                else
                                    int32_t rbx_5 = var_2a8
                                    sub_142a4afe0(rcx_24)
                                    int32_t r8_12
                                    
                                    if (var_1e0_1 s< 0)
                                        r8_12 = var_1dc
                                    else
                                        r8_12 = sx.d(var_1e0_1) s>> 5
                                    
                                    var_2d0.d = rbx_5
                                    var_2d8.d = 0
                                    sub_142a49390(&var_1e8, 0, r8_12, rax_10, var_2d8.d, var_2d0.d)
                                    rbx = var_288
                                
                                char temp0_1 = var_1e0_1.b & 1
                                cond:0_1 = temp0_1 == 0
                                
                                if (temp0_1 != 0)
                                    goto label_142b89932
                            
                            r15 = zx.q(r15.b)
                            
                            if (cond:0_1)
                                r15 = 0
                    else
                        r13.b = 0
                else
                    var_2a0 = 0
                    var_2a8 = 0
                    void* rax_8 = sub_142a951b0(*(rbx + 0xf0), *(rbx + 0x120), "Languages%short", 
                        nullptr, &var_e8, &var_2a8, &var_2a0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_15 = &var_1e8
                    
                    if (var_2a0 s> 0)
                        sub_142a4ab40(rcx_15)
                    else
                        int32_t rbx_3 = var_2a8
                        sub_142a4afe0(rcx_15)
                        int32_t r8_7
                        
                        if (var_1e0_1 s< 0)
                            r8_7 = var_1dc
                        else
                            r8_7 = sx.d(var_1e0_1) s>> 5
                        
                        var_2d0.d = rbx_3
                        var_2d8.d = 0
                        sub_142a49390(&var_1e8, 0, r8_7, rax_8, var_2d8.d, var_2d0.d)
                        rbx = var_288
                    
                    if ((var_1e0_1.b & 1) != 0)
                        goto label_142b8979e
                    
                    r13.b = 0
            else
                r13.b = 0
                r15.b = 0
        else
            var_2a8 = 0
            var_2a0 = 0
            void* rax_6 = sub_142a951b0(*(rbx + 0xf0), *(rbx + 0x120), "Languages%short", nullptr, 
                &var_e8, &var_2a0, &var_2a8)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_6 = &var_1e8
            
            if (var_2a8 s> 0)
                sub_142a4ab40(rcx_6)
            else
                int32_t rbx_1 = var_2a0
                sub_142a4afe0(rcx_6)
                int32_t r8_2
                
                if (var_1e0_1 s< 0)
                    r8_2 = var_1dc
                else
                    r8_2 = sx.d(var_1e0_1) s>> 5
                
                var_2d0.d = rbx_1
                var_2d8.d = 0
                sub_142a49390(&var_1e8, 0, r8_2, rax_6, var_2d8.d, var_2d0.d)
                rbx = var_288
            
            if ((var_1e0_1.b & 1) != 0)
                goto label_142b89610
            
            r13.b = 0
            r15.b = 0
        
        rbx = var_288
    
    void* r12_2
    
    if ((var_1e0_1.b & 1) != 0 || (var_1e0_1 & 0xffe0) == 0)
        if (*(rbx + 0x490) == 0x201)
            var_2a0 = 0
            var_2a8 = 0
            void* rax_12 = sub_142a951b0(*(rbx + 0xf0), *(rbx + 0x120), "Languages%short", nullptr, 
                r12_1, &var_2a8, &var_2a0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_32 = &var_1e8
            
            if (var_2a0 s> 0)
                sub_142a4ab40(rcx_32)
            else
                int32_t rbx_7 = var_2a8
                sub_142a4afe0(rcx_32)
                int32_t r8_16
                
                if (var_1e0_1 s< 0)
                    r8_16 = var_1dc
                else
                    r8_16 = sx.d(var_1e0_1) s>> 5
                
                var_2d0.d = rbx_7
                var_2d8.d = 0
                sub_142a49390(&var_1e8, 0, r8_16, rax_12, var_2d8.d, var_2d0.d)
        
        if (*(rbx + 0x490) == 0x201 && (var_1e0_1.b & 1) == 0)
            r12_2 = var_288
        else
            var_2a0 = 0
            var_2a8 = 0
            r12_2 = var_288
            void* rax_13 = sub_142a951b0(*(r12_2 + 0xf0), *(r12_2 + 0x120), "Languages", nullptr, 
                r12_1, &var_2a8, &var_2a0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_36 = &var_1e8
            
            if (var_2a0 s> 0)
                sub_142a4ab40(rcx_36)
            else
                int32_t rbx_8 = var_2a8
                sub_142a4afe0(rcx_36)
                int32_t r8_18
                
                if (var_1e0_1 s< 0)
                    r8_18 = var_1dc
                else
                    r8_18 = sx.d(var_1e0_1) s>> 5
                
                var_2d0.d = rbx_8
                var_2d8.d = 0
                sub_142a49390(&var_1e8, 0, r8_18, rax_13, var_2d8.d, var_2d0.d)
    else
        r12_2 = var_288
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_160_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_228 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_220_1 = 2
    int32_t var_290 = 0
    int32_t var_29c
    int32_t var_298
    int32_t var_21c
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128
    
    if (r13.b != 0)
        if (*(r12_2 + 0x490) == 0x201)
            var_2a0 = 0
            var_2a8 = 0
            void* rax_14 = sub_142a951b0(*(r12_2 + 0xf0), *(r12_2 + 0x120), "Scripts%short", 
                nullptr, arg2 + 0x14, &var_2a8, &var_2a0)
            int32_t rbx_9
            
            if (var_2a0 s<= 0)
                rbx_9 = var_2a8
            
            if (var_2a0 s> 0 || rbx_9 s<= 0)
                sub_142a48aa0(&var_228, sub_142a47e10(&var_128, arg2 + 0x14, 0xffffffff), 0)
                sub_142a47ff0(&var_128)
            else
                sub_142a4afe0(&var_228)
                int32_t r8_20
                
                if (var_220_1 s< 0)
                    r8_20 = var_21c
                else
                    r8_20 = sx.d(var_220_1) s>> 5
                
                var_2d0.d = rbx_9
                var_2d8.d = 0
                sub_142a49390(&var_228, 0, r8_20, rax_14, var_2d8.d, var_2d0.d)
        
        if (*(r12_2 + 0x490) != 0x201 || (var_220_1.b & 1) != 0)
            var_298 = 0
            var_29c = 0
            void* rax_16 = sub_142a951b0(*(r12_2 + 0xf0), *(r12_2 + 0x120), "Scripts", nullptr, 
                arg2 + 0x14, &var_29c, &var_298)
            int32_t rbx_10
            
            if (var_298 s<= 0)
                rbx_10 = var_29c
            
            if (var_298 s> 0 || rbx_10 s<= 0)
                sub_142a48aa0(&var_228, sub_142a47e10(&var_1a8, arg2 + 0x14, 0xffffffff), 0)
                sub_142a47ff0(&var_1a8)
            else
                sub_142a4afe0(&var_228)
                int32_t r8_22
                
                if (var_220_1 s< 0)
                    r8_22 = var_21c
                else
                    r8_22 = sx.d(var_220_1) s>> 5
                
                var_2d0.d = rbx_10
                var_2d8.d = 0
                sub_142a49390(&var_228, 0, r8_22, rax_16, var_2d8.d, var_2d0.d)
        
        int32_t r9_17
        
        if (var_220_1 s< 0)
            r9_17 = var_21c
        else
            r9_17 = sx.d(var_220_1) s>> 5
        
        sub_142a48d00(&var_168, &var_228, 0, r9_17)
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_280
    
    if (r15.b != 0)
        if (*(r12_2 + 0x490) == 0x201)
            var_29c = 0
            var_298 = 0
            void* rax_19 = sub_142a951b0(*(r12_2 + 0x1d8), *(r12_2 + 0x208), "Countries%short", 
                nullptr, arg2 + 0x1a, &var_298, &var_29c)
            int32_t rbx_11
            
            if (var_29c s<= 0)
                rbx_11 = var_298
            
            if (var_29c s> 0 || rbx_11 s<= 0)
                sub_142a48aa0(&var_228, sub_142a47e10(&var_128, arg2 + 0x1a, 0xffffffff), 0)
                sub_142a47ff0(&var_128)
            else
                sub_142a4afe0(&var_228)
                int32_t r8_24
                
                if (var_220_1 s< 0)
                    r8_24 = var_21c
                else
                    r8_24 = sx.d(var_220_1) s>> 5
                
                var_2d0.d = rbx_11
                var_2d8.d = 0
                sub_142a49390(&var_228, 0, r8_24, rax_19, var_2d8.d, var_2d0.d)
        
        if (*(r12_2 + 0x490) != 0x201 || (var_220_1.b & 1) != 0)
            var_2a0 = 0
            var_2a8 = 0
            void* rax_21 = sub_142a951b0(*(r12_2 + 0x1d8), *(r12_2 + 0x208), "Countries", nullptr, 
                arg2 + 0x1a, &var_2a8, &var_2a0)
            int32_t rbx_12
            
            if (var_2a0 s<= 0)
                rbx_12 = var_2a8
            
            if (var_2a0 s> 0 || rbx_12 s<= 0)
                sub_142a48aa0(&var_228, sub_142a47e10(&var_1a8, arg2 + 0x1a, 0xffffffff), 0)
                sub_142a47ff0(&var_1a8)
            else
                sub_142a4afe0(&var_228)
                int32_t r8_26
                
                if (var_220_1 s< 0)
                    r8_26 = var_21c
                else
                    r8_26 = sx.d(var_220_1) s>> 5
                
                var_2d0.d = rbx_12
                var_2d8.d = 0
                sub_142a49390(&var_228, 0, r8_26, rax_21, var_2d8.d, var_2d0.d)
        
        if ((var_160_1 & 0xffe0) != 0)
            var_280 = &var_168
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_278_1 = &var_228
            var_288.d = 0
            var_2d0.d = 0
            sub_142b62d70(r12_2 + 0x2c0, &var_280, 2, &var_168, nullptr, var_2d0.d, &var_288)
        else
            sub_142a48aa0(&var_168, &var_228, 0)
    
    if (var_294 != 0)
        var_29c = 0
        var_298 = 0
        void* rax_23 = sub_142a951b0(*(r12_2 + 0xf0), *(r12_2 + 0x120), "Variants", nullptr, 
            var_260_1, &var_298, &var_29c)
        int32_t rbx_13
        
        if (var_29c s<= 0)
            rbx_13 = var_298
        
        if (var_29c s> 0 || rbx_13 s<= 0)
            sub_142a48aa0(&var_228, sub_142a47e10(&var_128, var_260_1, 0xffffffff), 0)
            sub_142a47ff0(&var_128)
        else
            sub_142a4afe0(&var_228)
            int32_t r8_28
            
            if (var_220_1 s< 0)
                r8_28 = var_21c
            else
                r8_28 = sx.d(var_220_1) s>> 5
            
            var_2d0.d = rbx_13
            var_2d8.d = 0
            sub_142a49390(&var_228, 0, r8_28, rax_23, var_2d8.d, var_2d0.d)
        
        if ((var_160_1 & 0xffe0) != 0)
            var_280 = &var_168
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_278_2 = &var_228
            var_288.d = 0
            var_2d0.d = 0
            sub_142b62d70(r12_2 + 0x2c0, &var_280, 2, &var_168, nullptr, var_2d0.d, &var_288)
        else
            sub_142a48aa0(&var_168, &var_228, 0)
    
    int16_t rax_25 = *(r12_2 + 0x3d8)
    int32_t rcx_80
    
    if (rax_25 s< 0)
        rcx_80 = *(r12_2 + 0x3dc)
    else
        rcx_80 = sx.d(rax_25) s>> 5
    
    int16_t rax_26 = *(r12_2 + 0x398)
    int32_t rax_28
    
    if (rax_26 s< 0)
        rax_28 = *(r12_2 + 0x39c)
    else
        rax_28 = sx.d(rax_26) s>> 5
    
    int32_t var_15c
    int32_t r8_30
    
    if (var_160_1 s< 0)
        r8_30 = var_15c
    else
        r8_30 = sx.d(var_160_1) s>> 5
    
    var_2d0.d = rax_28
    var_2d8.d = 0
    sub_142a49d10(&var_168, 0, r8_30, r12_2 + 0x390, var_2d8.d, var_2d0.d, r12_2 + 0x3d0, 0, rcx_80)
    int16_t rax_29 = *(r12_2 + 0x458)
    int32_t rcx_83
    
    if (rax_29 s< 0)
        rcx_83 = *(r12_2 + 0x45c)
    else
        rcx_83 = sx.d(rax_29) s>> 5
    
    int16_t rax_30 = *(r12_2 + 0x418)
    int32_t rax_32
    
    if (rax_30 s< 0)
        rax_32 = *(r12_2 + 0x41c)
    else
        rax_32 = sx.d(rax_30) s>> 5
    
    int32_t r8_32
    
    if (var_160_1 s< 0)
        r8_32 = var_15c
    else
        r8_32 = sx.d(var_160_1) s>> 5
    
    var_2d0.d = rax_32
    var_2d8.d = 0
    sub_142a49d10(&var_168, 0, r8_32, r12_2 + 0x410, var_2d8.d, var_2d0.d, r12_2 + 0x450, 0, rcx_83)
    void* rdi_13 = arg2
    struct icu_64::StringEnumeration::icu_64::KeywordEnumeration::VTable** rax_33 =
        sub_142a46220(rdi_13, &var_290)
    struct icu_64::StringEnumeration::icu_64::KeywordEnumeration::VTable** var_260_2 = rax_33
    
    if (rax_33 == 0 || var_290 s> 0)
        goto label_142b8aa97
    
    var_1a8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_1a0_1 = 2
    char* _Str1_1 = (*rax_33)->__offset(0x20).q(rax_33, 0, &var_290)
    char* _Str1 = _Str1_1
    
    if (_Str1_1 == 0)
    label_142b8aa89:
        sub_142a47ff0(&var_1a8)
    label_142b8aa97:
        void* r8_58
        
        if ((var_160_1 & 0xffe0) == 0)
            sub_142a48100(arg3, &var_1e8)
            r8_58 = arg3
        else
            if ((*(arg3 + 8) & 1) == 0)
                *(arg3 + 8) &= 0x1f
            else
                *(arg3 + 8) = 2
            
            sub_142b62a90(r12_2 + 0x300, &var_1e8, &var_168, arg3, &var_290)
            r8_58 = arg3
        
        void* result_1 = sub_142b88730(r12_2, 0, r8_58)
        
        if (rax_33 != 0)
            struct icu_64::StringEnumeration::icu_64::KeywordEnumeration::VTable* r8_59 = *rax_33
            r8_59->__offset(0x0).q(rax_33, 1, r8_59)
        
        sub_142a47ff0(&var_228)
        sub_142a47ff0(&var_168)
        sub_142a47ff0(&var_1e8)
        result = result_1
    else
        while (true)
            var_e8[0] = 0
            int32_t* var_2d8_4 = &var_290
            sub_142a46470(rdi_13, _Str1, &var_e8, 0x64)
            int32_t rax_35 = var_290
            
            if (rax_35 s> 0 || rax_35 == 0xffffff84)
                sub_142a47ff0(&var_1a8)
                (*rax_33)->__offset(0x0).q(rax_33, 1)
                sub_142a47ff0(&var_228)
                sub_142a47ff0(&var_168)
                sub_142a47ff0(&var_1e8)
                result = arg3
                break
            
            var_29c = 0
            var_298 = 0
            void* rax_36 = sub_142a951b0(*(r12_2 + 0xf0), *(r12_2 + 0x120), "Keys", nullptr, _Str1, 
                &var_298, &var_29c)
            int32_t rdi_15
            
            if (var_29c s<= 0)
                rdi_15 = var_298
            
            char* var_2d8_5
            int32_t* var_2d0_4
            
            if (var_29c s> 0 || rdi_15 s<= 0)
                sub_142a48aa0(&var_228, sub_142a47e10(&var_128, _Str1, 0xffffffff), 0)
                sub_142a47ff0(&var_128)
            else
                sub_142a4afe0(&var_228)
                int32_t r8_36
                
                if (var_220_1 s< 0)
                    r8_36 = var_21c
                else
                    r8_36 = sx.d(var_220_1) s>> 5
                
                var_2d0_4.d = rdi_15
                var_2d8_5.d = 0
                sub_142a49390(&var_228, 0, r8_36, rax_36, var_2d8_5.d, var_2d0_4.d)
            
            int16_t rax_38 = *(r12_2 + 0x3d8)
            int32_t rcx_96
            
            if (rax_38 s< 0)
                rcx_96 = *(r12_2 + 0x3dc)
            else
                rcx_96 = sx.d(rax_38) s>> 5
            
            int16_t rax_39 = *(r12_2 + 0x398)
            int32_t rax_41
            
            if (rax_39 s< 0)
                rax_41 = *(r12_2 + 0x39c)
            else
                rax_41 = sx.d(rax_39) s>> 5
            
            int32_t r8_38
            
            if (var_220_1 s< 0)
                r8_38 = var_21c
            else
                r8_38 = sx.d(var_220_1) s>> 5
            
            var_2d0_4.d = rax_41
            var_2d8_5.d = 0
            sub_142a49d10(&var_228, 0, r8_38, r12_2 + 0x390, var_2d8_5.d, var_2d0_4.d, 
                r12_2 + 0x3d0, 0, rcx_96)
            int16_t rax_42 = *(r12_2 + 0x458)
            int32_t rcx_99
            
            if (rax_42 s< 0)
                rcx_99 = *(r12_2 + 0x45c)
            else
                rcx_99 = sx.d(rax_42) s>> 5
            
            int16_t rax_43 = *(r12_2 + 0x418)
            int32_t rax_45
            
            if (rax_43 s< 0)
                rax_45 = *(r12_2 + 0x41c)
            else
                rax_45 = sx.d(rax_43) s>> 5
            
            int32_t r8_40
            
            if (var_220_1 s< 0)
                r8_40 = var_21c
            else
                r8_40 = sx.d(var_220_1) s>> 5
            
            var_2d0_4.d = rax_45
            var_2d8_5.d = 0
            sub_142a49d10(&var_228, 0, r8_40, r12_2 + 0x410, var_2d8_5.d, var_2d0_4.d, 
                r12_2 + 0x450, 0, rcx_99)
            void** var_2d8_6
            int32_t* var_2d0_5
            int32_t var_19c
            
            if (strcmp(_Str1, "currency") != 0)
                if (*(r12_2 + 0x490) == 0x201)
                    var_29c = 0
                    var_298 = 0
                    void* rax_51 = sub_142a951b0(*(r12_2 + 0xf0), *(r12_2 + 0x120), "Types%short", 
                        _Str1, &var_e8, &var_298, &var_29c)
                    int32_t rdi_18
                    
                    if (var_29c s<= 0)
                        rdi_18 = var_298
                    
                    if (var_29c s> 0 || rdi_18 s<= 0)
                        sub_142a48aa0(&var_1a8, sub_142a47e10(&var_128, &var_e8, 0xffffffff), 0)
                        sub_142a47ff0(&var_128)
                    else
                        sub_142a4afe0(&var_1a8)
                        int32_t r8_44
                        
                        if (var_1a0_1 s< 0)
                            r8_44 = var_19c
                        else
                            r8_44 = sx.d(var_1a0_1) s>> 5
                        
                        var_2d0_5.d = rdi_18
                        var_2d8_6.d = 0
                        sub_142a49390(&var_1a8, 0, r8_44, rax_51, var_2d8_6.d, var_2d0_5.d)
                
                if (*(r12_2 + 0x490) != 0x201 || (var_1a0_1.b & 1) != 0)
                    var_29c = 0
                    var_298 = 0
                    void* rax_53 = sub_142a951b0(*(r12_2 + 0xf0), *(r12_2 + 0x120), "Types", _Str1, 
                        &var_e8, &var_298, &var_29c)
                    int32_t rdi_19
                    
                    if (var_29c s<= 0)
                        rdi_19 = var_298
                    
                    if (var_29c s> 0 || rdi_19 s<= 0)
                        sub_142a48aa0(&var_1a8, sub_142a47e10(&var_128, &var_e8, 0xffffffff), 0)
                        sub_142a47ff0(&var_128)
                    else
                        sub_142a4afe0(&var_1a8)
                        int32_t r8_46
                        
                        if (var_1a0_1 s< 0)
                            r8_46 = var_19c
                        else
                            r8_46 = sx.d(var_1a0_1) s>> 5
                        
                        var_2d0_5.d = rdi_19
                        var_2d8_6.d = 0
                        sub_142a49390(&var_1a8, 0, r8_46, rax_53, var_2d8_6.d, var_2d0_5.d)
            else
                var_29c = 0
                sub_142a47e10(&var_128, &var_e8, 0xffffffff)
                var_294 = false
                char* rax_47 = sub_141a50850(r12_2 + 8)
                int16_t* rax_49 =
                    sub_142aaa5f0(sub_142a4a210(&var_128), rax_47, 1, &var_294, &var_288, &var_29c)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_106 = &var_1a8
                
                if (var_29c s<= 0)
                    int32_t rdi_17 = var_288.d
                    sub_142a4afe0(rcx_106)
                    int32_t r8_42
                    
                    if (var_1a0_1 s< 0)
                        r8_42 = var_19c
                    else
                        r8_42 = sx.d(var_1a0_1) s>> 5
                    
                    var_2d0_5.d = rdi_17
                    var_2d8_6.d = 0
                    sub_142a49390(&var_1a8, 0, r8_42, rax_49, var_2d8_6.d, var_2d0_5.d)
                    sub_142a47ff0(&var_128)
                else
                    sub_142a48100(rcx_106, &var_128)
                    sub_142a47ff0(&var_128)
            
            int16_t rax_55 = *(r12_2 + 0x3d8)
            int32_t rcx_124
            
            if (rax_55 s< 0)
                rcx_124 = *(r12_2 + 0x3dc)
            else
                rcx_124 = sx.d(rax_55) s>> 5
            
            int16_t rax_56 = *(r12_2 + 0x398)
            int32_t rax_58
            
            if (rax_56 s< 0)
                rax_58 = *(r12_2 + 0x39c)
            else
                rax_58 = sx.d(rax_56) s>> 5
            
            int32_t r8_48
            
            if (var_1a0_1 s< 0)
                r8_48 = var_19c
            else
                r8_48 = sx.d(var_1a0_1) s>> 5
            
            var_2d0_5.d = rax_58
            var_2d8_6.d = 0
            sub_142a49d10(&var_1a8, 0, r8_48, r12_2 + 0x390, var_2d8_6.d, var_2d0_5.d, 
                r12_2 + 0x3d0, 0, rcx_124)
            int16_t rax_59 = *(r12_2 + 0x458)
            int32_t rcx_127
            
            if (rax_59 s< 0)
                rcx_127 = *(r12_2 + 0x45c)
            else
                rcx_127 = sx.d(rax_59) s>> 5
            
            int16_t rax_60 = *(r12_2 + 0x418)
            int32_t rax_62
            
            if (rax_60 s< 0)
                rax_62 = *(r12_2 + 0x41c)
            else
                rax_62 = sx.d(rax_60) s>> 5
            
            int32_t r8_50
            
            if (var_1a0_1 s< 0)
                r8_50 = var_19c
            else
                r8_50 = sx.d(var_1a0_1) s>> 5
            
            var_2d0_5.d = rax_62
            var_2d8_6.d = 0
            sub_142a49d10(&var_1a8, 0, r8_50, r12_2 + 0x410, var_2d8_6.d, var_2d0_5.d, 
                r12_2 + 0x450, 0, rcx_127)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_63 =
                sub_142a47e10(&var_128, &var_e8, 0xffffffff)
            char rdi_14
            
            if ((var_1a0_1.b & 1) == 0)
                int32_t r8_52
                
                if (var_1a0_1 s< 0)
                    r8_52 = var_19c
                else
                    r8_52 = sx.d(var_1a0_1) s>> 5
                
                int16_t rax_65 = rax_63[1].w
                int32_t rax_67
                
                if (rax_65 s< 0)
                    rax_67 = *(rax_63 + 0xc)
                else
                    rax_67 = sx.d(rax_65) s>> 5
                
                char rax_68
                
                if ((rax_63[1].b & 1) == 0 && r8_52 == rax_67)
                    rax_68 = sub_142a490e0(&var_1a8, rax_63, r8_52)
                
                if ((rax_63[1].b & 1) != 0 || r8_52 != rax_67 || rax_68 == 0)
                    rdi_14 = 0
                else
                    rdi_14 = 1
            else
                rdi_14 = rax_63[1].b & 1
            
            sub_142a47ff0(&var_128)
            
            if (rdi_14 != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_69 =
                    sub_142a47e10(&var_128, _Str1, 0xffffffff)
                
                if ((var_220_1.b & 1) == 0)
                    int32_t r8_54
                    
                    if (var_220_1 s< 0)
                        r8_54 = var_21c
                    else
                        r8_54 = sx.d(var_220_1) s>> 5
                    
                    int16_t rcx_136 = rax_69[1].w
                    int32_t rcx_138
                    
                    if (rcx_136 s< 0)
                        rcx_138 = *(rax_69 + 0xc)
                    else
                        rcx_138 = sx.d(rcx_136) s>> 5
                    
                    char rax_70
                    
                    if ((rax_69[1].b & 1) == 0 && r8_54 == rcx_138)
                        rax_70 = sub_142a490e0(&var_228, rax_69, r8_54)
                    
                    if ((rax_69[1].b & 1) != 0 || r8_54 != rcx_138 || rax_70 == 0)
                        rdi_14 = 0
                    else
                        rdi_14 = 1
                else
                    rdi_14 = rax_69[1].b & 1
                
                sub_142a47ff0(&var_128)
                
                if (rdi_14 != 0)
                    if ((var_160_1 & 0xffe0) != 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_248 =
                            &var_168
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_240_1 =
                            &var_228
                        var_2a0 = 0
                        var_2d0_5.d = 0
                        sub_142b62d70(r12_2 + 0x2c0, &var_248, 2, &var_168, 0, var_2d0_5.d, 
                            &var_2a0)
                    else
                        sub_142a48aa0(&var_168, &var_228, 0)
                    
                    var_2a8.w = 0x3d
                    void* rax_71 = sub_142a48d70(&var_168, &var_2a8, 0, 1)
                    int32_t r9_52
                    
                    if (var_1a0_1 s< 0)
                        r9_52 = var_19c
                    else
                        r9_52 = sx.d(var_1a0_1) s>> 5
                    
                    sub_142a48d00(rax_71, &var_1a8, 0, r9_52)
                else
                    var_128 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_120_1 = 2
                    sub_142b62a90(r12_2 + 0x340, &var_228, &var_1a8, &var_128, &var_290)
                    
                    if ((var_160_1 & 0xffe0) != 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_258 =
                            &var_168
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_250_1 =
                            &var_128
                        var_29c = 0
                        var_2d0_5.d = 0
                        sub_142b62d70(r12_2 + 0x2c0, &var_258, 2, &var_168, 0, var_2d0_5.d, 
                            &var_29c)
                    else
                        sub_142a48aa0(&var_168, &var_128, 0)
                    
                    sub_142a47ff0(&var_128)
            else if ((var_160_1 & 0xffe0) != 0)
                var_280 = &var_168
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_278_3 = &var_1a8
                var_29c = 0
                var_2d0_5.d = 0
                sub_142b62d70(r12_2 + 0x2c0, &var_280, 2, &var_168, 0, var_2d0_5.d, &var_29c)
            else
                sub_142a48aa0(&var_168, &var_1a8, 0)
            
            char* _Str1_2 = (*rax_33)->__offset(0x20).q(rax_33, 0, &var_290)
            _Str1 = _Str1_2
            rdi_13 = arg2
            
            if (_Str1_2 == 0)
                goto label_142b8aa89
            
            continue
else
    sub_142a4ab40(arg3)
    result = arg3

__security_check_cookie(rax_1 ^ &var_2f8)
return result
