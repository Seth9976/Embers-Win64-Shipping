// 函数: sub_140b7ff40
// 地址: 0x140b7ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_508
int64_t var_38 = __security_cookie ^ &var_508
uint64_t rdi
rdi.b = 1
void* rdx = *(arg1 + 8)

if (rdx != 0)
    int32_t var_bc_1 = 0x80
    int64_t var_e8 = 0
    int32_t var_e0_1 = 0
    int64_t var_d8
    __builtin_memset(&var_d8, 0, 0x1c)
    int32_t var_b4_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    int32_t var_b8_1 = 0xffffffff
    sub_140b7fce0(arg2, rdx + 0x38, &var_e8)
    
    if (var_e0_1 - var_b4_1 s> 0)
        int64_t var_4e8
        sub_140a96170(&var_4e8)
        int64_t* var_4b0_1 = &var_d8
        int32_t rcx_2 = 0
        int32_t var_4b8_1 = 0
        int32_t r8_2 = 0
        int32_t var_4b4_1 = 1
        int32_t var_4a8_1 = 0xffffffff
        int64_t var_4a4_1 = 0
        int32_t var_c0
        
        if (var_c0 != 0)
            int64_t* r10_1 = &var_d8
            int64_t* var_c8
            
            if (var_c8 != 0)
                r10_1 = var_c8
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(var_c0 - 1)
            int32_t rdx_4 = *r10_1
            
            if (rdx_4 != 0)
            label_140b8009c:
                int32_t rax_11 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_11)
                int32_t var_4b4_2 = rax_11
                int32_t var_3b0_1 = temp0_1
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_1
                
                int32_t rax_13 = r8_2 - rax_12 + 0x1f
                
                if (rax_13 s> var_c0)
                    rax_13 = var_c0
                
                var_4a4_1.d = rax_13
            else
                while (true)
                    int64_t rax_8 = sx.q(rcx_2)
                    r8_2 += 0x20
                    rcx_2 += 1
                    var_4a4_1:4.d = r8_2
                    var_4b8_1 = rcx_2
                    
                    if (rax_8.d s>= ((temp1_1 & 0x1f) + temp2_1) s>> 5)
                        var_4a4_1.d = var_c0
                        break
                    
                    rdx_4 = *(r10_1 + (rax_8 << 2) + 4)
                    int32_t var_4a8_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_140b8009c
        
        int64_t* var_310 = &var_e8
        double var_308_1[0x2] = var_4b8_1.o
        int128_t var_2f8_1 = 0xffffffff
        double var_3d8[0x2] = var_310.o
        int64_t var_3b8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s< var_c0)
            int32_t i = var_308_1[1]:4.d
            
            do
                double r8_4 = var_3d8[0]
                rdi = zx.q(*(*r8_4 + sx.q(i) * 0x14 + 8))
                
                if (rdi.d != 0)
                    int64_t var_4d0
                    sub_140aae2b0(&var_4d0, *r8_4 + sx.q(i) * 0x14)
                    int64_t* var_4e0
                    int64_t* var_4c8
                    int32_t var_4c0
                    
                    if (rdi.d != 1)
                        if (rdi.d == 2)
                            int64_t rsi_5 = var_4d0
                            
                            if (var_4c8 != 0)
                                var_4c8[1].d += 1
                            
                            void var_260
                            char* var_1b0
                            char** rax_61 = sub_140a96390(&var_1b0, 
                                _vfprintf_p_l(&var_260, 
                                    The game module '{0}' does not appear to be up to date. This may happen "
                            "after updating the engine. Please recompile this module and try "
                            "again.", 
                                ProjectManager"))
                            int32_t var_150_1 = 4
                            
                            if (var_4c8 != 0)
                                var_4c8[1].d += 1
                            
                            char var_128_1 = 1
                            int32_t* var_488 = nullptr
                            int32_t var_480_1 = 1
                            sub_1405a4b40(&var_488, 1, 0)
                            int32_t* rcx_29 = var_488
                            *rcx_29 = var_150_1
                            int64_t var_148
                            *(rcx_29 + 8) = var_148
                            *(rcx_29 + 8) = var_148
                            rcx_29[2] = var_148.d
                            *(rcx_29 + 8) = var_148
                            rcx_29[0xa].b = 0
                            
                            if (var_128_1 != 0)
                                *(rcx_29 + 0x10) = rsi_5
                                *(rcx_29 + 0x18) = var_4c8
                                
                                if (var_4c8 != 0)
                                    var_4c8[1].d += 1
                                
                                rcx_29[8] = var_4c0
                                rcx_29[0xa].b = 1
                            
                            char* var_320 = *rax_61
                            void* rax_69 = rax_61[1]
                            void* var_318_1 = rax_69
                            
                            if (rax_69 != 0)
                                *(rax_69 + 8) += 1
                            
                            void var_278
                            int64_t* rax_70 = sub_140aac870(&var_278, &var_320, &var_488)
                            int64_t rax_71 = *rax_70
                            void* rax_72 = rax_70[1]
                            
                            if (rax_72 != 0)
                                *(rax_72 + 8) += 1
                            
                            int32_t rax_73 = rax_70[2].d
                            int64_t* var_270
                            
                            if (var_270 != 0)
                                var_270[1].d -= 1
                                
                                if (var_270[1].d == 1)
                                    (**var_270)(var_270)
                                    int32_t rax_76 = *(var_270 + 0xc)
                                    *(var_270 + 0xc) -= 1
                                    
                                    if (rax_76 == 1)
                                        (*(*var_270 + 8))(var_270, 1)
                            
                            sub_140596f50(&var_488)
                            
                            if (var_128_1 != 0)
                                char var_128_2 = 0
                                
                                if (var_4c8 != 0)
                                    var_4c8[1].d -= 1
                                    
                                    if (var_4c8[1].d == 1)
                                        (**var_4c8)(var_4c8)
                                        int32_t rax_80 = *(var_4c8 + 0xc)
                                        *(var_4c8 + 0xc) -= 1
                                        
                                        if (rax_80 == 1)
                                            (*(*var_4c8 + 8))(var_4c8, 1)
                            
                            int64_t* rsi_8 = rax_61[1]
                            
                            if (rsi_8 != 0)
                                rsi_8[1].d -= 1
                                
                                if (rsi_8[1].d == 1)
                                    (**rsi_8)(rsi_8)
                                    int32_t rax_84 = *(rsi_8 + 0xc)
                                    *(rsi_8 + 0xc) -= 1
                                    
                                    if (rax_84 == 1)
                                        (*(*rsi_8 + 8))(rsi_8, 1)
                            
                            if (var_4c8 != 0)
                                var_4c8[1].d -= 1
                                
                                if (var_4c8[1].d == 1)
                                    (**var_4c8)(var_4c8)
                                    int32_t rax_88 = *(var_4c8 + 0xc)
                                    *(var_4c8 + 0xc) -= 1
                                    
                                    if (rax_88 == 1)
                                        (*(*var_4c8 + 8))(var_4c8, 1)
                            
                            int64_t rcx_41 = var_4e8
                            var_4e8 = rax_71
                            void* var_4e0_2 = rax_72
                            int32_t var_4d8_2 = rax_73
                            int64_t var_3f0_2 = rcx_41
                            int64_t* var_3e8_2 = var_4e0
                            
                            if (var_4e0 != 0)
                                var_4e0[1].d -= 1
                                
                                if (var_4e0[1].d == 1)
                                    (**var_4e0)(var_4e0)
                                    int32_t rax_96 = *(var_4e0 + 0xc)
                                    *(var_4e0 + 0xc) -= 1
                                    
                                    if (rax_96 == 1)
                                        (*(*var_4e0 + 8))(var_4e0, 1)
                            
                            uint64_t var_258
                            rdi = var_258
                            goto label_140b8072d
                        
                        int64_t r14_3 = var_4d0
                        int64_t** rcx_63
                        
                        if (rdi.d == 4)
                            int64_t var_378 = r14_3
                            int64_t* var_370_1 = var_4c8
                            
                            if (var_4c8 != 0)
                                var_4c8[1].d += 1
                            
                            void var_230
                            char* var_1c0
                            int64_t* rax_104 = sub_140a96390(&var_1c0, 
                                _vfprintf_p_l(&var_230, 
                                    The game module '{0}' could not be successfully initialized after it was "
                            "loaded.", 
                                ProjectManager"))
                            int32_t var_120_1 = 4
                            
                            if (var_4c8 != 0)
                                var_4c8[1].d += 1
                            
                            char var_f8_1 = 1
                            int32_t* var_478 = nullptr
                            int32_t var_470_1 = 1
                            sub_1405a4b40(&var_478, 1, 0)
                            int32_t* rcx_49 = var_478
                            *rcx_49 = var_120_1
                            int64_t var_118
                            *(rcx_49 + 8) = var_118
                            *(rcx_49 + 8) = var_118
                            rcx_49[2] = var_118.d
                            *(rcx_49 + 8) = var_118
                            rcx_49[0xa].b = 0
                            
                            if (var_f8_1 != 0)
                                *(rcx_49 + 0x10) = r14_3
                                *(rcx_49 + 0x18) = var_4c8
                                
                                if (var_4c8 != 0)
                                    var_4c8[1].d += 1
                                
                                rcx_49[8] = var_4c0
                                rcx_49[0xa].b = 1
                            
                            int64_t var_350 = *rax_104
                            void* rax_112 = rax_104[1]
                            void* var_348_1 = rax_112
                            
                            if (rax_112 != 0)
                                *(rax_112 + 8) += 1
                            
                            void var_248
                            int64_t* rax_113 = sub_140aac870(&var_248, &var_350, &var_478)
                            int64_t var_438 = *rax_113
                            void* rax_115 = rax_113[1]
                            
                            if (rax_115 != 0)
                                *(rax_115 + 8) += 1
                            
                            int32_t rax_116 = rax_113[2].d
                            int64_t* var_240
                            
                            if (var_240 != 0)
                                var_240[1].d -= 1
                                
                                if (var_240[1].d == 1)
                                    (**var_240)(var_240)
                                    int32_t rax_119 = *(var_240 + 0xc)
                                    *(var_240 + 0xc) -= 1
                                    
                                    if (rax_119 == 1)
                                        (*(*var_240 + 8))(var_240, 1)
                            
                            sub_140596f50(&var_478)
                            
                            if (var_f8_1 != 0)
                                char var_f8_2 = 0
                                
                                if (var_4c8 != 0)
                                    var_4c8[1].d -= 1
                                    
                                    if (var_4c8[1].d == 1)
                                        (**var_4c8)(var_4c8)
                                        int32_t rax_123 = *(var_4c8 + 0xc)
                                        *(var_4c8 + 0xc) -= 1
                                        
                                        if (rax_123 == 1)
                                            (*(*var_4c8 + 8))(var_4c8, 1)
                            
                            rdi = rax_104[1]
                            
                            if (rdi != 0)
                                int32_t rax_125 = *(rdi + 8)
                                *(rdi + 8) -= 1
                                
                                if (rax_125 == 1)
                                    (**rdi)(rdi)
                                    int32_t rbx_2 = *(rdi + 0xc)
                                    *(rdi + 0xc) -= 1
                                    
                                    if (rbx_2 == 1)
                                        (*(*rdi + 8))(rdi, zx.q(rbx_2))
                            
                            sub_1405970a0(&var_378)
                            int64_t rcx_60 = var_4e8
                            var_4e8 = var_438
                            var_438 = rcx_60
                            void* var_4e0_3 = rax_115
                            int64_t* var_430_2 = var_4e0
                            int32_t var_4d8_3 = rax_116
                            sub_1405970a0(&var_438)
                            rcx_63 = &var_230
                        else
                            int32_t var_68
                            
                            if (rdi.d != 3)
                                int64_t var_3a8 = r14_3
                                int64_t* var_3a0_1 = var_4c8
                                
                                if (var_4c8 != 0)
                                    var_4c8[1].d += 1
                                
                                rdi = zx.q(var_4c0)
                                int32_t var_398_1 = rdi.d
                                char* var_190
                                char** rax_144 = sub_140a96390(&var_190, 
                                    _vfprintf_p_l(&var_310, 
                                        The game module '{0}' failed to load for an unspecified reason.  "
                                "Please", 
                                    ProjectManager"))
                                var_68 = 4
                                int64_t var_58 = r14_3
                                int64_t* var_50_1 = var_4c8
                                
                                if (var_4c8 != 0)
                                    var_4c8[1].d += 1
                                    rdi = zx.q(var_398_1)
                                
                                int32_t var_48_1 = rdi.d
                                int64_t* var_440_2 = &var_38
                                char* var_330 = *rax_144
                                void* rax_146 = rax_144[1]
                                char var_40_1 = 1
                                int128_t var_2b8 = (&var_68).o
                                void* var_328_1 = rax_146
                                
                                if (rax_146 != 0)
                                    *(rax_146 + 8) += 1
                                
                                void var_2c8
                                void var_1e8
                                int64_t* rax_148 = sub_140aac870(&var_1e8, &var_330, 
                                    sub_1405d4de0(&var_2c8, &var_2b8))
                                int64_t var_468 = *rax_148
                                void* rax_150 = rax_148[1]
                                
                                if (rax_150 != 0)
                                    *(rax_150 + 8) += 1
                                
                                int32_t rax_151 = rax_148[2].d
                                sub_1405970a0(&var_1e8)
                                sub_140596f50(&var_2c8)
                                sub_1405d57e0(&var_58)
                                sub_1405970a0(rax_144)
                                sub_1405970a0(&var_3a8)
                                int64_t rcx_87 = var_4e8
                                var_4e8 = var_468
                                var_468 = rcx_87
                                void* var_4e0_5 = rax_150
                                int64_t* var_460_2 = var_4e0
                                int32_t var_4d8_5 = rax_151
                                sub_1405970a0(&var_468)
                                rcx_63 = &var_310
                            else
                                int64_t var_390 = r14_3
                                int64_t* var_388_1 = var_4c8
                                
                                if (var_4c8 != 0)
                                    var_4c8[1].d += 1
                                
                                rdi = zx.q(var_4c0)
                                int32_t var_380_1 = rdi.d
                                void var_200
                                char* var_1d0
                                char** rax_132 = sub_140a96390(&var_1d0, 
                                    _vfprintf_p_l(&var_200, 
                                        The game module '{0}' could not be loaded. There may be an operating "
                                "system error or the module may not be prop", 
                                    ProjectManager"))
                                int32_t var_98 = 4
                                int64_t var_88 = r14_3
                                int64_t* var_80_1 = var_4c8
                                
                                if (var_4c8 != 0)
                                    var_4c8[1].d += 1
                                    rdi = zx.q(var_380_1)
                                
                                int32_t var_78_1 = rdi.d
                                int32_t* var_440_1 = &var_68
                                char* var_340 = *rax_132
                                void* rax_134 = rax_132[1]
                                char var_70_1 = 1
                                int128_t var_2e8 = (&var_98).o
                                void* var_338_1 = rax_134
                                
                                if (rax_134 != 0)
                                    *(rax_134 + 8) += 1
                                
                                void var_2d8
                                void var_218
                                int64_t* rax_136 = sub_140aac870(&var_218, &var_340, 
                                    sub_1405d4de0(&var_2d8, &var_2e8))
                                int64_t var_420 = *rax_136
                                void* rax_138 = rax_136[1]
                                
                                if (rax_138 != 0)
                                    *(rax_138 + 8) += 1
                                
                                int32_t rax_139 = rax_136[2].d
                                sub_1405970a0(&var_218)
                                sub_140596f50(&var_2d8)
                                sub_1405d57e0(&var_88)
                                sub_1405970a0(rax_132)
                                sub_1405970a0(&var_390)
                                int64_t rcx_74 = var_4e8
                                var_4e8 = var_420
                                var_420 = rcx_74
                                void* var_4e0_4 = rax_138
                                int64_t* var_418_2 = var_4e0
                                int32_t var_4d8_4 = rax_139
                                sub_1405970a0(&var_420)
                                rcx_63 = &var_200
                        
                        sub_1405970a0(rcx_63)
                    else
                        int64_t rsi_1 = var_4d0
                        
                        if (var_4c8 != 0)
                            var_4c8[1].d += 1
                        
                        void var_290
                        char* var_1a0
                        char** rax_22 = sub_140a96390(&var_1a0, 
                            _vfprintf_p_l(&var_290, 
                                The game module '{0}' could not be found. Please ensure that this module "
                        "exists and that it is compiled.", 
                            ProjectManager"))
                        int32_t var_180_1 = 4
                        
                        if (var_4c8 != 0)
                            var_4c8[1].d += 1
                        
                        char var_158_1 = 1
                        int32_t* var_498 = nullptr
                        int32_t var_490_1 = 1
                        sub_1405a4b40(&var_498, 1, 0)
                        int32_t* rcx_11 = var_498
                        *rcx_11 = var_180_1
                        int64_t var_178
                        *(rcx_11 + 8) = var_178
                        *(rcx_11 + 8) = var_178
                        rcx_11[2] = var_178.d
                        *(rcx_11 + 8) = var_178
                        rcx_11[0xa].b = 0
                        
                        if (var_158_1 != 0)
                            *(rcx_11 + 0x10) = rsi_1
                            *(rcx_11 + 0x18) = var_4c8
                            
                            if (var_4c8 != 0)
                                var_4c8[1].d += 1
                            
                            rcx_11[8] = var_4c0
                            rcx_11[0xa].b = 1
                        
                        char* var_360 = *rax_22
                        void* rax_30 = rax_22[1]
                        void* var_358_1 = rax_30
                        
                        if (rax_30 != 0)
                            *(rax_30 + 8) += 1
                        
                        void var_2a8
                        int64_t* rax_31 = sub_140aac870(&var_2a8, &var_360, &var_498)
                        int64_t rax_32 = *rax_31
                        void* rax_33 = rax_31[1]
                        
                        if (rax_33 != 0)
                            *(rax_33 + 8) += 1
                        
                        int32_t rax_34 = rax_31[2].d
                        int64_t* var_2a0
                        
                        if (var_2a0 != 0)
                            var_2a0[1].d -= 1
                            
                            if (var_2a0[1].d == 1)
                                (**var_2a0)(var_2a0)
                                int32_t rax_37 = *(var_2a0 + 0xc)
                                *(var_2a0 + 0xc) -= 1
                                
                                if (rax_37 == 1)
                                    (*(*var_2a0 + 8))(var_2a0, 1)
                        
                        sub_140596f50(&var_498)
                        
                        if (var_158_1 != 0)
                            char var_158_2 = 0
                            
                            if (var_4c8 != 0)
                                var_4c8[1].d -= 1
                                
                                if (var_4c8[1].d == 1)
                                    (**var_4c8)(var_4c8)
                                    int32_t rax_41 = *(var_4c8 + 0xc)
                                    *(var_4c8 + 0xc) -= 1
                                    
                                    if (rax_41 == 1)
                                        (*(*var_4c8 + 8))(var_4c8, 1)
                        
                        int64_t* rsi_4 = rax_22[1]
                        
                        if (rsi_4 != 0)
                            rsi_4[1].d -= 1
                            
                            if (rsi_4[1].d == 1)
                                (**rsi_4)(rsi_4)
                                int32_t rax_45 = *(rsi_4 + 0xc)
                                *(rsi_4 + 0xc) -= 1
                                
                                if (rax_45 == 1)
                                    (*(*rsi_4 + 8))(rsi_4, 1)
                        
                        if (var_4c8 != 0)
                            var_4c8[1].d -= 1
                            
                            if (var_4c8[1].d == 1)
                                (**var_4c8)(var_4c8)
                                int32_t rax_49 = *(var_4c8 + 0xc)
                                *(var_4c8 + 0xc) -= 1
                                
                                if (rax_49 == 1)
                                    (*(*var_4c8 + 8))(var_4c8, 1)
                        
                        int64_t rcx_23 = var_4e8
                        var_4e8 = rax_32
                        void* var_4e0_1 = rax_33
                        int32_t var_4d8_1 = rax_34
                        int64_t var_408_2 = rcx_23
                        int64_t* var_400_2 = var_4e0
                        
                        if (var_4e0 != 0)
                            var_4e0[1].d -= 1
                            
                            if (var_4e0[1].d == 1)
                                (**var_4e0)(var_4e0)
                                int32_t rax_57 = *(var_4e0 + 0xc)
                                *(var_4e0 + 0xc) -= 1
                                
                                if (rax_57 == 1)
                                    (*(*var_4e0 + 8))(var_4e0, 1)
                        
                        uint64_t var_288
                        rdi = var_288
                    label_140b8072d:
                        
                        if (rdi != 0)
                            int32_t rax_99 = *(rdi + 8)
                            *(rdi + 8) -= 1
                            
                            if (rax_99 == 1)
                                (**rdi)(rdi)
                                int32_t rbx_1 = *(rdi + 0xc)
                                *(rdi + 0xc) -= 1
                                
                                if (rbx_1 == 1)
                                    (*(*rdi + 8))(rdi, zx.q(rbx_1))
                    sub_1405970a0(&var_4d0)
                    break
                
                var_308_1[1].d &= not.d(var_3d8[1]:4.d)
                sub_14059bdd0(&var_3d8[1])
                i = var_308_1[1]:4.d
            while (i s< *(var_308_1[0] i+ 0x18))
        
        sub_140b21610(0, &var_4e8, nullptr)
        rdi.b = 0
        sub_1405970a0(&var_4e8)
    
    sub_1405ae200(&var_e8)

__security_check_cookie(var_38 ^ &var_508)
return zx.q(rdi.b)
