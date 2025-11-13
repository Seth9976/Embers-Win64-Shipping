// 函数: sub_140b89680
// 地址: 0x140b89680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_528
int64_t var_48 = __security_cookie ^ &var_528
int32_t var_ec = 0x80
int64_t var_118
__builtin_memset(&var_118, 0, 0x2c)
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t* var_4e8
uint64_t rbx

if (sub_140b7c720(arg2, arg3, arg4, arg5, arg1 + 8, &var_118, &var_4e8) != 0)
    void** var_4f8_1 = &var_4e8
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x2c)
    int32_t var_9c_1 = 0x80
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    int64_t var_88_1 = 0
    int32_t var_80_1 = 0
    
    if (sub_140b7c720(nullptr, arg3, arg4, arg5, arg1 + 8, &var_c8, var_4f8_1) != 0)
        int64_t var_108
        int64_t* var_4d8_1 = &var_108
        int32_t rcx_49 = 0
        int32_t var_4e0_1 = 0
        int32_t var_4d0_1 = 0xffffffff
        int32_t r8_4 = 0
        int32_t var_4dc_1 = 1
        int64_t var_4cc_1 = 0
        int32_t var_f0
        
        if (var_f0 != 0)
            int64_t* r10_1 = &var_108
            int64_t* var_f8
            
            if (var_f8 != 0)
                r10_1 = var_f8
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(var_f0 - 1)
            int32_t rdx_12 = *r10_1
            
            if (rdx_12 != 0)
            label_140b89e67:
                int32_t rax_92 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_1
                int32_t temp0_25
                temp0_25, rflags_1 = _bit_scan_reverse(rax_92)
                int32_t var_4dc_2 = rax_92
                int32_t var_3d0_1 = temp0_25
                int32_t rax_93
                
                if (rax_92 == 0)
                    rax_93 = 0x20
                else
                    rax_93 = 0x1f - temp0_25
                
                int32_t rax_94 = r8_4 - rax_93 + 0x1f
                
                if (rax_94 s> var_f0)
                    rax_94 = var_f0
                
                var_4cc_1.d = rax_94
            else
                while (true)
                    int64_t rdx_13 = sx.q(rcx_49)
                    r8_4 += 0x20
                    rcx_49 += 1
                    var_4cc_1:4.d = r8_4
                    var_4e0_1 = rcx_49
                    
                    if (rdx_13.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        var_4cc_1.d = var_f0
                        break
                    
                    rdx_12 = *(r10_1 + (rdx_13 << 2) + 4)
                    int32_t var_4d0_2 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_140b89e67
        
        int64_t* var_460_1 = &var_118
        int128_t var_458 = var_4e0_1.o
        int32_t var_314_1 = var_f0
        int64_t var_448_1 = 0xffffffff
        int128_t zmm1_1 = var_458
        double temp0_26[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_3c8 = var_460_1.o
        int128_t var_3b8_1 = zmm1_1
        int64_t var_3a8_1 = temp0_26.q
        void* rcx_80
        
        while (true)
            int64_t rax_95 = sx.q(var_3b8_1:0xc.d)
            int64_t* rdx_15 = var_3c8.q
            
            if (rax_95.d == ((0xffffffff << (var_f0.b & 0x1f)).q u>> 0x20).d
                    && var_3b8_1.q == &var_108 && rdx_15 == &var_118)
                int32_t var_a0
                int32_t rdx_17 = var_a0
                int64_t var_b8
                int64_t* var_3f0_1 = &var_b8
                int32_t var_3f8 = 0
                int32_t var_3f4_1 = 1
                int32_t var_3e8_1 = 0xffffffff
                int64_t var_3e4_1 = 0
                
                if (rdx_17 != 0)
                    sub_14059bdd0(&var_3f8)
                    rdx_17 = var_a0
                
                double zmm2_1[0x2] = var_3e8_1.o
                double var_388_1[0x2] = zmm2_1
                zmm1_1 = var_3f8.o
                int128_t var_398_1
                var_398_1:8.d = 0xffffffff << (rdx_17.b & 0x1f)
                var_398_1:0xc.d = rdx_17
                double temp0_27[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
                var_460_1.o = (&var_c8).o
                var_458 = zmm1_1
                var_448_1 = temp0_27.q
                
                while (true)
                    int64_t rax_100 = sx.q(var_448_1:4.d)
                    
                    if (rax_100.d == (var_398_1:8.q u>> 0x20).d && var_458:8.q == &var_b8
                            && var_460_1 == &var_c8)
                        rbx.b = 0
                        goto label_140b8a438
                    
                    rbx = *var_460_1 + rax_100 * 0x18
                    void var_3d4
                    
                    if (*sub_140960120(&var_118, &var_3d4, rbx) == 0xffffffff)
                        void var_208
                        int64_t* rax_105 = sub_140aae420(&var_208, rbx)
                        void var_2c0
                        char* var_238
                        uint64_t rax_107 = sub_140a96390(&var_238, 
                            _vfprintf_p_l(&var_2c0, {0} plugin is disabled", PluginManager"))
                        int64_t var_68 = *rax_105
                        void* rcx_66 = rax_105[1]
                        int32_t var_78 = 4
                        void* var_60_1 = rcx_66
                        
                        if (rcx_66 != 0)
                            *(rcx_66 + 8) += 1
                        
                        int32_t rcx_67 = rax_105[2].d
                        int32_t* var_408 = &var_78
                        int64_t* var_400_1 = &var_48
                        int128_t zmm0_3 = var_408.o
                        int64_t var_358 = *rax_107
                        void* rax_109 = *(rax_107 + 8)
                        int32_t var_58_1 = rcx_67
                        char var_50_1 = 1
                        var_408.o = zmm0_3
                        void* var_350_1 = rax_109
                        
                        if (rax_109 != 0)
                            *(rax_109 + 8) += 1
                        
                        void var_338
                        void var_2d8
                        int64_t* rax_111 =
                            sub_140aac870(&var_2d8, &var_358, sub_1405d4de0(&var_338, &var_408))
                        int64_t var_490 = *rax_111
                        void* rcx_71 = rax_111[1]
                        
                        if (rcx_71 != 0)
                            *(rcx_71 + 8) += 1
                        
                        int32_t rax_112 = rax_111[2].d
                        sub_1405970a0(&var_2d8)
                        sub_140596f50(&var_338)
                        sub_1405d57e0(&var_68)
                        sub_1405970a0(rax_107)
                        sub_1405970a0(rax_105)
                        int64_t rcx_77 = *arg6
                        *arg6 = var_490
                        var_490 = rcx_77
                        int64_t rcx_78 = arg6[1]
                        arg6[1] = rcx_71
                        int64_t var_488_2 = rcx_78
                        arg6[2].d = rax_112
                        sub_1405970a0(&var_490)
                        rcx_80 = &var_2c0
                        break
                    
                    var_448_1.d &= not.d(var_458:4.d)
                    sub_14059bdd0(&var_458)
                
                break
            
            int64_t* r14_3 = *rdx_15 + rax_95 * 0x18
            void var_3d8
            
            if (*sub_140960120(&var_c8, &var_3d8, r14_3) == 0xffffffff)
                void var_1f0
                int64_t* rax_116 = sub_140aae420(&var_1f0, r14_3)
                void var_290
                char* var_248
                char** rax_118 = sub_140a96390(&var_248, 
                    _vfprintf_p_l(&var_290, {0} plugin is enabled", PluginManager"))
                int64_t rcx_84 = *rax_116
                int64_t* rcx_85 = rax_116[1]
                int32_t var_148_1 = 4
                
                if (rcx_85 != 0)
                    rcx_85[1].d += 1
                
                int32_t rcx_86 = rax_116[2].d
                char var_120_1 = 1
                int32_t* var_4a0 = nullptr
                int32_t var_498_1 = 1
                sub_1405a4b40(&var_4a0, 1, 0)
                int32_t* rcx_88 = var_4a0
                *rcx_88 = var_148_1
                int64_t var_140
                *(rcx_88 + 8) = var_140
                *(rcx_88 + 8) = var_140
                rcx_88[2] = var_140.d
                *(rcx_88 + 8) = var_140
                rcx_88[0xa].b = 0
                
                if (var_120_1 != 0)
                    *(rcx_88 + 0x10) = rcx_84
                    *(rcx_88 + 0x18) = rcx_85
                    
                    if (rcx_85 != 0)
                        rcx_85[1].d += 1
                    
                    rcx_88[8] = rcx_86
                    rcx_88[0xa].b = 1
                
                char* var_348 = *rax_118
                void* rax_126 = rax_118[1]
                void* var_340_1 = rax_126
                
                if (rax_126 != 0)
                    *(rax_126 + 8) += 1
                
                void var_2a8
                int64_t* rax_127 = sub_140aac870(&var_2a8, &var_348, &var_4a0)
                int64_t var_478 = *rax_127
                void* rcx_91 = rax_127[1]
                
                if (rcx_91 != 0)
                    *(rcx_91 + 8) += 1
                
                int32_t rax_128 = rax_127[2].d
                int64_t* var_2a0
                
                if (var_2a0 != 0)
                    var_2a0[1].d -= 1
                    
                    if (var_2a0[1].d == 1)
                        (**var_2a0)(var_2a0)
                        int32_t rax_131 = *(var_2a0 + 0xc)
                        *(var_2a0 + 0xc) -= 1
                        
                        if (rax_131 == 1)
                            (*(*var_2a0 + 8))(var_2a0, 1)
                
                sub_140596f50(&var_4a0)
                
                if (var_120_1 != 0)
                    char var_120_2 = 0
                    
                    if (rcx_85 != 0)
                        rcx_85[1].d -= 1
                        
                        if (rcx_85[1].d == 1)
                            (**rcx_85)(rcx_85)
                            int32_t rax_135 = *(rcx_85 + 0xc)
                            *(rcx_85 + 0xc) -= 1
                            
                            if (rax_135 == 1)
                                (*(*rcx_85 + 8))(rcx_85, 1)
                
                int64_t* rdi_19 = rax_118[1]
                
                if (rdi_19 != 0)
                    rdi_19[1].d -= 1
                    
                    if (rdi_19[1].d == 1)
                        (**rdi_19)(rdi_19)
                        int32_t rbx_3 = *(rdi_19 + 0xc)
                        *(rdi_19 + 0xc) -= 1
                        
                        if (rbx_3 == 1)
                            (*(*rdi_19 + 8))(rdi_19, zx.q(rbx_3))
                
                sub_1405970a0(rax_116)
                int64_t rcx_100 = *arg6
                *arg6 = var_478
                var_478 = rcx_100
                int64_t rcx_101 = arg6[1]
                arg6[1] = rcx_91
                int64_t var_470_2 = rcx_101
                arg6[2].d = rax_128
                sub_1405970a0(&var_478)
                rcx_80 = &var_290
                break
            
            var_3b8_1:8.d &= not.d(var_3c8:0xc.d)
            sub_14059bdd0(&var_3c8:8)
        
        sub_1405970a0(rcx_80)
    else
        void var_1c0
        int64_t* rax_45 = sub_140aae420(&var_1c0, var_4e8)
        void var_2f0
        char* var_228
        char** rax_47 = sub_140a96390(&var_228, 
            _vfprintf_p_l(&var_2f0, {0} plugin is referenced by the default target but not found", 
            PluginManager"))
        int64_t rcx_28 = *rax_45
        int64_t* rcx_29 = rax_45[1]
        int32_t var_178_1 = 4
        
        if (rcx_29 != 0)
            rcx_29[1].d += 1
        
        int32_t rax_48 = rax_45[2].d
        char var_150_1 = 1
        int32_t* var_4c0 = nullptr
        int32_t var_4b8_1 = 1
        sub_1405a4b40(&var_4c0, 1, 0)
        int32_t* rcx_31 = var_4c0
        *rcx_31 = var_178_1
        int64_t var_170
        *(rcx_31 + 8) = var_170
        *(rcx_31 + 8) = var_170
        rcx_31[2] = var_170.d
        *(rcx_31 + 8) = var_170
        rcx_31[0xa].b = 0
        
        if (var_150_1 != 0)
            *(rcx_31 + 0x10) = rcx_28
            *(rcx_31 + 0x18) = rcx_29
            
            if (rcx_29 != 0)
                rcx_29[1].d += 1
            
            rcx_31[8] = rax_48
            rcx_31[0xa].b = 1
        
        char* var_368 = *rax_47
        void* rax_56 = rax_47[1]
        void* var_360_1 = rax_56
        
        if (rax_56 != 0)
            *(rax_56 + 8) += 1
        
        void var_308
        int64_t* rax_57 = sub_140aac870(&var_308, &var_368, &var_4c0)
        int64_t rcx_33 = *rax_57
        void* rcx_34 = rax_57[1]
        
        if (rcx_34 != 0)
            *(rcx_34 + 8) += 1
        
        int32_t rax_58 = rax_57[2].d
        int64_t* var_300
        
        if (var_300 != 0)
            var_300[1].d -= 1
            
            if (var_300[1].d == 1)
                (**var_300)(var_300)
                int32_t rax_61 = *(var_300 + 0xc)
                *(var_300 + 0xc) -= 1
                
                if (rax_61 == 1)
                    (*(*var_300 + 8))(var_300, 1)
        
        sub_140596f50(&var_4c0)
        
        if (var_150_1 != 0)
            char var_150_2 = 0
            
            if (rcx_29 != 0)
                rcx_29[1].d -= 1
                
                if (rcx_29[1].d == 1)
                    (**rcx_29)(rcx_29)
                    int32_t rax_65 = *(rcx_29 + 0xc)
                    *(rcx_29 + 0xc) -= 1
                    
                    if (rax_65 == 1)
                        (*(*rcx_29 + 8))(rcx_29, 1)
        
        int64_t* rdi_9 = rax_47[1]
        
        if (rdi_9 != 0)
            rdi_9[1].d -= 1
            
            if (rdi_9[1].d == 1)
                (**rdi_9)(rdi_9)
                int32_t rax_69 = *(rdi_9 + 0xc)
                *(rdi_9 + 0xc) -= 1
                
                if (rax_69 == 1)
                    (*(*rdi_9 + 8))(rdi_9, 1)
        
        int64_t* rdi_10 = rax_45[1]
        
        if (rdi_10 != 0)
            rdi_10[1].d -= 1
            
            if (rdi_10[1].d == 1)
                (**rdi_10)(rdi_10)
                int32_t rax_73 = *(rdi_10 + 0xc)
                *(rdi_10 + 0xc) -= 1
                
                if (rax_73 == 1)
                    (*(*rdi_10 + 8))(rdi_10, 1)
        
        int64_t rcx_44 = *arg6
        *arg6 = rcx_33
        int64_t* rdi_11 = arg6[1]
        arg6[1] = rcx_34
        arg6[2].d = rax_58
        int64_t var_420_2 = rcx_44
        int64_t* var_418_2 = rdi_11
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t rax_80 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (rax_80 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
        
        int64_t* var_2e8
        
        if (var_2e8 != 0)
            var_2e8[1].d -= 1
            
            if (var_2e8[1].d == 1)
                (**var_2e8)(var_2e8)
                int32_t rbx_2 = *(var_2e8 + 0xc)
                *(var_2e8 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*var_2e8 + 8))(var_2e8, zx.q(rbx_2))
    
    rbx.b = 1
label_140b8a438:
    int32_t var_80_2 = 0
    
    if (var_88_1 != 0)
        sub_140a74f90(var_88_1)
    
    sub_140669e00(&var_c8)
else
    void var_1d8
    int64_t* rax_4 = sub_140aae420(&var_1d8, var_4e8)
    void var_260
    char* var_218
    char** rax_6 = sub_140a96390(&var_218, 
        _vfprintf_p_l(&var_260, {0} plugin is referenced by target but not found", PluginManager"))
    int64_t rcx_4 = *rax_4
    int64_t* rcx_5 = rax_4[1]
    int32_t var_1a8_1 = 4
    
    if (rcx_5 != 0)
        rcx_5[1].d += 1
    
    int32_t rax_7 = rax_4[2].d
    char var_180_1 = 1
    int32_t* var_4b0 = nullptr
    int32_t var_4a8_1 = 1
    sub_1405a4b40(&var_4b0, 1, 0)
    int32_t* rcx_7 = var_4b0
    *rcx_7 = var_1a8_1
    int64_t var_1a0
    *(rcx_7 + 8) = var_1a0
    *(rcx_7 + 8) = var_1a0
    rcx_7[2] = var_1a0.d
    *(rcx_7 + 8) = var_1a0
    rcx_7[0xa].b = 0
    
    if (var_180_1 != 0)
        *(rcx_7 + 0x10) = rcx_4
        *(rcx_7 + 0x18) = rcx_5
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        rcx_7[8] = rax_7
        rcx_7[0xa].b = 1
    
    char* var_378 = *rax_6
    void* rax_15 = rax_6[1]
    void* var_370_1 = rax_15
    
    if (rax_15 != 0)
        *(rax_15 + 8) += 1
    
    void var_278
    int64_t* rax_16 = sub_140aac870(&var_278, &var_378, &var_4b0)
    int64_t rcx_9 = *rax_16
    void* rcx_10 = rax_16[1]
    
    if (rcx_10 != 0)
        *(rcx_10 + 8) += 1
    
    int32_t rax_17 = rax_16[2].d
    int64_t* var_270
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t rax_20 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (rax_20 == 1)
                (*(*var_270 + 8))(var_270, 1)
    
    sub_140596f50(&var_4b0)
    
    if (var_180_1 != 0)
        char var_180_2 = 0
        
        if (rcx_5 != 0)
            rcx_5[1].d -= 1
            
            if (rcx_5[1].d == 1)
                (**rcx_5)(rcx_5)
                int32_t rax_24 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
    
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
    
    int64_t rcx_20 = *arg6
    *arg6 = rcx_9
    int64_t* rdi_5 = arg6[1]
    arg6[1] = rcx_10
    arg6[2].d = rax_17
    int64_t var_438_2 = rcx_20
    int64_t* var_430_2 = rdi_5
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t rax_39 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    int64_t* var_258
    
    if (var_258 != 0)
        var_258[1].d -= 1
        
        if (var_258[1].d == 1)
            (**var_258)(var_258)
            int32_t rbx_1 = *(var_258 + 0xc)
            *(var_258 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_258 + 8))(var_258, zx.q(rbx_1))
    
    rbx.b = 1

int32_t var_d0_1 = 0

if (var_d8 != 0)
    sub_140a74f90(var_d8)

sub_140669e00(&var_118)
__security_check_cookie(var_48 ^ &var_528)
return zx.q(rbx.b)
