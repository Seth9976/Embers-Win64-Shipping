// 函数: sub_1420bacc0
// 地址: 0x1420bacc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_578
int64_t rax_1 = __security_cookie ^ &var_578
void* rax_2 = sub_1423de540(data_143f5b298, arg1, 1)
int32_t result

if (rax_2 == 0)
    void var_4a8
    sub_140b58170(&var_4a8, "Blueprint", (rax_2 + 1).d)
    void var_3c8
    int64_t* rax_3 =
        _vfprintf_p_l(&var_3c8, DrawMaterialToRenderTarget: WorldContextObject is not valid.", 
        KismetRenderingLibrary")
    void var_420
    void var_2e0
    sub_140ae44d0(sub_140accdf0(&var_2e0, &var_4a8), &var_420, rax_3)
    int64_t* var_418
    
    if (var_418 != 0)
        var_418[1].d -= 1
        
        if (var_418[1].d == 1)
            (**var_418)(var_418)
            int32_t temp2_1 = *(var_418 + 0xc)
            *(var_418 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_418 + 8))(var_418, zx.q((rax_2 + 1).d))
    
    result = sub_140acd9c0(&var_2e0)
    int64_t* var_3c0
    
    if (var_3c0 != 0)
        result = var_3c0[1].d
        var_3c0[1].d -= 1
        
        if (result == 1)
            result = (**var_3c0)(var_3c0)
            int32_t rdi_1 = *(var_3c0 + 0xc)
            *(var_3c0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_3c0 + 8))(var_3c0, zx.q(rdi_1))
else if (arg3 == 0)
    void var_4a0
    sub_140b58170(&var_4a0, "Blueprint", (arg3 + 1).d)
    uint64_t var_528
    
    if (arg1 != 0)
        sub_140d21e10(arg1, &var_528, 0)
    else
        var_528 = arg3
        sub_1405947f0(&var_528, (arg3 + 5).d)
        uint64_t var_520_1
        var_520_1.d = arg3.d + 5
        
        if (arg3.d + 5 s> var_520_1:4.d)
            sub_140594770(&var_528)
        
        UnDecorator::getReferenceType(var_528, u"None", 0xa)
    
    void var_268
    int64_t* rax_10 = sub_140aae2f0(&var_268, &var_528)
    void var_3b0
    char* var_318
    char** rax_12 = sub_140a96390(&var_318, 
        _vfprintf_p_l(&var_3b0, DrawMaterialToRenderTarget[{0}]: Material must be non-null.", 
        KismetRenderingLibrary"))
    int64_t rcx_18 = *rax_10
    int64_t* rcx_19 = rax_10[1]
    int32_t var_1f0_1 = 4
    
    if (rcx_19 != 0)
        rcx_19[1].d += 1
    
    int32_t rax_13 = rax_10[2].d
    char var_1c8_1 = 1
    uint64_t var_4d8 = arg3
    int32_t var_4d0_1 = 1
    sub_1405a4b40(&var_4d8, 1, 0)
    uint64_t rcx_21 = var_4d8
    *rcx_21 = var_1f0_1
    int64_t var_1e8
    *(rcx_21 + 8) = var_1e8
    *(rcx_21 + 8) = var_1e8
    *(rcx_21 + 8) = var_1e8.d
    *(rcx_21 + 8) = var_1e8
    *(rcx_21 + 0x28) = arg3.b
    
    if (var_1c8_1 != arg3.b)
        *(rcx_21 + 0x10) = rcx_18
        *(rcx_21 + 0x18) = rcx_19
        
        if (rcx_19 != 0)
            rcx_19[1].d += 1
        
        *(rcx_21 + 0x20) = rax_13
        *(rcx_21 + 0x28) = 1
    
    char* var_450 = *rax_12
    void* rax_21 = rax_12[1]
    void* var_448_1 = rax_21
    
    if (rax_21 != 0)
        *(rax_21 + 8) += 1
    
    void var_3e0
    int64_t* rax_22 = sub_140aac870(&var_3e0, &var_450, &var_4d8)
    int64_t var_468 = *rax_22
    int64_t* rcx_24 = rax_22[1]
    
    if (rcx_24 != 0)
        rcx_24[1].d += 1
    
    int32_t var_458_1 = rax_22[2].d
    int64_t* var_3d8
    
    if (var_3d8 != 0)
        var_3d8[1].d -= 1
        
        if (var_3d8[1].d == 1)
            (**var_3d8)(var_3d8)
            int32_t rax_26 = *(var_3d8 + 0xc)
            *(var_3d8 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*var_3d8 + 8))(var_3d8, 1)
    
    sub_140596f50(&var_4d8)
    
    if (var_1c8_1 != arg3.b)
        char var_1c8_2 = arg3.b
        
        if (rcx_19 != 0)
            rcx_19[1].d -= 1
            
            if (rcx_19[1].d == 1)
                (**rcx_19)(rcx_19)
                int32_t rax_30 = *(rcx_19 + 0xc)
                *(rcx_19 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*rcx_19 + 8))(rcx_19, 1)
    
    int64_t* rbx_6 = rax_12[1]
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t rax_34 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (rax_34 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
    
    int64_t* rbx_7 = rax_10[1]
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t rax_38 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (rax_38 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    void var_410
    void var_2b8
    sub_140ae44d0(sub_140accdf0(&var_2b8, &var_4a0), &var_410, &var_468)
    int64_t* var_408
    
    if (var_408 != 0)
        var_408[1].d -= 1
        
        if (var_408[1].d == 1)
            (**var_408)(var_408)
            int32_t temp5_1 = *(var_408 + 0xc)
            *(var_408 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_408 + 8))(var_408, 1)
    
    result = sub_140acd9c0(&var_2b8)
    
    if (rcx_24 != 0)
        result = rcx_24[1].d
        rcx_24[1].d -= 1
        
        if (result == 1)
            (**rcx_24)(rcx_24)
            result = *(rcx_24 + 0xc)
            *(rcx_24 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rcx_24 + 8))(rcx_24, 1)
    
    int64_t* var_3a8
    
    if (var_3a8 != 0)
        result = var_3a8[1].d
        var_3a8[1].d -= 1
        
        if (result == 1)
            result = (**var_3a8)(var_3a8)
            int32_t rdi_2 = *(var_3a8 + 0xc)
            *(var_3a8 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*var_3a8 + 8))(var_3a8, zx.q(rdi_2))
    
    uint64_t rcx_43 = var_528
    
    if (rcx_43 != 0)
        result = sub_140a74f90(rcx_43)
else if (arg2 == 0)
    void var_488
    sub_140b58170(&var_488, "Blueprint", (arg2 + 1).d)
    int64_t var_518
    
    if (arg1 != 0)
        sub_140d21e10(arg1, &var_518, 0)
    else
        var_518 = 0
        int32_t var_510_1 = 0
        sub_1405947f0(&var_518, 5)
        int32_t rax_47 = var_510_1 + 5
        var_510_1 = rax_47
        
        if (rax_47 s> 0)
            sub_140594770(&var_518)
        
        UnDecorator::getReferenceType(var_518, u"None", 0xa)
    
    void var_250
    int64_t* rax_48 = sub_140aae2f0(&var_250, &var_518)
    void var_380
    char* var_328
    char** rax_50 = sub_140a96390(&var_328, 
        _vfprintf_p_l(&var_380, 
            DrawMaterialToRenderTarget[{0}]: TextureRenderTarget must be non-null.", 
        KismetRenderingLibrary"))
    int64_t rcx_52 = *rax_48
    int64_t* rcx_53 = rax_48[1]
    int32_t var_1c0_1 = 4
    
    if (rcx_53 != 0)
        rcx_53[1].d += 1
    
    int32_t rax_51 = rax_48[2].d
    char var_198_1 = 1
    int32_t* var_4c8 = nullptr
    int32_t var_4c0_1 = 1
    sub_1405a4b40(&var_4c8, 1, 0)
    int32_t* rcx_55 = var_4c8
    *rcx_55 = var_1c0_1
    int64_t var_1b8
    *(rcx_55 + 8) = var_1b8
    *(rcx_55 + 8) = var_1b8
    rcx_55[2] = var_1b8.d
    *(rcx_55 + 8) = var_1b8
    rcx_55[0xa].b = 0
    
    if (var_198_1 != 0)
        *(rcx_55 + 0x10) = rcx_52
        *(rcx_55 + 0x18) = rcx_53
        
        if (rcx_53 != 0)
            rcx_53[1].d += 1
        
        rcx_55[8] = rax_51
        rcx_55[0xa].b = 1
    
    char* var_440 = *rax_50
    void* rax_59 = rax_50[1]
    void* var_438_1 = rax_59
    
    if (rax_59 != 0)
        *(rax_59 + 8) += 1
    
    void var_398
    int64_t* rax_60 = sub_140aac870(&var_398, &var_440, &var_4c8)
    int64_t var_480 = *rax_60
    int64_t* rcx_58 = rax_60[1]
    
    if (rcx_58 != 0)
        rcx_58[1].d += 1
    
    int32_t var_470_1 = rax_60[2].d
    int64_t* var_390
    
    if (var_390 != 0)
        var_390[1].d -= 1
        
        if (var_390[1].d == 1)
            (**var_390)(var_390)
            int32_t rax_64 = *(var_390 + 0xc)
            *(var_390 + 0xc) -= 1
            
            if (rax_64 == 1)
                (*(*var_390 + 8))(var_390, 1)
    
    sub_140596f50(&var_4c8)
    
    if (var_198_1 != 0)
        char var_198_2 = 0
        
        if (rcx_53 != 0)
            rcx_53[1].d -= 1
            
            if (rcx_53[1].d == 1)
                (**rcx_53)(rcx_53)
                int32_t rax_68 = *(rcx_53 + 0xc)
                *(rcx_53 + 0xc) -= 1
                
                if (rax_68 == 1)
                    (*(*rcx_53 + 8))(rcx_53, 1)
    
    int64_t* rbx_13 = rax_50[1]
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            (**rbx_13)(rbx_13)
            int32_t rax_72 = *(rbx_13 + 0xc)
            *(rbx_13 + 0xc) -= 1
            
            if (rax_72 == 1)
                (*(*rbx_13 + 8))(rbx_13, 1)
    
    int64_t* rbx_14 = rax_48[1]
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t rax_76 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (rax_76 == 1)
                (*(*rbx_14 + 8))(rbx_14, 1)
    
    void var_400
    void var_308
    sub_140ae44d0(sub_140accdf0(&var_308, &var_488), &var_400, &var_480)
    int64_t* var_3f8
    
    if (var_3f8 != 0)
        var_3f8[1].d -= 1
        
        if (var_3f8[1].d == 1)
            (**var_3f8)(var_3f8)
            int32_t temp7_1 = *(var_3f8 + 0xc)
            *(var_3f8 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_3f8 + 8))(var_3f8, 1)
    
    result = sub_140acd9c0(&var_308)
    
    if (rcx_58 != 0)
        result = rcx_58[1].d
        rcx_58[1].d -= 1
        
        if (result == 1)
            (**rcx_58)(rcx_58)
            result = *(rcx_58 + 0xc)
            *(rcx_58 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rcx_58 + 8))(rcx_58, 1)
    
    int64_t* var_378
    
    if (var_378 != 0)
        result = var_378[1].d
        var_378[1].d -= 1
        
        if (result == 1)
            result = (**var_378)(var_378)
            int32_t rdi_3 = *(var_378 + 0xc)
            *(var_378 + 0xc) -= 1
            
            if (rdi_3 == 1)
                result = (*(*var_378 + 8))(var_378, zx.q(rdi_3))
    
    int64_t rcx_77 = var_518
    
    if (rcx_77 != 0)
        result = sub_140a74f90(rcx_77)
else
    int64_t var_538
    int64_t var_500
    
    if (*(arg2 + 0x78) != 0)
        sub_1420e4140(rax_2)
        void* rax_123 = sub_140cbe180(arg2)
        int64_t* rax_124 = sub_142436020(rax_2)
        void* rdx_30 = rax_123 + 0x48
        
        if (rax_123 == 0)
            rdx_30 = nullptr
        
        void var_158
        sub_1423fa990(&var_158, rdx_30, 0, rax_2, zx.d(*(rax_2 + 0x118)), 0, 0x3f800000)
        uint32_t var_558_1
        var_558_1.q = &var_158
        sub_1424131e0(rax_124, *(arg2 + 0xc0), *(arg2 + 0xc4), 0, var_558_1)
        sub_142424300(rax_124)
        int64_t rax_126 = j_sub_140a82f30(1)
        var_500 = *(arg2 + 0x18)
        int64_t var_4f8_2 = rax_126
        
        if (sub_140a80f40() != 0)
            sub_1423c02c0(rax_123 + 0x58, &data_143f02b98)
        else if (data_143f138f4 != 0)
        label_1420bba21:
            void var_238
            void** rax_129 = sub_1420b9f50(&var_238, nullptr, 0xff)
            void* rcx_121 = *rax_129
            *(rcx_121 + 0x10) = var_500.o
            *(rcx_121 + 0x20) = rax_123
            void* rcx_122 = *rax_129
            int32_t r8_11 = rax_129[2].d
            int64_t* rdx_32 = rax_129[1]
            int64_t* rbx_26 = *(rcx_122 + 0x30)
            int64_t* var_4e8_1 = rbx_26
            void* r14_4 = &rbx_26[9]
            
            if (rbx_26 != 0)
                *r14_4 += 1
                rbx_26 = var_4e8_1
            
            sub_140778000(rcx_122, rdx_32, r8_11, 1)
            
            if (rbx_26 != 0)
                int32_t rax_130 = *r14_4
                *r14_4 -= 1
                
                if (rax_130 == 1)
                    sub_140a2f6e0(var_4e8_1)
        else if (data_143de5480 == 0)
            sub_1423c02c0(rax_123 + 0x58, &data_143f02b98)
        else
            uint32_t rax_128
            rax_128.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_128.b == 0)
                goto label_1420bba21
            
            sub_1423c02c0(rax_123 + 0x58, &data_143f02b98)
        
        int64_t zmm4_1 = (zx.o(0)).q
        float zmm2_1[0x4] = zx.o(*(arg2 + 0xc0))
        uint128_t zmm3_1 = zx.o(*(arg2 + 0xc4))
        int32_t var_540_1 = _mm_unpacklo_ps(0x3f000000, 0x3f000000).q.d
        int64_t zmm0_4 = data_14399f658.q
        int64_t zmm1_4 = _mm_unpacklo_ps(zx.o(0), zmm4_1).q
        int32_t var_548_2 = zmm4_1.d
        zmm2_1 = _mm_cvtepi32_ps(zmm2_1)
        zmm3_1 = _mm_cvtepi32_ps(zmm3_1)
        int32_t var_550_1
        var_550_1.q = zmm0_4
        var_558_1.q = zmm1_4
        int64_t var_530
        sub_142416690(rax_124, arg3, _mm_unpacklo_ps(zx.o(0), zmm4_1).q, 
            _mm_unpacklo_ps(zmm2_1, zmm3_1.q)[0].q, var_558_1, var_550_1, var_548_2, var_540_1, 
            var_538.d, var_530)
        sub_14240e030(&var_158, 0)
        rax_124[0x4c] = 0
        sub_1423cc130(arg2, 0)
        
        if (sub_140a80f40() != 0)
            j_sub_140a74f90(rax_126)
        else if (data_143f138f4 != 0)
        label_1420bbb58:
            void var_220
            int64_t* rax_133 = sub_1420ba0a0(&var_220, nullptr, 0xff)
            *(*rax_133 + 0x10) = rax_126
            void* rcx_129 = *rax_133
            int32_t r8_13 = rax_133[2].d
            int64_t* rdx_34 = rax_133[1]
            int64_t* rbx_27 = *(rcx_129 + 0x20)
            int64_t* var_4e0_1 = rbx_27
            int32_t* rsi_1 = &rbx_27[9]
            
            if (rbx_27 != 0)
                *rsi_1 += 1
                rbx_27 = var_4e0_1
            
            sub_1405a5630(rcx_129, rdx_34, r8_13, 1)
            
            if (rbx_27 != 0)
                int32_t rdi_5 = *rsi_1
                *rsi_1 -= 1
                
                if (rdi_5 == 1)
                    sub_140a2f6e0(var_4e0_1)
        else if (data_143de5480 == 0)
            j_sub_140a74f90(rax_126)
        else
            uint32_t rax_132
            rax_132.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_132.b == 0)
                goto label_1420bbb58
            
            j_sub_140a74f90(rax_126)
        
        result = sub_1423fef60(&var_158)
    else
        void var_498
        sub_140b58170(&var_498, "Blueprint", 1)
        
        if (arg1 != 0)
            sub_140d21e10(arg1, &var_538, 0)
        else
            var_538 = 0
            int32_t var_530_1 = 0
            sub_1405947f0(&var_538, 5)
            int32_t rax_85 = var_530_1 + 5
            var_530_1 = rax_85
            
            if (rax_85 s> 0)
                sub_140594770(&var_538)
            
            UnDecorator::getReferenceType(var_538, u"None", 0xa)
        
        void var_208
        int64_t* rax_86 = sub_140aae2f0(&var_208, &var_538)
        void var_350
        char* var_338
        char** rax_88 = sub_140a96390(&var_338, 
            _vfprintf_p_l(&var_350, 
                DrawMaterialToRenderTarget[{0}]: render target has been released.", 
            KismetRenderingLibrary"))
        int64_t rcx_86 = *rax_86
        int64_t* rcx_87 = rax_86[1]
        int32_t var_190_1 = 4
        
        if (rcx_87 != 0)
            rcx_87[1].d += 1
        
        int32_t rax_89 = rax_86[2].d
        char var_168_1 = 1
        int32_t* var_4b8 = nullptr
        int32_t var_4b0_1 = 1
        sub_1405a4b40(&var_4b8, 1, 0)
        int32_t* rcx_89 = var_4b8
        *rcx_89 = var_190_1
        int64_t var_188
        *(rcx_89 + 8) = var_188
        *(rcx_89 + 8) = var_188
        rcx_89[2] = var_188.d
        *(rcx_89 + 8) = var_188
        rcx_89[0xa].b = 0
        
        if (var_168_1 != 0)
            *(rcx_89 + 0x10) = rcx_86
            *(rcx_89 + 0x18) = rcx_87
            
            if (rcx_87 != 0)
                rcx_87[1].d += 1
            
            rcx_89[8] = rax_89
            rcx_89[0xa].b = 1
        
        char* var_430 = *rax_88
        void* rax_97 = rax_88[1]
        void* var_428_1 = rax_97
        
        if (rax_97 != 0)
            *(rax_97 + 8) += 1
        
        void var_368
        int64_t* rax_98 = sub_140aac870(&var_368, &var_430, &var_4b8)
        var_500 = *rax_98
        int64_t* rcx_92 = rax_98[1]
        
        if (rcx_92 != 0)
            rcx_92[1].d += 1
        
        int64_t var_4f0
        var_4f0.d = rax_98[2].d
        int64_t* var_360
        
        if (var_360 != 0)
            var_360[1].d -= 1
            
            if (var_360[1].d == 1)
                (**var_360)(var_360)
                int32_t rax_102 = *(var_360 + 0xc)
                *(var_360 + 0xc) -= 1
                
                if (rax_102 == 1)
                    (*(*var_360 + 8))(var_360, 1)
        
        sub_140596f50(&var_4b8)
        
        if (var_168_1 != 0)
            char var_168_2 = 0
            
            if (rcx_87 != 0)
                rcx_87[1].d -= 1
                
                if (rcx_87[1].d == 1)
                    (**rcx_87)(rcx_87)
                    int32_t rax_106 = *(rcx_87 + 0xc)
                    *(rcx_87 + 0xc) -= 1
                    
                    if (rax_106 == 1)
                        (*(*rcx_87 + 8))(rcx_87, 1)
        
        int64_t* rbx_20 = rax_88[1]
        
        if (rbx_20 != 0)
            rbx_20[1].d -= 1
            
            if (rbx_20[1].d == 1)
                (**rbx_20)(rbx_20)
                int32_t rax_110 = *(rbx_20 + 0xc)
                *(rbx_20 + 0xc) -= 1
                
                if (rax_110 == 1)
                    (*(*rbx_20 + 8))(rbx_20, 1)
        
        int64_t* rbx_21 = rax_86[1]
        
        if (rbx_21 != 0)
            rbx_21[1].d -= 1
            
            if (rbx_21[1].d == 1)
                (**rbx_21)(rbx_21)
                int32_t rax_114 = *(rbx_21 + 0xc)
                *(rbx_21 + 0xc) -= 1
                
                if (rax_114 == 1)
                    (*(*rbx_21 + 8))(rbx_21, 1)
        
        void var_3f0
        void var_290
        sub_140ae44d0(sub_140accdf0(&var_290, &var_498), &var_3f0, &var_500)
        int64_t* var_3e8
        
        if (var_3e8 != 0)
            var_3e8[1].d -= 1
            
            if (var_3e8[1].d == 1)
                (**var_3e8)(var_3e8)
                int32_t temp8_1 = *(var_3e8 + 0xc)
                *(var_3e8 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_3e8 + 8))(var_3e8, 1)
        
        result = sub_140acd9c0(&var_290)
        
        if (rcx_92 != 0)
            result = rcx_92[1].d
            rcx_92[1].d -= 1
            
            if (result == 1)
                (**rcx_92)(rcx_92)
                result = *(rcx_92 + 0xc)
                *(rcx_92 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rcx_92 + 8))(rcx_92, 1)
        
        int64_t* var_348
        
        if (var_348 != 0)
            result = var_348[1].d
            var_348[1].d -= 1
            
            if (result == 1)
                result = (**var_348)(var_348)
                int32_t rdi_4 = *(var_348 + 0xc)
                *(var_348 + 0xc) -= 1
                
                if (rdi_4 == 1)
                    result = (*(*var_348 + 8))(var_348, zx.q(rdi_4))
        
        int64_t rcx_111 = var_538
        
        if (rcx_111 != 0)
            result = sub_140a74f90(rcx_111)

__security_check_cookie(rax_1 ^ &var_578)
return result
