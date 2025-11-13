// 函数: sub_140b85d70
// 地址: 0x140b85d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t* rdi = arg2
int64_t var_298 = 0
sub_1405947f0(&var_298, 0xc)
int32_t var_290 = 0xc

if (0xc s> 0)
    sub_140594770(&var_298)

UnDecorator::getReferenceType(var_298, u"FileVersion", 0x18)
int32_t var_2a0
char rax_3 = sub_140b76200(rdi, &var_298, &var_2a0)
int64_t rcx_4 = var_298
int64_t rbx
rbx.b = rax_3 == 0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t result
int64_t* rbx_1

if (rbx.b == 0)
label_140b85f05:
    uint64_t r8_2 = zx.q(var_2a0)
    *arg1 = r8_2.d
    
    if ((r8_2 - 1).d u> 2)
        int64_t var_148
        sub_140a2e390(&var_148, u"%d", r8_2)
        int64_t var_160
        sub_140aae2f0(&var_160, &var_148)
        int64_t rcx_84 = var_148
        
        if (rcx_84 != 0)
            sub_140a74f90(rcx_84)
        
        int64_t var_138
        sub_140a2e390(&var_138, u"%d", 3)
        int64_t var_178
        sub_140aae2f0(&var_178, &var_138)
        int64_t rcx_87 = var_138
        
        if (rcx_87 != 0)
            sub_140a74f90(rcx_87)
        
        int64_t rbx_12 = var_178
        int64_t* var_170
        
        if (var_170 != 0)
            var_170[1].d += 1
        
        int64_t rsi_3 = var_160
        int64_t* var_158
        
        if (var_158 != 0)
            var_158[1].d += 1
        
        void var_d8
        char* var_c0
        char** rax_34 = sub_140a96390(&var_c0, 
            _vfprintf_p_l(&var_d8, 
                File appears to be in a newer version ({0}) of the file format that we ", 
            ProjectDescriptor"))
        int32_t var_a8_1 = 4
        int64_t var_98_1 = rsi_3
        int64_t* var_90_1 = var_158
        
        if (var_158 != 0)
            var_158[1].d += 1
        
        int32_t var_150
        int32_t var_88_1 = var_150
        char var_80_1 = 1
        int32_t var_78_1 = 4
        int64_t var_68_1 = rbx_12
        int64_t* var_60_1 = var_170
        
        if (var_170 != 0)
            var_170[1].d += 1
        
        int64_t i_1 = 2
        int32_t var_168
        int32_t var_58_1 = var_168
        char var_50_1 = 1
        void* var_1b0 = nullptr
        int32_t var_1a8_1 = 2
        sub_1405a4b40(&var_1b0, 2, 0)
        void var_a0
        void* rdx_38 = &var_a0
        int64_t* rcx_92 = var_1b0 + 8
        int32_t i_3 = 2
        int32_t i
        
        do
            rcx_92[-1].d = *(rdx_38 - 8)
            *rcx_92 = *rdx_38
            *rcx_92 = *rdx_38
            *rcx_92 = *rdx_38
            *rcx_92 = *rdx_38
            rcx_92[4].b = 0
            
            if (*(rdx_38 + 0x20) != 0)
                rcx_92[1] = *(rdx_38 + 8)
                void* rax_41 = *(rdx_38 + 0x10)
                rcx_92[2] = rax_41
                
                if (rax_41 != 0)
                    *(rax_41 + 8) += 1
                
                rcx_92[3].d = *(rdx_38 + 0x18)
                rcx_92[4].b = 1
            
            rcx_92 = &rcx_92[6]
            rdx_38 += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
        char* var_128 = *rax_34
        void* rax_44 = rax_34[1]
        void* var_120_1 = rax_44
        
        if (rax_44 != 0)
            *(rax_44 + 8) += 1
        
        void var_f0
        int64_t* rax_45 = sub_140aac870(&var_f0, &var_128, &var_1b0)
        int64_t rcx_95 = *rax_45
        void* rcx_96 = rax_45[1]
        
        if (rcx_96 != 0)
            *(rcx_96 + 8) += 1
        
        int32_t rax_46 = rax_45[2].d
        int64_t* var_e8
        
        if (var_e8 != 0)
            var_e8[1].d -= 1
            
            if (var_e8[1].d == 1)
                (**var_e8)(var_e8)
                int32_t rax_49 = *(var_e8 + 0xc)
                *(var_e8 + 0xc) -= 1
                
                if (rax_49 == 1)
                    (*(*var_e8 + 8))(var_e8, 1)
        
        sub_140596f50(&var_1b0)
        int64_t __saved_rdi
        int64_t* rsi_4 = &__saved_rdi
        
        do
            i_1 -= 1
            rsi_4 = &rsi_4[-6]
            
            if (*rsi_4 != 0)
                *rsi_4 = 0
                int64_t* rbx_14 = rsi_4[-2]
                
                if (rbx_14 != 0)
                    rbx_14[1].d -= 1
                    
                    if (rbx_14[1].d == 1)
                        (**rbx_14)(rbx_14)
                        int32_t rax_53 = *(rbx_14 + 0xc)
                        *(rbx_14 + 0xc) -= 1
                        
                        if (rax_53 == 1)
                            (*(*rbx_14 + 8))(rbx_14, 1)
        while (i_1 != 0)
        
        int64_t* rbx_16 = rax_34[1]
        
        if (rbx_16 != 0)
            rbx_16[1].d -= 1
            
            if (rbx_16[1].d == 1)
                (**rbx_16)(rbx_16)
                int32_t rax_57 = *(rbx_16 + 0xc)
                *(rbx_16 + 0xc) -= 1
                
                if (rax_57 == 1)
                    (*(*rbx_16 + 8))(rbx_16, zx.q((i_1 + 1).d))
        
        if (var_158 != 0)
            var_158[1].d -= 1
            
            if (var_158[1].d == 1)
                (**var_158)(var_158)
                int32_t rax_61 = *(var_158 + 0xc)
                *(var_158 + 0xc) -= 1
                
                if (rax_61 == 1)
                    (*(*var_158 + 8))(var_158, 1)
        
        if (var_170 != 0)
            var_170[1].d -= 1
            
            if (var_170[1].d == 1)
                (**var_170)(var_170)
                int32_t rax_65 = *(var_170 + 0xc)
                *(var_170 + 0xc) -= 1
                
                if (rax_65 == 1)
                    (*(*var_170 + 8))(var_170, 1)
        
        int64_t rcx_108 = *arg4
        *arg4 = rcx_95
        int64_t* rbx_17 = arg4[1]
        arg4[1] = rcx_96
        arg4[2].d = rax_46
        int64_t var_1a0_2 = rcx_108
        int64_t* var_198_2 = rbx_17
        
        if (rbx_17 != 0)
            rbx_17[1].d -= 1
            
            if (rbx_17[1].d == 1)
                (**rbx_17)(rbx_17)
                int32_t rax_71 = *(rbx_17 + 0xc)
                *(rbx_17 + 0xc) -= 1
                
                if (rax_71 == 1)
                    (*(*rbx_17 + 8))(rbx_17, 1)
        
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t rax_75 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (rax_75 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        if (var_170 != 0)
            var_170[1].d -= 1
            
            if (var_170[1].d == 1)
                (**var_170)(var_170)
                int32_t rax_79 = *(var_170 + 0xc)
                *(var_170 + 0xc) -= 1
                
                if (rax_79 == 1)
                    (*(*var_170 + 8))(var_170, 1)
        
        rbx_1 = var_158
        
        if (rbx_1 != 0)
            goto label_140b869ba
        
        result.b = 0
    else
        int64_t var_278 = 0
        int32_t var_270_1 = 0
        sub_1405947f0(&var_278, 0x12)
        int32_t rax_8 = var_270_1 + 0x12
        var_270_1 = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_278)
        
        UnDecorator::getReferenceType(var_278, u"EngineAssociation", 0x24)
        sub_140b76580(rdi, &var_278, &arg1[2])
        int64_t rcx_17 = var_278
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int64_t var_268 = 0
        int32_t var_260_1 = 0
        sub_1405947f0(&var_268, 9)
        int32_t rax_9 = var_260_1 + 9
        var_260_1 = rax_9
        
        if (rax_9 s> 0)
            sub_140594770(&var_268)
        
        UnDecorator::getReferenceType(var_268, u"Category", 0x12)
        sub_140b76580(rdi, &var_268, &arg1[6])
        int64_t rcx_22 = var_268
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int64_t var_258 = 0
        int32_t var_250_1 = 0
        sub_1405947f0(&var_258, 0xc)
        int32_t rax_10 = var_250_1 + 0xc
        var_250_1 = rax_10
        
        if (rax_10 s> 0)
            sub_140594770(&var_258)
        
        UnDecorator::getReferenceType(var_258, u"Description", 0x18)
        sub_140b76580(rdi, &var_258, &arg1[0xa])
        int64_t rcx_27 = var_258
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t var_248 = 0
        int32_t var_240_1 = 0
        sub_1405947f0(&var_248, 0xb)
        int32_t rax_11 = var_240_1 + 0xb
        var_240_1 = rax_11
        
        if (rax_11 s> 0)
            sub_140594770(&var_248)
        
        UnDecorator::getReferenceType(var_248, u"Enterprise", 0x16)
        sub_140b75d30(rdi, &var_248, &arg1[0x44])
        int64_t rcx_32 = var_248
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        int64_t var_238 = 0
        int32_t var_230_1 = 0
        sub_1405947f0(&var_238, 0x1e)
        int32_t rax_12 = var_230_1 + 0x1e
        var_230_1 = rax_12
        
        if (rax_12 s> 0)
            sub_140594770(&var_238)
        
        UnDecorator::getReferenceType(var_238, u"DisableEnginePluginsByDefault", 0x3c)
        sub_140b75d30(rdi, &var_238, arg1 + 0x111)
        int64_t rcx_37 = var_238
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        if (sub_140b88230(rdi, u"Modules", &arg1[0xe], arg4).b == 0)
            result.b = 0
        else if (sub_140b88540(rdi, u"Plugins", &arg1[0x12], arg4).b == 0)
            result.b = 0
        else
            int64_t var_228 = 0
            int32_t var_220_1 = 0
            sub_1405947f0(&var_228, 0x1c)
            int32_t rax_13 = var_220_1 + 0x1c
            var_220_1 = rax_13
            
            if (rax_13 s> 0)
                sub_140594770(&var_228)
            
            UnDecorator::getReferenceType(var_228, u"AdditionalPluginDirectories", 0x38)
            void* var_188
            char rax_14 = sub_140b75cb0(rdi, &var_228, &var_188)
            int64_t rcx_44 = var_228
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
            
            if (rax_14 != 0 && *(var_188 + 8) s> 0)
                sub_14062c990(&arg1[0x46], 0)
                int64_t var_118
                int64_t* rax_16 = sub_140b251a0(&var_118)
                int16_t* rcx_47 = *rax_16
                int32_t r8_11 = rax_16[1].d
                *rax_16 = 0
                int32_t rdx_18 = rax_16[1].d
                int16_t* var_1d8 = rcx_47
                int32_t rcx_48 = *(rax_16 + 0xc)
                rax_16[1] = 0
                int32_t rax_19 = sbb.d(rax_16.d, rax_16.d, r8_11 != 0) + 0x14 + rdx_18
                int32_t var_1cc_1 = rcx_48
                
                if (rax_19 s> rcx_48)
                    sub_1405947f0(&var_1d8, rax_19)
                
                sub_140a20ba0(&var_1d8, u"../RemappedPlugins/", 0x13)
                int64_t rcx_51 = var_118
                
                if (rcx_51 != 0)
                    sub_140a74f90(rcx_51)
                
                int64_t* r13_1 = *(arg1 + 0x118)
                int64_t* rbx_3 = r13_1
                int16_t* r14_1 = var_1d8
                void* rdi_3 = &r13_1[sx.q(arg1[0x48]) * 2]
                
                if (r13_1 != rdi_3)
                    while (true)
                        int16_t* const rdx_20 = &data_142d40450
                        
                        if (rdx_18 != 0)
                            rdx_20 = r14_1
                        
                        int16_t* const rcx_52
                        
                        if (rbx_3[1].d == 0)
                            rcx_52 = &data_142d40450
                        else
                            rcx_52 = *rbx_3
                        
                        if (sub_140a54510(rcx_52, rdx_20) == 0)
                            break
                        
                        rbx_3 = &rbx_3[2]
                        
                        if (rbx_3 == rdi_3)
                            goto label_140b862bf
                
                if (r13_1 == rdi_3 || ((rbx_3 - r13_1) s>> 4).d == 0xffffffff)
                label_140b862bf:
                    int64_t rbx_6 = sx.q(arg1[0x48])
                    int32_t rax_21 = (rbx_6 + 1).d
                    arg1[0x48] = rax_21
                    
                    if (rax_21 s> arg1[0x49])
                        sub_1405a4f90(&arg1[0x46])
                    
                    int64_t* rbx_8 = (rbx_6 << 4) + *(arg1 + 0x118)
                    *rbx_8 = 0
                    rbx_8[1].d = rdx_18
                    
                    if (rdx_18 != 0)
                        sub_1405a4c70(rbx_8, rdx_18, 0)
                        memcpy(*rbx_8, r14_1, rdx_18 * 2)
                    else
                        *(rbx_8 + 0xc) = 0
                
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)
                
                rdi = arg2
            
            int64_t var_218 = 0
            int32_t var_210_1 = 0
            sub_1405947f0(&var_218, 0x10)
            int32_t rax_22 = var_210_1 + 0x10
            var_210_1 = rax_22
            
            if (rax_22 s> 0)
                sub_140594770(&var_218)
            
            UnDecorator::getReferenceType(var_218, u"TargetPlatforms", 0x20)
            int64_t* var_1b8
            char rax_23 = sub_140b75cb0(rdi, &var_218, &var_1b8)
            int64_t rcx_61 = var_218
            
            if (rcx_61 != 0)
                sub_140a74f90(rcx_61)
            
            if (rax_23 != 0)
                int64_t* rax_24 = var_1b8
                int32_t i_2 = 0
                
                if (rax_24[1].d s> 0)
                    int64_t* r14_2 = nullptr
                    
                    do
                        int16_t* var_1c8 = nullptr
                        int32_t var_1c0_1 = 0
                        int64_t* rcx_62 = *(r14_2 + *rax_24)
                        
                        if ((*(*rcx_62 + 0x58))(rcx_62, &var_1c8) != 0)
                            int16_t* const rdx_27 = &data_142d40450
                            
                            if (var_1c0_1 != 0)
                                rdx_27 = var_1c8
                            
                            int64_t var_180
                            sub_140b58260(&var_180, rdx_27, 1)
                            int64_t rsi_2 = sx.q(arg1[0x18])
                            int32_t rax_28 = (rsi_2 + 1).d
                            arg1[0x18] = rax_28
                            
                            if (rax_28 s> arg1[0x19])
                                sub_1405a4d70(&arg1[0x16])
                            
                            *(*(arg1 + 0x58) + (rsi_2 << 3)) = var_180
                        
                        int16_t* rcx_66 = var_1c8
                        
                        if (rcx_66 != 0)
                            sub_140a74f90(rcx_66)
                        
                        rax_24 = var_1b8
                        i_2 += 1
                        r14_2 = &r14_2[2]
                    while (i_2 s< rax_24[1].d)
                
                rdi = arg2
            
            int64_t var_208 = 0
            int32_t var_200_1 = 0
            sub_1405947f0(&var_208, 0x13)
            int32_t rax_30 = var_200_1 + 0x13
            var_200_1 = rax_30
            
            if (rax_30 s> 0)
                sub_140594770(&var_208)
            
            UnDecorator::getReferenceType(var_208, u"EpicSampleNameHash", 0x26)
            sub_140b76280(rdi, &var_208, &arg1[0x1a])
            int64_t rcx_71 = var_208
            
            if (rcx_71 != 0)
                sub_140a74f90(rcx_71)
            
            int64_t var_1f8 = 0
            int32_t var_1f0_1 = 0
            sub_1405947f0(&var_1f8, 0xe)
            int32_t rax_31 = var_1f0_1 + 0xe
            var_1f0_1 = rax_31
            
            if (rax_31 s> 0)
                sub_140594770(&var_1f8)
            
            int64_t rbx_10 = var_1f8
            UnDecorator::getReferenceType(rbx_10, u"PreBuildSteps", 0x1c)
            sub_140b81fb0(&arg1[0x1c], rdi, &var_1f8)
            
            if (rbx_10 != 0)
                sub_140a74f90(rbx_10)
            
            int64_t var_1e8 = 0
            int32_t var_1e0_1 = 0
            sub_1405947f0(&var_1e8, 0xf)
            int32_t rax_32 = var_1e0_1 + 0xf
            var_1e0_1 = rax_32
            
            if (rax_32 s> 0)
                sub_140594770(&var_1e8)
            
            int64_t rbx_11 = var_1e8
            UnDecorator::getReferenceType(rbx_11, u"PostBuildSteps", 0x1e)
            sub_140b81fb0(&arg1[0x30], rdi, &var_1e8)
            
            if (rbx_11 != 0)
                sub_140a74f90(rbx_11)
            
            result.b = 1
else
    int64_t var_288 = 0
    int32_t var_280_1 = 0
    sub_1405947f0(&var_288, 0x13)
    int32_t rax_4 = var_280_1 + 0x13
    var_280_1 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_288)
    
    UnDecorator::getReferenceType(var_288, u"ProjectFileVersion", 0x26)
    char rax_5 = sub_140b76200(rdi, &var_288, &var_2a0)
    int64_t rcx_9 = var_288
    rbx.b = rax_5 == 0
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    if (rbx.b == 0)
        goto label_140b85f05
    
    void var_108
    int64_t* rax_6 = _vfprintf_p_l(&var_108, File does not have a valid 'FileVersion' number.", 
        ProjectDescriptor")
    int64_t rdx_4 = *arg4
    *arg4 = *rax_6
    *rax_6 = rdx_4
    int64_t rdx_5 = arg4[1]
    arg4[1] = rax_6[1]
    rax_6[1] = rdx_5
    int64_t* var_100
    rbx_1 = var_100
    arg4[2].d = rax_6[2].d
    
    if (rbx_1 == 0)
        result.b = 0
    else
    label_140b869ba:
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rdi_5 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_5 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_5))
        
        result.b = 0
__security_check_cookie(rax_1 ^ &var_2c8)
return result
