// 函数: sub_141260f60
// 地址: 0x141260f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg3)
int64_t r15 = sx.q(arg2)
int32_t* r12 = arg4
int32_t var_308 = r15.d
int32_t rcx

if (rax_1 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0

int32_t rcx_2 = rcx << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg3 - 1)
int32_t rdx

if (rcx_2 == 0)
    rdx = 0x20
else
    rdx = 0x1f - temp0_1

int32_t rbx_1 = (0x20 - rdx) & not.d(rcx_2)
int32_t rdi = rbx_1 + 1
int32_t var_314 = rdi
uint128_t zmm6 = sub_1413e84a0(arg1)
int64_t* rax_4 = std::_Get_future_error_what((*U"1111")[r15])
int32_t r13 = 1
int64_t* var_2c0 = &data_143ec4c60
int32_t var_334 = 1
int64_t* r9 = &data_143ec4c60

if (rdi s> 1)
    uint128_t var_58_1 = zmm6
    
    do
        int32_t rcx_7 = 0
        
        if (r13 - 1 s>= 0)
            rcx_7 = r13 - 1
        
        int32_t rdx_1 = 1 << (rdi.b - r13.b - 1)
        int32_t rcx_12 = r13 & 0x80000001
        
        if (rcx_12 s< 0)
            rcx_12 = ((rcx_12 - 1) | 0xfffffffe) + 1
        
        int32_t i = 0
        int32_t i_1 = 0
        zmm6 = _mm_cvtepi32_ps(zx.o(rdx_1))
        int64_t* r8_2 = r9[sx.q(rcx_12) + 0x24] + 8
        int64_t* var_2e8_1 = r8_2
        int64_t* rax_10 = r9[sx.q(1 - rcx_12) + 0x24] + 0x10
        
        do
            void* rax_11 = *r8_2
            int128_t zmm1_1 = data_142d3f5a0
            int32_t var_100_1 = 0
            int32_t var_fc
            __builtin_memset(&var_fc, 0xff, 0x14)
            int128_t var_e8_1 = zmm1_1
            int64_t var_d8
            __builtin_memset(&var_d8, 0, 0x1a)
            void* var_1d8 = rax_11
            int64_t var_1d0_1 = 0
            int32_t var_1c8_1 = 0xffffffff
            int16_t var_1c4_1 = 0x500
            int64_t var_118
            __builtin_memset(&var_118, 0, 0x11)
            int32_t var_104_1 = 0
            int16_t var_c0_1
            var_c0_1:1.b = *(rax_11 + 0x38) u> 1
            void var_1c0
            memset(&var_1c0, 0, 0xa8)
            var_1c4_1.b = r13.b
            void** rax_12 = &var_1d8
            int32_t i_3 = i
            uint64_t r15_1 = 0
            int32_t j_5 = 0
            int64_t rcx_16 = 0
            
            while (*rax_12 != 0)
                j_5 += 1
                rcx_16 += 1
                rax_12 = &rax_12[3]
                
                if (rcx_16 s>= 8)
                    break
            
            int32_t i_4
            
            if (j_5 != 0)
                int32_t* rdx_2 = &i_4
                uint64_t j_4 = zx.q(j_5)
                void** rcx_17 = &var_1d8
                uint64_t j
                
                do
                    void* rax_13 = *rcx_17
                    
                    if (rax_13 != 0)
                        r15_1 = zx.q(r15_1.d + 1)
                        *rdx_2 = rax_13
                        rdx_2 = &rdx_2[2]
                    
                    rcx_17 = &rcx_17[3]
                    j = j_4
                    j_4 -= 1
                while (j != 1)
            
            int64_t rdi_1 = var_118
            
            if (rdi_1 != 0 && ((var_104_1.b & 0xf) == 2 || (var_104_1.b & 0xf0) == 0x20))
                void*** rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_16 = &rcx_20[4]
                
                if (rax_16 u> *(arg1 + 0x38))
                    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x28)
                    rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_16 = &rcx_20[4]
                
                *(arg1 + 0x30) = rax_16
                int64_t* rax_17 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_17 = rcx_20
                *(arg1 + 8) = &rcx_20[1]
                rcx_20[1] = 0
                *rcx_20 = &data_142f115e8
                rcx_20[2].d = var_104_1
                rcx_20[3] = rdi_1
            
            uint32_t rdx_3 = (r15_1 << 3).d
            int64_t rdi_2 = sx.q(rdx_3)
            int64_t* rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_19 = rdi_2 + rbx_5
            
            if (rax_19 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, rdx_3 + 8)
                rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_19 = rdi_2 + rbx_5
            
            *(arg1 + 0x30) = rax_19
            int64_t j_3 = sx.q(r15_1.d)
            
            if (r15_1.d s> 0)
                int64_t* rcx_25 = rbx_5
                int64_t j_1
                
                do
                    *rcx_25 = *(&i_4 - rbx_5 + rcx_25)
                    rcx_25 = &rcx_25[1]
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
            
            void*** rcx_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_21 = &rcx_28[5]
            
            if (rax_21 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_21 = &rcx_28[5]
            
            *(arg1 + 0x30) = rax_21
            void**** rax_22 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_22 = rcx_28
            *(arg1 + 8) = &rcx_28[1]
            rcx_28[1] = 0
            rcx_28[3] = rbx_5
            *rcx_28 = &data_142d549c8
            rcx_28[2].d = r15_1.d
            rcx_28[4].d = 1
            int64_t rbx_10 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_24 = rbx_10 + 0x24
            
            if (rax_24 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x26)
                rbx_10 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                rax_24 = rbx_10 + 0x24
            
            *(arg1 + 0x30) = rax_24
            wchar16 const* const rcx_33 = u"AverageBrightness"
            wchar16 const j_2
            
            do
                j_2 = *rcx_33
                *(rcx_33 + rbx_10 - u"AverageBrightness") = j_2
                rcx_33 = &rcx_33[1]
            while (j_2 != 0)
            void*** rcx_36 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_25 = &rcx_36[0x27]
            
            if (rax_25 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x140)
                rcx_36 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_25 = &rcx_36[0x27]
            
            *(arg1 + 0x30) = rax_25
            void**** rax_26 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_26 = rcx_36
            *(arg1 + 8) = &rcx_36[1]
            sub_1405d11b0(rcx_36, &var_1d8, rbx_10)
            *(arg1 + 0x1c4) = 1
            int512_t zmm0_1
            int512_t zmm1_2
            zmm0_1, zmm1_2 = sub_1405d19b0(arg1, &var_1d8)
            zmm0_1.o = zx.o(0)
            zmm1_2.o = zx.o(0)
            int64_t var_c8
            *(arg1 + 0x178) = var_c8:7.b
            uint64_t rax_29 = zx.q(*(arg1 + 0xa0))
            int32_t rdi_3 = 0
            *(arg1 + 0x179) = 0
            *(arg1 + 0x1c4) = 1
            int64_t var_220
            __builtin_memset(&var_220, 0, 0x2c)
            int64_t var_1f0_1 = 0
            int32_t var_1e8_1 = 0
            int16_t var_1e4_1 = 0
            char var_1e2_1 = 0
            int16_t var_1e0_1 = 0
            int32_t var_224_1 = rax_29.d
            int128_t var_280
            __builtin_memset(&var_280, 0, 0x30)
            int128_t var_238_1 = zx.o(0)
            
            if (rax_29.d != 0)
                do
                    uint64_t rbx_13 = zx.q(rdi_3)
                    uint64_t r15_2 = rbx_13 * 3
                    int64_t* rcx_41 = *(arg1 + (r15_2 << 3) + 0xa8)
                    
                    if (rcx_41 == 0)
                        *(&var_220 + rbx_13) = 0
                        rax_29.b = 0
                    else
                        *(&var_220 + rbx_13) = *(rcx_41 + 0x3c)
                        int64_t var_218
                        *(&var_218 + (rbx_13 << 2)) = rcx_41[8].d
                        int64_t rax_33 = (*(*rcx_41 + 0x10))(zmm0_1, zmm1_2)
                        
                        if (rax_33 != 0)
                            var_1e4_1:1.b = 1
                        
                        if (rax_33 == 0 || *(rax_33 + 0x68) u<= 1)
                            var_1e4_1:1.b = 0
                        
                        rax_29 = zx.q(*(&var_220 + rbx_13))
                    
                    if (rax_29.b != 0)
                        var_1e8_1.w = *(*(arg1 + (r15_2 << 3) + 0xa8) + 0x38)
                    
                    rdi_3 += 1
                while (rdi_3 u< var_224_1)
            
            int64_t* rcx_43 = *(arg1 + 0x168)
            int32_t var_1f8_1
            
            if (rcx_43 == 0)
                var_1f8_1 = 0
            else
                var_1f8_1 = *(rcx_43 + 0x3c)
                var_1f8_1 = rcx_43[8].d
                void* rax_37 = (*(*rcx_43 + 0x10))(zmm0_1, zmm1_2)
                
                if (rax_37 == 0 || *(rax_37 + 0x68) u<= 1)
                    var_1e4_1:1.b = 0
                else
                    var_1e4_1:1.b = 1
            
            var_1f0_1.b = *(arg1 + 0x170)
            var_1f0_1:1.b = *(arg1 + 0x171)
            var_1f0_1:2.b = *(arg1 + 0x172)
            var_1f0_1:3.b = *(arg1 + 0x173)
            var_1f0_1:4.d = *(arg1 + 0x174)
            
            if (var_1f8_1 != 0)
                var_1e8_1.w = *(*(arg1 + 0x168) + 0x38)
            
            var_1e8_1:2.b = *(arg1 + 0x178)
            void*** rcx_47 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            var_1e8_1:3.b = *(arg1 + 0x179)
            char var_1e2_2 = *(arg1 + 0x17a)
            int64_t var_248_1 = data_14395da18
            int64_t var_240_1 = data_14395d9e8
            int64_t var_250_1 = data_14395da00
            void* rax_50 = &rcx_47[5]
            
            if (rax_50 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_47 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_50 = &rcx_47[5]
            
            *(arg1 + 0x30) = rax_50
            void**** rax_51 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_51 = rcx_47
            *(arg1 + 8) = &rcx_47[1]
            rcx_47[1] = 0
            *rcx_47 = &data_142d54998
            *(rcx_47 + 0x1c) = zmm6.d
            rcx_47[4].d = zmm6.d
            rcx_47[2] = 0
            rcx_47[3].d = 0
            *(rcx_47 + 0x24) = 0x3f800000
            void* var_2b0
            sub_1419a2ec0(rax_4, &var_2b0, &data_143f55f90, 0)
            void* rbx_14 = var_2b0
            void* var_2a0
            sub_1419a2ec0(rax_4, &var_2a0, &data_143e8ed70, 0)
            var_280.q = data_1439c9210
            int64_t rax_54 = 0
            void* var_2a8
            
            if (rbx_14 != 0)
                int64_t rdx_11 = sx.q(*(rbx_14 + 0x10c))
                int64_t* rbx_15 = *(var_2a8 + 0x10)
                int64_t rax_55 = rbx_15[3]
                
                if (*(rax_55 + (rdx_11 << 3)) == 0)
                    sub_1419ccf30(rbx_15, rdx_11.d)
                    rax_55 = rbx_15[3]
                
                rax_54 = *(rax_55 + (rdx_11 << 3))
            
            void* rbx_16 = var_2a0
            var_280:8.q = rax_54
            int64_t rax_56 = 0
            
            if (rbx_16 != 0)
                int64_t rdx_12 = sx.q(*(rbx_16 + 0x10c))
                void* var_298
                int64_t* rdi_6 = *(var_298 + 0x10)
                int64_t rax_58 = rdi_6[3]
                
                if (*(rax_58 + (rdx_12 << 3)) == 0)
                    sub_1419ccf30(rdi_6, rdx_12.d)
                    rax_58 = rdi_6[3]
                
                rax_56 = *(rax_58 + (rdx_12 << 3))
            
            int128_t var_260_1
            var_260_1.q = rax_56
            int32_t var_228_1 = 0
            sub_1419870b0(arg1, &var_280, 2)
            int32_t var_320 = rcx_7
            int64_t var_300 = *(arg1 + 0x1a0)
            int32_t i_2 = i
            sub_1405eb490(arg1, &var_300, rbx_16 + 0x118, &i_2, 0)
            var_300 = *(arg1 + 0x1a0)
            void* r9_3
            int128_t zmm6_1
            r9_3, zmm6_1 = sub_1405eb490(arg1, &var_300, rbx_16 + 0x11e, &var_320, 0)
            int64_t* r15_4 = data_14395f4d0
            int64_t r13_1 = *(arg1 + 0x1a0)
            int64_t r12_1 = *rax_10
            
            if (*(rbx_16 + 0x126) u> 0)
                uint32_t rdi_7 = zx.d(*(rbx_16 + 0x124))
                void*** rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_63 = &rcx_60[5]
                
                if (rax_63 u> *(arg1 + 0x38))
                    r9_3, zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_63 = &rcx_60[5]
                
                *(arg1 + 0x30) = rax_63
                void**** rax_64 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_64 = rcx_60
                *(arg1 + 8) = &rcx_60[1]
                rcx_60[1] = 0
                *rcx_60 = &data_142d5a070
                rcx_60[2] = r13_1
                rcx_60[3].d = rdi_7
                rcx_60[4] = r12_1
            
            if (*(rbx_16 + 0x12a) u> 0)
                uint32_t rbx_17 = zx.d(*(rbx_16 + 0x128))
                char rax_67
                rax_67, r9_3 = (*(*r15_4 + 8))(r15_4)
                
                if (rax_67 == 0)
                    void*** rcx_67 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_68 = &rcx_67[5]
                    
                    if (rax_68 u> *(arg1 + 0x38))
                        r9_3, zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                        rcx_67 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_68 = &rcx_67[5]
                    
                    *(arg1 + 0x30) = rax_68
                    void**** rax_69 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_69 = rcx_67
                    *(arg1 + 8) = &rcx_67[1]
                    rcx_67[1] = 0
                    *rcx_67 = &data_142d5a080
                    rcx_67[2] = r13_1
                    rcx_67[3].d = rbx_17
                    rcx_67[4] = r15_4
            
            int32_t var_340_1 = 1
            int512_t zmm3
            zmm3.o = zmm6_1
            int32_t var_348_1 = 0
            int512_t zmm2_1
            zmm2_1.o = zx.o(0)
            void* var_290 = rbx_14
            void* var_288_1 = var_2a8
            int32_t var_2f4_1 = rdx_1
            int32_t var_2ec_1 = rdx_1
            int512_t zmm1_4
            zmm1_4, zmm3 = sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_3, zmm3, zmm6_1.d, 0, 0, 
                zmm6_1.d, zmm6_1.d, rdx_1.q, rdx_1.q, &var_290, var_348_1, var_340_1)
            void*** rcx_74 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_76 = &rcx_74[2]
            
            if (rax_76 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x18)
                rcx_74 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_76 = &rcx_74[2]
            
            r13 = var_334
            *(arg1 + 0x30) = rax_76
            *(arg1 + 0x14) += 1
            int64_t* rax_77 = *(arg1 + 8)
            int64_t var_90_1 = 0
            zmm1_4.o = data_142d3f800
            i_4 = i_1
            *rax_77 = rcx_74
            *(arg1 + 8) = &rcx_74[1]
            rcx_74[1] = 0
            *rcx_74 = &data_142d549b8
            *(arg1 + 0x1c4) = 0
            *(arg1 + 0x178) = 0
            int64_t r15_5 = var_2e8_1[1]
            int64_t* rdi_9 = *var_2e8_1
            void*** rbx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int128_t var_b4
            __builtin_memset(&var_b4, 0xff, 0x20)
            void* rax_79 = &rbx_20[0xa]
            
            if (rax_79 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x58)
                rbx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_79 = &rbx_20[0xa]
            
            *(arg1 + 0x30) = rax_79
            int64_t* rax_80 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_80 = rbx_20
            *(arg1 + 8) = &rbx_20[1]
            rbx_20[1] = 0
            *rbx_20 = &data_142d56628
            rbx_20[2].d = i_4
            *(rbx_20 + 0x14) = var_b4.d
            rbx_20[3].d = var_b4:4.d
            *(rbx_20 + 0x1c) = var_b4:8.d
            rbx_20[4].d = var_b4:0xc.d
            int128_t var_a4
            *(rbx_20 + 0x24) = var_a4.d
            rbx_20[5].d = var_a4:4.d
            *(rbx_20 + 0x2c) = var_a4:8.d
            rbx_20[6].d = var_a4:0xc.d
            *(rbx_20 + 0x34) = r13
            rbx_20[7].d = var_90_1.d
            *(rbx_20 + 0x3c) = var_90_1:4.d
            rbx_20[8] = rdi_9
            rbx_20[9] = r15_5
            
            if ((*(*rdi_9 + 8))(rdi_9) == 0)
                int64_t* rcx_80 = rbx_20[8]
                
                if ((*(*rcx_80 + 0x18))(rcx_80) == 0)
                    int64_t* rcx_81 = rbx_20[8]
                    
                    if ((*(*rcx_81 + 0x20))(rcx_81) == 0)
                        int64_t* rcx_82 = rbx_20[8]
                        (*(*rcx_82 + 0x10))(rcx_82)
            
            int64_t* rcx_83 = rbx_20[9]
            
            if ((*(*rcx_83 + 8))(rcx_83) == 0)
                int64_t* rcx_84 = rbx_20[9]
                
                if ((*(*rcx_84 + 0x18))(rcx_84) == 0)
                    int64_t* rcx_85 = rbx_20[9]
                    
                    if ((*(*rcx_85 + 0x20))(rcx_85) == 0)
                        int64_t* rcx_86 = rbx_20[9]
                        (*(*rcx_86 + 0x10))(rcx_86)
            
            int64_t var_d0
            zmm6 = sub_1405d1550(&var_d0)
            r8_2 = var_2e8_1
            i = i_1 + 1
            i_1 = i
        while (i s< 6)
        
        rdi = var_314
        r13 += 1
        r9 = var_2c0
        var_334 = r13
    while (r13 s< rdi)
    
    r15 = zx.q(var_308)
    r12 = arg4

int32_t rbx_23 = rbx_1 & 0x80000001

if (rbx_23 s< 0)
    rbx_23 = ((rbx_23 - 1) | 0xfffffffe) + 1

int64_t result
int32_t zmm0_3
zmm0_3, result = sub_1413d69f0(arg1, r15.d, arg3, (&data_143ec4d80)[sx.q(rbx_23)] + 8)
*r12 = zmm0_3
__security_check_cookie(rax_1 ^ &var_3a8)
return result
