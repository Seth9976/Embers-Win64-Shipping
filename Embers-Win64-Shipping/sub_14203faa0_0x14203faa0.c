// 函数: sub_14203faa0
// 地址: 0x14203faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_558
int64_t var_30 = __security_cookie ^ &var_558
int64_t* rax_2 = arg1[4]
int64_t* r12 = arg1
int64_t* var_528 = arg1
void var_228
sub_1423fd810(&var_228, nullptr)
sub_1424171b0(&var_228, u"DefaultPlayer", &data_143de5830)
int64_t* rsi = nullptr
int64_t var_478 = 0
int64_t var_470 = 0
sub_140af2b60()
int64_t var_4e8 = 0
int16_t* const var_4c8 = &data_142d40450
int64_t var_4e0 = 0

if (sub_140b2acc0(&data_142d40450, u"-REPLAY=", &var_4e8, 1) == 0)
    if (sub_140b2acc0(var_4c8, u"-REPLAYPLAYLIST=", &var_4e8, 0) == 0)
    label_14203fce9:
        int64_t* rax_9 = sub_141520bd0()
        void* r13_1 = rax_9[0x23]
        
        if (r13_1 == 0)
            (*(*rax_9 + 0x390))(rax_9)
            r13_1 = rax_9[0x23]
        
        int16_t* var_508
        sub_14151ffb0(&var_508)
        uint64_t var_538 = 0
        int32_t var_530_1 = 0
        char rax_11 = sub_140b295a0(&var_4c8, &var_538, 0)
        uint64_t r8_2 = var_538
        int32_t var_500
        int32_t rbx_5
        
        if (rax_11 == 0)
        label_14203fd5a:
            rbx_5 = *(r13_1 + 0x30)
            int32_t rdi_3
            uint64_t r14_2
            
            if (var_500 s> 1)
                int32_t r14_3 = rbx_5 - 1
                
                if (rbx_5 == 0)
                    r14_3 = 0
                
                int32_t rax_12
                
                if (var_500 == 0)
                    rax_12 = var_500 + 1
                
                if (var_500 != 0 || r14_3 == 0)
                    rax_12 = 0
                
                int16_t* rbx_6 = var_508
                int32_t rcx_21 = rax_12 + r14_3
                uint64_t var_518 = 0
                int32_t var_50c
                
                if (var_500 != 0 || rcx_21 != 0)
                    sub_1405a4c70(&var_518, rcx_21 + var_500, 0)
                    memcpy(var_518, rbx_6, var_500 * 2)
                else
                    var_50c = 0
                
                sub_140a20ba0(&var_518, *(r13_1 + 0x28), r14_3)
                rbx_5 = var_500
                rdi_3 = var_50c
                r14_2 = var_518
                var_518 = 0
                int32_t var_4f0_2 = rbx_5
                int32_t var_4ec_2 = rdi_3
                int32_t var_510_1
                var_510_1.q = 0
                r8_2 = var_538
            else
                int64_t rdi_2 = *(r13_1 + 0x28)
                uint64_t var_4f8 = 0
                
                if (rbx_5 != 0)
                    sub_1405a4c70(&var_4f8, rbx_5, 0)
                    r14_2 = var_4f8
                    memcpy(r14_2, rdi_2, rbx_5 * 2)
                    int32_t var_4ec
                    rdi_3 = var_4ec
                    r8_2 = var_538
                else
                    rdi_3 = 0
                    int32_t var_4ec_1 = 0
                    r14_2 = 0
            
            if (r8_2 != 0)
                sub_140a74f90(r8_2)
            
            r8_2 = r14_2
            var_538 = r14_2
            var_530_1 = rbx_5
            var_530_1 = rdi_3
            goto label_14203fe61
        
        rbx_5 = var_530_1
        
        if (rbx_5 == 0)
            r8_2 = &data_142d40450
        else
            if (*r8_2 == 0x2d)
                goto label_14203fd5a
            
        label_14203fe61:
            
            if (rbx_5 == 0)
                r8_2 = &data_142d40450
        
        void var_3e8
        sub_1423fb9e0(&var_3e8, &var_228, r8_2, 1)
        int32_t var_3c4
        int16_t* var_3c0
        
        if (var_3c4 == 0)
        label_14203ffbb:
            int16_t* const rdx_20 = &data_142d40450
            int16_t* const rcx_36 = &data_142d40450
            
            if (var_500 != 0)
                rdx_20 = var_508
            
            if (var_530_1 != 0)
                rcx_36 = var_538
            
            int64_t* rdx_21 = &var_3c0
            int64_t* rbx_13
            
            if (sub_140a54510(rcx_36, rdx_20) == 0)
                void var_1b8
                int64_t* rax_69 = sub_140aae420(&var_1b8, rdx_21)
                void var_278
                char* var_260
                char** rax_71 = sub_140a96390(&var_260, 
                    _vfprintf_p_l(&var_278, 
                        The map specified on the commandline '{0}' could not be found. Exiting.", 
                    Engine"))
                int64_t rcx_92 = *rax_69
                int64_t* rcx_93 = rax_69[1]
                int32_t var_d8_1 = 4
                
                if (rcx_93 != 0)
                    rcx_93[1].d += 1
                
                int32_t rax_72 = rax_69[2].d
                char var_b0_1 = 1
                int32_t* var_488 = nullptr
                int32_t var_480_1 = 1
                sub_1405a4b40(&var_488, 1, 0)
                int32_t* rcx_95 = var_488
                *rcx_95 = var_d8_1
                int64_t var_d0
                *(rcx_95 + 8) = var_d0
                *(rcx_95 + 8) = var_d0
                rcx_95[2] = var_d0.d
                *(rcx_95 + 8) = var_d0
                rcx_95[0xa].b = 0
                
                if (var_b0_1 != 0)
                    *(rcx_95 + 0x10) = rcx_92
                    *(rcx_95 + 0x18) = rcx_93
                    
                    if (rcx_93 != 0)
                        rcx_93[1].d += 1
                    
                    rcx_95[8] = rax_72
                    rcx_95[0xa].b = 1
                
                char* var_400 = *rax_71
                void* rax_80 = rax_71[1]
                void* var_3f8_1 = rax_80
                
                if (rax_80 != 0)
                    *(rax_80 + 8) += 1
                
                void var_290
                int64_t* rax_81 = sub_140aac870(&var_290, &var_400, &var_488)
                int64_t var_438 = *rax_81
                int64_t* rcx_98 = rax_81[1]
                
                if (rcx_98 != 0)
                    rcx_98[1].d += 1
                
                int32_t var_428_1 = rax_81[2].d
                int64_t* var_288
                
                if (var_288 != 0)
                    var_288[1].d -= 1
                    
                    if (var_288[1].d == 1)
                        (**var_288)(var_288)
                        int32_t rax_85 = *(var_288 + 0xc)
                        *(var_288 + 0xc) -= 1
                        
                        if (rax_85 == 1)
                            (*(*var_288 + 8))(var_288, 1)
                
                sub_140596f50(&var_488)
                
                if (var_b0_1 != 0)
                    char var_b0_2 = 0
                    
                    if (rcx_93 != 0)
                        rcx_93[1].d -= 1
                        
                        if (rcx_93[1].d == 1)
                            (**rcx_93)(rcx_93)
                            int32_t rax_89 = *(rcx_93 + 0xc)
                            *(rcx_93 + 0xc) -= 1
                            
                            if (rax_89 == 1)
                                (*(*rcx_93 + 8))(rcx_93, 1)
                
                int64_t* rbx_22 = rax_71[1]
                
                if (rbx_22 != 0)
                    rbx_22[1].d -= 1
                    
                    if (rbx_22[1].d == 1)
                        (**rbx_22)(rbx_22)
                        int32_t rax_93 = *(rbx_22 + 0xc)
                        *(rbx_22 + 0xc) -= 1
                        
                        if (rax_93 == 1)
                            (*(*rbx_22 + 8))(rbx_22, 1)
                
                int64_t* rbx_23 = rax_69[1]
                
                if (rbx_23 != 0)
                    rbx_23[1].d -= 1
                    
                    if (rbx_23[1].d == 1)
                        (**rbx_23)(rbx_23)
                        int32_t rax_97 = *(rbx_23 + 0xc)
                        *(rbx_23 + 0xc) -= 1
                        
                        if (rax_97 == 1)
                            (*(*rbx_23 + 8))(rbx_23, 1)
                
                int64_t* var_270
                
                if (var_270 != 0)
                    var_270[1].d -= 1
                    
                    if (var_270[1].d == 1)
                        (**var_270)(var_270)
                        int32_t rax_101 = *(var_270 + 0xc)
                        *(var_270 + 0xc) -= 1
                        
                        if (rax_101 == 1)
                            (*(*var_270 + 8))(var_270, 1)
                
                sub_140b21610(0, &var_438, nullptr)
                sub_140b721f0(0)
                rbx_13 = rcx_98
                goto label_142040845
            
            void var_1a0
            int64_t* rax_18 = sub_140aae420(&var_1a0, rdx_21)
            void var_2d8
            char* var_250
            char** rax_20 = sub_140a96390(&var_250, 
                _vfprintf_p_l(&var_2d8, 
                    The map specified on the commandline '{0}' could not be found. Would you like to load "
            "the default map instead?", 
                Engine"))
            int64_t rcx_40 = *rax_18
            int64_t* rcx_41 = rax_18[1]
            int32_t var_108_1 = 4
            
            if (rcx_41 != 0)
                rcx_41[1].d += 1
            
            int32_t rax_21 = rax_18[2].d
            char var_e0_1 = 1
            int32_t* var_4a8 = nullptr
            int32_t var_4a0_1 = 1
            sub_1405a4b40(&var_4a8, 1, 0)
            int32_t* rcx_43 = var_4a8
            *rcx_43 = var_108_1
            int64_t var_100
            *(rcx_43 + 8) = var_100
            *(rcx_43 + 8) = var_100
            rcx_43[2] = var_100.d
            *(rcx_43 + 8) = var_100
            rcx_43[0xa].b = 0
            
            if (var_e0_1 != 0)
                *(rcx_43 + 0x10) = rcx_40
                *(rcx_43 + 0x18) = rcx_41
                
                if (rcx_41 != 0)
                    rcx_41[1].d += 1
                
                rcx_43[8] = rax_21
                rcx_43[0xa].b = 1
            
            char* var_420 = *rax_20
            void* rax_29 = rax_20[1]
            void* var_418_1 = rax_29
            
            if (rax_29 != 0)
                *(rax_29 + 8) += 1
            
            void var_2f0
            int64_t* rax_30 = sub_140aac870(&var_2f0, &var_420, &var_4a8)
            int64_t var_468 = *rax_30
            int64_t* rcx_46 = rax_30[1]
            
            if (rcx_46 != 0)
                rcx_46[1].d += 1
            
            int32_t var_458_1 = rax_30[2].d
            int64_t* var_2e8
            
            if (var_2e8 != 0)
                var_2e8[1].d -= 1
                
                if (var_2e8[1].d == 1)
                    (**var_2e8)(var_2e8)
                    int32_t rax_34 = *(var_2e8 + 0xc)
                    *(var_2e8 + 0xc) -= 1
                    
                    if (rax_34 == 1)
                        (*(*var_2e8 + 8))(var_2e8, 1)
            
            sub_140596f50(&var_4a8)
            
            if (var_e0_1 != 0)
                char var_e0_2 = 0
                
                if (rcx_41 != 0)
                    rcx_41[1].d -= 1
                    
                    if (rcx_41[1].d == 1)
                        (**rcx_41)(rcx_41)
                        int32_t rax_38 = *(rcx_41 + 0xc)
                        *(rcx_41 + 0xc) -= 1
                        
                        if (rax_38 == 1)
                            (*(*rcx_41 + 8))(rcx_41, 1)
            
            int64_t* rbx_10 = rax_20[1]
            
            if (rbx_10 != 0)
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    (**rbx_10)(rbx_10)
                    int32_t rax_42 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (rax_42 == 1)
                        (*(*rbx_10 + 8))(rbx_10, 1)
            
            int64_t* rbx_11 = rax_18[1]
            
            if (rbx_11 != 0)
                rbx_11[1].d -= 1
                
                if (rbx_11[1].d == 1)
                    (**rbx_11)(rbx_11)
                    int32_t rax_46 = *(rbx_11 + 0xc)
                    *(rbx_11 + 0xc) -= 1
                    
                    if (rax_46 == 1)
                        (*(*rbx_11 + 8))(rbx_11, 1)
            
            int64_t* var_2d0
            
            if (var_2d0 != 0)
                var_2d0[1].d -= 1
                
                if (var_2d0[1].d == 1)
                    (**var_2d0)(var_2d0)
                    int32_t rax_50 = *(var_2d0 + 0xc)
                    *(var_2d0 + 0xc) -= 1
                    
                    if (rax_50 == 1)
                        (*(*var_2d0 + 8))(var_2d0, 1)
            
            int64_t* r15_2 = &data_142d40450
            int16_t* const rdx_24 = &data_142d40450
            int16_t* const rcx_58 = &data_142d40450
            
            if (var_500 != 0)
                rdx_24 = var_508
            
            int32_t var_3b8
            
            if (var_3b8 != 0)
                rcx_58 = var_3c0
            
            int32_t rax_52 = sub_140a54510(rcx_58, rdx_24)
            int32_t rax_53
            
            if (rax_52 != 0)
                rax_53 = sub_140b21610(2, &var_468, nullptr)
            
            if (rax_52 == 0 || rax_53 == 5)
                int32_t rbx_14 = *(r13_1 + 0x30)
                bool cond:4_1
                
                if (var_500 s> 1)
                    int32_t r15_3 = rbx_14 - 1
                    
                    if (rbx_14 == 0)
                        r15_3 = 0
                    
                    int32_t rax_54
                    
                    if (var_500 == 0)
                        rax_54 = var_500 + 1
                    
                    if (var_500 != 0 || r15_3 == 0)
                        rax_54 = 0
                    
                    int16_t* rbx_16 = var_508
                    int32_t rcx_61 = r15_3 + rax_54
                    var_528 = nullptr
                    
                    if (var_500 != 0 || rcx_61 != 0)
                        sub_1405a4c70(&var_528, var_500 + rcx_61, 0)
                        memcpy(var_528, rbx_16, var_500 * 2)
                    else
                        int32_t var_51c_1 = 0
                    
                    sub_140a20ba0(&var_528, *(r13_1 + 0x28), r15_3)
                    int64_t* rax_55 = var_528
                    r15_2 = &data_142d40450
                    var_528 = nullptr
                    int32_t var_520_1
                    var_520_1.q = 0
                    rsi = rax_55
                    int32_t var_490_2 = var_500
                    cond:4_1 = var_500 != 0
                else
                    int64_t r14_7 = *(r13_1 + 0x28)
                    uint64_t var_498 = 0
                    cond:4_1 = rbx_14 != 0
                    
                    if (rbx_14 != 0)
                        sub_1405a4c70(&var_498, rbx_14, 0)
                        rsi = var_498
                        memcpy(rsi, r14_7, rbx_14 * 2)
                        cond:4_1 = rbx_14 != 0
                
                if (cond:4_1)
                    r15_2 = rsi
                
                int64_t rbx_17 = *rax_2
                void var_170
                int64_t* rax_56 = sub_1423fb9e0(&var_170, &var_228, r15_2, 1)
                int32_t rax_57 = (*(rbx_17 + 0x440))(rax_2, r12[6], rax_56, &var_478)
                
                if (rsi != 0)
                    sub_140a74f90(rsi)
                
                if (rcx_46 != 0)
                    rcx_46[1].d -= 1
                    
                    if (rcx_46[1].d == 1)
                        (**rcx_46)(rcx_46)
                        int32_t rdi_5 = *(rcx_46 + 0xc)
                        *(rcx_46 + 0xc) -= 1
                        
                        if (rdi_5 == 1)
                            (*(*rcx_46 + 8))(rcx_46, zx.q(rdi_5))
                
                if (rax_57 != 1)
                    (*(*r12 + 0x378))(r12)
                else
                    void var_188
                    int64_t* rax_60 = sub_140aae420(&var_188, &var_508)
                    void var_2a8
                    char* var_240
                    char** rax_62 = sub_140a96390(&var_240, 
                        _vfprintf_p_l(&var_2a8, 
                            The default map '{0}' could not be found. Exiting.", 
                        Engine"))
                    int64_t var_50 = *rax_60
                    void* rcx_75 = rax_60[1]
                    int32_t var_60 = 4
                    void* var_48_1 = rcx_75
                    
                    if (rcx_75 != 0)
                        *(rcx_75 + 8) += 1
                    
                    int32_t rcx_76 = rax_60[2].d
                    int64_t* var_4b0_1 = &var_30
                    char* var_410 = *rax_62
                    void* rax_64 = rax_62[1]
                    int32_t var_40_1 = rcx_76
                    char var_38_1 = 1
                    int128_t var_378 = (&var_60).o
                    void* var_408_1 = rax_64
                    
                    if (rax_64 != 0)
                        *(rax_64 + 8) += 1
                    
                    void var_368
                    void var_2c0
                    int64_t* rax_66 =
                        sub_140aac870(&var_2c0, &var_410, sub_1405d4de0(&var_368, &var_378))
                    int64_t var_450 = *rax_66
                    void* rcx_80 = rax_66[1]
                    void* var_448_1 = rcx_80
                    
                    if (rcx_80 != 0)
                        *(rcx_80 + 8) += 1
                    
                    int32_t var_440_1 = rax_66[2].d
                    sub_1405970a0(&var_2c0)
                    sub_140596f50(&var_368)
                    sub_1405d57e0(&var_50)
                    sub_1405970a0(rax_62)
                    sub_1405970a0(rax_60)
                    sub_1405970a0(&var_2a8)
                    sub_140b21610(0, &var_450, nullptr)
                    sub_140b721f0(0)
                    sub_1405970a0(&var_450)
            else
                sub_140b721f0(0)
                rbx_13 = rcx_46
            label_142040845:
                
                if (rbx_13 != 0)
                    rbx_13[1].d -= 1
                    
                    if (rbx_13[1].d == 1)
                        (**rbx_13)(rbx_13)
                        int32_t rdi_7 = *(rbx_13 + 0xc)
                        *(rbx_13 + 0xc) -= 1
                        
                        if (rdi_7 == 1)
                            (*(*rbx_13 + 8))(rbx_13, zx.q(rdi_7))
        else
            void var_358
            sub_140596d10(&var_358, &var_3e8)
            void var_3d8
            void var_348
            sub_140596d10(&var_348, &var_3d8)
            int32_t var_3c8
            int32_t var_338_1 = var_3c8
            int32_t var_334_1 = var_3c4
            void var_330
            sub_140596d10(&var_330, &var_3c0)
            void var_3b0
            void var_320
            sub_140596d10(&var_320, &var_3b0)
            int32_t i_9
            int32_t i_7 = i_9
            int64_t* var_3a0
            int64_t* r14_4 = var_3a0
            uint64_t var_310 = 0
            int32_t i_10 = i_7
            
            if (i_7 != 0)
                sub_1405a4be0(&var_310, i_7, 0)
                uint64_t rbx_7 = var_310
                int32_t i
                
                do
                    *rbx_7 = 0
                    int32_t rdi_4 = r14_4[1].d
                    int64_t r12_1 = *r14_4
                    *(rbx_7 + 8) = rdi_4
                    
                    if (rdi_4 != 0)
                        sub_1405a4c70(rbx_7, rdi_4, 0)
                        memcpy(*rbx_7, r12_1, rdi_4 * 2)
                    else
                        *(rbx_7 + 0xc) = 0
                    
                    rbx_7 += 0x10
                    r14_4 = &r14_4[2]
                    i = i_7
                    i_7 -= 1
                while (i != 1)
                r12 = var_528
            else
                int32_t var_304_1 = 0
            
            void var_390
            void var_300
            sub_140596d10(&var_300, &var_390)
            
            if ((*(*rax_2 + 0x440))(rax_2, r12[6], &var_358, &var_478) == 1)
                goto label_14203ffbb
            
            (*(*r12 + 0x378))(r12)
        sub_14094c030(&var_3e8)
        uint64_t rcx_113 = var_538
        
        if (rcx_113 != 0)
            sub_140a74f90(rcx_113)
        
        int16_t* rcx_11 = var_508
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    else
        int16_t* var_a8 = nullptr
        int32_t i_11 = 0
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        char var_80_1 = 0
        char var_68_1 = 0
        int32_t rax_7 = sub_140a2ccb0(&var_4e8, &var_a8, U",", 1)
        char rax_8
        
        if (rax_7 != 0)
            rax_8 = sub_142040dd0(&var_a8, r12)
        
        void var_88
        
        if (rax_7 == 0 || rax_8 == 0)
            sub_14201a850(&var_88)
            sub_140745b20(&var_98)
            int32_t i_6 = i_11
            int16_t* rbx_3 = var_a8
            
            if (i_6 != 0)
                int32_t i_1
                
                do
                    int64_t rcx_14 = *rbx_3
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    rbx_3 = &rbx_3[8]
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
                rbx_3 = var_a8
            
            if (rbx_3 != 0)
                sub_140a74f90(rbx_3)
            
            goto label_14203fce9
        
        sub_14201a850(&var_88)
        sub_140745b20(&var_98)
        int32_t i_5 = i_11
        int16_t* rbx_2 = var_a8
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                int64_t rcx_10 = *rbx_2
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                rbx_2 = &rbx_2[8]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            rbx_2 = var_a8
        
        if (rbx_2 != 0)
            sub_140a74f90(rbx_2)
else
    int64_t rax_4 = *r12
    int64_t* var_4d8 = nullptr
    int32_t i_8 = 0
    char rax_5 = (*(rax_4 + 0x300))(r12, &var_4e8, 0, &var_4d8)
    int32_t i_4 = i_8
    int64_t* rbx_1 = var_4d8
    
    if (i_4 != 0)
        int32_t i_3
        
        do
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_1 = &rbx_1[2]
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
        rbx_1 = var_4d8
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rax_5 == 0)
        goto label_14203fce9

int64_t rcx_114 = var_4e8

if (rcx_114 != 0)
    sub_140a74f90(rcx_114)

int64_t rcx_115 = var_478

if (rcx_115 != 0)
    sub_140a74f90(rcx_115)

int64_t result = sub_14094c030(&var_228)
__security_check_cookie(var_30 ^ &var_558)
return result
