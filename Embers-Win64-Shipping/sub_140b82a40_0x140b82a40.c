// 函数: sub_140b82a40
// 地址: 0x140b82a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int64_t var_3e8 = 0
int32_t var_3e0 = 0
sub_1405947f0(&var_3e8, 5)
int32_t rax_2 = var_3e0 + 5
var_3e0 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_3e8)

int64_t rbx = var_3e8
UnDecorator::getReferenceType(rbx, u"Name", 0xa)
int64_t* var_348
sub_140b75db0(arg2, &var_348, &var_3e8)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rcx_5 = var_348
int64_t* rdi

if (rcx_5 == 0 || rcx_5[1].d != 2)
    void var_200
    int64_t* rax_146 = _vfprintf_p_l(&var_200, Found a 'Module' entry with a missing 'Name' field", 
        ModuleDescriptor")
    int64_t rdx_48 = *arg3
    *arg3 = *rax_146
    *rax_146 = rdx_48
    int64_t rdx_49 = arg3[1]
    arg3[1] = rax_146[1]
    rax_146[1] = rdx_49
    arg3[2].d = rax_146[2].d
    int64_t* var_1f8
    
    if (var_1f8 != 0)
        var_1f8[1].d -= 1
        
        if (var_1f8[1].d == 1)
            (**var_1f8)(var_1f8)
            int32_t rbx_9 = *(var_1f8 + 0xc)
            *(var_1f8 + 0xc) -= 1
            
            if (rbx_9 == 1)
                (*(*var_1f8 + 8))(var_1f8, zx.q(rbx_9))
    
    rdi.b = 0
else
    int64_t var_2b0
    int64_t* rax_3 = sub_140b74df0(rcx_5, &var_2b0)
    int16_t* const r14_1 = &data_142d40450
    int16_t* rdx_3
    
    if (rax_3[1].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = *rax_3
    
    void var_2b8
    *arg1 = *sub_140b58260(&var_2b8, rdx_3, 1)
    int64_t rcx_8 = var_2b0
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t var_3f8 = 0
    int32_t var_3f0_1 = 0
    sub_1405947f0(&var_3f8, 5)
    int32_t rax_5 = var_3f0_1 + 5
    var_3f0_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_3f8)
    
    int64_t rbx_1 = var_3f8
    UnDecorator::getReferenceType(rbx_1, u"Type", 0xa)
    int64_t* var_2f8
    sub_140b75db0(arg2, &var_2f8, &var_3f8)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    int64_t* r13_1 = var_2f8
    
    if (r13_1 == 0 || r13_1[1].d != 2)
        void var_158
        int64_t* rax_101 = sub_140aae2b0(&var_158, arg1)
        void var_218
        char* var_1c8
        char** rax_103 = sub_140a96390(&var_1c8, 
            _vfprintf_p_l(&var_218, Found Module entry '{0}' with a missing 'Type' field", 
            ModuleDescriptor"))
        int64_t rcx_132 = *rax_101
        int64_t* rcx_133 = rax_101[1]
        int32_t var_140_1 = 4
        
        if (rcx_133 != 0)
            rcx_133[1].d += 1
        
        int32_t rax_104 = rax_101[2].d
        char var_118_1 = 1
        int32_t* var_3a8 = nullptr
        int32_t var_3a0_1 = 1
        sub_1405a4b40(&var_3a8, 1, 0)
        int32_t* rcx_135 = var_3a8
        *rcx_135 = var_140_1
        int64_t var_138
        *(rcx_135 + 8) = var_138
        *(rcx_135 + 8) = var_138
        rcx_135[2] = var_138.d
        *(rcx_135 + 8) = var_138
        rcx_135[0xa].b = 0
        
        if (var_118_1 != 0)
            *(rcx_135 + 0x10) = rcx_132
            *(rcx_135 + 0x18) = rcx_133
            
            if (rcx_133 != 0)
                rcx_133[1].d += 1
            
            rcx_135[8] = rax_104
            rcx_135[0xa].b = 1
        
        char* var_308 = *rax_103
        void* rax_112 = rax_103[1]
        void* var_300_1 = rax_112
        
        if (rax_112 != 0)
            *(rax_112 + 8) += 1
        
        void var_230
        int64_t* rax_113 = sub_140aac870(&var_230, &var_308, &var_3a8)
        int64_t rcx_137 = *rax_113
        void* rcx_138 = rax_113[1]
        
        if (rcx_138 != 0)
            *(rcx_138 + 8) += 1
        
        int32_t rax_114 = rax_113[2].d
        int64_t* var_228
        
        if (var_228 != 0)
            var_228[1].d -= 1
            
            if (var_228[1].d == 1)
                (**var_228)(var_228)
                int32_t rax_117 = *(var_228 + 0xc)
                *(var_228 + 0xc) -= 1
                
                if (rax_117 == 1)
                    (*(*var_228 + 8))(var_228, 1)
        
        sub_140596f50(&var_3a8)
        
        if (var_118_1 != 0)
            char var_118_2 = 0
            
            if (rcx_133 != 0)
                rcx_133[1].d -= 1
                
                if (rcx_133[1].d == 1)
                    (**rcx_133)(rcx_133)
                    int32_t rax_121 = *(rcx_133 + 0xc)
                    *(rcx_133 + 0xc) -= 1
                    
                    if (rax_121 == 1)
                        (*(*rcx_133 + 8))(rcx_133, 1)
        
        int64_t* rdi_10 = rax_103[1]
        
        if (rdi_10 != 0)
            rdi_10[1].d -= 1
            
            if (rdi_10[1].d == 1)
                (**rdi_10)(rdi_10)
                int32_t rax_125 = *(rdi_10 + 0xc)
                *(rdi_10 + 0xc) -= 1
                
                if (rax_125 == 1)
                    (*(*rdi_10 + 8))(rdi_10, 1)
        
        int64_t* rdi_11 = rax_101[1]
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t rax_129 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (rax_129 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
        
        int64_t rcx_148 = *arg3
        *arg3 = rcx_137
        int64_t* rdi_12 = arg3[1]
        arg3[1] = rcx_138
        arg3[2].d = rax_114
        int64_t var_368_2 = rcx_148
        int64_t* var_360_2 = rdi_12
        
        if (rdi_12 != 0)
            rdi_12[1].d -= 1
            
            if (rdi_12[1].d == 1)
                (**rdi_12)(rdi_12)
                int32_t rax_137 = *(rdi_12 + 0xc)
                *(rdi_12 + 0xc) -= 1
                
                if (rax_137 == 1)
                    (*(*rdi_12 + 8))(rdi_12, 1)
        
        int64_t* var_210
        
        if (var_210 != 0)
            var_210[1].d -= 1
            
            if (var_210[1].d == 1)
                (**var_210)(var_210)
                int32_t rbx_7 = *(var_210 + 0xc)
                *(var_210 + 0xc) -= 1
                
                if (rbx_7 == 1)
                    (*(*var_210 + 8))(var_210, zx.q(rbx_7))
        
        rdi.b = 0
    else
        int64_t var_2a0
        int64_t* rax_6 = sub_140b74df0(r13_1, &var_2a0)
        int16_t* const r12_1
        
        if (rax_6[1].d == 0)
            r12_1 = &data_142d40450
        else
            r12_1 = *rax_6
        
        int32_t i
        
        for (i = 0; i s< 0xe; i += 1)
            if (sub_140a54510(r12_1, sub_140b8b6f0(i)) == 0)
                break
        
        int64_t rcx_17 = var_2a0
        arg1[1].d = i
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
            i = arg1[1].d
        
        char var_80
        
        if (i != 0xe)
            int64_t var_3d8 = 0
            int32_t var_3d0_1 = 0
            sub_1405947f0(&var_3d8, 0xd)
            int32_t rax_63 = var_3d0_1 + 0xd
            var_3d0_1 = rax_63
            
            if (rax_63 s> 0)
                sub_140594770(&var_3d8)
            
            int64_t rbx_4 = var_3d8
            UnDecorator::getReferenceType(rbx_4, u"LoadingPhase", 0x1a)
            int64_t* var_318
            sub_140b75db0(arg2, &var_318, &var_3d8)
            
            if (rbx_4 != 0)
                sub_140a74f90(rbx_4)
            
            int64_t* r12_3 = var_318
            int32_t i_1
            
            if (r12_3 != 0 && r12_3[1].d == 2)
                int64_t var_2d8
                int16_t** rax_64 = sub_140b74df0(r12_3, &var_2d8)
                
                if (rax_64[1].d != 0)
                    r14_1 = *rax_64
                
                for (i_1 = 0; i_1 s< 0xa; i_1 += 1)
                    if (sub_140a54510(r14_1, sub_140b8b7c0(i_1)) == 0)
                        break
                
                int64_t rcx_56 = var_2d8
                *(arg1 + 0xc) = i_1
                
                if (rcx_56 != 0)
                    sub_140a74f90(rcx_56)
                    i_1 = *(arg1 + 0xc)
            
            if (r12_3 == 0 || r12_3[1].d != 2 || i_1 != 0xa)
                int64_t var_478 = 0
                int32_t var_470_1 = 0
                sub_1405947f0(&var_478, 0x13)
                int32_t rax_90 = var_470_1 + 0x13
                var_470_1 = rax_90
                
                if (rax_90 s> 0)
                    sub_140594770(&var_478)
                
                UnDecorator::getReferenceType(var_478, u"WhitelistPlatforms", 0x26)
                sub_140b76400(arg2, &var_478, &arg1[2])
                int64_t rcx_86 = var_478
                
                if (rcx_86 != 0)
                    sub_140a74f90(rcx_86)
                
                int64_t var_468 = 0
                int32_t var_460_1 = 0
                sub_1405947f0(&var_468, 0x13)
                int32_t rax_91 = var_460_1 + 0x13
                var_460_1 = rax_91
                
                if (rax_91 s> 0)
                    sub_140594770(&var_468)
                
                UnDecorator::getReferenceType(var_468, u"BlacklistPlatforms", 0x26)
                sub_140b76400(arg2, &var_468, &arg1[4])
                int64_t rcx_91 = var_468
                
                if (rcx_91 != 0)
                    sub_140a74f90(rcx_91)
                
                int64_t var_458 = 0
                int32_t var_450_1 = 0
                sub_1405947f0(&var_458, 0x11)
                int32_t rax_92 = var_450_1 + 0x11
                var_450_1 = rax_92
                
                if (rax_92 s> 0)
                    sub_140594770(&var_458)
                
                UnDecorator::getReferenceType(var_458, u"WhitelistTargets", 0x22)
                sub_140b76f90(arg2, &var_458, &arg1[6])
                int64_t rcx_96 = var_458
                
                if (rcx_96 != 0)
                    sub_140a74f90(rcx_96)
                
                int64_t var_448 = 0
                int32_t var_440_1 = 0
                sub_1405947f0(&var_448, 0x11)
                int32_t rax_93 = var_440_1 + 0x11
                var_440_1 = rax_93
                
                if (rax_93 s> 0)
                    sub_140594770(&var_448)
                
                UnDecorator::getReferenceType(var_448, u"BlacklistTargets", 0x22)
                sub_140b76f90(arg2, &var_448, &arg1[8])
                int64_t rcx_101 = var_448
                
                if (rcx_101 != 0)
                    sub_140a74f90(rcx_101)
                
                int64_t var_488 = 0
                int32_t var_480_1 = 0
                sub_1405947f0(&var_488, 0x1e)
                int32_t rax_94 = var_480_1 + 0x1e
                var_480_1 = rax_94
                
                if (rax_94 s> 0)
                    sub_140594770(&var_488)
                
                UnDecorator::getReferenceType(var_488, u"WhitelistTargetConfigurations", 0x3c)
                sub_140b76e80(arg2, &var_488, &arg1[0xa])
                int64_t rcx_106 = var_488
                
                if (rcx_106 != 0)
                    sub_140a74f90(rcx_106)
                
                int64_t var_438 = 0
                int32_t var_430_1 = 0
                sub_1405947f0(&var_438, 0x1e)
                int32_t rax_95 = var_430_1 + 0x1e
                var_430_1 = rax_95
                
                if (rax_95 s> 0)
                    sub_140594770(&var_438)
                
                UnDecorator::getReferenceType(var_438, u"BlacklistTargetConfigurations", 0x3c)
                sub_140b76e80(arg2, &var_438, &arg1[0xc])
                int64_t rcx_111 = var_438
                
                if (rcx_111 != 0)
                    sub_140a74f90(rcx_111)
                
                int64_t var_428 = 0
                int32_t var_420_1 = 0
                sub_1405947f0(&var_428, 0x12)
                int32_t rax_96 = var_420_1 + 0x12
                var_420_1 = rax_96
                
                if (rax_96 s> 0)
                    sub_140594770(&var_428)
                
                UnDecorator::getReferenceType(var_428, u"WhitelistPrograms", 0x24)
                sub_140b76400(arg2, &var_428, &arg1[0xe])
                int64_t rcx_116 = var_428
                
                if (rcx_116 != 0)
                    sub_140a74f90(rcx_116)
                
                int64_t var_418 = 0
                int32_t var_410_1 = 0
                sub_1405947f0(&var_418, 0x12)
                int32_t rax_97 = var_410_1 + 0x12
                var_410_1 = rax_97
                
                if (rax_97 s> 0)
                    sub_140594770(&var_418)
                
                UnDecorator::getReferenceType(var_418, u"BlacklistPrograms", 0x24)
                sub_140b76400(arg2, &var_418, &arg1[0x10])
                int64_t rcx_121 = var_418
                
                if (rcx_121 != 0)
                    sub_140a74f90(rcx_121)
                
                int64_t var_408 = 0
                int32_t var_400_1 = 0
                sub_1405947f0(&var_408, 0x17)
                int32_t rax_98 = var_400_1 + 0x17
                var_400_1 = rax_98
                
                if (rax_98 s> 0)
                    sub_140594770(&var_408)
                
                UnDecorator::getReferenceType(var_408, u"AdditionalDependencies", 0x2e)
                sub_140b76400(arg2, &var_408, &arg1[0x12])
                int64_t rcx_126 = var_408
                
                if (rcx_126 != 0)
                    sub_140a74f90(rcx_126)
                
                rdi.b = 1
            else
                int64_t var_2c8
                void var_188
                int64_t* rax_68 = sub_140aae2f0(&var_188, sub_140b74df0(r12_3, &var_2c8))
                void var_170
                int64_t* rax_69 = sub_140aae2b0(&var_170, arg1)
                void var_248
                char* var_1d8
                int64_t* rax_71 = sub_140a96390(&var_1d8, 
                    _vfprintf_p_l(&var_248, 
                        Module entry '{0}' specified an unrecognized module LoadingPhase '{1}'", 
                    ModuleDescriptor"))
                int64_t var_98_1 = *rax_69
                void* rcx_63 = rax_69[1]
                int32_t var_a8_1 = 4
                void* var_90_1 = rcx_63
                
                if (rcx_63 != 0)
                    *(rcx_63 + 8) += 1
                
                int64_t var_68_1 = *rax_68
                void* rax_73 = rax_68[1]
                int32_t var_88_1 = rax_69[2].d
                var_80 = 1
                int32_t var_78_1 = 4
                void* var_60_1 = rax_73
                
                if (rax_73 != 0)
                    *(rax_73 + 8) += 1
                
                int64_t i_6 = 2
                int32_t var_58_1 = rax_68[2].d
                char var_50_1 = 1
                void* var_3b8 = nullptr
                int32_t var_3b0_1 = 2
                sub_1405a4b40(&var_3b8, 2, 0)
                void var_a0
                void* rdx_24 = &var_a0
                int64_t* rcx_67 = var_3b8 + 8
                int32_t i_8 = 2
                int32_t i_2
                
                do
                    rcx_67[-1].d = *(rdx_24 - 8)
                    *rcx_67 = *rdx_24
                    *rcx_67 = *rdx_24
                    *rcx_67 = *rdx_24
                    *rcx_67 = *rdx_24
                    rcx_67[4].b = 0
                    
                    if (*(rdx_24 + 0x20) != 0)
                        rcx_67[1] = *(rdx_24 + 8)
                        void* rax_81 = *(rdx_24 + 0x10)
                        rcx_67[2] = rax_81
                        
                        if (rax_81 != 0)
                            *(rax_81 + 8) += 1
                        
                        rcx_67[3].d = *(rdx_24 + 0x18)
                        rcx_67[4].b = 1
                    
                    rcx_67 = &rcx_67[6]
                    rdx_24 += 0x30
                    i_2 = i_8
                    i_8 -= 1
                while (i_2 != 1)
                int64_t var_328 = *rax_71
                void* rax_84 = rax_71[1]
                void* var_320_1 = rax_84
                
                if (rax_84 != 0)
                    *(rax_84 + 8) += 1
                
                void var_260
                int64_t* rax_85 = sub_140aac870(&var_260, &var_328, &var_3b8)
                int64_t var_398 = *rax_85
                void* rcx_70 = rax_85[1]
                
                if (rcx_70 != 0)
                    *(rcx_70 + 8) += 1
                
                int32_t rax_86 = rax_85[2].d
                sub_1405970a0(&var_260)
                sub_140596f50(&var_3b8)
                int64_t __saved_r15
                int64_t* rbx_5 = &__saved_r15
                int64_t i_3
                
                do
                    rbx_5 -= 0x30
                    sub_1405d57e0(rbx_5)
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
                sub_1405970a0(rax_71)
                sub_1405970a0(rax_69)
                sub_1405970a0(rax_68)
                int64_t rcx_77 = *arg3
                *arg3 = var_398
                var_398 = rcx_77
                int64_t rcx_78 = arg3[1]
                arg3[1] = rcx_70
                int64_t var_390_2 = rcx_78
                arg3[2].d = rax_86
                sub_1405970a0(&var_398)
                sub_1405970a0(&var_248)
                int64_t rcx_81 = var_2c8
                
                if (rcx_81 != 0)
                    sub_140a74f90(rcx_81)
                
                rdi.b = 0
            
            int64_t* var_310
            
            if (var_310 != 0)
                var_310[1].d -= 1
                
                if (var_310[1].d == 1)
                    (**var_310)(var_310)
                    int32_t temp16_1 = *(var_310 + 0xc)
                    *(var_310 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*var_310 + 8))(var_310, 1)
        else
            int64_t var_2e8
            void var_1b8
            int64_t* rax_10 = sub_140aae2f0(&var_1b8, sub_140b74df0(r13_1, &var_2e8))
            void var_1a0
            int64_t* rax_11 = sub_140aae2b0(&var_1a0, arg1)
            void var_278
            char* var_1e8
            char** rax_13 = sub_140a96390(&var_1e8, 
                _vfprintf_p_l(&var_278, 
                    Module entry '{0}' specified an unrecognized module Type '{1}'", 
                ModuleDescriptor"))
            int64_t var_f8_1 = *rax_11
            void* rcx_24 = rax_11[1]
            int32_t var_108_1 = 4
            void* var_f0_1 = rcx_24
            
            if (rcx_24 != 0)
                *(rcx_24 + 8) += 1
            
            int32_t var_e8_1 = rax_11[2].d
            int64_t var_c8_1 = *rax_10
            void* rax_16 = rax_10[1]
            char var_e0_1 = 1
            int32_t var_d8_1 = 4
            void* var_c0_1 = rax_16
            
            if (rax_16 != 0)
                *(rax_16 + 8) += 1
            
            int64_t i_5 = 2
            int32_t var_b8_1 = rax_10[2].d
            char var_b0_1 = 1
            void* var_3c8 = nullptr
            int32_t var_3c0_1 = 2
            sub_1405a4b40(&var_3c8, 2, 0)
            void var_100
            void* rdx_12 = &var_100
            int64_t* rcx_27 = var_3c8 + 8
            int32_t i_7 = 2
            int32_t i_4
            
            do
                rcx_27[-1].d = *(rdx_12 - 8)
                *rcx_27 = *rdx_12
                *rcx_27 = *rdx_12
                *rcx_27 = *rdx_12
                *rcx_27 = *rdx_12
                rcx_27[4].b = 0
                
                if (*(rdx_12 + 0x20) != 0)
                    rcx_27[1] = *(rdx_12 + 8)
                    void* rax_24 = *(rdx_12 + 0x10)
                    rcx_27[2] = rax_24
                    
                    if (rax_24 != 0)
                        *(rax_24 + 8) += 1
                    
                    rcx_27[3].d = *(rdx_12 + 0x18)
                    rcx_27[4].b = 1
                
                rcx_27 = &rcx_27[6]
                rdx_12 += 0x30
                i_4 = i_7
                i_7 -= 1
            while (i_4 != 1)
            char* var_338 = *rax_13
            void* rax_27 = rax_13[1]
            void* var_330_1 = rax_27
            
            if (rax_27 != 0)
                *(rax_27 + 8) += 1
            
            void var_290
            int64_t* rax_28 = sub_140aac870(&var_290, &var_338, &var_3c8)
            int64_t rcx_29 = *rax_28
            void* rcx_30 = rax_28[1]
            
            if (rcx_30 != 0)
                *(rcx_30 + 8) += 1
            
            int32_t rax_29 = rax_28[2].d
            int64_t* var_288
            
            if (var_288 != 0)
                var_288[1].d -= 1
                
                if (var_288[1].d == 1)
                    (**var_288)(var_288)
                    int32_t rax_32 = *(var_288 + 0xc)
                    *(var_288 + 0xc) -= 1
                    
                    if (rax_32 == 1)
                        (*(*var_288 + 8))(var_288, 1)
            
            sub_140596f50(&var_3c8)
            char* r14_2 = &var_80
            
            do
                i_5 -= 1
                r14_2 = &r14_2[-0x30]
                
                if (*r14_2 != 0)
                    *r14_2 = 0
                    int64_t* rdi_2 = *(r14_2 - 0x10)
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t rax_36 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (rax_36 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
            while (i_5 != 0)
            
            int64_t* rdi_3 = rax_13[1]
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t rax_40 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (rax_40 == 1)
                        (*(*rdi_3 + 8))(rdi_3, zx.q((i_5 + 1).d))
            
            int64_t* rdi_5 = rax_11[1]
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t rax_44 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (rax_44 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
            
            int64_t* rdi_6 = rax_10[1]
            
            if (rdi_6 != 0)
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t rax_48 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (rax_48 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
            
            int64_t rcx_42 = *arg3
            *arg3 = rcx_29
            int64_t* rdi_7 = arg3[1]
            arg3[1] = rcx_30
            arg3[2].d = rax_29
            int64_t var_380_2 = rcx_42
            int64_t* var_378_2 = rdi_7
            
            if (rdi_7 != 0)
                rdi_7[1].d -= 1
                
                if (rdi_7[1].d == 1)
                    (**rdi_7)(rdi_7)
                    int32_t rax_56 = *(rdi_7 + 0xc)
                    *(rdi_7 + 0xc) -= 1
                    
                    if (rax_56 == 1)
                        (*(*rdi_7 + 8))(rdi_7, 1)
            
            int64_t* var_270
            
            if (var_270 != 0)
                var_270[1].d -= 1
                
                if (var_270[1].d == 1)
                    (**var_270)(var_270)
                    int32_t rbx_3 = *(var_270 + 0xc)
                    *(var_270 + 0xc) -= 1
                    
                    if (rbx_3 == 1)
                        (*(*var_270 + 8))(var_270, zx.q(rbx_3))
            
            int64_t rcx_47 = var_2e8
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            rdi.b = 0
    
    int64_t* var_2f0
    
    if (var_2f0 != 0)
        var_2f0[1].d -= 1
        
        if (var_2f0[1].d == 1)
            (**var_2f0)(var_2f0)
            int32_t temp9_1 = *(var_2f0 + 0xc)
            *(var_2f0 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_2f0 + 8))(var_2f0, 1)

int64_t* var_340

if (var_340 != 0)
    var_340[1].d -= 1
    
    if (var_340[1].d == 1)
        (**var_340)(var_340)
        int32_t temp3_1 = *(var_340 + 0xc)
        *(var_340 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_16 = *var_340
            (*(r8_16 + 8))(var_340, 1, r8_16)

__security_check_cookie(rax_1 ^ &var_4a8)
return zx.q(rdi.b)
