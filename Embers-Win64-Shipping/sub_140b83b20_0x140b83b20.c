// 函数: sub_140b83b20
// 地址: 0x140b83b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t var_350 = 0
int32_t var_348 = 0
int64_t* r15 = arg3
sub_1405947f0(&var_350, 0xc)
int32_t rax_2 = var_348 + 0xc
var_348 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_350)

UnDecorator::getReferenceType(var_350, u"FileVersion", 0x18)
int32_t var_374
char rax_3 = sub_140b76200(arg2, &var_350, &var_374)
int64_t rcx_4 = var_350
int64_t rdi
rdi.b = rax_3 == 0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t result

if (rdi.b == 0)
label_140b83ce8:
    char rcx_14 = var_374.b
    
    if (rcx_14 - 1 u> 2)
        int64_t var_118
        sub_140a2e390(&var_118, u"%d", zx.q(rcx_14))
        int64_t var_150
        sub_140aae2f0(&var_150, &var_118)
        int64_t rcx_161 = var_118
        
        if (rcx_161 != 0)
            sub_140a74f90(rcx_161)
        
        int64_t var_138
        sub_140a2e390(&var_138, u"%d", 3)
        int64_t var_168
        sub_140aae2f0(&var_168, &var_138)
        int64_t rcx_164 = var_138
        
        if (rcx_164 != 0)
            sub_140a74f90(rcx_164)
        
        int64_t rbx_2 = var_168
        int64_t* var_160
        
        if (var_160 != 0)
            var_160[1].d += 1
        
        int64_t rsi_1 = var_150
        int64_t* var_148
        
        if (var_148 != 0)
            var_148[1].d += 1
        
        void var_d8
        char* var_c0
        char** rax_57 = sub_140a96390(&var_c0, 
            _vfprintf_p_l(&var_d8, 
                File appears to be in a newer version ({0}) of the file format that we ", 
            PluginDescriptor"))
        int32_t var_a8_1 = 4
        int64_t var_98_1 = rsi_1
        int64_t* var_90_1 = var_148
        
        if (var_148 != 0)
            var_148[1].d += 1
        
        int32_t var_140
        int32_t var_88_1 = var_140
        char var_80_1 = 1
        int32_t var_78_1 = 4
        int64_t var_68_1 = rbx_2
        int64_t* var_60_1 = var_160
        
        if (var_160 != 0)
            var_160[1].d += 1
        
        int64_t i_1 = 2
        int32_t var_158
        int32_t var_58_1 = var_158
        char var_50_1 = 1
        void* var_190 = nullptr
        int32_t var_188_1 = 2
        sub_1405a4b40(&var_190, 2, 0)
        void var_a0
        void* rdx_68 = &var_a0
        int64_t* rcx_169 = var_190 + 8
        int32_t i_2 = 2
        int32_t i
        
        do
            rcx_169[-1].d = *(rdx_68 - 8)
            *rcx_169 = *rdx_68
            *rcx_169 = *rdx_68
            *rcx_169 = *rdx_68
            *rcx_169 = *rdx_68
            rcx_169[4].b = 0
            
            if (*(rdx_68 + 0x20) != 0)
                rcx_169[1] = *(rdx_68 + 8)
                void* rax_64 = *(rdx_68 + 0x10)
                rcx_169[2] = rax_64
                
                if (rax_64 != 0)
                    *(rax_64 + 8) += 1
                
                rcx_169[3].d = *(rdx_68 + 0x18)
                rcx_169[4].b = 1
            
            rcx_169 = &rcx_169[6]
            rdx_68 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
        char* var_128 = *rax_57
        void* rax_67 = rax_57[1]
        void* var_120_1 = rax_67
        
        if (rax_67 != 0)
            *(rax_67 + 8) += 1
        
        void var_f0
        int64_t* rax_68 = sub_140aac870(&var_f0, &var_128, &var_190)
        int64_t rcx_172 = *rax_68
        void* rcx_173 = rax_68[1]
        
        if (rcx_173 != 0)
            *(rcx_173 + 8) += 1
        
        int32_t rax_69 = rax_68[2].d
        int64_t* var_e8
        
        if (var_e8 != 0)
            var_e8[1].d -= 1
            
            if (var_e8[1].d == 1)
                (**var_e8)(var_e8)
                int32_t rax_72 = *(var_e8 + 0xc)
                *(var_e8 + 0xc) -= 1
                
                if (rax_72 == 1)
                    (*(*var_e8 + 8))(var_e8, 1)
        
        sub_140596f50(&var_190)
        int64_t __saved_rdi
        int64_t* rsi_2 = &__saved_rdi
        
        do
            i_1 -= 1
            rsi_2 = &rsi_2[-6]
            
            if (*rsi_2 != 0)
                *rsi_2 = 0
                int64_t* rbx_4 = rsi_2[-2]
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t rax_76 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_76 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
        while (i_1 != 0)
        
        int64_t* rbx_6 = rax_57[1]
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t rax_80 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_80 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        if (var_148 != 0)
            var_148[1].d -= 1
            
            if (var_148[1].d == 1)
                (**var_148)(var_148)
                int32_t rax_84 = *(var_148 + 0xc)
                *(var_148 + 0xc) -= 1
                
                if (rax_84 == 1)
                    (*(*var_148 + 8))(var_148, 1)
        
        if (var_160 != 0)
            var_160[1].d -= 1
            
            if (var_160[1].d == 1)
                (**var_160)(var_160)
                int32_t rax_88 = *(var_160 + 0xc)
                *(var_160 + 0xc) -= 1
                
                if (rax_88 == 1)
                    (*(*var_160 + 8))(var_160, 1)
        
        int64_t rcx_185 = *arg3
        *arg3 = rcx_172
        int64_t* rbx_7 = arg3[1]
        arg3[1] = rcx_173
        arg3[2].d = rax_69
        int64_t var_180_2 = rcx_185
        int64_t* var_178_2 = rbx_7
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t rax_94 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (rax_94 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t rax_98 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (rax_98 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        if (var_160 != 0)
            var_160[1].d -= 1
            
            if (var_160[1].d == 1)
                (**var_160)(var_160)
                int32_t rax_102 = *(var_160 + 0xc)
                *(var_160 + 0xc) -= 1
                
                if (rax_102 == 1)
                    (*(*var_160 + 8))(var_160, 1)
        
        if (var_148 == 0)
            result.b = 0
        else
            var_148[1].d -= 1
            
            if (var_148[1].d != 1)
                result.b = 0
            else
                (**var_148)(var_148)
                int32_t rdi_10 = *(var_148 + 0xc)
                *(var_148 + 0xc) -= 1
                
                if (rdi_10 != 1)
                    result.b = 0
                else
                    (*(*var_148 + 8))(var_148, 1)
                    result.b = 0
    else
        int64_t var_330 = 0
        int32_t var_328_1 = 0
        sub_1405947f0(&var_330, 8)
        int32_t rax_10 = var_328_1 + 8
        var_328_1 = rax_10
        
        if (rax_10 s> 0)
            sub_140594770(&var_330)
        
        UnDecorator::getReferenceType(var_330, u"Version", 0x10)
        sub_140b76200(arg2, &var_330, arg1)
        int64_t rcx_19 = var_330
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t var_320 = 0
        int32_t var_318_1 = 0
        sub_1405947f0(&var_320, 0xc)
        int32_t rax_11 = var_318_1 + 0xc
        var_318_1 = rax_11
        
        if (rax_11 s> 0)
            sub_140594770(&var_320)
        
        UnDecorator::getReferenceType(var_320, u"VersionName", 0x18)
        sub_140b76580(arg2, &var_320, arg1 + 8)
        int64_t rcx_24 = var_320
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t var_310 = 0
        int32_t var_308_1 = 0
        sub_1405947f0(&var_310, 0xd)
        int32_t rax_12 = var_308_1 + 0xd
        var_308_1 = rax_12
        
        if (rax_12 s> 0)
            sub_140594770(&var_310)
        
        UnDecorator::getReferenceType(var_310, u"FriendlyName", 0x1a)
        sub_140b76580(arg2, &var_310, arg1 + 0x18)
        int64_t rcx_29 = var_310
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        int64_t var_300 = 0
        int32_t var_2f8_1 = 0
        sub_1405947f0(&var_300, 0xc)
        int32_t rax_13 = var_2f8_1 + 0xc
        var_2f8_1 = rax_13
        
        if (rax_13 s> 0)
            sub_140594770(&var_300)
        
        UnDecorator::getReferenceType(var_300, u"Description", 0x18)
        sub_140b76580(arg2, &var_300, arg1 + 0x28)
        int64_t rcx_34 = var_300
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        int64_t var_2f0 = 0
        int32_t var_2e8_1 = 0
        sub_1405947f0(&var_2f0, 9)
        int32_t rax_14 = var_2e8_1 + 9
        var_2e8_1 = rax_14
        
        if (rax_14 s> 0)
            sub_140594770(&var_2f0)
        
        UnDecorator::getReferenceType(var_2f0, u"Category", 0x12)
        char rax_15 = sub_140b76580(arg2, &var_2f0, arg1 + 0x38)
        int64_t rcx_39 = var_2f0
        rdi.b = rax_15 == 0
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        if (rdi.b != 0)
            int64_t var_2e0 = 0
            int32_t var_2d8_1 = 0
            sub_1405947f0(&var_2e0, 0xd)
            int32_t rax_16 = var_2d8_1 + 0xd
            var_2d8_1 = rax_16
            
            if (rax_16 s> 0)
                sub_140594770(&var_2e0)
            
            UnDecorator::getReferenceType(var_2e0, u"CategoryPath", 0x1a)
            sub_140b76580(arg2, &var_2e0, arg1 + 0x38)
            int64_t rcx_44 = var_2e0
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
        
        int32_t rax_17 = *(arg1 + 0x40)
        
        if (rax_17 != 0 && rax_17 s> 2 && sub_140a32ae0(arg1 + 0x38, &data_142d4056c, 0) != 0
                && sub_140a237d0(arg1 + 0x38, &data_142d4056c, 0) != 0)
            int32_t rdx_19 = *(arg1 + 0x40)
            int32_t rax_20 = rdx_19 - 3
            
            if (rdx_19 == 0)
                rax_20 = -2
            
            int32_t r10_1 = rdx_19 - 1
            int32_t rax_21 = 0x7fffffff
            
            if (sx.q(rax_20) + 1 s<= 0x7fffffff)
                rax_21 = rax_20 + 1
            
            if (rdx_19 == 0)
                r10_1 = -1
            
            if (rdx_19 == 0)
                r10_1 = 0
            
            int32_t r9_2
            
            if (rax_21 s>= 0)
                r9_2 = r10_1
                
                if (rax_21 s< r10_1)
                    r9_2 = rax_21
            else
                r9_2 = 0
            
            int32_t rdi_3 = r10_1 - r9_2
            
            if (r10_1 - r9_2 s>= 0 && rdi_3 != 0)
                int32_t rax_23 = rdx_19 - rdi_3
                
                if (rax_23 != r9_2)
                    int64_t rcx_49 = *(arg1 + 0x38)
                    memmove(rcx_49 + (sx.q(r9_2) << 1), rcx_49 + (sx.q(r10_1) << 1), 
                        (rax_23 - r9_2) * 2)
                    rdx_19 = *(arg1 + 0x40)
                
                rdx_19 -= rdi_3
                *(arg1 + 0x40) = rdx_19
            
            int32_t rdi_4 = rdx_19 - 1
            
            if (rdx_19 == 0)
                rdi_4 = 0
            
            if (rdi_4 s> 1)
                rdi_4 = 1
            
            if (rdi_4 != 0)
                if (rdx_19 != rdi_4)
                    int64_t rcx_51 = *(arg1 + 0x38)
                    memmove(rcx_51, rcx_51 + (sx.q(rdi_4) << 1), (rdx_19 - rdi_4) * 2)
                    rdx_19 = *(arg1 + 0x40)
                
                *(arg1 + 0x40) = rdx_19 - rdi_4
            
            r15 = arg3
        
        int64_t var_2d0 = 0
        int32_t var_2c8_1 = 0
        sub_1405947f0(&var_2d0, 0xa)
        int32_t rax_30 = var_2c8_1 + 0xa
        var_2c8_1 = rax_30
        
        if (rax_30 s> 0)
            sub_140594770(&var_2d0)
        
        UnDecorator::getReferenceType(var_2d0, u"CreatedBy", 0x14)
        sub_140b76580(arg2, &var_2d0, arg1 + 0x48)
        int64_t rcx_56 = var_2d0
        
        if (rcx_56 != 0)
            sub_140a74f90(rcx_56)
        
        int64_t var_2c0 = 0
        int32_t var_2b8_1 = 0
        sub_1405947f0(&var_2c0, 0xd)
        int32_t rax_31 = var_2b8_1 + 0xd
        var_2b8_1 = rax_31
        
        if (rax_31 s> 0)
            sub_140594770(&var_2c0)
        
        UnDecorator::getReferenceType(var_2c0, u"CreatedByURL", 0x1a)
        sub_140b76580(arg2, &var_2c0, arg1 + 0x58)
        int64_t rcx_61 = var_2c0
        
        if (rcx_61 != 0)
            sub_140a74f90(rcx_61)
        
        int64_t var_2b0 = 0
        int32_t var_2a8_1 = 0
        sub_1405947f0(&var_2b0, 8)
        int32_t rax_32 = var_2a8_1 + 8
        var_2a8_1 = rax_32
        
        if (rax_32 s> 0)
            sub_140594770(&var_2b0)
        
        UnDecorator::getReferenceType(var_2b0, u"DocsURL", 0x10)
        sub_140b76580(arg2, &var_2b0, arg1 + 0x68)
        int64_t rcx_66 = var_2b0
        
        if (rcx_66 != 0)
            sub_140a74f90(rcx_66)
        
        int64_t var_2a0 = 0
        int32_t var_298_1 = 0
        sub_1405947f0(&var_2a0, 0xf)
        int32_t rax_33 = var_298_1 + 0xf
        var_298_1 = rax_33
        
        if (rax_33 s> 0)
            sub_140594770(&var_2a0)
        
        UnDecorator::getReferenceType(var_2a0, u"MarketplaceURL", 0x1e)
        sub_140b76580(arg2, &var_2a0, arg1 + 0x78)
        int64_t rcx_71 = var_2a0
        
        if (rcx_71 != 0)
            sub_140a74f90(rcx_71)
        
        int64_t var_290 = 0
        int32_t var_288_1 = 0
        sub_1405947f0(&var_290, 0xb)
        int32_t rax_34 = var_288_1 + 0xb
        var_288_1 = rax_34
        
        if (rax_34 s> 0)
            sub_140594770(&var_290)
        
        UnDecorator::getReferenceType(var_290, u"SupportURL", 0x16)
        sub_140b76580(arg2, &var_290, arg1 + 0x88)
        int64_t rcx_76 = var_290
        
        if (rcx_76 != 0)
            sub_140a74f90(rcx_76)
        
        int64_t var_280 = 0
        int32_t var_278_1 = 0
        sub_1405947f0(&var_280, 0xe)
        int32_t rax_35 = var_278_1 + 0xe
        var_278_1 = rax_35
        
        if (rax_35 s> 0)
            sub_140594770(&var_280)
        
        UnDecorator::getReferenceType(var_280, u"EngineVersion", 0x1c)
        sub_140b76580(arg2, &var_280, arg1 + 0x98)
        int64_t rcx_81 = var_280
        
        if (rcx_81 != 0)
            sub_140a74f90(rcx_81)
        
        int64_t var_270 = 0
        int32_t var_268_1 = 0
        sub_1405947f0(&var_270, 0x19)
        int32_t rax_36 = var_268_1 + 0x19
        var_268_1 = rax_36
        
        if (rax_36 s> 0)
            sub_140594770(&var_270)
        
        UnDecorator::getReferenceType(var_270, u"SupportedTargetPlatforms", 0x32)
        sub_140b76400(arg2, &var_270, arg1 + 0xa8)
        int64_t rcx_86 = var_270
        
        if (rcx_86 != 0)
            sub_140a74f90(rcx_86)
        
        int64_t var_260 = 0
        int32_t var_258_1 = 0
        sub_1405947f0(&var_260, 0x12)
        int32_t rax_37 = var_258_1 + 0x12
        var_258_1 = rax_37
        
        if (rax_37 s> 0)
            sub_140594770(&var_260)
        
        UnDecorator::getReferenceType(var_260, u"SupportedPrograms", 0x24)
        sub_140b76400(arg2, &var_260, arg1 + 0xb8)
        int64_t rcx_91 = var_260
        
        if (rcx_91 != 0)
            sub_140a74f90(rcx_91)
        
        int64_t var_250 = 0
        int32_t var_248_1 = 0
        sub_1405947f0(&var_250, 0x13)
        int32_t rax_38 = var_248_1 + 0x13
        var_248_1 = rax_38
        
        if (rax_38 s> 0)
            sub_140594770(&var_250)
        
        UnDecorator::getReferenceType(var_250, u"bIsPluginExtension", 0x26)
        sub_140b75d30(arg2, &var_250, arg1 + 0x100)
        int64_t rcx_96 = var_250
        
        if (rcx_96 != 0)
            sub_140a74f90(rcx_96)
        
        if (sub_140b88230(arg2, u"Modules", arg1 + 0xd8, r15).b == 0)
            result.b = 0
        else if (sub_140b87fc0(arg2, u"LocalizationTargets", arg1 + 0xe8, r15).b == 0)
            result.b = 0
        else
            int64_t var_240 = 0
            int32_t var_238_1 = 0
            sub_1405947f0(&var_240, 0x11)
            int32_t rax_39 = var_238_1 + 0x11
            var_238_1 = rax_39
            
            if (rax_39 s> 0)
                sub_140594770(&var_240)
            
            UnDecorator::getReferenceType(var_240, u"EnabledByDefault", 0x22)
            char var_378
            bool rax_40 = sub_140b75d30(arg2, &var_240, &var_378)
            int64_t rcx_103 = var_240
            
            if (rcx_103 != 0)
                sub_140a74f90(rcx_103)
            
            if (rax_40 != 0)
                *(arg1 + 0xf8) = (var_378 == 0) + 1
            
            int64_t var_230 = 0
            int32_t var_228_1 = 0
            sub_1405947f0(&var_230, 0x12)
            int32_t rax_41 = var_228_1 + 0x12
            var_228_1 = rax_41
            
            if (rax_41 s> 0)
                sub_140594770(&var_230)
            
            UnDecorator::getReferenceType(var_230, u"CanContainContent", 0x24)
            sub_140b75d30(arg2, &var_230, arg1 + 0xf9)
            int64_t rcx_108 = var_230
            
            if (rcx_108 != 0)
                sub_140a74f90(rcx_108)
            
            int64_t var_220 = 0
            int32_t var_218_1 = 0
            sub_1405947f0(&var_220, 0xe)
            int32_t rax_42 = var_218_1 + 0xe
            var_218_1 = rax_42
            
            if (rax_42 s> 0)
                sub_140594770(&var_220)
            
            UnDecorator::getReferenceType(var_220, u"IsBetaVersion", 0x1c)
            sub_140b75d30(arg2, &var_220, arg1 + 0xfa)
            int64_t rcx_113 = var_220
            
            if (rcx_113 != 0)
                sub_140a74f90(rcx_113)
            
            int64_t var_210 = 0
            int32_t var_208_1 = 0
            sub_1405947f0(&var_210, 0x16)
            int32_t rax_43 = var_208_1 + 0x16
            var_208_1 = rax_43
            
            if (rax_43 s> 0)
                sub_140594770(&var_210)
            
            UnDecorator::getReferenceType(var_210, u"IsExperimentalVersion", 0x2c)
            sub_140b75d30(arg2, &var_210, arg1 + 0xfb)
            int64_t rcx_118 = var_210
            
            if (rcx_118 != 0)
                sub_140a74f90(rcx_118)
            
            int64_t var_200 = 0
            int32_t var_1f8_1 = 0
            sub_1405947f0(&var_200, 0xa)
            int32_t rax_44 = var_1f8_1 + 0xa
            var_1f8_1 = rax_44
            
            if (rax_44 s> 0)
                sub_140594770(&var_200)
            
            UnDecorator::getReferenceType(var_200, u"Installed", 0x14)
            sub_140b75d30(arg2, &var_200, arg1 + 0xfc)
            int64_t rcx_123 = var_200
            
            if (rcx_123 != 0)
                sub_140a74f90(rcx_123)
            
            int64_t var_1f0 = 0
            int32_t var_1e8_1 = 0
            sub_1405947f0(&var_1f0, 0x16)
            int32_t rax_45 = var_1e8_1 + 0x16
            var_1e8_1 = rax_45
            
            if (rax_45 s> 0)
                sub_140594770(&var_1f0)
            
            UnDecorator::getReferenceType(var_1f0, u"RequiresBuildPlatform", 0x2c)
            sub_140b75d30(arg2, &var_1f0, arg1 + 0xfd)
            int64_t rcx_128 = var_1f0
            
            if (rcx_128 != 0)
                sub_140a74f90(rcx_128)
            
            int64_t var_1e0 = 0
            int32_t var_1d8_1 = 0
            sub_1405947f0(&var_1e0, 7)
            int32_t rax_46 = var_1d8_1 + 7
            var_1d8_1 = rax_46
            
            if (rax_46 s> 0)
                sub_140594770(&var_1e0)
            
            UnDecorator::getReferenceType(var_1e0, u"Hidden", 0xe)
            sub_140b75d30(arg2, &var_1e0, arg1 + 0xfe)
            int64_t rcx_133 = var_1e0
            
            if (rcx_133 != 0)
                sub_140a74f90(rcx_133)
            
            int64_t var_1d0 = 0
            int32_t var_1c8_1 = 0
            sub_1405947f0(&var_1d0, 0x11)
            int32_t rax_47 = var_1c8_1 + 0x11
            var_1c8_1 = rax_47
            
            if (rax_47 s> 0)
                sub_140594770(&var_1d0)
            
            UnDecorator::getReferenceType(var_1d0, u"ExplicitlyLoaded", 0x22)
            sub_140b75d30(arg2, &var_1d0, arg1 + 0xff)
            int64_t rcx_138 = var_1d0
            
            if (rcx_138 != 0)
                sub_140a74f90(rcx_138)
            
            int64_t var_370 = 0
            int32_t var_368_1 = 0
            sub_1405947f0(&var_370, 0x1e)
            int32_t rax_48 = var_368_1 + 0x1e
            var_368_1 = rax_48
            
            if (rax_48 s> 0)
                sub_140594770(&var_370)
            
            sub_1405a7220(var_370, 0x1e, "CanBeUsedWithUnrealHeaderTool", 0x1e, 0x3f)
            char var_377
            bool rdi_5
            
            if (sub_140b75d30(arg2, &var_370, &var_377) == 0 || var_377 == 0)
                rdi_5 = false
            else
                rdi_5 = true
            
            int64_t rcx_143 = var_370
            
            if (rcx_143 != 0)
                sub_140a74f90(rcx_143)
            
            if (rdi_5 != 0)
                int64_t var_360 = 0
                int64_t var_358_1 = 0
                sub_1405947f0(&var_360, 0x11)
                int32_t r14_1 = var_358_1:4.d
                int32_t rdi_6 = var_358_1.d + 0x11
                var_358_1.d = rdi_6
                
                if (rdi_6 s> r14_1)
                    sub_140594770(&var_360)
                    r14_1 = var_358_1:4.d
                    rdi_6 = var_358_1.d
                
                int64_t r12_1 = var_360
                UnDecorator::getReferenceType(r12_1, u"UnrealHeaderTool", 0x22)
                int64_t r15_1 = sx.q(*(arg1 + 0xc0))
                int32_t rax_50 = (r15_1 + 1).d
                *(arg1 + 0xc0) = rax_50
                
                if (rax_50 s> *(arg1 + 0xc4))
                    sub_1405a4f90(arg1 + 0xb8)
                
                r15 = arg3
                int64_t* rax_53 = (r15_1 << 4) + *(arg1 + 0xb8)
                *rax_53 = r12_1
                rax_53[1].d = rdi_6
                *(rax_53 + 0xc) = r14_1
            
            int64_t var_1b8 = 0
            int32_t var_1b0_1 = 0
            sub_1405947f0(&var_1b8, 0xe)
            int32_t rax_54 = var_1b0_1 + 0xe
            var_1b0_1 = rax_54
            
            if (rax_54 s> 0)
                sub_140594770(&var_1b8)
            
            int64_t rdi_7 = var_1b8
            UnDecorator::getReferenceType(rdi_7, u"PreBuildSteps", 0x1c)
            sub_140b81fb0(arg1 + 0x108, arg2, &var_1b8)
            
            if (rdi_7 != 0)
                sub_140a74f90(rdi_7)
            
            int64_t var_1a8 = 0
            int32_t var_1a0_1 = 0
            sub_1405947f0(&var_1a8, 0xf)
            int32_t rax_55 = var_1a0_1 + 0xf
            var_1a0_1 = rax_55
            
            if (rax_55 s> 0)
                sub_140594770(&var_1a8)
            
            int64_t rdi_8 = var_1a8
            UnDecorator::getReferenceType(rdi_8, u"PostBuildSteps", 0x1e)
            sub_140b81fb0(arg1 + 0x158, arg2, &var_1a8)
            
            if (rdi_8 != 0)
                sub_140a74f90(rdi_8)
            
            if (sub_140b88540(arg2, u"Plugins", arg1 + 0x1a8, r15).b == 0)
                result.b = 0
            else
                result.b = 1
else
    int64_t var_340 = 0
    int32_t var_338_1 = 0
    sub_1405947f0(&var_340, 0x12)
    int32_t rax_4 = var_338_1 + 0x12
    var_338_1 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_340)
    
    UnDecorator::getReferenceType(var_340, u"PluginFileVersion", 0x24)
    char rax_5 = sub_140b76200(arg2, &var_340, &var_374)
    int64_t rcx_9 = var_340
    rdi.b = rax_5 == 0
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    if (rdi.b == 0)
        goto label_140b83ce8
    
    void var_108
    int64_t* rax_6 =
        _vfprintf_p_l(&var_108, File does not have a valid 'FileVersion' number.", PluginDescriptor"
        )
    int64_t rdx_4 = *r15
    *r15 = *rax_6
    *rax_6 = rdx_4
    int64_t rdx_5 = r15[1]
    r15[1] = rax_6[1]
    rax_6[1] = rdx_5
    r15[2].d = rax_6[2].d
    int64_t* var_100
    
    if (var_100 == 0)
        result.b = 0
    else
        var_100[1].d -= 1
        
        if (var_100[1].d != 1)
            result.b = 0
        else
            (**var_100)(var_100)
            int32_t rdi_1 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (rdi_1 != 1)
                result.b = 0
            else
                (*(*var_100 + 8))(var_100, zx.q(rdi_1))
                result.b = 0

__security_check_cookie(rax_1 ^ &var_3a8)
return result
