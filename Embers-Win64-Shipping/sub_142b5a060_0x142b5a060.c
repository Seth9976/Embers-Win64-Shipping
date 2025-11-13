// 函数: sub_142b5a060
// 地址: 0x142b5a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_380 = -2
void var_558
int64_t rax_1 = __security_cookie ^ &var_558
char* rbx = arg3
char** rdi = arg2
char** var_520 = arg2
int32_t var_510 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
void** var_438 = arg1 + 0x58
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
void* r12 = arg1 + 0x90
*r12 = 0
*(arg1 + 0x98) = 0
*(arg1 + 0xa0) = 0
*(arg1 + 0xa8) = 0
void* var_518 = arg1 + 0xb0
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe8) = 0
*(arg1 + 0xf0) = 0
*(arg1 + 0xf8) = 0
*(arg1 + 0x100) = 0
*(arg1 + 0x108) = 0
*(arg1 + 0x110) = 0
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 0
*(arg1 + 0x128) = 0
*(arg1 + 0x130) = 0
sub_142a4ab40(arg1 + 0x138)
*(arg1 + 0x178) = 0
*(arg1 + 0x180) = 0
*(arg1 + 0x188) = 0
*(arg1 + 0x190) = 0
*(arg1 + 0x198) = 0
*(arg1 + 0x1a0) = 0
*(arg1 + 0x1a8) = 0
*(arg1 + 0x1b0) = 0
*(arg1 + 0x1b8) = 0
*(arg1 + 0x1c0) = 0
*(arg1 + 0x1c8) = 0
*(arg1 + 0x1d0) = 0
*(arg1 + 0x1d8) = 0
*(arg1 + 0x1e0) = 0
__builtin_memset(arg1 + 0x1e8, 0, 0x18)
*(arg1 + 0x340) = 0
*(arg1 + 0x348) = 0
*(arg1 + 0x350) = 0
*(arg1 + 0x358) = 0
*(arg1 + 0x360) = 0
*(arg1 + 0x368) = 0
*(arg1 + 0x370) = 0
*(arg1 + 0x378) = 0
*(arg1 + 0x380) = 0
*(arg1 + 0x388) = 0
*(arg1 + 0x390) = 0
*(arg1 + 0x398) = 0
__builtin_memset(arg1 + 0x320, 0, 0x1c)
void* result = sub_142a45c20(arg1 + 0x200, rdi)

if (*arg4 s<= 0)
    void var_2b8
    sub_142b576e0(&var_2b8, arg4)
    char** rax_46 = sub_142a641c0(nullptr, sub_141a50850(rdi), arg4)
    char** rax_47 = sub_142a625a0(rax_46, "calendar", nullptr, arg4)
    
    if (*arg4 s<= 0)
        if (rbx == 0 || *rbx == 0)
            rbx = "gregorian"
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2f8
        sub_142a47e10(&var_2f8, rbx, 0xffffffff)
        void* var_338
        char var_2f0
        void* rcx_25
        
        if ((var_2f0 & 1) == 0)
            while (true)
                int16_t var_32c
                var_338 = &var_32c:1
                int32_t var_330_1 = 0x28
                var_32c = 0
                int32_t var_300_1 = 0
                sub_142a8cd50(&var_338, &var_2f8, arg4)
                int32_t rsi_1 = *arg4
                
                if (rsi_1 s<= 0)
                    void* rbx_1 = var_338
                    char** rax_48 = sub_142a62230(rax_47, rbx_1, nullptr, arg4)
                    int64_t* var_a8
                    
                    if (*arg4 != 2)
                        void var_128
                        sub_142a48100(&var_128, &var_2f8)
                        void var_e8
                        sub_142a4ab40(&var_e8)
                        void var_150
                        sub_142ae76a0(&var_150)
                        sub_142a61e60(rax_48, &data_1434cce10, &var_2b8, arg4)
                        sub_142a5f860(rax_48)
                        uint32_t i
                        uint32_t rcx_18
                        
                        if (*arg4 s<= 0)
                            int64_t rdx_8 = "gregorian" - rbx_1
                            
                            do
                                rcx_18 = zx.d(*rbx_1)
                                i = zx.d(*(rbx_1 + rdx_8))
                                
                                if (rcx_18 != i)
                                    break
                                
                                rbx_1 += 1
                            while (i != 0)
                        
                        if (*arg4 s> 0 || rcx_18 - i == 0)
                            if (var_32c.b != 0)
                                sub_142a7dcd0(var_338)
                            
                        label_142b5a660:
                            rdi = var_520
                            break
                        
                        sub_142a48100(&var_2f8, &var_e8)
                        
                        if ((var_2f0 & 1) != 0)
                            sub_142a4aa20(&var_2f8, 0, u"gregorian", 9)
                            
                            if (var_a8 != 0)
                                (**var_a8)(var_a8, 1)
                            
                        label_142b5a5fa:
                            var_a8 = nullptr
                        
                        if (var_32c.b != 0)
                            sub_142a7dcd0(var_338)
                        
                        if ((var_2f0 & 1) != 0)
                            goto label_142b5a660
                        
                        continue
                    else
                        sub_142a5f860(rax_48)
                        int64_t rdx_6 = "gregorian" - rbx_1
                        uint32_t i_1
                        uint32_t rcx_9
                        
                        do
                            rcx_9 = zx.d(*rbx_1)
                            i_1 = zx.d(*(rbx_1 + rdx_6))
                            
                            if (rcx_9 != i_1)
                                break
                            
                            rbx_1 += 1
                        while (i_1 != 0)
                        
                        if (rcx_9 - i_1 != 0)
                            sub_142a4aa20(&var_2f8, 0, u"gregorian", 9)
                            
                            if (var_a8 != 0)
                                (**var_a8)(var_a8, 1)
                            
                            *arg4 = rsi_1
                            goto label_142b5a5fa
                
                if (var_32c.b == 0)
                    goto label_142b5c80a
                
                rcx_25 = var_338
                goto label_142b5c7fd
        
        int16_t var_36c
        void* var_378 = &var_36c:1
        int32_t var_370_1 = 0x28
        var_36c = 0
        int32_t var_340_1 = 0
        int32_t var_528 = *arg4
        void* rax_52 = sub_142a98f00(7)
        *(arg1 + 0x1b8) = rax_52
        
        if (rax_52 != 0)
            int32_t var_340_2 = 0
            *var_378 = 0
            int64_t* rax_58 = sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "monthPatterns", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "format", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                "wide", 0xffffffff, &var_528)
            sub_142b59f60(*(arg1 + 0x1b8), 0, &var_2b8, rax_58, &var_528)
            int32_t var_340_3 = 0
            *var_378 = 0
            int64_t* rax_64 = sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "monthPatterns", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "format", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                "abbreviated", 0xffffffff, &var_528)
            sub_142b59f60(*(arg1 + 0x1b8), 1, &var_2b8, rax_64, &var_528)
            int32_t var_340_4 = 0
            *var_378 = 0
            int64_t* rax_70 = sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "monthPatterns", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "format", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                "narrow", 0xffffffff, &var_528)
            sub_142b59f60(*(arg1 + 0x1b8), 2, &var_2b8, rax_70, &var_528)
            int32_t var_340_5 = 0
            *var_378 = 0
            int64_t* rax_76 = sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "monthPatterns", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "stand-alone", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                "wide", 0xffffffff, &var_528)
            sub_142b59f60(*(arg1 + 0x1b8), 3, &var_2b8, rax_76, &var_528)
            int32_t var_340_6 = 0
            *var_378 = 0
            int64_t* rax_82 = sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "monthPatterns", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "stand-alone", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                "abbreviated", 0xffffffff, &var_528)
            sub_142b59f60(*(arg1 + 0x1b8), 4, &var_2b8, rax_82, &var_528)
            int32_t var_340_7 = 0
            *var_378 = 0
            int64_t* rax_88 = sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "monthPatterns", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "stand-alone", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                "narrow", 0xffffffff, &var_528)
            sub_142b59f60(*(arg1 + 0x1b8), 5, &var_2b8, rax_88, &var_528)
            int32_t var_340_8 = 0
            *var_378 = 0
            int64_t* rax_94 = sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "monthPatterns", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "numeric", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                &data_143670434, 0xffffffff, &var_528)
            sub_142b59f60(*(arg1 + 0x1b8), 6, &var_2b8, rax_94, &var_528)
            
            if (var_528 s> 0)
                int64_t* rcx_74 = *(arg1 + 0x1b8)
                
                if (rcx_74 != 0)
                    if (rcx_74[-1] == 0)
                        j_sub_140a74f90(&rcx_74[-1])
                    else
                        (**rcx_74)(rcx_74, 3)
                
                *(arg1 + 0x1b8) = 0
            else
                void* rdx_24 = *(arg1 + 0x1b8)
                
                if ((*(rdx_24 + 0x48) & 0xffe0) == 0)
                    sub_142a48aa0(rdx_24 + 0x40, rdx_24, 0)
                
                void* rcx_69 = *(arg1 + 0x1b8)
                
                if ((*(rcx_69 + 0x88) & 0xffe0) == 0)
                    sub_142a48aa0(rcx_69 + 0x80, rcx_69 + 0x140, 0)
                
                void* rdx_26 = *(arg1 + 0x1b8)
                
                if ((*(rdx_26 + 0xc8) & 0xffe0) == 0)
                    sub_142a48aa0(rdx_26 + 0xc0, rdx_26, 0)
                
                void* rcx_72 = *(arg1 + 0x1b8)
                
                if ((*(rcx_72 + 0x108) & 0xffe0) == 0)
                    sub_142a48aa0(rcx_72 + 0x100, rcx_72 + 0x40, 0)
                
                *(arg1 + 0x1c0) = 7
        
        var_528 = *arg4
        int32_t var_340_9 = 0
        *var_378 = 0
        int64_t* rax_103 = sub_142a8cb30(
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "cyclicNameSets", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "years", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                "format", 0xffffffff, &var_528), 
            0x2f, &var_528)
        int64_t* rax_104 = sub_142a8cbd0(rax_103, "abbreviated", 0xffffffff, &var_528)
        int64_t* var_2b0
        int64_t* var_258
        
        if (var_528 s<= 0)
            sub_142a47e10(&var_338, *rax_104, 0xffffffff)
            int64_t rax_105 = sub_142a86c30(var_2b0, &var_338)
            
            if (rax_105 == 0)
                *(arg1 + 0x1d0) = 0
                var_528 = 2
            else
                *(arg1 + 0x1d0) = sub_142a86c70(var_258, &var_338)
                *(arg1 + 0x1c8) = rax_105
                j_sub_142a868c0(var_2b0, &var_338)
            
            sub_142a47ff0(&var_338)
        
        int32_t var_340_10 = 0
        *var_378 = 0
        int64_t* rax_113 = sub_142a8cb30(
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(
                            sub_142a8cbd0(&var_378, "cyclicNameSets", 0xffffffff, &var_528), 0x2f, 
                            &var_528), 
                        "zodiacs", 0xffffffff, &var_528), 
                    0x2f, &var_528), 
                "format", 0xffffffff, &var_528), 
            0x2f, &var_528)
        int64_t* rax_114 = sub_142a8cbd0(rax_113, "abbreviated", 0xffffffff, &var_528)
        
        if (var_528 s<= 0)
            sub_142a47e10(&var_338, *rax_114, 0xffffffff)
            int64_t rax_115 = sub_142a86c30(var_2b0, &var_338)
            
            if (rax_115 == 0)
                *(arg1 + 0x1e0) = 0
                var_528 = 2
            else
                *(arg1 + 0x1e0) = sub_142a86c70(var_258, &var_338)
                *(arg1 + 0x1d8) = rax_115
                j_sub_142a868c0(var_2b0, &var_338)
            
            sub_142a47ff0(&var_338)
        
        var_528 = 0
        char** rax_117 = sub_142a641c0(nullptr, rdi[5], &var_528)
        
        if (var_528 s<= 0)
            char** rax_118 = sub_142a62230(rax_117, "contextTransforms", nullptr, &var_528)
            
            if (var_528 s<= 0)
                char** i_4 = sub_142a63800(rax_118, nullptr, &var_528)
                char** i_3 = i_4
                
                if (i_4 != 0)
                    char** i_2
                    
                    do
                        void* rax_119 = sub_142a63700(i_3, &var_510, arg4)
                        
                        if (var_528 s<= 0 && rax_119 != 0 && var_510 s>= 2)
                            char* rax_120 = sub_142a63790(i_3)
                            
                            if (rax_120 != 0)
                                char const (** const r8_33)[0x19] = &data_1436705c0
                                
                                for (char const (* j)[0x19] = "day-format-except-narrow"; j != 0; 
                                        j = *r8_33)
                                    char* rcx_105 = rax_120
                                    int32_t rcx_104
                                    
                                    while (true)
                                        char rax_121 = *rcx_105
                                        char temp2_1 = *(rcx_105 + j - rax_120)
                                        
                                        if (rax_121 != temp2_1)
                                            rcx_104 =
                                                sbb.d(rcx_105.d, rcx_105.d, rax_121 u< temp2_1) | 1
                                            break
                                        
                                        rcx_105 = &rcx_105[1]
                                        
                                        if (rax_121 == 0)
                                            rcx_104 = 0
                                            break
                                    
                                    if (rcx_104 s<= 0)
                                        if (*r8_33 != 0 && rcx_104 == 0)
                                            *(arg1 + (sx.q(r8_33[1].d) << 1) + 0x320) = *rax_119
                                            *(arg1 + (sx.q(r8_33[1].d) << 1) + 0x321) =
                                                *(rax_119 + 4)
                                        
                                        break
                                    
                                    r8_33 = &r8_33[2]
                        
                        var_528 = 0
                        sub_142a5f860(i_3)
                        i_2 = sub_142a63800(rax_118, nullptr, &var_528)
                        i_3 = i_2
                    while (i_2 != 0)
                    rdi = var_520
                
                sub_142a5f860(rax_118)
            
            var_528 = 0
            struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_124 =
                sub_142aab3f0(rdi, &var_528)
            struct icu_64::UObject::icu_64::NumberingSystem::VTable** var_4d8_1 = rax_124
            int32_t rcx_113 = var_528
            
            if (rax_124 == 0)
                if (rcx_113 s<= 0)
                    rcx_113 = 7
                
                var_528 = rcx_113
            
            if (rcx_113 s<= 0)
                char** rax_125 = sub_142a62230(rax_117, "NumberElements", nullptr, &var_528)
                var_520 = rax_125
                char** rax_127 = sub_142a62230(rax_125, sub_142aabaa0(rax_124), nullptr, &var_528)
                char** var_388_1 = rax_127
                char** rax_128 = sub_142a62230(rax_127, "symbols", nullptr, &var_528)
                char** var_4d0_1 = rax_128
                sub_142a48050(arg1 + 0x138, 
                    sub_142aabac0(&var_338, rax_128, "timeSeparator", &var_528))
                sub_142a47ff0(&var_338)
                
                if (var_528 s> 0)
                    sub_142a4ab40(arg1 + 0x138)
                
                if (rax_128 != 0)
                    sub_142a5f860(rax_128)
                
                if (rax_127 != 0)
                    sub_142a5f860(rax_127)
                
                if (rax_125 != 0)
                    sub_142a5f860(rax_125)
            
            sub_142a5f860(rax_117)
            
            if (rax_124 != 0)
                (*rax_124)->__offset(0x0).q(rax_124, 1)
            
            r12 = arg1 + 0x90
        
        if ((*(arg1 + 0x140) & 1) != 0)
            sub_142adbb40(arg1 + 0x138, 0x3a)
        
        int32_t var_340_11 = 0
        *var_378 = 0
        void* rax_137 = sub_142b5c8f0(&var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayPeriod", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            arg1 + 0x358, arg4)
        *(arg1 + 0x350) = rax_137
        int32_t var_340_12 = 0
        *var_378 = 0
        void* rax_144 = sub_142b5c8f0(&var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayPeriod", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "narrow", 0xffffffff, arg4), 
            arg1 + 0x368, arg4)
        *(arg1 + 0x360) = rax_144
        int32_t var_340_13 = 0
        *var_378 = 0
        void* rax_151 = sub_142b5c8f0(&var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayPeriod", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "abbreviated", 0xffffffff, arg4), 
            arg1 + 0x348, arg4)
        *(arg1 + 0x340) = rax_151
        int32_t var_340_14 = 0
        *var_378 = 0
        void* rax_158 = sub_142b5c8f0(&var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayPeriod", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            arg1 + 0x388, arg4)
        *(arg1 + 0x380) = rax_158
        int32_t var_340_15 = 0
        *var_378 = 0
        void* rax_165 = sub_142b5c8f0(&var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayPeriod", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "narrow", 0xffffffff, arg4), 
            arg1 + 0x398, arg4)
        *(arg1 + 0x390) = rax_165
        int32_t var_340_16 = 0
        *var_378 = 0
        void* rax_172 = sub_142b5c8f0(&var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayPeriod", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "abbreviated", 0xffffffff, arg4), 
            arg1 + 0x378, arg4)
        *(arg1 + 0x370) = rax_172
        void* var_398 = arg1 + 0x39c
        void* var_390_1 = arg1 + 0x439
        char* rax_175 = sub_142a637a0(rax_47, 0, arg4)
        sub_142a9ba50(&var_398, sub_142a637a0(rax_47, 1, arg4), rax_175)
        int32_t var_340_17 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 8, arg1 + 0x10, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(sub_142a8cbd0(&var_378, "eras", 0xffffffff, arg4), 0x2f, arg4), 
                "abbreviated", 0xffffffff, arg4), 
            arg4)
        int32_t rbx_6 = *arg4
        int32_t var_340_18 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x18, arg1 + 0x20, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(sub_142a8cbd0(&var_378, "eras", 0xffffffff, arg4), 0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            arg4)
        
        if (*arg4 == 2)
            *arg4 = rbx_6
            sub_142b58620(arg1 + 0x18, arg1 + 0x20, *(arg1 + 8), *(arg1 + 0x10))
        
        int32_t rbx_7 = *arg4
        int32_t var_340_19 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x28, arg1 + 0x30, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(sub_142a8cbd0(&var_378, "eras", 0xffffffff, arg4), 0x2f, arg4), 
                "narrow", 0xffffffff, arg4), 
            arg4)
        
        if (*arg4 == 2)
            *arg4 = rbx_7
            sub_142b58620(arg1 + 0x28, arg1 + 0x30, *(arg1 + 8), *(arg1 + 0x10))
        
        int32_t var_340_20 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x38, arg1 + 0x40, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "monthNames", 0xffffffff, arg4), 
                            0x2f, arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            arg4)
        int32_t var_340_21 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x48, arg1 + 0x50, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "monthNames", 0xffffffff, arg4), 
                            0x2f, arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "abbreviated", 0xffffffff, arg4), 
            arg4)
        int32_t var_340_22 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x68, arg1 + 0x70, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "monthNames", 0xffffffff, arg4), 
                            0x2f, arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            arg4)
        
        if (*arg4 == 2)
            *arg4 = 0
            sub_142b58620(arg1 + 0x68, arg1 + 0x70, *(arg1 + 0x38), *(arg1 + 0x40))
        
        int32_t var_340_23 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x78, arg1 + 0x80, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "monthNames", 0xffffffff, arg4), 
                            0x2f, arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "abbreviated", 0xffffffff, arg4), 
            arg4)
        
        if (*arg4 == 2)
            *arg4 = 0
            sub_142b58620(arg1 + 0x78, arg1 + 0x80, *(arg1 + 0x48), *(arg1 + 0x50))
        
        int32_t rbx_8 = *arg4
        int32_t var_524 = rbx_8
        int32_t var_340_24 = 0
        *var_378 = 0
        int64_t* rax_218 = sub_142a8cbd0(
            sub_142a8cb30(
                sub_142a8cbd0(
                    sub_142a8cb30(sub_142a8cbd0(&var_378, "monthNames", 0xffffffff, &var_524), 
                        0x2f, &var_524), 
                    "format", 0xffffffff, &var_524), 
                0x2f, &var_524), 
            "narrow", 0xffffffff, &var_524)
        void* rsi_4
        
        if (var_524 s> 0)
            rsi_4 = arg1 + 0x60
        else
            sub_142a47e10(&var_338, *rax_218, 0xffffffff)
            int64_t rax_219 = sub_142a86c30(var_2b0, &var_338)
            
            if (rax_219 == 0)
                rsi_4 = arg1 + 0x60
                *rsi_4 = 0
                var_524 = 2
            else
                rsi_4 = arg1 + 0x60
                *rsi_4 = sub_142a86c70(var_258, &var_338)
                *(arg1 + 0x58) = rax_219
                j_sub_142a868c0(var_2b0, &var_338)
            
            sub_142a47ff0(&var_338)
        
        int32_t var_340_25 = 0
        *var_378 = 0
        int64_t* rax_226 = sub_142a8cbd0(
            sub_142a8cb30(
                sub_142a8cbd0(
                    sub_142a8cb30(sub_142a8cbd0(&var_378, "monthNames", 0xffffffff, &var_524), 
                        0x2f, &var_524), 
                    "stand-alone", 0xffffffff, &var_524), 
                0x2f, &var_524), 
            "narrow", 0xffffffff, &var_524)
        void** r13_3
        
        if (rbx_8 s> 0)
            r13_3 = arg1 + 0x88
        else
            sub_142a47e10(&var_338, *rax_226, 0xffffffff)
            void* rax_227 = sub_142a86c30(var_2b0, &var_338)
            
            if (rax_227 == 0)
                *r12 = 0
                rbx_8 = 2
                r13_3 = arg1 + 0x88
            else
                *r12 = sub_142a86c70(var_258, &var_338)
                r13_3 = arg1 + 0x88
                *r13_3 = rax_227
                j_sub_142a868c0(var_2b0, &var_338)
            
            sub_142a47ff0(&var_338)
        
        void* r8_82
        int32_t r9_109
        
        if (var_524 == 2)
            void** rcx_227 = arg1 + 0x58
            
            if (rbx_8 == 2)
                sub_142b58620(rcx_227, rsi_4, *(arg1 + 0x48), *(arg1 + 0x50))
                r9_109 = *(arg1 + 0x50)
                r8_82 = *(arg1 + 0x48)
                goto label_142b5bad8
            
            sub_142b58620(rcx_227, rsi_4, *r13_3, *r12)
        else if (rbx_8 == 2)
            r9_109 = *rsi_4
            r8_82 = *(arg1 + 0x58)
        label_142b5bad8:
            sub_142b58620(r13_3, r12, r8_82, r9_109)
        int32_t var_340_26 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x118, arg1 + 0x120, &var_2b8, 
            sub_142a8cbd0(&var_378, "AmPmMarkers", 0xffffffff, arg4), arg4)
        int32_t var_340_27 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x128, arg1 + 0x130, &var_2b8, 
            sub_142a8cbd0(&var_378, "AmPmMarkersNarrow", 0xffffffff, arg4), arg4)
        int32_t var_340_28 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x178, arg1 + 0x180, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "quarters", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            arg4)
        int32_t var_340_29 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x188, arg1 + 0x190, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "quarters", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "abbreviated", 0xffffffff, arg4), 
            arg4)
        int32_t var_340_30 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x198, arg1 + 0x1a0, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "quarters", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            arg4)
        
        if (*arg4 == 2)
            *arg4 = 0
            sub_142b58620(arg1 + 0x198, arg1 + 0x1a0, *(arg1 + 0x178), *(arg1 + 0x180))
        
        int32_t var_340_31 = 0
        *var_378 = 0
        sub_142b59c80(arg1 + 0x1a8, arg1 + 0x1b0, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "quarters", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "abbreviated", 0xffffffff, arg4), 
            arg4)
        
        if (*arg4 == 2)
            *arg4 = 0
            sub_142b58620(arg1 + 0x1a8, arg1 + 0x1b0, *(arg1 + 0x188), *(arg1 + 0x190))
        
        sub_142a4aa20(arg1 + 0x2e0, 1, u"GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxrbB", 0x25)
        int32_t var_340_32 = 0
        *var_378 = 0
        int32_t* var_538_20
        var_538_20.d = 1
        sub_142b59d40(arg1 + 0x98, arg1 + 0xa0, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayNames", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            var_538_20.d, arg4)
        int32_t var_340_33 = 0
        *var_378 = 0
        int64_t* rax_268 = sub_142a8cbd0(
            sub_142a8cb30(
                sub_142a8cbd0(
                    sub_142a8cb30(sub_142a8cbd0(&var_378, "dayNames", 0xffffffff, arg4), 0x2f, 
                        arg4), 
                    "format", 0xffffffff, arg4), 
                0x2f, arg4), 
            "abbreviated", 0xffffffff, arg4)
        var_538_20.d = 1
        int32_t* rdi_6 = var_518
        sub_142b59d40(arg1 + 0xa8, rdi_6, &var_2b8, rax_268, var_538_20.d, arg4)
        int32_t var_340_34 = 0
        *var_378 = 0
        var_538_20.d = 1
        sub_142b59d40(arg1 + 0xb8, arg1 + 0xc0, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayNames", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "short", 0xffffffff, arg4), 
            var_538_20.d, arg4)
        
        if (*arg4 == 2)
            *arg4 = 0
            sub_142b58620(arg1 + 0xb8, arg1 + 0xc0, *(arg1 + 0xa8), *rdi_6)
        
        int32_t var_340_35 = 0
        *var_378 = 0
        var_538_20.d = 1
        sub_142b59d40(arg1 + 0xd8, arg1 + 0xe0, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayNames", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "wide", 0xffffffff, arg4), 
            var_538_20.d, arg4)
        
        if (*arg4 == 2)
            *arg4 = 0
            sub_142b58620(arg1 + 0xd8, arg1 + 0xe0, *(arg1 + 0x98), *(arg1 + 0xa0))
        
        int32_t var_340_36 = 0
        *var_378 = 0
        var_538_20.d = 1
        sub_142b59d40(arg1 + 0xe8, arg1 + 0xf0, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayNames", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "abbreviated", 0xffffffff, arg4), 
            var_538_20.d, arg4)
        
        if (*arg4 == 2)
            *arg4 = 0
            sub_142b58620(arg1 + 0xe8, arg1 + 0xf0, *(arg1 + 0xa8), *rdi_6)
        
        int32_t var_340_37 = 0
        *var_378 = 0
        var_538_20.d = 1
        sub_142b59d40(arg1 + 0xf8, arg1 + 0x100, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayNames", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "short", 0xffffffff, arg4), 
            var_538_20.d, arg4)
        
        if (*arg4 == 2)
            *arg4 = 0
            sub_142b58620(arg1 + 0xf8, arg1 + 0x100, *(arg1 + 0xb8), *(arg1 + 0xc0))
        
        var_520.d = *arg4
        int32_t var_340_38 = 0
        *var_378 = 0
        var_538_20.d = 1
        sub_142b59d40(arg1 + 0xc8, arg1 + 0xd0, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayNames", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "format", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "narrow", 0xffffffff, arg4), 
            var_538_20.d, &var_520)
        var_518.d = *arg4
        int32_t var_340_39 = 0
        *var_378 = 0
        var_538_20.d = 1
        sub_142b59d40(arg1 + 0x108, arg1 + 0x110, &var_2b8, 
            sub_142a8cbd0(
                sub_142a8cb30(
                    sub_142a8cbd0(
                        sub_142a8cb30(sub_142a8cbd0(&var_378, "dayNames", 0xffffffff, arg4), 0x2f, 
                            arg4), 
                        "stand-alone", 0xffffffff, arg4), 
                    0x2f, arg4), 
                "narrow", 0xffffffff, arg4), 
            var_538_20.d, &var_518)
        
        if (var_520.d == 2)
            void* rdx_148 = arg1 + 0xd0
            void** rcx_311 = arg1 + 0xc8
            
            if (var_518.d == 2)
                sub_142b58620(rcx_311, rdx_148, *(arg1 + 0xa8), *rdi_6)
                sub_142b58620(arg1 + 0x108, arg1 + 0x110, *(arg1 + 0xa8), *rdi_6)
            else
                sub_142b58620(rcx_311, rdx_148, *(arg1 + 0x108), *(arg1 + 0x110))
        else if (var_518.d == 2)
            sub_142b58620(arg1 + 0x108, arg1 + 0x110, *(arg1 + 0xc8), *(arg1 + 0xd0))
        
        if (*arg4 s> 0 && arg5 != 0)
            *arg4 = 0xffffff80
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 8, arg1 + 0x10, &data_1436705b0, 2, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 0x18, arg1 + 0x20, &data_1436705b0, 2, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 0x28, arg1 + 0x30, &data_1436705b0, 2, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 0x38, arg1 + 0x40, &data_143670530, 0xd, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 0x48, arg1 + 0x50, &data_143670530, 0xd, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(var_438, rsi_4, &data_143670530, 0xd, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 0x68, arg1 + 0x70, &data_143670530, 0xd, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 0x78, arg1 + 0x80, &data_143670530, 0xd, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(r13_3, r12, &data_143670530, 0xd, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0x98, arg1 + 0xa0, U"01234567", 8, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0xa8, rdi_6, U"01234567", 8, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0xb8, arg1 + 0xc0, U"01234567", 8, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0xc8, arg1 + 0xd0, U"01234567", 8, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0xd8, arg1 + 0xe0, U"01234567", 8, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0xe8, arg1 + 0xf0, U"01234567", 8, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0xf8, arg1 + 0x100, U"01234567", 8, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0x108, arg1 + 0x110, U"01234567", 8, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 0x118, arg1 + 0x120, &data_143670590, 2, var_538_20.d, arg4)
            var_538_20.d = 3
            sub_142b59ec0(arg1 + 0x128, arg1 + 0x130, &data_143670590, 2, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0x178, arg1 + 0x180, U"1234", 4, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0x188, arg1 + 0x190, U"1234", 4, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0x198, arg1 + 0x1a0, U"1234", 4, var_538_20.d, arg4)
            var_538_20.d = 2
            sub_142b59ec0(arg1 + 0x1a8, arg1 + 0x1b0, U"1234", 4, var_538_20.d, arg4)
            sub_142a4aa20(arg1 + 0x2e0, 1, u"GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxrbB", 0x25)
        
        sub_142a5f860(rax_47)
        sub_142a5f860(rax_46)
        
        if (var_36c.b != 0)
            rcx_25 = var_378
        label_142b5c7fd:
            sub_142a7dcd0(rcx_25)
        
    label_142b5c80a:
        sub_142a47ff0(&var_2f8)
    
    result = sub_142b57b20(&var_2b8)

__security_check_cookie(rax_1 ^ &var_558)
return result
