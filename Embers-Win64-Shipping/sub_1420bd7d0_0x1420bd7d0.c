// 函数: sub_1420bd7d0
// 地址: 0x1420bd7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_658
int64_t rax_1 = __security_cookie ^ &var_658
int16_t* const rsi = &data_142d40450
int16_t* const rcx

if (arg4[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg4

int16_t* const rax_2

if (arg3[1].d == 0)
    rax_2 = &data_142d40450
else
    rax_2 = *arg3

int16_t* const var_4f8 = rcx
int16_t* const var_500 = rax_2
int64_t i_1 = 2
uint64_t var_5f8 = 0
int32_t var_5f0 = 0
sub_140b0f5f0(&var_5f8, &var_500, 2)
int64_t var_5a0
sub_140a96170(&var_5a0)
sub_140b29e80(&var_5f8, &var_5a0)

if (arg2 == 0)
    void var_588
    sub_140b58170(&var_588, "Blueprint", 1)
    uint64_t var_628
    
    if (arg1 != 0)
        sub_140d21e10(arg1, &var_628, 0)
    else
        var_628 = 0
        int32_t var_620_1 = 0
        sub_1405947f0(&var_628, (arg2 + 5).d)
        int32_t rax_3 = var_620_1 + 5
        var_620_1 = rax_3
        
        if (rax_3 s> 0)
            sub_140594770(&var_628)
        
        UnDecorator::getReferenceType(var_628, u"None", 0xa)
    
    void var_1a8
    int64_t* rax_4 = sub_140aae2f0(&var_1a8, &var_628)
    void var_450
    char* var_348
    char** rax_6 = sub_140a96390(&var_348, 
        _vfprintf_p_l(&var_450, ExportRenderTarget[{0}]: TextureRenderTarget must be non-null.", 
        KismetRenderingLibrary"))
    int64_t rcx_12 = *rax_4
    int64_t* rcx_13 = rax_4[1]
    int32_t var_148_1 = 4
    
    if (rcx_13 != 0)
        rcx_13[1].d += 1
    
    int32_t rax_7 = rax_4[2].d
    char var_120_1 = 1
    int32_t* var_5e0 = nullptr
    int32_t var_5d8_1 = 1
    sub_1405a4b40(&var_5e0, 1, 0)
    int32_t* rcx_15 = var_5e0
    *rcx_15 = var_148_1
    int64_t var_140
    *(rcx_15 + 8) = var_140
    *(rcx_15 + 8) = var_140
    rcx_15[2] = var_140.d
    *(rcx_15 + 8) = var_140
    rcx_15[0xa].b = 0
    
    if (var_120_1 != 0)
        *(rcx_15 + 0x10) = rcx_12
        *(rcx_15 + 0x18) = rcx_13
        
        if (rcx_13 != 0)
            rcx_13[1].d += 1
        
        rcx_15[8] = rax_7
        rcx_15[0xa].b = 1
    
    char* var_4f0 = *rax_6
    void* rax_15 = rax_6[1]
    void* var_4e8_1 = rax_15
    
    if (rax_15 != 0)
        *(rax_15 + 8) += 1
    
    void var_438
    int64_t* rax_16 = sub_140aac870(&var_438, &var_4f0, &var_5e0)
    int64_t var_548 = *rax_16
    int64_t* rcx_18 = rax_16[1]
    
    if (rcx_18 != 0)
        rcx_18[1].d += 1
    
    int32_t var_538_1 = rax_16[2].d
    int64_t* var_430
    
    if (var_430 != 0)
        var_430[1].d -= 1
        
        if (var_430[1].d == 1)
            (**var_430)(var_430)
            int32_t rax_20 = *(var_430 + 0xc)
            *(var_430 + 0xc) -= 1
            
            if (rax_20 == 1)
                (*(*var_430 + 8))(var_430, 1)
    
    sub_140596f50(&var_5e0)
    
    if (var_120_1 != 0)
        char var_120_2 = 0
        
        if (rcx_13 != 0)
            rcx_13[1].d -= 1
            
            if (rcx_13[1].d == 1)
                (**rcx_13)(rcx_13)
                int32_t rax_24 = *(rcx_13 + 0xc)
                *(rcx_13 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*rcx_13 + 8))(rcx_13, 1)
    
    int64_t* rdi_3 = rax_6[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_28 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_28 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_4[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_32 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    void var_4b0
    void var_338
    sub_140ae44d0(sub_140accdf0(&var_338, &var_588), &var_4b0, &var_548)
    int64_t* var_4a8
    
    if (var_4a8 != 0)
        var_4a8[1].d -= 1
        
        if (var_4a8[1].d == 1)
            (**var_4a8)(var_4a8)
            int32_t temp8_1 = *(var_4a8 + 0xc)
            *(var_4a8 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_4a8 + 8))(var_4a8, 1)
    
    sub_140acd9c0(&var_338)
    
    if (rcx_18 != 0)
        rcx_18[1].d -= 1
        
        if (rcx_18[1].d == 1)
            (**rcx_18)(rcx_18)
            int32_t rax_39 = *(rcx_18 + 0xc)
            *(rcx_18 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*rcx_18 + 8))(rcx_18, 1)
    
    int64_t* var_448
    
    if (var_448 != 0)
        var_448[1].d -= 1
        
        if (var_448[1].d == 1)
            (**var_448)(var_448)
            int32_t rbx_1 = *(var_448 + 0xc)
            *(var_448 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_448 + 8))(var_448, zx.q(rbx_1))
    
    uint64_t rcx_37 = var_628
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
else if (*(arg2 + 0x78) != 0)
    if (sub_140ab3dc0(&var_5a0) == 0)
        void var_578
        sub_140b58170(&var_578, "Blueprint", 1)
        int64_t rsi_3 = var_5a0
        int64_t* var_598
        
        if (var_598 != 0)
            var_598[1].d += 1
        
        uint64_t var_618
        
        if (arg1 != 0)
            sub_140d21e10(arg1, &var_618, 0)
        else
            var_618 = 0
            int32_t var_610_1 = 0
            sub_1405947f0(&var_618, (arg1 + 5).d)
            int32_t rax_86 = var_610_1 + 5
            var_610_1 = rax_86
            
            if (rax_86 s> 0)
                sub_140594770(&var_618)
            
            UnDecorator::getReferenceType(var_618, u"None", 0xa)
        
        void var_178
        int64_t* rax_87 = sub_140aae2f0(&var_178, &var_618)
        void var_3d8
        char* var_368
        char** rax_89 = sub_140a96390(&var_368, 
            _vfprintf_p_l(&var_3d8, ExportRenderTarget[{0}]: Invalid file path provided: '{1}'", 
            KismetRenderingLibrary"))
        int64_t var_a8_1 = *rax_87
        void* rcx_82 = rax_87[1]
        int32_t var_b8_1 = 4
        void* var_a0_1 = rcx_82
        
        if (rcx_82 != 0)
            *(rcx_82 + 8) += 1
        
        int32_t var_98_1 = rax_87[2].d
        char var_90_1 = 1
        int32_t var_88_1 = 4
        int64_t var_78_1 = rsi_3
        int64_t* var_70_1 = var_598
        
        if (var_598 != 0)
            var_598[1].d += 1
        
        int32_t var_590
        int32_t var_68_1 = var_590
        char var_60_1 = 1
        void* var_5c0 = nullptr
        int32_t var_5b8_1 = 2
        sub_1405a4b40(&var_5c0, 2, 0)
        void var_b0
        void* rdx_25 = &var_b0
        int64_t* rcx_85 = var_5c0 + 8
        int32_t i_2 = 2
        int32_t i
        
        do
            rcx_85[-1].d = *(rdx_25 - 8)
            *rcx_85 = *rdx_25
            *rcx_85 = *rdx_25
            *rcx_85 = *rdx_25
            *rcx_85 = *rdx_25
            rcx_85[4].b = 0
            
            if (*(rdx_25 + 0x20) != 0)
                rcx_85[1] = *(rdx_25 + 8)
                void* rax_97 = *(rdx_25 + 0x10)
                rcx_85[2] = rax_97
                
                if (rax_97 != 0)
                    *(rax_97 + 8) += 1
                
                rcx_85[3].d = *(rdx_25 + 0x18)
                rcx_85[4].b = 1
            
            rcx_85 = &rcx_85[6]
            rdx_25 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
        char* var_4d0 = *rax_89
        void* rax_100 = rax_89[1]
        void* var_4c8_1 = rax_100
        
        if (rax_100 != 0)
            *(rax_100 + 8) += 1
        
        void var_3f0
        int64_t* rax_101 = sub_140aac870(&var_3f0, &var_4d0, &var_5c0)
        int64_t var_530 = *rax_101
        int64_t* rcx_88 = rax_101[1]
        
        if (rcx_88 != 0)
            rcx_88[1].d += 1
        
        int32_t var_520_1 = rax_101[2].d
        int64_t* var_3e8
        
        if (var_3e8 != 0)
            var_3e8[1].d -= 1
            
            if (var_3e8[1].d == 1)
                (**var_3e8)(var_3e8)
                int32_t rax_105 = *(var_3e8 + 0xc)
                *(var_3e8 + 0xc) -= 1
                
                if (rax_105 == 1)
                    (*(*var_3e8 + 8))(var_3e8, 1)
        
        sub_140596f50(&var_5c0)
        int64_t __saved_r13
        int64_t* rsi_4 = &__saved_r13
        
        do
            i_1 -= 1
            rsi_4 = &rsi_4[-6]
            
            if (*rsi_4 != 0)
                *rsi_4 = 0
                int64_t* rdi_17 = rsi_4[-2]
                
                if (rdi_17 != 0)
                    rdi_17[1].d -= 1
                    
                    if (rdi_17[1].d == 1)
                        (**rdi_17)(rdi_17)
                        int32_t rax_109 = *(rdi_17 + 0xc)
                        *(rdi_17 + 0xc) -= 1
                        
                        if (rax_109 == 1)
                            (*(*rdi_17 + 8))(rdi_17, 1)
        while (i_1 != 0)
        
        int64_t* rdi_18 = rax_89[1]
        
        if (rdi_18 != 0)
            rdi_18[1].d -= 1
            
            if (rdi_18[1].d == 1)
                (**rdi_18)(rdi_18)
                int32_t rax_113 = *(rdi_18 + 0xc)
                *(rdi_18 + 0xc) -= 1
                
                if (rax_113 == 1)
                    (*(*rdi_18 + 8))(rdi_18, zx.q((i_1 + 1).d))
        
        int64_t* rdi_19 = rax_87[1]
        
        if (rdi_19 != 0)
            rdi_19[1].d -= 1
            
            if (rdi_19[1].d == 1)
                (**rdi_19)(rdi_19)
                int32_t rax_117 = *(rdi_19 + 0xc)
                *(rdi_19 + 0xc) -= 1
                
                if (rax_117 == 1)
                    (*(*rdi_19 + 8))(rdi_19, 1)
        
        if (var_598 != 0)
            var_598[1].d -= 1
            
            if (var_598[1].d == 1)
                (**var_598)(var_598)
                int32_t rax_121 = *(var_598 + 0xc)
                *(var_598 + 0xc) -= 1
                
                if (rax_121 == 1)
                    (*(*var_598 + 8))(var_598, 1)
        
        void var_490
        void var_2e8
        sub_140ae44d0(sub_140accdf0(&var_2e8, &var_578), &var_490, &var_530)
        int64_t* var_488
        
        if (var_488 != 0)
            var_488[1].d -= 1
            
            if (var_488[1].d == 1)
                (**var_488)(var_488)
                int32_t temp11_1 = *(var_488 + 0xc)
                *(var_488 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*var_488 + 8))(var_488, 1)
        
        sub_140acd9c0(&var_2e8)
        
        if (rcx_88 != 0)
            rcx_88[1].d -= 1
            
            if (rcx_88[1].d == 1)
                (**rcx_88)(rcx_88)
                int32_t rax_128 = *(rcx_88 + 0xc)
                *(rcx_88 + 0xc) -= 1
                
                if (rax_128 == 1)
                    (*(*rcx_88 + 8))(rcx_88, 1)
        
        int64_t* var_3d0
        
        if (var_3d0 != 0)
            var_3d0[1].d -= 1
            
            if (var_3d0[1].d == 1)
                (**var_3d0)(var_3d0)
                int32_t rbx_3 = *(var_3d0 + 0xc)
                *(var_3d0 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    (*(*var_3d0 + 8))(var_3d0, zx.q(rbx_3))
        
        uint64_t rcx_109 = var_618
        
        if (rcx_109 != 0)
            sub_140a74f90(rcx_109)
    else if (arg4[1].d s> 1)
        sub_140a464c0()
        uint64_t rdx_39 = &data_142d40450
        
        if (var_5f0 != 0)
            rdx_39 = var_5f8
        
        char const (* r9_4)[0x4] = data_14399ea08
        int64_t* rax_150 = (*(r9_4 + 0x20))(&data_14399ea08, rdx_39, 0, r9_4)
        
        if (rax_150 == 0)
            void var_568
            sub_140b58170(&var_568, "Blueprint", 1)
            void var_390
            int64_t* rax_156 =
                _vfprintf_p_l(&var_390, ExportRenderTarget: FileWrite failed to create.", 
                KismetRenderingLibrary")
            void var_460
            void var_298
            sub_140ae44d0(sub_140accdf0(&var_298, &var_568), &var_460, rax_156)
            int64_t* var_458
            
            if (var_458 != 0)
                var_458[1].d -= 1
                
                if (var_458[1].d == 1)
                    (**var_458)(var_458)
                    int32_t temp2_1 = *(var_458 + 0xc)
                    *(var_458 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_458 + 8))(var_458, 1)
            
            sub_140acd9c0(&var_298)
            sub_1405970a0(&var_390)
        else
            int64_t var_5e8_1 = 0
            void var_268
            int32_t r8_8 = sub_1420af7e0(&var_268, 0, 0)
            char rax_153
            
            if (*(arg2 + 0xdb) != 6)
                rax_153 = sub_14208a840(arg2, &var_268, r8_8)
            else
                int64_t var_470
                int64_t* rax_151 = sub_140b19c30(&var_470, &var_5f8, 0)
                
                if (rax_151[1].d != 0)
                    rsi = *rax_151
                
                int32_t rax_152
                int32_t r8_9
                rax_152, r8_9 = sub_140a54510(rsi, &data_1432ae450)
                int64_t rcx_142 = var_470
                rsi.b = rax_152 == 0
                
                if (rcx_142 != 0)
                    r8_9 = sub_140a74f90(rcx_142)
                
                int64_t* rdx_41 = &var_268
                
                if (rsi.b == 0)
                    rax_153 = sub_14208a4e0(arg2, rdx_41, r8_9)
                else
                    rax_153 = sub_14208a6d0(arg2, rdx_41)
            
            int64_t var_1c0
            int32_t var_1b8
            
            if (rax_153 != 0)
                (*(*rax_150 + 0x150))(rax_150, var_1c0, sx.q(var_1b8))
            (**rax_150)(rax_150, 1)
            
            if (var_1c0 != 0)
                sub_140a74f90(var_1c0)
            
            sub_140b4cb40(&var_268)
    else
        void var_570
        sub_140b58170(&var_570, "Blueprint", 1)
        uint64_t var_608
        
        if (arg1 != 0)
            sub_140d21e10(arg1, &var_608, 0)
        else
            var_608 = 0
            int32_t var_600_1 = 0
            sub_1405947f0(&var_608, (arg1 + 5).d)
            int32_t rax_133 = var_600_1 + 5
            var_600_1 = rax_133
            
            if (rax_133 s> 0)
                sub_140594770(&var_608)
            
            UnDecorator::getReferenceType(var_608, u"None", 0xa)
        
        void var_160
        int64_t* rax_134 = sub_140aae2f0(&var_160, &var_608)
        void var_3a8
        char* var_378
        char** rax_136 = sub_140a96390(&var_378, 
            _vfprintf_p_l(&var_3a8, ExportRenderTarget[{0}]: FileName must be non-empty.", 
            KismetRenderingLibrary"))
        int64_t var_d8 = *rax_134
        void* rcx_119 = rax_134[1]
        int32_t var_e8_1 = 4
        
        if (rcx_119 != 0)
            *(rcx_119 + 8) += 1
        
        int32_t rcx_120 = rax_134[2].d
        char var_c0_1 = 1
        int32_t* var_5b0 = nullptr
        int32_t var_5a8_1 = 1
        sub_1405a4b40(&var_5b0, 1, 0)
        int32_t* rcx_122 = var_5b0
        *rcx_122 = var_e8_1
        int64_t var_e0
        *(rcx_122 + 8) = var_e0
        *(rcx_122 + 8) = var_e0
        rcx_122[2] = var_e0.d
        *(rcx_122 + 8) = var_e0
        rcx_122[0xa].b = 0
        
        if (var_c0_1 != 0)
            *(rcx_122 + 0x10) = var_d8
            *(rcx_122 + 0x18) = rcx_119
            
            if (rcx_119 != 0)
                *(rcx_119 + 8) += 1
            
            rcx_122[8] = rcx_120
            rcx_122[0xa].b = 1
        
        char* var_4c0 = *rax_136
        void* rax_144 = rax_136[1]
        void* var_4b8_1 = rax_144
        
        if (rax_144 != 0)
            *(rax_144 + 8) += 1
        
        void var_3c0
        int64_t* rax_145 = sub_140aac870(&var_3c0, &var_4c0, &var_5b0)
        int64_t var_518 = *rax_145
        void* rcx_125 = rax_145[1]
        void* var_510_1 = rcx_125
        
        if (rcx_125 != 0)
            *(rcx_125 + 8) += 1
        
        int32_t var_508_1 = rax_145[2].d
        sub_1405970a0(&var_3c0)
        sub_140596f50(&var_5b0)
        sub_1405d57e0(&var_d8)
        sub_1405970a0(rax_136)
        sub_1405970a0(rax_134)
        void var_480
        void var_2c0
        sub_140ae44d0(sub_140accdf0(&var_2c0, &var_570), &var_480, &var_518)
        int64_t* var_478
        
        if (var_478 != 0)
            var_478[1].d -= 1
            
            if (var_478[1].d == 1)
                (**var_478)(var_478)
                int32_t temp5_1 = *(var_478 + 0xc)
                *(var_478 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_478 + 8))(var_478, 1)
        
        sub_140acd9c0(&var_2c0)
        sub_1405970a0(&var_518)
        sub_1405970a0(&var_3a8)
        uint64_t rcx_138 = var_608
        
        if (rcx_138 != 0)
            sub_140a74f90(rcx_138)
else
    void var_580
    sub_140b58170(&var_580, "Blueprint", 1)
    uint64_t var_638
    
    if (arg1 != 0)
        sub_140d21e10(arg1, &var_638, 0)
    else
        var_638 = 0
        int32_t var_630_1 = 0
        sub_1405947f0(&var_638, (arg1 + 5).d)
        int32_t rax_44 = var_630_1 + 5
        var_630_1 = rax_44
        
        if (rax_44 s> 0)
            sub_140594770(&var_638)
        
        UnDecorator::getReferenceType(var_638, u"None", 0xa)
    
    void var_190
    int64_t* rax_45 = sub_140aae2f0(&var_190, &var_638)
    void var_408
    char* var_358
    char** rax_47 = sub_140a96390(&var_358, 
        _vfprintf_p_l(&var_408, ExportRenderTarget[{0}]: render target has been released.", 
        KismetRenderingLibrary"))
    int64_t rcx_46 = *rax_45
    int64_t* rcx_47 = rax_45[1]
    int32_t var_118_1 = 4
    
    if (rcx_47 != 0)
        rcx_47[1].d += 1
    
    int32_t rax_48 = rax_45[2].d
    char var_f0_1 = 1
    int32_t* var_5d0 = nullptr
    int32_t var_5c8_1 = 1
    sub_1405a4b40(&var_5d0, 1, 0)
    int32_t* rcx_49 = var_5d0
    *rcx_49 = var_118_1
    int64_t var_110
    *(rcx_49 + 8) = var_110
    *(rcx_49 + 8) = var_110
    rcx_49[2] = var_110.d
    *(rcx_49 + 8) = var_110
    rcx_49[0xa].b = 0
    
    if (var_f0_1 != 0)
        *(rcx_49 + 0x10) = rcx_46
        *(rcx_49 + 0x18) = rcx_47
        
        if (rcx_47 != 0)
            rcx_47[1].d += 1
        
        rcx_49[8] = rax_48
        rcx_49[0xa].b = 1
    
    char* var_4e0 = *rax_47
    void* rax_56 = rax_47[1]
    void* var_4d8_1 = rax_56
    
    if (rax_56 != 0)
        *(rax_56 + 8) += 1
    
    void var_420
    int64_t* rax_57 = sub_140aac870(&var_420, &var_4e0, &var_5d0)
    int64_t var_560 = *rax_57
    int64_t* rcx_52 = rax_57[1]
    
    if (rcx_52 != 0)
        rcx_52[1].d += 1
    
    int32_t var_550_1 = rax_57[2].d
    int64_t* var_418
    
    if (var_418 != 0)
        var_418[1].d -= 1
        
        if (var_418[1].d == 1)
            (**var_418)(var_418)
            int32_t rax_61 = *(var_418 + 0xc)
            *(var_418 + 0xc) -= 1
            
            if (rax_61 == 1)
                (*(*var_418 + 8))(var_418, 1)
    
    sub_140596f50(&var_5d0)
    
    if (var_f0_1 != 0)
        char var_f0_2 = 0
        
        if (rcx_47 != 0)
            rcx_47[1].d -= 1
            
            if (rcx_47[1].d == 1)
                (**rcx_47)(rcx_47)
                int32_t rax_65 = *(rcx_47 + 0xc)
                *(rcx_47 + 0xc) -= 1
                
                if (rax_65 == 1)
                    (*(*rcx_47 + 8))(rcx_47, 1)
    
    int64_t* rdi_10 = rax_47[1]
    
    if (rdi_10 != 0)
        rdi_10[1].d -= 1
        
        if (rdi_10[1].d == 1)
            (**rdi_10)(rdi_10)
            int32_t rax_69 = *(rdi_10 + 0xc)
            *(rdi_10 + 0xc) -= 1
            
            if (rax_69 == 1)
                (*(*rdi_10 + 8))(rdi_10, 1)
    
    int64_t* rdi_11 = rax_45[1]
    
    if (rdi_11 != 0)
        rdi_11[1].d -= 1
        
        if (rdi_11[1].d == 1)
            (**rdi_11)(rdi_11)
            int32_t rax_73 = *(rdi_11 + 0xc)
            *(rdi_11 + 0xc) -= 1
            
            if (rax_73 == 1)
                (*(*rdi_11 + 8))(rdi_11, 1)
    
    void var_4a0
    void var_310
    sub_140ae44d0(sub_140accdf0(&var_310, &var_580), &var_4a0, &var_560)
    int64_t* var_498
    
    if (var_498 != 0)
        var_498[1].d -= 1
        
        if (var_498[1].d == 1)
            (**var_498)(var_498)
            int32_t temp9_1 = *(var_498 + 0xc)
            *(var_498 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_498 + 8))(var_498, 1)
    
    sub_140acd9c0(&var_310)
    
    if (rcx_52 != 0)
        rcx_52[1].d -= 1
        
        if (rcx_52[1].d == 1)
            (**rcx_52)(rcx_52)
            int32_t rax_80 = *(rcx_52 + 0xc)
            *(rcx_52 + 0xc) -= 1
            
            if (rax_80 == 1)
                (*(*rcx_52 + 8))(rcx_52, 1)
    
    int64_t* var_400
    
    if (var_400 != 0)
        var_400[1].d -= 1
        
        if (var_400[1].d == 1)
            (**var_400)(var_400)
            int32_t rbx_2 = *(var_400 + 0xc)
            *(var_400 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*var_400 + 8))(var_400, zx.q(rbx_2))
    
    uint64_t rcx_71 = var_638
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)

int64_t result = sub_1405970a0(&var_5a0)
uint64_t rcx_158 = var_5f8

if (rcx_158 != 0)
    result = sub_140a74f90(rcx_158)

__security_check_cookie(rax_1 ^ &var_658)
return result
