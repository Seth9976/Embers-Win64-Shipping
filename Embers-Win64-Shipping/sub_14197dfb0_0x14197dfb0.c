// 函数: sub_14197dfb0
// 地址: 0x14197dfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int32_t* result = __security_cookie ^ &var_4c8
int32_t* result_1 = result
int32_t var_3c0 = 0

if (data_143f0f19c != 0)
    result = data_143f01d08
    
    if (*result != 0)
        result = zx.q(data_143f0f1b0)
        
        if (result.d != 0)
            int32_t rcx_1 = 0
            int32_t rbx_1 = (data_143f024c0.q).d
            int32_t r8_1 = 0
            int64_t rdi_1 = data_143f024b8
            uint64_t var_490 = 0
            int32_t var_484
            __builtin_memset(&var_484, 0, 0x54)
            int32_t var_498 = result.d
            int32_t var_474
            int64_t var_468
            
            if (rbx_1 != 0)
                sub_1405a4c70(&var_490, rbx_1, 0)
                memcpy(var_490, rdi_1, rbx_1 * 2)
                r8_1 = var_468:4.d
                rcx_1 = var_474
            
            int128_t* var_480
            int32_t var_478_1
            
            if (var_480 != u"Unknown")
                int32_t rdx_3 = 0
                int32_t var_478_2 = 0
                
                if (rcx_1 != 8)
                    sub_1405947f0(&var_480, 8)
                    rcx_1 = var_474
                    rdx_3 = var_478_2
                
                var_478_1 = rdx_3 + 8
                
                if (rdx_3 + 8 s> rcx_1)
                    sub_140594770(&var_480)
                
                *var_480 = *u"Unknown"
                r8_1 = var_468:4.d
            
            int32_t rbx_2 = (data_143f024d0.q).d
            int64_t rdi_2 = data_143f024c8
            var_468.d = rbx_2
            uint64_t var_470
            
            if (rbx_2 != 0 || r8_1 != 0)
                sub_1405a4c70(&var_470, rbx_2, r8_1)
                memcpy(var_470, rdi_2, rbx_2 * 2)
            else
                var_468:4.d = 0
            
            int32_t rbx_3 = (data_143f024e0.q).d
            int64_t rdi_3 = data_143f024d8
            int64_t var_458
            var_458.d = rbx_3
            uint64_t var_460
            
            if (rbx_3 != 0)
                sub_1405a4c70(&var_460, rbx_3, 0)
                memcpy(var_460, rdi_3, rbx_3 * 2)
            else
                var_458:4.d = 0
            
            int32_t rbx_4 = (data_143f024f0.q).d
            int64_t rdi_4 = data_143f024e8
            int64_t var_448
            var_448.d = rbx_4
            uint64_t var_450
            
            if (rbx_4 != 0)
                sub_1405a4c70(&var_450, rbx_4, 0)
                memcpy(var_450, rdi_4, rbx_4 * 2)
            else
                var_448:4.d = 0
            
            int64_t* rcx_12 = data_143f0f180
            int64_t var_408
            int64_t var_3b8
            int32_t rsi_2
            int64_t* rdi_7
            
            if (rcx_12 == 0)
                var_3b8 = 0
                rdi_7 = &var_3b8
                int64_t var_3b0_1 = 0
                rsi_2 = 2
            else
                int16_t* rax_4 = (*(*rcx_12 + 0x20))(rcx_12)
                int32_t rdx_10 = 0
                var_408 = 0
                int32_t var_400_1 = 0
                int32_t rcx_13 = 0
                int32_t var_3fc_1 = 0
                
                if (rax_4 != 0 && *rax_4 != 0)
                    int64_t rdi_5 = -1
                    
                    do
                        rdi_5 += 1
                    while (rax_4[rdi_5] != 0)
                    
                    if (rdi_5.d + 1 s> 0)
                        sub_1405947f0(&var_408, rdi_5.d + 1)
                        rcx_13 = var_3fc_1
                        rdx_10 = var_400_1
                    
                    int32_t rax_5 = rdi_5.d + 1 + rdx_10
                    int32_t var_400_2 = rax_5
                    
                    if (rax_5 s> rcx_13)
                        sub_140594770(&var_408)
                    
                    UnDecorator::getReferenceType(var_408, rax_4, (rdi_5.d + 1) * 2)
                
                rdi_7 = &var_408
                rsi_2 = 1
            
            int64_t var_440
            int64_t rcx_17 = var_440
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            int64_t rax_6 = *rdi_7
            *rdi_7 = 0
            var_440 = rax_6
            int64_t var_438
            var_438.d = rdi_7[1].d
            var_438:4.d = *(rdi_7 + 0xc)
            rdi_7[1] = 0
            
            if ((rsi_2.b & 2) != 0)
                int64_t rcx_18 = var_3b8
                rsi_2 &= 0xfffffffd
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
            
            if ((rsi_2.b & 1) != 0)
                int64_t rcx_19 = var_408
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
            
            int32_t var_348 = var_498
            void var_340
            sub_140596d10(&var_340, &var_490)
            void var_330
            sub_140596d10(&var_330, &var_480)
            void var_320
            sub_140596d10(&var_320, &var_470)
            void var_310
            sub_140596d10(&var_310, &var_460)
            void var_300
            sub_140596d10(&var_300, &var_450)
            void var_2f0
            sub_140596d10(&var_2f0, &var_440)
            void var_1a8
            sub_1419614a0(&var_1a8, &var_348)
            sub_140b64390(&var_348)
            
            if (rbx_1 s> 1 && var_498 != 0)
                int16_t* const r14_1 = &data_142d40450
                uint64_t rcx_28 = &data_142d40450
                
                if (var_468.d != 0)
                    rcx_28 = var_470
                
                if (sub_140a54510(rcx_28, u"Unknown") != 0)
                    uint64_t rcx_29 = &data_142d40450
                    
                    if (var_468.d != 0)
                        rcx_29 = var_470
                    
                    if (sub_140a54510(rcx_29, &data_142d40450) != 0 && data_143f0f1b4 == 0)
                        int64_t var_1f8
                        sub_141970c50(&var_1a8, &var_1f8)
                        int32_t var_1f0
                        int32_t var_1e0
                        
                        if (var_1f0 != 0 && var_1f0 - 1 s> 1)
                        label_14197e3f6:
                            char rax_16 = sub_141976470(&var_1a8)
                            int128_t* rsi_3 = var_480
                            int64_t* var_4a8 = nullptr
                            int32_t var_4a0_1 = var_478_1
                            int32_t var_49c
                            int32_t rcx_32
                            
                            if (var_478_1 != 0)
                                sub_1405a4c70(&var_4a8, var_478_1, 0)
                                memcpy(var_4a8, rsi_3, var_478_1 * 2)
                                rcx_32 = var_49c
                            else
                                rcx_32 = 0
                                var_49c = 0
                            
                            int32_t rax_17 = var_498
                            
                            if (rax_17 != 0x10de)
                                if (rax_17 != 0x1002)
                                    if (rax_17 == 0x8086 && var_4a8 != u"Intel")
                                        int32_t rdx_25 = 0
                                        int32_t var_4a0_6 = 0
                                        
                                        if (rcx_32 != 6)
                                            sub_1405947f0(&var_4a8, 6)
                                            rcx_32 = var_49c
                                            rdx_25 = var_4a0_6
                                        
                                        int32_t var_4a0_7 = rdx_25 + 6
                                        
                                        if (rdx_25 + 6 s> rcx_32)
                                            sub_140594770(&var_4a8)
                                        
                                        int64_t* rcx_42 = var_4a8
                                        *rcx_42 = 0x650074006e0049
                                        rcx_42[1].d = 0x6c
                                else if (var_4a8 != &data_143000f28)
                                    int32_t rdx_24 = 0
                                    int32_t var_4a0_4 = 0
                                    
                                    if (rcx_32 != 4)
                                        sub_1405947f0(&var_4a8, 4)
                                        rcx_32 = var_49c
                                        rdx_24 = var_4a0_4
                                    
                                    int32_t var_4a0_5 = rdx_24 + 4
                                    
                                    if (rdx_24 + 4 s> rcx_32)
                                        sub_140594770(&var_4a8)
                                    
                                    *var_4a8 = 0x44004d0041
                            else if (var_4a8 != u"NVIDIA")
                                int32_t rdx_23 = 0
                                int32_t var_4a0_2 = 0
                                
                                if (rcx_32 != 7)
                                    sub_1405947f0(&var_4a8, 7)
                                    rcx_32 = var_49c
                                    rdx_23 = var_4a0_2
                                
                                int32_t var_4a0_3 = rdx_23 + 7
                                
                                if (rdx_23 + 7 s> rcx_32)
                                    sub_140594770(&var_4a8)
                                
                                __builtin_wcscpy(var_4a8, u"NVIDIA")
                            
                            int64_t var_138
                            __builtin_memset(&var_138, 0, 0x2c)
                            int32_t var_10c_1 = 0x80
                            int32_t var_108_1 = 0xffffffff
                            int32_t var_104_1 = 0
                            int64_t var_f8_1 = 0
                            int32_t var_f0_1 = 0
                            void var_2e0
                            int64_t* rax_22 = sub_140aae420(&var_2e0, &var_490)
                            int32_t var_e8 = 4
                            int64_t var_d8_1 = *rax_22
                            int64_t* rcx_45 = rax_22[1]
                            
                            if (rcx_45 != 0)
                                rcx_45[1].d += 1
                            
                            int32_t var_c8_1 = rax_22[2].d
                            char var_c0_1 = 1
                            int64_t var_3f8 = 0
                            int32_t var_3f0_1 = 0
                            sub_1405947f0(&var_3f8, 0xc)
                            int32_t rax_24 = var_3f0_1 + 0xc
                            var_3f0_1 = rax_24
                            
                            if (rax_24 s> 0)
                                sub_140594770(&var_3f8)
                            
                            UnDecorator::getReferenceType(var_3f8, u"AdapterName", 0x18)
                            int64_t* var_398 = &var_3f8
                            int32_t* var_390_1 = &var_e8
                            sub_140b91dc0(&var_138, &var_3c0, &var_398, nullptr)
                            int64_t rcx_50 = var_3f8
                            
                            if (rcx_50 != 0)
                                sub_140a74f90(rcx_50)
                            
                            if (var_c0_1 != 0)
                                char var_c0_2 = 0
                                
                                if (rcx_45 != 0)
                                    rcx_45[1].d -= 1
                                    
                                    if (rcx_45[1].d == 1)
                                        (**rcx_45)(rcx_45)
                                        int32_t rax_27 = *(rcx_45 + 0xc)
                                        *(rcx_45 + 0xc) -= 1
                                        
                                        if (rax_27 == 1)
                                            (*(*rcx_45 + 8))(rcx_45, 1)
                            
                            int64_t* var_2d8
                            
                            if (var_2d8 != 0)
                                var_2d8[1].d -= 1
                                
                                if (var_2d8[1].d == 1)
                                    (**var_2d8)(var_2d8)
                                    int32_t rax_31 = *(var_2d8 + 0xc)
                                    *(var_2d8 + 0xc) -= 1
                                    
                                    if (rax_31 == 1)
                                        (*(*var_2d8 + 8))(var_2d8, 1)
                            
                            void var_2c8
                            int64_t* rax_33 = sub_140aae420(&var_2c8, &var_4a8)
                            int32_t var_b8 = 4
                            int64_t var_a8_1 = *rax_33
                            int64_t* rcx_57 = rax_33[1]
                            
                            if (rcx_57 != 0)
                                rcx_57[1].d += 1
                            
                            int32_t var_98_1 = rax_33[2].d
                            char var_90_1 = 1
                            int64_t var_3e8 = 0
                            int32_t var_3e0_1 = 0
                            sub_1405947f0(&var_3e8, 7)
                            int32_t rax_35 = var_3e0_1 + 7
                            var_3e0_1 = rax_35
                            
                            if (rax_35 s> 0)
                                sub_140594770(&var_3e8)
                            
                            UnDecorator::getReferenceType(var_3e8, u"Vendor", 0xe)
                            int64_t* var_388 = &var_3e8
                            int32_t* var_380_1 = &var_b8
                            void var_3a8
                            sub_140b91dc0(&var_138, &var_3a8, &var_388, nullptr)
                            int64_t rcx_62 = var_3e8
                            
                            if (rcx_62 != 0)
                                sub_140a74f90(rcx_62)
                            
                            if (var_90_1 != 0)
                                char var_90_2 = 0
                                
                                if (rcx_57 != 0)
                                    rcx_57[1].d -= 1
                                    
                                    if (rcx_57[1].d == 1)
                                        (**rcx_57)(rcx_57)
                                        int32_t rax_38 = *(rcx_57 + 0xc)
                                        *(rcx_57 + 0xc) -= 1
                                        
                                        if (rax_38 == 1)
                                            (*(*rcx_57 + 8))(rcx_57, 1)
                            
                            int64_t* var_2c0
                            
                            if (var_2c0 != 0)
                                var_2c0[1].d -= 1
                                
                                if (var_2c0[1].d == 1)
                                    (**var_2c0)(var_2c0)
                                    int32_t rax_42 = *(var_2c0 + 0xc)
                                    *(var_2c0 + 0xc) -= 1
                                    
                                    if (rax_42 == 1)
                                        (*(*var_2c0 + 8))(var_2c0, 1)
                            
                            int64_t var_358
                            void var_2b0
                            int64_t* rax_45 =
                                sub_140aae2f0(&var_2b0, sub_141973320(&var_1a8, &var_358, &var_440))
                            int32_t var_88 = 4
                            int64_t var_78_1 = *rax_45
                            int64_t* rcx_70 = rax_45[1]
                            
                            if (rcx_70 != 0)
                                rcx_70[1].d += 1
                            
                            int32_t var_68_1 = rax_45[2].d
                            char var_60_1 = 1
                            int64_t var_428 = 0
                            int32_t var_420_1 = 0
                            sub_1405947f0(&var_428, 0xf)
                            int32_t rax_47 = var_420_1 + 0xf
                            var_420_1 = rax_47
                            
                            if (rax_47 s> 0)
                                sub_140594770(&var_428)
                            
                            UnDecorator::getReferenceType(var_428, u"RecommendedVer", 0x1e)
                            int64_t* var_378 = &var_428
                            int32_t* var_370_1 = &var_88
                            void var_3a4
                            sub_140b91dc0(&var_138, &var_3a4, &var_378, nullptr)
                            int64_t rcx_75 = var_428
                            
                            if (rcx_75 != 0)
                                sub_140a74f90(rcx_75)
                            
                            if (var_60_1 != 0)
                                char var_60_2 = 0
                                
                                if (rcx_70 != 0)
                                    rcx_70[1].d -= 1
                                    
                                    if (rcx_70[1].d == 1)
                                        (**rcx_70)(rcx_70)
                                        int32_t rax_50 = *(rcx_70 + 0xc)
                                        *(rcx_70 + 0xc) -= 1
                                        
                                        if (rax_50 == 1)
                                            (*(*rcx_70 + 8))(rcx_70, 1)
                            
                            int64_t* var_2a8
                            
                            if (var_2a8 != 0)
                                var_2a8[1].d -= 1
                                
                                if (var_2a8[1].d == 1)
                                    (**var_2a8)(var_2a8)
                                    int32_t rax_54 = *(var_2a8 + 0xc)
                                    *(var_2a8 + 0xc) -= 1
                                    
                                    if (rax_54 == 1)
                                        (*(*var_2a8 + 8))(var_2a8, 1)
                            
                            int64_t rcx_80 = var_358
                            
                            if (rcx_80 != 0)
                                sub_140a74f90(rcx_80)
                            
                            void var_298
                            int64_t* rax_56 = sub_140aae420(&var_298, &var_460)
                            int32_t var_58 = 4
                            int64_t var_48_1 = *rax_56
                            int64_t* rcx_83 = rax_56[1]
                            
                            if (rcx_83 != 0)
                                rcx_83[1].d += 1
                            
                            int32_t var_38_1 = rax_56[2].d
                            char var_30_1 = 1
                            int64_t var_418 = 0
                            int32_t var_410_1 = 0
                            sub_1405947f0(&var_418, 0xd)
                            int32_t rax_58 = var_410_1 + 0xd
                            var_410_1 = rax_58
                            
                            if (rax_58 s> 0)
                                sub_140594770(&var_418)
                            
                            UnDecorator::getReferenceType(var_418, u"InstalledVer", 0x1a)
                            int64_t* var_368 = &var_418
                            int32_t* var_360_1 = &var_58
                            void var_3a0
                            sub_140b91dc0(&var_138, &var_3a0, &var_368, nullptr)
                            int64_t rcx_88 = var_418
                            
                            if (rcx_88 != 0)
                                sub_140a74f90(rcx_88)
                            
                            if (var_30_1 != 0)
                                char var_30_2 = 0
                                
                                if (rcx_83 != 0)
                                    rcx_83[1].d -= 1
                                    
                                    if (rcx_83[1].d == 1)
                                        (**rcx_83)(rcx_83)
                                        int32_t rax_61 = *(rcx_83 + 0xc)
                                        *(rcx_83 + 0xc) -= 1
                                        
                                        if (rax_61 == 1)
                                            (*(*rcx_83 + 8))(rcx_83, 1)
                            
                            int64_t* var_290
                            
                            if (var_290 != 0)
                                var_290[1].d -= 1
                                
                                if (var_290[1].d == 1)
                                    (**var_290)(var_290)
                                    int32_t rax_65 = *(var_290 + 0xc)
                                    *(var_290 + 0xc) -= 1
                                    
                                    if (rax_65 == 1)
                                        (*(*var_290 + 8))(var_290, 1)
                            
                            int64_t var_3d8
                            sub_140a96170(&var_3d8)
                            int64_t* var_3d0_1
                            int64_t* rdi_18
                            int64_t var_3d0
                            
                            if (rax_16 == 0)
                                void var_250
                                void var_238
                                char* var_1b8
                                int64_t* rax_77 = sub_140aaca20(&var_250, 
                                    sub_140a96390(&var_1b8, 
                                        _vfprintf_p_l(&var_238, 
                                            The installed version of the {Vendor} graphics driver has known "
                                "issues.\nPlease update to the latest driver vers", 
                                        MessageDialog")), &var_138)
                                int64_t rdx_45 = var_3d8
                                var_3d8 = *rax_77
                                *rax_77 = rdx_45
                                var_3d0_1 = rax_77[1]
                                rax_77[1] = var_3d0
                                int32_t var_3c8_2 = rax_77[2].d
                                int64_t* var_248
                                
                                if (var_248 != 0)
                                    var_248[1].d -= 1
                                    
                                    if (var_248[1].d == 1)
                                        (**var_248)(var_248)
                                        int32_t rax_81 = *(var_248 + 0xc)
                                        *(var_248 + 0xc) -= 1
                                        
                                        if (rax_81 == 1)
                                            (*(*var_248 + 8))(var_248, 1)
                                
                                int64_t* var_230
                                rdi_18 = var_230
                            else
                                void var_280
                                void var_268
                                char* var_208
                                int64_t* rax_69 = sub_140aaca20(&var_280, 
                                    sub_140a96390(&var_208, 
                                        _vfprintf_p_l(&var_268, 
                                            The latest version of the {Vendor} graphics driver has known issues."
                                "Pl", 
                                        MessageDialog")), &var_138)
                                int64_t rdx_41 = var_3d8
                                var_3d8 = *rax_69
                                *rax_69 = rdx_41
                                var_3d0_1 = rax_69[1]
                                rax_69[1] = var_3d0
                                int32_t var_3c8_1 = rax_69[2].d
                                int64_t* var_278
                                
                                if (var_278 != 0)
                                    var_278[1].d -= 1
                                    
                                    if (var_278[1].d == 1)
                                        (**var_278)(var_278)
                                        int32_t rax_73 = *(var_278 + 0xc)
                                        *(var_278 + 0xc) -= 1
                                        
                                        if (rax_73 == 1)
                                            (*(*var_278 + 8))(var_278, 1)
                                
                                int64_t* var_260
                                rdi_18 = var_260
                            
                            if (rdi_18 != 0)
                                rdi_18[1].d -= 1
                                
                                if (rdi_18[1].d == 1)
                                    (**rdi_18)(rdi_18)
                                    int32_t rax_85 = *(rdi_18 + 0xc)
                                    *(rdi_18 + 0xc) -= 1
                                    
                                    if (rax_85 == 1)
                                        (*(*rdi_18 + 8))(rdi_18, 1)
                            
                            void var_220
                            PWSTR* rax_88 = sub_140ac6680(
                                _vfprintf_p_l(&var_220, 
                                    WARNING: Known issues with graphics driver", 
                                MessageDialog"))
                            PWSTR rdi_20
                            
                            if (rax_88[1].d == 0)
                                rdi_20 = &data_142d40450
                            else
                                rdi_20 = *rax_88
                            
                            int16_t** rax_89 = sub_140ac6680(&var_3d8)
                            
                            if (rax_89[1].d != 0)
                                r14_1 = *rax_89
                            
                            sub_140b709d0(0, r14_1, rdi_20)
                            int64_t* var_218
                            
                            if (var_218 != 0)
                                var_218[1].d -= 1
                                
                                if (var_218[1].d == 1)
                                    (**var_218)(var_218)
                                    int32_t rax_92 = *(var_218 + 0xc)
                                    *(var_218 + 0xc) -= 1
                                    
                                    if (rax_92 == 1)
                                        (*(*var_218 + 8))(var_218, 1)
                            
                            if (var_3d0_1 != 0)
                                var_3d0_1[1].d -= 1
                                
                                if (var_3d0_1[1].d == 1)
                                    (**var_3d0_1)(var_3d0_1)
                                    int32_t rbx_5 = *(var_3d0_1 + 0xc)
                                    *(var_3d0_1 + 0xc) -= 1
                                    
                                    if (rbx_5 == 1)
                                        (*(*var_3d0_1 + 8))(var_3d0_1, zx.q(rbx_5))
                            
                            int32_t var_f0_2 = 0
                            
                            if (var_f8_1 != 0)
                                sub_140a74f90(var_f8_1)
                            
                            sub_140acd610(&var_138)
                            int64_t* rcx_119 = var_4a8
                            
                            if (rcx_119 != 0)
                                sub_140a74f90(rcx_119)
                        else if (var_1e0 != 0 && var_1e0 - 1 s> 1)
                            goto label_14197e3f6
                        pdb_internal::Map<int32_t,int32_t,class pdb_internal::HashClass<unsigned long,0>,void,class CriticalSectionNop>::~Map<int32_t,int32_t,class pdb_internal::HashClass<unsigned long,0>,void,class CriticalSectionNop>(
                            &var_1f8)
            
            sub_140b64390(&var_1a8)
            result = sub_140b64390(&var_498)

__security_check_cookie(result_1 ^ &var_4c8)
return result
