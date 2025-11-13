// 函数: sub_141d80730
// 地址: 0x141d80730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
int64_t rax_1 = __security_cookie ^ &var_458
void*** rbx = nullptr
int32_t var_438 = 0
uint64_t result = *arg2

if (result != 0)
    int128_t var_78
    int64_t* rdi_9
    
    if (*(result + 0x15) == 8)
    label_141d80faf:
        void*** rax_101 = j_sub_140a82f30(0x90)
        void*** rdi_18 = rax_101
        
        if (rax_101 == 0)
            rdi_18 = nullptr
        else
            *rdi_18 = &data_142d56fb8
            rdi_18[1] = 0
            rdi_18[2] = 0
            rdi_18[3].b = 3
            *(rdi_18 + 0x1c) = 0
            rdi_18[4].b = 1
            rdi_18[6] = 0
            rdi_18[8] = 0
            __builtin_memset(&rdi_18[0xe], 0, 0x18)
        
        arg1[0x1a] = arg3
        int64_t* rcx_70 = *arg2
        int64_t rax_102 = *rcx_70
        int64_t* var_430
        int64_t* rcx_71
        int32_t rsi_1
        
        if (arg5 == 0)
            (*(rax_102 + 0x18))(rcx_70, &var_438)
            rcx_71 = &var_438
            rsi_1 = 2
        else
            (*(rax_102 + 0x10))(rcx_70, &var_430)
            rcx_71 = &var_430
            rsi_1 = 1
        
        if (&rdi_18[0xe] != rcx_71)
            int64_t* r8_4 = rdi_18[0xe]
            rdi_18[0xe] = *rcx_71
            *rcx_71 = 0
            
            if (r8_4 != 0)
                (**r8_4)(r8_4, 1)
        
        if ((rsi_1.b & 2) != 0)
            int64_t* rcx_73 = var_438.q
            rsi_1 &= 0xfffffffd
            
            if (rcx_73 != 0)
                (**rcx_73)(rcx_73, 1)
        
        if ((rsi_1.b & 1) != 0)
            int64_t* rcx_74 = var_430
            
            if (rcx_74 != 0)
                (**rcx_74)(rcx_74, 1)
        
        int64_t var_320
        int64_t* rax_108 = (*(*arg1 + 0x2e8))(arg1, &var_320, arg4)
        
        if (&rdi_18[1] != rax_108)
            int64_t rcx_76 = rdi_18[1]
            
            if (rcx_76 != 0)
                sub_140a74f90(rcx_76)
            
            rdi_18[1] = *rax_108
            *rax_108 = 0
            rdi_18[2].d = rax_108[1].d
            *(rdi_18 + 0x14) = *(rax_108 + 0xc)
            rax_108[1] = 0
        
        int64_t rcx_78 = var_320
        
        if (rcx_78 != 0)
            sub_140a74f90(rcx_78)
        
        rdi_18[3].b = sub_14106d4d0(arg1[0x1b].b)
        rdi_18[4].b = 0
        arg1[0x1a] = 0
        
        if (*(*arg2 + 0x10) == 0 && rdi_18[3].b == 0 && sub_141d7d690(arg3, &arg1[0x10]) != 0)
            int64_t r15_4 = sx.q(rdi_18[0x10].d)
            void** const var_178 = &data_142e52180
            void* (* rdx_23)(char* arg1, int64_t* arg2) = sub_1413969b0
            void*** var_188_1 = nullptr
            char var_170_1 = 0xff
            int32_t rax_114 = (r15_4 + 1).d
            void* (* var_198_1)(char* arg1, int64_t* arg2) = sub_1413969b0
            rdi_18[0x10].d = rax_114
            
            if (rax_114 s> *(rdi_18 + 0x84))
                sub_1405c4fe0(&rdi_18[0xf])
                rdx_23 = var_198_1
            
            void* (** rcx_84)(char* arg1, int64_t* arg2) = &rdi_18[0xf][r15_4 * 8]
            *rcx_84 = rdx_23
            rcx_84[2] = var_188_1
            *(rcx_84 + 0x20) = var_178.o
            int128_t var_168
            *(rcx_84 + 0x30) = var_168
            
            if (*rcx_84 == 0 && var_198_1 != 0)
                void** const* rcx_85 = &var_178
                
                if (var_188_1 != 0)
                    rcx_85 = var_188_1
                
                (*rcx_85)[2](rcx_85)
        
        char rcx_86 = *(arg1 + 0xd9)
        int32_t rax_118
        
        if (arg1[0x1b].b == 3)
            rax_118.b = rcx_86 == 0
        else if (rcx_86 == 0)
            rax_118 = 0x64
        else
            rax_118 = *(arg1 + 0xdc)
        
        *(rdi_18 + 0x1c) = rax_118
        int64_t var_3f0
        sub_140d3a3a0(&var_3f0, arg1)
        int64_t var_1b0_1 = var_3f0
        void* (* rcx_88)(int32_t* arg1) = sub_141d76b80
        void*** var_1c8_1 = nullptr
        void** const var_1b8 = &data_142da2668
        void* (* var_1d8)(int32_t* arg1) = sub_141d76b80
        
        if (&rdi_18[6] != &var_1d8)
            int128_t zmm5_1 = *(rdi_18 + 0x30)
            int128_t zmm4_1 = *(rdi_18 + 0x40)
            int128_t zmm3 = *(rdi_18 + 0x50)
            int128_t zmm2 = *(rdi_18 + 0x60)
            *(rdi_18 + 0x30) = var_1d8.o
            int128_t zmm0_2 = var_1b8.o
            *(rdi_18 + 0x40) = var_1c8_1.o
            *(rdi_18 + 0x50) = zmm0_2
            var_1d8.o = zmm5_1
            rcx_88 = var_1d8
            var_1c8_1.o = zmm4_1
            rbx = var_1c8_1
            int128_t var_1a8
            *(rdi_18 + 0x60) = var_1a8
            int128_t var_98_1 = zmm5_1
            int128_t var_88_1 = zmm4_1
            var_78 = zmm3
            int128_t var_68_1 = zmm2
            var_1b8.o = zmm3
            int128_t var_1a8_1 = zmm2
        
        if (rcx_88 != 0)
            void** const* rcx_89 = &var_1b8
            
            if (rbx != 0)
                rcx_89 = rbx
            
            (*rcx_89)[2](rcx_89)
        
        j_sub_140b3db50()
        void var_368
        int64_t rbx_1 = *sub_140b58170(&var_368, "ImageWriteQueue", 1)
        j_sub_140b3db50()
        int64_t* rax_123 = j_sub_140b407e0(&data_143de7d78, rbx_1)
        int64_t rdx_27 = *rax_123
        int64_t* rax_124
        int64_t r9_4
        rax_124, r9_4 = (*(rdx_27 + 0x40))(rax_123, rdx_27)
        r9_4.b = 1
        void*** var_428 = rdi_18
        int64_t var_378
        result = (*(*rax_124 + 8))(rax_124, &var_378, &var_428, r9_4)
        void*** rcx_93 = var_428
        
        if (rcx_93 != 0)
            result = (**rcx_93)(rcx_93, 1)
        
        if (var_378 != 0)
            result = zx.q(arg1[0xd].d)
            arg1[0xd].d += 1
        
        int64_t* var_370
        rdi_9 = var_370
        
        if (rdi_9 != 0)
        label_141d8137a:
            result = zx.q(rdi_9[1].d)
            rdi_9[1].d -= 1
            
            if (result.d == 1)
                result = (**rdi_9)(rdi_9)
                int32_t rbx_2 = *(rdi_9 + 0xc)
                *(rdi_9 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    result = (*(*rdi_9 + 8))(rdi_9, zx.q(rbx_2))
    else
        char rax_2 = arg1[0x1b].b
        char var_d0
        
        if (rax_2 != 2)
            if (rax_2 != 1)
                goto label_141d80faf
            
            int128_t var_388 = zx.o(0)
            void var_3f8
            sub_140b58170(&var_3f8, "PIE", 1)
            void var_210
            int64_t* rax_53 = XXH_memcpy(&var_210, *(*arg2 + 0x15), nullptr, &var_388)
            int64_t var_330
            void var_1f8
            int64_t* rax_55 = sub_140aae2f0(&var_1f8, sub_141d80360(arg3, &var_330))
            void var_2c8
            char* var_2a0
            char** rax_57 = sub_140a96390(&var_2a0, 
                _vfprintf_p_l(&var_2c8, 
                    Unable to write the specified render target (stream '{0}' is {1}bit) as JPG. JPGs must "
            "be supplied 8bit render targets.", 
                UserDefinedImageCaptureProtocol"))
            int64_t var_e8_1 = *rax_55
            void* rcx_42 = rax_55[1]
            int32_t var_f8_1 = 4
            void* var_e0_1 = rcx_42
            
            if (rcx_42 != 0)
                *(rcx_42 + 8) += 1
            
            int32_t var_d8_1 = rax_55[2].d
            int64_t var_b8_1 = *rax_53
            void* rax_60 = rax_53[1]
            var_d0 = 1
            int32_t var_c8_1 = 4
            void* var_b0_1 = rax_60
            
            if (rax_60 != 0)
                *(rax_60 + 8) += 1
            
            int64_t i_1 = 2
            int32_t var_a8_1 = rax_53[2].d
            char var_a0_1 = 1
            void* var_410 = nullptr
            int32_t var_408_1 = 2
            sub_1405a4b40(&var_410, 2, 0)
            void var_f0
            void* rdx_13 = &var_f0
            int64_t* rcx_45 = var_410 + 8
            int32_t i_5 = 2
            int32_t i
            
            do
                rcx_45[-1].d = *(rdx_13 - 8)
                *rcx_45 = *rdx_13
                *rcx_45 = *rdx_13
                *rcx_45 = *rdx_13
                *rcx_45 = *rdx_13
                rcx_45[4].b = 0
                
                if (*(rdx_13 + 0x20) != 0)
                    rcx_45[1] = *(rdx_13 + 8)
                    void* rax_68 = *(rdx_13 + 0x10)
                    rcx_45[2] = rax_68
                    
                    if (rax_68 != 0)
                        *(rax_68 + 8) += 1
                    
                    rcx_45[3].d = *(rdx_13 + 0x18)
                    rcx_45[4].b = 1
                
                rcx_45 = &rcx_45[6]
                rdx_13 += 0x30
                i = i_5
                i_5 -= 1
            while (i != 1)
            char* var_398 = *rax_57
            void* rax_71 = rax_57[1]
            void* var_390_1 = rax_71
            
            if (rax_71 != 0)
                *(rax_71 + 8) += 1
            
            void var_2e0
            int64_t* rax_72 = sub_140aac870(&var_2e0, &var_398, &var_410)
            int64_t var_3d0 = *rax_72
            int64_t* rcx_48 = rax_72[1]
            
            if (rcx_48 != 0)
                rcx_48[1].d += 1
            
            int32_t var_3c0_1 = rax_72[2].d
            int64_t* var_2d8
            
            if (var_2d8 != 0)
                var_2d8[1].d -= 1
                
                if (var_2d8[1].d == 1)
                    (**var_2d8)(var_2d8)
                    int32_t rax_76 = *(var_2d8 + 0xc)
                    *(var_2d8 + 0xc) -= 1
                    
                    if (rax_76 == 1)
                        (*(*var_2d8 + 8))(var_2d8, 1)
            
            sub_140596f50(&var_410)
            void* r14_2 = &var_78:8
            
            do
                i_1 -= 1
                r14_2 -= 0x30
                
                if (*r14_2 != 0)
                    *r14_2 = 0
                    int64_t* rdi_11 = *(r14_2 - 0x10)
                    
                    if (rdi_11 != 0)
                        rdi_11[1].d -= 1
                        
                        if (rdi_11[1].d == 1)
                            (**rdi_11)(rdi_11)
                            int32_t rax_80 = *(rdi_11 + 0xc)
                            *(rdi_11 + 0xc) -= 1
                            
                            if (rax_80 == 1)
                                (*(*rdi_11 + 8))(rdi_11, 1)
            while (i_1 != 0)
            
            int64_t* rdi_12 = rax_57[1]
            
            if (rdi_12 != 0)
                rdi_12[1].d -= 1
                
                if (rdi_12[1].d == 1)
                    (**rdi_12)(rdi_12)
                    int32_t rax_84 = *(rdi_12 + 0xc)
                    *(rdi_12 + 0xc) -= 1
                    
                    if (rax_84 == 1)
                        (*(*rdi_12 + 8))(rdi_12, zx.q((i_1 + 1).d))
            
            int64_t* rdi_13 = rax_55[1]
            
            if (rdi_13 != 0)
                rdi_13[1].d -= 1
                
                if (rdi_13[1].d == 1)
                    (**rdi_13)(rdi_13)
                    int32_t rax_88 = *(rdi_13 + 0xc)
                    *(rdi_13 + 0xc) -= 1
                    
                    if (rax_88 == 1)
                        (*(*rdi_13 + 8))(rdi_13, 1)
            
            int64_t* rdi_14 = rax_53[1]
            
            if (rdi_14 != 0)
                rdi_14[1].d -= 1
                
                if (rdi_14[1].d == 1)
                    (**rdi_14)(rdi_14)
                    int32_t rax_92 = *(rdi_14 + 0xc)
                    *(rdi_14 + 0xc) -= 1
                    
                    if (rax_92 == 1)
                        (*(*rdi_14 + 8))(rdi_14, 1)
            
            void var_340
            void var_268
            sub_140ae44d0(sub_140accdf0(&var_268, &var_3f8), &var_340, &var_3d0)
            int64_t* var_338
            
            if (var_338 != 0)
                var_338[1].d -= 1
                
                if (var_338[1].d == 1)
                    (**var_338)(var_338)
                    int32_t temp6_1 = *(var_338 + 0xc)
                    *(var_338 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_338 + 8))(var_338, 1)
            
            result = sub_140acd9c0(&var_268)
            
            if (rcx_48 != 0)
                result = zx.q(rcx_48[1].d)
                rcx_48[1].d -= 1
                
                if (result.d == 1)
                    (**rcx_48)(rcx_48)
                    result = zx.q(*(rcx_48 + 0xc))
                    *(rcx_48 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*rcx_48 + 8))(rcx_48, 1)
            
            int64_t* var_2c0
            
            if (var_2c0 != 0)
                result = zx.q(var_2c0[1].d)
                var_2c0[1].d -= 1
                
                if (result.d == 1)
                    (**var_2c0)(var_2c0)
                    result = zx.q(*(var_2c0 + 0xc))
                    *(var_2c0 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*var_2c0 + 8))(var_2c0, 1)
            
            int64_t rcx_69 = var_330
            
            if (rcx_69 != 0)
                result = sub_140a74f90(rcx_69)
            
            rdi_9 = var_388:8.q
            
            if (rdi_9 != 0)
                goto label_141d8137a
        else
            int128_t var_3a8 = zx.o(0)
            void var_400
            sub_140b58170(&var_400, "PIE", 1)
            void var_240
            int64_t* rax_4 = XXH_memcpy(&var_240, *(*arg2 + 0x15), nullptr, &var_3a8)
            int64_t var_350
            void var_228
            int64_t* rax_6 = sub_140aae2f0(&var_228, sub_141d80360(arg3, &var_350))
            void var_2f8
            char* var_2b0
            char** rax_8 = sub_140a96390(&var_2b0, 
                _vfprintf_p_l(&var_2f8, 
                    Unable to write the specified render target (stream '{0}' is {1}bit) as BMP. BMPs must "
            "be supplied 8bit render targets.", 
                UserDefinedImageCaptureProtocol"))
            int64_t var_148_1 = *rax_6
            void* rcx_7 = rax_6[1]
            int32_t var_158_1 = 4
            void* var_140_1 = rcx_7
            
            if (rcx_7 != 0)
                *(rcx_7 + 8) += 1
            
            int32_t var_138_1 = rax_6[2].d
            int64_t var_118_1 = *rax_4
            void* rax_11 = rax_4[1]
            char var_130_1 = 1
            int32_t var_128_1 = 4
            void* var_110_1 = rax_11
            
            if (rax_11 != 0)
                *(rax_11 + 8) += 1
            
            int64_t i_3 = 2
            int32_t var_108_1 = rax_4[2].d
            char var_100_1 = 1
            void* var_420 = nullptr
            int32_t var_418_1 = 2
            sub_1405a4b40(&var_420, 2, 0)
            void var_150
            void* rdx_4 = &var_150
            int64_t* rcx_10 = var_420 + 8
            int32_t i_4 = 2
            int32_t i_2
            
            do
                rcx_10[-1].d = *(rdx_4 - 8)
                *rcx_10 = *rdx_4
                *rcx_10 = *rdx_4
                *rcx_10 = *rdx_4
                *rcx_10 = *rdx_4
                rcx_10[4].b = 0
                
                if (*(rdx_4 + 0x20) != 0)
                    rcx_10[1] = *(rdx_4 + 8)
                    void* rax_19 = *(rdx_4 + 0x10)
                    rcx_10[2] = rax_19
                    
                    if (rax_19 != 0)
                        *(rax_19 + 8) += 1
                    
                    rcx_10[3].d = *(rdx_4 + 0x18)
                    rcx_10[4].b = 1
                
                rcx_10 = &rcx_10[6]
                rdx_4 += 0x30
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
            char* var_3b8 = *rax_8
            void* rax_22 = rax_8[1]
            void* var_3b0_1 = rax_22
            
            if (rax_22 != 0)
                *(rax_22 + 8) += 1
            
            void var_310
            int64_t* rax_23 = sub_140aac870(&var_310, &var_3b8, &var_420)
            int64_t var_3e8 = *rax_23
            int64_t* rcx_13 = rax_23[1]
            
            if (rcx_13 != 0)
                rcx_13[1].d += 1
            
            int32_t var_3d8_1 = rax_23[2].d
            int64_t* var_308
            
            if (var_308 != 0)
                var_308[1].d -= 1
                
                if (var_308[1].d == 1)
                    (**var_308)(var_308)
                    int32_t rax_27 = *(var_308 + 0xc)
                    *(var_308 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*var_308 + 8))(var_308, 1)
            
            sub_140596f50(&var_420)
            char* r14_1 = &var_d0
            
            do
                i_3 -= 1
                r14_1 = &r14_1[-0x30]
                
                if (*r14_1 != 0)
                    *r14_1 = 0
                    int64_t* rdi_2 = *(r14_1 - 0x10)
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t rax_31 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (rax_31 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
            while (i_3 != 0)
            
            int64_t* rdi_3 = rax_8[1]
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t rax_35 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (rax_35 == 1)
                        (*(*rdi_3 + 8))(rdi_3, zx.q((i_3 + 1).d))
            
            int64_t* rdi_4 = rax_6[1]
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t rax_39 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (rax_39 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
            
            int64_t* rdi_5 = rax_4[1]
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t rax_43 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (rax_43 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
            
            void var_360
            void var_290
            sub_140ae44d0(sub_140accdf0(&var_290, &var_400), &var_360, &var_3e8)
            int64_t* var_358
            
            if (var_358 != 0)
                var_358[1].d -= 1
                
                if (var_358[1].d == 1)
                    (**var_358)(var_358)
                    int32_t temp5_1 = *(var_358 + 0xc)
                    *(var_358 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_358 + 8))(var_358, 1)
            
            result = sub_140acd9c0(&var_290)
            
            if (rcx_13 != 0)
                result = zx.q(rcx_13[1].d)
                rcx_13[1].d -= 1
                
                if (result.d == 1)
                    (**rcx_13)(rcx_13)
                    result = zx.q(*(rcx_13 + 0xc))
                    *(rcx_13 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*rcx_13 + 8))(rcx_13, 1)
            
            int64_t* var_2f0
            
            if (var_2f0 != 0)
                result = zx.q(var_2f0[1].d)
                var_2f0[1].d -= 1
                
                if (result.d == 1)
                    (**var_2f0)(var_2f0)
                    result = zx.q(*(var_2f0 + 0xc))
                    *(var_2f0 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*var_2f0 + 8))(var_2f0, 1)
            
            int64_t rcx_34 = var_350
            
            if (rcx_34 != 0)
                result = sub_140a74f90(rcx_34)
            
            rdi_9 = var_3a8:8.q
            
            if (rdi_9 != 0)
                goto label_141d8137a

__security_check_cookie(rax_1 ^ &var_458)
return result
