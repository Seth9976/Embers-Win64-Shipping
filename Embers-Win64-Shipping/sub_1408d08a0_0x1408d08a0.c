// 函数: sub_1408d08a0
// 地址: 0x1408d08a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg3
void* r15 = arg4
char* r12 = arg2
float zmm10[0x4] = zx.o(0)
zmm10[0] = float.s(zx.q(arg6))
zmm10[0] = zmm10[0] + zmm10[0]
zmm10[0] = zmm10[0] f* arg1[0x25].d
*arg2 = arg3[0x18]
arg2[1] = arg3[0x19]
int64_t rcx

if (arg3[0x19] == 0 || *(arg3 + 0x10) s<= 0)
    rcx = 0
else
    rcx = **(arg3 + 8)

*(arg2 + 0x18) = rcx

if (rcx != 0)
    int64_t rbx_1 = sx.q(arg1[0x1e].d)
    int32_t rax_4 = (rbx_1 + 1).d
    arg1[0x1e].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xf4))
        sub_1405a4d70(&arg1[0x1d])
    
    *(arg1[0x1d] + (rbx_1 << 3)) = *(r12 + 0x18)
    rbx = arg3

int32_t rdi = 0
*(r12 + 4) = *(rbx + 0x1c)
r12[2] = rbx[0x20]
r12[3] = rbx[0x21]
r12[0x10] = rbx[0x22]
int64_t rdx_2 = *(rbx + 8)
int64_t r8 = rdx_2 + sx.q(*(rbx + 0x10)) * 0x18
int32_t var_270
uint128_t zmm0
uint128_t zmm1

if (rdx_2 == r8)
    var_270 = 0
else
    do
        int32_t rax_11
        rax_11.b = *(rdx_2 + 0x14) != 0
        rdx_2 += 0x18
        rdi += rax_11
    while (rdx_2 != r8)
    
    if (rdi s<= 0)
        var_270 = 0
    else
        zmm1 = zx.o(*(rbx + 0x24))
        zmm0 = _mm_cvtepi32_ps(zx.o(rdi))
        zmm1.d = _mm_cvtepi32_ps(zmm1).d f/ zmm0.d
        zmm1.d = zmm1.d f+ zmm1.d
        zmm0.d = -0.5f f- zmm1.d
        var_270 = neg.d(int.d(zmm0.d) s>> 1)

int128_t zmm6
int128_t var_58 = zmm6
(*(*arg1 + 0x150))(arg1, rdx_2)
void* r14 = &r12[0x20]
int128_t zmm12 = 0x3f800000
uint128_t zmm9 = zx.o(0)
int32_t i_3 = 0
int16_t* var_290
float zmm2[0x4]

if (*(rbx + 0x10) s> 0)
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int64_t rcx_4 = 0
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int64_t var_180_1 = 0
    int32_t i
    
    do
        int64_t rdi_4 = *(rbx + 8)
        int64_t rbx_2 = rcx_4 * 3
        void* const var_190_1
        void* r8_1
        
        if (*(rdi_4 + (rbx_2 << 3) + 8) == 0)
            r8_1 = nullptr
            var_190_1 = nullptr
        else
            void* rax_13 = sub_1408d3fd0()
            
            if (rax_13 == 0)
                r8_1 = nullptr
                var_190_1 = nullptr
            else
                r8_1 = *(rdi_4 + (rbx_2 << 3) + 8)
                int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                var_190_1 = r8_1
                
                if (rax_14.d s> *(r8_1 + 0x38)
                        || *(*(r8_1 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                    r8_1 = nullptr
                    var_190_1 = nullptr
        
        void* r13_1 = *(rdi_4 + (rbx_2 << 3))
        
        if (r8_1 != 0)
            if (*(rdi_4 + (rbx_2 << 3) + 0x14) != 0 && (r8_1 != 0 || r13_1 != 0))
                goto label_1408d0ae4
            
            rbx = arg3
        else if (r13_1 == 0 || *(rdi_4 + (rbx_2 << 3) + 0x14) == 0 || (r8_1 == 0 && r13_1 == 0))
            rbx = arg3
        else
        label_1408d0ae4:
            int32_t rax_16 = *(rdi_4 + (rbx_2 << 3) + 0x10)
            rbx = arg3
            int32_t rdx_4
            
            if (rbx[0x18] == 0)
                rdx_4 = 1
                
                if (rax_16 s>= 1)
                    rdx_4 = rax_16
            else
                rdx_4 = var_270
            
            int32_t rcx_6 = 0
            arg6 = 0
            
            if (rdx_4 != 0)
                uint64_t rax_17 = zx.q(*(arg1 + 0x12c))
                
                do
                    char var_2c8
                    uint64_t var_268
                    
                    if (r12[1] != 0)
                        float var_1a8_1 = zmm10[0]
                        zmm0.d = float.s(rax_17)
                        int32_t var_1ac_1 = 0
                        int16_t* var_260 = nullptr
                        int32_t var_258_1 = 0
                        zmm0.d = zmm0.d f* arg1[0x24].d
                        int32_t var_1b0_1 = zmm0.d
                        sub_140a20c40(&var_260, rcx_6)
                        var_268 = *(r15 + 0x18)
                        int32_t rcx_60 = sub_140b63b70(&var_268, &var_290)
                        int32_t var_288
                        int32_t var_208_1 = var_288
                        int16_t* var_210 = var_290
                        int32_t rdx_35 = var_288 + sbb.d(rcx_60, rcx_60, var_288 != 0) + 2
                        var_290 = nullptr
                        var_288.q = 0
                        int32_t var_284
                        
                        if (rdx_35 s> var_284)
                            sub_1405947f0(&var_210, rdx_35)
                        
                        sub_140a20ba0(&var_210, &data_142d99650, 1)
                        int16_t* r12_2 = var_210
                        int32_t r15_5 = var_208_1
                        uint32_t r8_13 = zx.d(*rbx)
                        void* rcx_65 = arg1[0x21]
                        var_210 = nullptr
                        var_208_1.q = 0
                        int64_t var_f8
                        int64_t* rax_54 = sub_140bded20(rcx_65, &var_f8, r8_13)
                        int32_t rax_55
                        int32_t rcx_66
                        int16_t* rbx_11
                        
                        if (r15_5 s> 1)
                            int32_t rax_56 = rax_54[1].d
                            int32_t rbx_12 = rax_56 - 1
                            
                            if (rax_56 == 0)
                                rbx_12 = 0
                            
                            int32_t rax_57
                            
                            if (r15_5 == 0)
                                rax_57 = 1
                            
                            if (r15_5 != 0 || rbx_12 == 0)
                                rax_57 = 0
                            
                            int16_t* var_200 = r12_2
                            int32_t rdx_38 = rbx_12 + r15_5 + rax_57
                            r12_2 = nullptr
                            
                            if (rdx_38 s> var_284)
                                sub_1405947f0(&var_200, rdx_38)
                            
                            sub_140a20ba0(&var_200, *rax_54, rbx_12)
                            rbx_11 = var_200
                            rax_55 = r15_5
                            rcx_66 = var_284
                            var_200 = nullptr
                            int32_t var_1f8_1
                            var_1f8_1.q = 0
                        else
                            rbx_11 = *rax_54
                            *rax_54 = 0
                            rax_55 = rax_54[1].d
                            rcx_66 = *(rax_54 + 0xc)
                            rax_54[1] = 0
                        
                        int32_t rax_58
                        int16_t* rdi_12
                        
                        if (rax_55 s> 1)
                            int32_t rdi_14
                            
                            if (var_258_1 == 0)
                                rdi_14 = 0
                            else
                                rdi_14 = var_258_1 - 1
                            
                            int32_t rdx_40
                            
                            if (rax_55 == 0)
                                rdx_40 = rax_55 + 1
                            
                            if (rax_55 != 0 || rdi_14 == 0)
                                rdx_40 = 0
                            
                            int16_t* var_1e0 = rbx_11
                            int32_t rdx_42 = rdx_40 + rax_55 + rdi_14
                            int32_t var_1d4_1 = rcx_66
                            rbx_11 = nullptr
                            
                            if (rdx_42 s> rcx_66)
                                sub_1405947f0(&var_1e0, rdx_42)
                            
                            sub_140a20ba0(&var_1e0, var_260, rdi_14)
                            rax_58 = rax_55
                            rdi_12 = var_1e0
                            int32_t var_1d8_1
                            var_1d8_1.q = 0
                            var_1e0 = nullptr
                        else
                            rdi_12 = var_260
                            rax_58 = var_258_1
                            var_260 = nullptr
                            int64_t var_258_2 = 0
                        
                        int16_t* rdx_44 = &data_142d40450
                        
                        if (rax_58 != 0)
                            rdx_44 = rdi_12
                        
                        uint64_t var_158
                        sub_140b58260(&var_158, rdx_44, 1)
                        
                        if (rdi_12 != 0)
                            sub_140a74f90(rdi_12)
                        
                        if (rbx_11 != 0)
                            sub_140a74f90(rbx_11)
                        
                        if (r12_2 != 0)
                            sub_140a74f90(r12_2)
                        
                        int16_t* rcx_75 = var_290
                        
                        if (rcx_75 != 0)
                            sub_140a74f90(rcx_75)
                        
                        int64_t rcx_76 = var_f8
                        
                        if (rcx_76 != 0)
                            sub_140a74f90(rcx_76)
                        
                        int16_t* rcx_77 = var_260
                        
                        if (rcx_77 != 0)
                            sub_140a74f90(rcx_77)
                        
                        var_2c8 = 0
                        int64_t* rax_59
                        float zmm7_2[0x4]
                        float zmm8_2[0x4]
                        float zmm9_2[0x4]
                        rax_59, zmm7_2, zmm8_2, zmm9_2 =
                            sub_1408cd510(arg1[0x22], var_158, 0, 0, 0, 0)
                        sub_141ef1390(rax_59)
                        float var_130_1 = var_1a8_1
                        int32_t rcx_81 = rax_59[0x26].d
                        int64_t var_138 = var_1b0_1.q
                        float zmm0_4[0x4] = zx.o(rax_59[0x25])
                        char rax_60
                        
                        if (zmm0_4[0] f!= rax_59[0x36].d || zmm0_4.q:4.d[0] f!= *(rax_59 + 0x1b4)
                                || rcx_81[0] f!= rax_59[0x37].d)
                            rax_60 = 1
                        else
                            rax_60 = 0
                        
                        if (rax_60 != 0)
                            zmm7_2 = data_143cebcf0
                            uint128_t zmm4_2 = zx.o(rax_59[0x25])
                            int32_t rax_61 = rax_59[0x26].d
                            zmm0_4 = zmm4_2
                            float zmm5_2[0x4] = data_143cebd00
                            float temp0_29[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 0x55)
                            zmm5_2 = _mm_and_ps(zmm5_2, zmm7_2)
                            float temp0_31[0x4] = _mm_unpacklo_ps(temp0_29, zmm9_2[0].q)
                            uint128_t zmm6_2 =
                                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_2, rax_61[0].q), temp0_31[0].q)
                            float zmm2_2[0x4] = data_143cebd10
                            uint128_t zmm3_2 = _mm_div_ps(zmm6_2, zmm7_2)
                            uint128_t temp0_36 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3_2))
                            zmm6_2 = _mm_sub_ps(zmm6_2, 
                                _mm_mul_ps(
                                    _mm_and_ps(
                                        _mm_cmpeq_ps(zmm2_2, 
                                            __andps_xmmxud_memxud(zmm3_2, data_143cebd00), 2), 
                                        temp0_36 ^ zmm3_2) ^ temp0_36, 
                                    zmm7_2))
                            float temp0_44[0x4] =
                                _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_2), _mm_min_ps(zmm6_2, zmm5_2))
                            float temp0_45[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_44, 2)
                            float temp0_46[0x4] = _mm_add_ps(temp0_44, zmm7_2)
                            zmm8_2 = _mm_and_ps(temp0_45, temp0_46 ^ temp0_44) ^ temp0_46
                            float temp0_48[0x4] = _mm_cmpeq_ps(data_143cebce0, zmm8_2, 1)
                            zmm2_2 =
                                _mm_and_ps(_mm_sub_ps(zmm8_2, zmm7_2) ^ zmm8_2, temp0_48) ^ zmm8_2
                            float var_198_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)[0]
                            rax_59[0x36] = (_mm_unpacklo_ps(zmm2_2, 
                                _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0].q)).q
                            rax_59[0x37].d = var_198_2
                            float var_c8[0x4]
                            float (* rax_63)[0x4]
                            rax_63, zmm7_2, zmm8_2 = sub_140ade170(&rax_59[0x36], &var_c8)
                            *(rax_59 + 0x1a0) = *rax_63
                        
                        var_2c8.q = 0
                        float var_e8[0x4] = *(rax_59 + 0x1a0)
                        int64_t r8_17
                        r8_17, zmm9, zmm10, zmm12 = sub_141f48240(rax_59, &var_138, &var_e8, 0, 
                            zmm7_2, zmm8_2, zmm9_2, zmm10, 0, 0)
                        r8_17.b = 1
                        (*(*rax_59 + 0x8a8))(rax_59, arg4, r8_17)
                        sub_141f49a80(rax_59, 0, 1)
                        void* rdx_49 = arg1[0x20]
                        sub_1423bc410(&rax_59[6], rdx_49, rdx_49 + 0x58)
                        int64_t** rax_65 = j_sub_140a82f30(0x28)
                        int64_t** rdi_15 = rax_65
                        
                        if (rax_65 == 0)
                            rdi_15 = nullptr
                        else
                            __builtin_memset(rax_65, 0, 0x21)
                        
                        void* const rdx_50
                        
                        if (*(arg5 + 0x18) == 0)
                            rdx_50 = nullptr
                        else
                            void* rax_66 = sub_1408d4150()
                            
                            if (rax_66 == 0)
                                rdx_50 = nullptr
                            else
                                rdx_50 = *(arg5 + 0x18)
                                int64_t rax_67 = sx.q(*(rax_66 + 0x38))
                                
                                if (rax_67.d s> *(rdx_50 + 0x38)
                                        || *(*(rdx_50 + 0x30) + (rax_67 << 3)) != rax_66 + 0x30)
                                    rdx_50 = nullptr
                        
                        *rdi_15 = rax_59
                        
                        if (rdx_50 != 0)
                            sub_141f476a0(rax_59, rdx_50)
                            void* rax_69 = sub_141f3b9f0(*rdi_15)
                            void* const r15_7 = rax_69
                            char rax_70
                            
                            if (rax_69 != 0)
                                rax_70 = sub_1408cd4d0(rax_69)
                            
                            if (rax_69 == 0 || rax_70 == 0)
                                r15_7 = nullptr
                            
                            rdi_15[1] = r15_7
                        
                        int64_t* rcx_91 = *rdi_15
                        (*(*rcx_91 + 0x340))(rcx_91, 0)
                        sub_141f70b70(*rdi_15, 1)
                        *(*rdi_15 + 0x5a4) = 0
                        int64_t r13_5 = sx.q(arg1[0x12].d)
                        int32_t rax_73 = (r13_5 + 1).d
                        arg1[0x12].d = rax_73
                        
                        if (rax_73 s> *(arg1 + 0x94))
                            sub_1405a4d70(&arg1[0x11])
                        
                        r12 = arg2
                        *(arg1[0x11] + (r13_5 << 3)) = rdi_15
                        int64_t r15_8 = sx.q(*(r12 + 0x98))
                        int32_t rax_75 = (r15_8 + 1).d
                        *(r12 + 0x98) = rax_75
                        
                        if (rax_75 s> *(r12 + 0x9c))
                            sub_1406105e0(&r12[0x90])
                        
                        *(*(r12 + 0x90) + (r15_8 << 2)) = *(r13_1 + 0x90)
                        int64_t rdi_16 = sx.q(*(r14 + 8))
                        int32_t rax_78 = (rdi_16 + 1).d
                        *(r14 + 8) = rax_78
                        
                        if (rax_78 s> *(r14 + 0xc))
                            sub_1405a4d70(r14)
                        
                        *(*r14 + (rdi_16 << 3)) = rax_59
                    else
                        int16_t* var_250 = nullptr
                        int32_t var_248_1 = 0
                        sub_140a20c40(&var_250, rcx_6)
                        int16_t* var_280 = nullptr
                        int64_t var_278_1 = 0
                        sub_140a20c40(&var_280, i_3)
                        var_268 = *(r15 + 0x18)
                        int16_t* var_1d0
                        int32_t rcx_10 = sub_140b63b70(&var_268, &var_1d0)
                        int32_t var_1c8
                        int32_t var_238_1 = var_1c8
                        int16_t* var_240 = var_1d0
                        int32_t rdx_9 = var_1c8 + sbb.d(rcx_10, rcx_10, var_1c8 != 0) + 2
                        var_1d0 = nullptr
                        var_1c8.q = 0
                        int32_t var_1c4
                        
                        if (rdx_9 s> var_1c4)
                            sub_1405947f0(&var_240, rdx_9)
                        
                        sub_140a20ba0(&var_240, &data_142d99650, 1)
                        int16_t* r12_1 = var_240
                        int32_t r15_1 = var_238_1
                        uint32_t r8_2 = zx.d(*rbx)
                        void* rcx_15 = arg1[0x21]
                        var_240 = nullptr
                        var_238_1.q = 0
                        int64_t var_118
                        int64_t* rax_22 = sub_140bded20(rcx_15, &var_118, r8_2)
                        int32_t rax_23
                        int32_t rcx_16
                        int16_t* r15_2
                        
                        if (r15_1 s> 1)
                            int32_t rbx_3 = rax_22[1].d
                            int32_t rbx_4
                            
                            if (rbx_3 == 0)
                                rbx_4 = 0
                            else
                                rbx_4 = rbx_3 - 1
                            
                            int32_t rax_24
                            
                            if (r15_1 == 0)
                                rax_24 = r15_1 + 1
                            
                            if (r15_1 != 0 || rbx_4 == 0)
                                rax_24 = 0
                            
                            int16_t* var_230 = r12_1
                            int32_t rdx_12 = rbx_4 + rax_24 + r15_1
                            r12_1 = nullptr
                            
                            if (rdx_12 s> var_1c4)
                                sub_1405947f0(&var_230, rdx_12)
                            
                            sub_140a20ba0(&var_230, *rax_22, rbx_4)
                            r15_2 = var_230
                            rax_23 = r15_1
                            rcx_16 = var_1c4
                            var_230 = nullptr
                            int32_t var_228_1
                            var_228_1.q = 0
                        else
                            r15_2 = *rax_22
                            *rax_22 = 0
                            rax_23 = rax_22[1].d
                            rcx_16 = *(rax_22 + 0xc)
                            rax_22[1] = 0
                        
                        int32_t rax_25
                        int32_t rcx_19
                        int16_t* rdi_6
                        
                        if (rax_23 s> 1)
                            int32_t rdi_7 = var_278_1.d
                            int32_t rdi_8
                            
                            if (rdi_7 == 0)
                                rdi_8 = 0
                            else
                                rdi_8 = rdi_7 - 1
                            
                            int32_t r8_4
                            
                            if (rax_23 == 0)
                                r8_4 = rax_23 + 1
                            
                            if (rax_23 != 0 || rdi_8 == 0)
                                r8_4 = 0
                            
                            int16_t* var_220 = r15_2
                            int32_t rdx_15 = rax_23 + rdi_8 + r8_4
                            r15_2 = nullptr
                            
                            if (rdx_15 s> rcx_16)
                                sub_1405947f0(&var_220, rdx_15)
                            
                            sub_140a20ba0(&var_220, var_280, rdi_8)
                            rax_25 = rax_23
                            rcx_19 = rcx_16
                            rdi_6 = var_220
                            int32_t var_218_1
                            var_218_1.q = 0
                            var_220 = nullptr
                        else
                            rdi_6 = var_280
                            rax_25 = var_278_1.d
                            rcx_19 = var_278_1:4.d
                            var_280 = nullptr
                            int64_t var_278_2 = 0
                        
                        int32_t rax_26
                        int16_t* rbx_5
                        
                        if (rax_25 s> 1)
                            int32_t rbx_7
                            
                            if (var_248_1 == 0)
                                rbx_7 = 0
                            else
                                rbx_7 = var_248_1 - 1
                            
                            int32_t rdx_17
                            
                            if (rax_25 == 0)
                                rdx_17 = rax_25 + 1
                            
                            if (rax_25 != 0 || rbx_7 == 0)
                                rdx_17 = 0
                            
                            int16_t* var_1f0 = rdi_6
                            int32_t rdx_19 = rdx_17 + rbx_7 + rax_25
                            int32_t var_1e4_1 = rcx_19
                            rdi_6 = nullptr
                            
                            if (rdx_19 s> rcx_19)
                                sub_1405947f0(&var_1f0, rdx_19)
                            
                            sub_140a20ba0(&var_1f0, var_250, rbx_7)
                            rax_26 = rax_25
                            rbx_5 = var_1f0
                            int32_t var_1e8_1
                            var_1e8_1.q = 0
                            var_1f0 = nullptr
                        else
                            rbx_5 = var_250
                            rax_26 = var_248_1
                            var_250 = nullptr
                            int64_t var_248_2 = 0
                        
                        int16_t* const rdx_21 = &data_142d40450
                        
                        if (rax_26 != 0)
                            rdx_21 = rbx_5
                        
                        uint64_t var_160
                        sub_140b58260(&var_160, rdx_21, 1)
                        
                        if (rbx_5 != 0)
                            sub_140a74f90(rbx_5)
                        
                        if (rdi_6 != 0)
                            sub_140a74f90(rdi_6)
                        
                        if (r15_2 != 0)
                            sub_140a74f90(r15_2)
                        
                        if (r12_1 != 0)
                            sub_140a74f90(r12_1)
                        
                        int16_t* rcx_29 = var_1d0
                        
                        if (rcx_29 != 0)
                            sub_140a74f90(rcx_29)
                        
                        int64_t rcx_30 = var_118
                        
                        if (rcx_30 != 0)
                            sub_140a74f90(rcx_30)
                        
                        int16_t* rcx_31 = var_280
                        
                        if (rcx_31 != 0)
                            sub_140a74f90(rcx_31)
                        
                        int16_t* rcx_32 = var_250
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                        
                        uint64_t rdi_9 = var_160
                        void* rbx_8 = arg1[0x22]
                        var_268 = rdi_9
                        char rax_27 = sub_140b5b8a0(rdi_9.d, 0)
                        int32_t rcx_33
                        rcx_33.b = var_268:4.d == 0
                        
                        if ((rcx_33.b & rax_27) != 0)
                            sub_140d19010(rbx_8, 
                                NewObject with empty name can't be used to create default subobjects "
                            "(inside of UObject derived class constructor) as it produces 
                                    incon")
                        
                        var_2c8.d = 0
                        void* rax_29
                        uint32_t zmm7_1[0x4]
                        float zmm8_1[0x4]
                        float zmm9_1[0x4]
                        rax_29, zmm7_1, zmm8_1, zmm9_1 =
                            sub_140d2dfc0(sub_142591550(), rbx_8, rdi_9, 0, 0, 0, 0, 0, 0)
                        int64_t* rdi_10 = rax_29
                        sub_141ef1390(rax_29)
                        int32_t zmm0_1[0x4] = zx.o(0)
                        int32_t rax_30 = rdi_10[0x26].d
                        float var_120_1 = zmm10[0]
                        zmm0_1[0] = float.s(zx.q(*(arg1 + 0x12c)))
                        float var_140_1 = var_120_1
                        zmm0_1[0] = zmm0_1[0] f* arg1[0x24].d
                        int64_t var_148 = (_mm_unpacklo_ps(zmm0_1, zmm9_1[0].q)).q
                        zmm0_1 = zx.o(rdi_10[0x25])
                        
                        if (zmm0_1[0] f!= rdi_10[0x36].d || zmm0_1.q:4.d[0] f!= *(rdi_10 + 0x1b4)
                                || rax_30[0] f!= rdi_10[0x37].d)
                            rax_30.b = 1
                        else
                            rax_30.b = 0
                        
                        if (rax_30.b != 0)
                            zmm7_1 = data_143cebcf0
                            uint128_t zmm4_1 = zx.o(rdi_10[0x25])
                            int32_t rax_31 = rdi_10[0x26].d
                            zmm0_1 = zmm4_1
                            float zmm5_1[0x4] = data_143cebd00
                            float temp0_5[0x4] =
                                _mm_unpacklo_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55), zmm9_1[0].q)
                            float temp0_7[0x4] =
                                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_31[0].q), temp0_5[0].q)
                            float zmm2_1[0x4] = data_143cebd10
                            zmm4_1 = _mm_div_ps(temp0_7, zmm7_1)
                            zmm0_1 = _mm_and_ps(zmm4_1, zmm5_1)
                            zmm5_1 = _mm_and_ps(zmm5_1, zmm7_1)
                            float temp0_11[0x4] = _mm_cmpeq_ps(zmm2_1, zmm0_1, 2)
                            float temp0_13[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm4_1))
                            zmm0_1 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), 
                                _mm_min_ps(
                                    _mm_sub_ps(temp0_7, 
                                        _mm_mul_ps(
                                            _mm_and_ps(temp0_13 ^ zmm4_1, temp0_11) ^ temp0_13, 
                                            zmm7_1)), 
                                    zmm5_1))
                            float temp0_20[0x4] = _mm_cmpeq_ps(zx.o(0), zmm0_1, 2)
                            float temp0_21[0x4] = _mm_add_ps(zmm0_1, zmm7_1)
                            float zmm3_1[0x4] = temp0_21 ^ zmm0_1
                            zmm0_1 = data_143cebce0
                            zmm3_1 = _mm_and_ps(zmm3_1, temp0_20) ^ temp0_21
                            zmm0_1 = _mm_cmpeq_ps(zmm0_1, zmm3_1, 1)
                            zmm2_1 =
                                _mm_and_ps(_mm_sub_ps(zmm3_1, zmm7_1) ^ zmm3_1, zmm0_1) ^ zmm3_1
                            int32_t var_1b8_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
                            rdi_10[0x36] = (_mm_unpacklo_ps(zmm2_1, 
                                _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
                            rdi_10[0x37].d = var_1b8_2
                            float var_d8[0x4]
                            float (* rax_33)[0x4]
                            rax_33, zmm7_1, zmm8_1 = sub_140ade170(&rdi_10[0x36], &var_d8)
                            *(rdi_10 + 0x1a0) = *rax_33
                        
                        var_2c8.q = 0
                        int32_t var_108[0x4] = *(rdi_10 + 0x1a0)
                        int64_t r8_9
                        int32_t zmm11_1
                        r8_9, zmm9, zmm10, zmm11_1, zmm12 = sub_141f48240(rdi_10, &var_148, 
                            &var_108, 0, zmm7_1, zmm8_1, zmm9_1, zmm10, 0, 0)
                        r8_9.b = 1
                        (*(*rdi_10 + 0x8a8))(rdi_10, arg4, r8_9)
                        *(rdi_10 + 0x5a4) = 0
                        sub_141f70b70(rdi_10, 1)
                        sub_141f49a80(rdi_10, 0, 1)
                        *(rdi_10 + 0x71e) ^= (arg3[0x2c] ^ *(rdi_10 + 0x71e)) & 1
                        
                        if (r13_1 == 0)
                            r12 = arg2
                        else
                            int64_t r15_4
                            
                            if (var_190_1 == 0)
                                zmm9 = sub_141f444b0(rdi_10, r13_1, 1)
                                r12 = arg2
                                
                                if (*r12 == 0)
                                    uint64_t rcx_52 = zx.q(arg6)
                                    
                                    if (rcx_52.d != 0)
                                        zmm2 = zx.o(0)
                                        int128_t zmm1_3
                                        zmm1_3.d = (*(r13_1 + 0x90)).d f* zmm11_1
                                        zmm2[0] = float.s(rcx_52)
                                        zmm1_3.d = zmm1_3.d f/ float.s(zx.q(rdx_4))
                                        zmm1_3.d = zmm1_3.d f* zmm2[0]
                                        sub_141f481b0(rdi_10, zmm1_3, 0)
                                else
                                    sub_141f4b3f0(rdi_10)
                                
                                r15_4 = sx.q(*(r12 + 0x98))
                                int32_t rax_46 = (r15_4 + 1).d
                                *(r12 + 0x98) = rax_46
                                
                                if (rax_46 s<= *(r12 + 0x9c))
                                    *(*(r12 + 0x90) + (r15_4 << 2)) = *(r13_1 + 0x90)
                                else
                                    sub_1406105e0(&r12[0x90])
                                    *(*(r12 + 0x90) + (r15_4 << 2)) = *(r13_1 + 0x90)
                            else
                                sub_141f476a0(rdi_10, var_190_1)
                                void* rax_37 = sub_141f3b9f0(rdi_10)
                                
                                if (rax_37 == 0)
                                    r12 = arg2
                                else
                                    void* rax_38 = sub_1408d3fd0()
                                    void* rcx_46 = *(rax_37 + 0x10)
                                    int64_t rdx_27 = sx.q(*(rax_38 + 0x38))
                                    
                                    if (rdx_27.d s> *(rcx_46 + 0x38)
                                            || *(*(rcx_46 + 0x30) + (rdx_27 << 3))
                                            != rax_38 + 0x30)
                                        r12 = arg2
                                    else
                                        uint64_t rcx_48 = zx.q(arg6)
                                        *(rax_37 + 0x268) = r13_1
                                        
                                        if (rcx_48.d != 0)
                                            zmm2 = *(r13_1 + 0x90)
                                            zmm2[0] = zmm2[0] f* zmm11_1
                                            zmm2[0] = zmm2[0] / float.s(zx.q(rdx_4))
                                            zmm2[0] = zmm2[0] * float.s(rcx_48)
                                            *(rax_37 + 0x270) = zmm2[0]
                                        
                                        r12 = arg2
                                        float zmm0_2
                                        
                                        if (*r12 == 0)
                                            zmm0_2 = zmm12.d
                                        else
                                            zmm0_2 = zmm9.d
                                        
                                        *(rax_37 + 0x274) = zmm0_2
                                        *(rax_37 + 0x280) = arg1
                                        *(rax_37 + 0x279) = *arg3
                                        *(rax_37 + 0x27a) = *(r14 + 8)
                                        r15_4 = sx.q(*(r12 + 0x98))
                                        int32_t rax_43 = (r15_4 + 1).d
                                        *(r12 + 0x98) = rax_43
                                        
                                        if (rax_43 s> *(r12 + 0x9c))
                                            sub_1406105e0(&r12[0x90])
                                        
                                        *(*(r12 + 0x90) + (r15_4 << 2)) = *(r13_1 + 0x90)
                        
                        void* rdx_31 = arg1[0x20]
                        sub_1423bc410(&rdi_10[6], rdx_31, rdx_31 + 0x58)
                        int64_t rbx_10 = sx.q(*(r14 + 8))
                        int32_t rax_48 = (rbx_10 + 1).d
                        *(r14 + 8) = rax_48
                        
                        if (rax_48 s> *(r14 + 0xc))
                            sub_1405a4d70(r14)
                        
                        *(*r14 + (rbx_10 << 3)) = rdi_10
                    *(arg1 + 0x12c) += 1
                    rcx_6 = arg6 + 1
                    rax_17 = zx.q(*(arg1 + 0x12c))
                    rbx = arg3
                    r15 = arg4
                    arg6 = rcx_6
                while (rcx_6 u< rdx_4)
                
                rbx = arg3
        
        i = i_3 + 1
        rcx_4 = var_180_1 + 1
        i_3 = i
        var_180_1 = rcx_4
    while (i s< *(rbx + 0x10))

zmm1 = zmm9
uint128_t* rcx_99 = *(r12 + 0x90)
int64_t i_1 = 0
int64_t rdi_17 = sx.q(*(r12 + 0x98)) << 2
uint64_t rdi_18 = rdi_17 u>> 2

if (rcx_99 u> rdi_17 + rcx_99)
    rdi_18 = 0

if (rdi_18 != 0)
    if (rdi_18 u>= 8)
        zmm2 = zx.o(0)
        zmm1 = zx.o(0)
        
        do
            i_1 += 8
            zmm2 = _mm_add_ps(zmm2, *rcx_99)
            zmm0 = rcx_99[1]
            rcx_99 = &rcx_99[2]
            zmm1 = _mm_add_ps(zmm1, zmm0)
        while (i_1 != (rdi_18 & 0xfffffffffffffff8))
        
        float temp0_56[0x4] = _mm_add_ps(zmm2, zmm1)
        zmm1.q = temp0_56 u>> 0x40
        zmm1 = _mm_add_ps(zmm1, temp0_56)
        zmm1.d = zmm1.d f+ _mm_shuffle_ps(zmm1, zmm1, 0xf5).d
    
    for (; i_1 != rdi_18; i_1 += 1)
        zmm1.d = zmm1.d f+ *rcx_99
        rcx_99 += 4

int32_t rax_85 = *(r12 + 0x98)

if (rax_85 s<= 0)
    zmm1 = zmm9
else
    zmm1.d = zmm1.d f/ _mm_min_ss(_mm_cvtepi32_ps(zx.o(rax_85)).d, zmm12.d).d

bool cond:1 = *r12 == 0
zmm1.d = zmm1.d f* *(rbx + 0x28)
*(r12 + 0xc) = zmm1.d

if (not(cond:1) && r12[1] == 0 && *(rbx + 0x10) s> 1)
    int32_t i_2 = *(r14 + 8)
    int16_t* r15_9 = nullptr
    var_290 = nullptr
    int32_t rsi_1 = 0
    int32_t var_284_1 = 0
    int32_t r12_3 = 0
    
    for (; i_2 s> 0; i_2 = *(r14 + 8))
        int32_t rax_86 = rand()
        int64_t r13_6 = *r14
        int32_t rbx_14 = i_2 - 1
        zmm0 = _mm_cvtepi32_ps(zx.o(i_2))
        int64_t rdi_19 = sx.q(rsi_1)
        rsi_1 = (rdi_19 + 1).d
        float temp0_62[0x4] = _mm_cvtepi32_ps(zx.o(rax_86))
        temp0_62[0] = temp0_62[0] * 3.05185094e-05f
        temp0_62[0] = temp0_62[0] f* zmm0.d
        int32_t rax_87 = int.d(temp0_62[0])
        
        if (rax_87 s<= rbx_14)
            rbx_14 = rax_87
        
        if (rsi_1 s> r12_3)
            sub_1405a4d70(&var_290)
            r12_3 = var_284_1
            r15_9 = var_290
        
        int64_t r9 = sx.q(rbx_14)
        *(r15_9 + (rdi_19 << 3)) = *(r13_6 + (r9 << 3))
        int32_t rax_90 = *(r14 + 8) - rbx_14
        
        if (rax_90 != 1)
            int64_t rdi_20 = *r14
            memmove(rdi_20 + (r9 << 3), rdi_20 + (sx.q(rbx_14 + 1) << 3), (rax_90 - 1) << 3)
        
        *(r14 + 8) -= 1
        sub_1405c53d0(r14)
    
    if (r14 != &var_290)
        int32_t r8_23 = *(r14 + 0xc)
        *(r14 + 8) = rsi_1
        
        if (rsi_1 != 0 || r8_23 != 0)
            sub_1405c4a00(r14, rsi_1, r8_23)
            memcpy(*r14, r15_9, rsi_1 << 3)
        else
            *(r14 + 0xc) = 0
    
    if (r15_9 != 0)
        sub_140a74f90(r15_9)
    
    r12 = arg2

int32_t rax_93 = *(r14 + 8)
void* rbx_15 = &r12[0x30]
void* r15_10 = rbx_15 + 0x18
uint64_t rcx_109 = zx.q((*(rbx_15 + 0x1c) + 0x1f) u>> 5)
*r15_10 = rax_93
uint32_t rsi_3 = (rax_93 + 0x1f) u>> 5

if (rsi_3 u<= rcx_109.d)
    void* rax_98 = *(rbx_15 + 0x10)
    
    if (rax_98 != 0)
        rbx_15 = rax_98
    
    if (rcx_109.d u> 8)
        memset(rbx_15, 0, zx.q(rcx_109.d) << 2)
    else if (rcx_109.d != 0)
        __builtin_memset(rbx_15, 0, rcx_109 << 2)
else
    sub_1405a4a00(rbx_15, 0, rsi_3, 4)
    *(rbx_15 + 0x1c) = rsi_3 << 5
    void* rax_96 = *(rbx_15 + 0x10)
    
    if (rax_96 != 0)
        rbx_15 = rax_96
    
    if (rsi_3 u> 8)
        memset(rbx_15, 0, zx.q(rsi_3) << 2)
    else if (rsi_3 != 0)
        __builtin_memset(rbx_15, 0, zx.q(rsi_3) << 2)
    
    uint64_t rdx_58 = zx.q(rsi_3 - 1)
    *(rbx_15 + (rdx_58 << 2)) &= 0xffffffff u>> ((neg.d(*r15_10)).b & 0x1f)

int32_t rax_99 = *(r14 + 8)
void* rbx_17 = &arg2[0x50]
void* r13_7 = rbx_17 + 0x18
*r13_7 = rax_99
uint64_t rsi_5 = zx.q((rax_99 + 0x1f) u>> 5)
uint32_t r15_13 = (*(rbx_17 + 0x1c) + 0x1f) u>> 5

if (rsi_5.d u<= r15_13)
    void* rax_104 = *(rbx_17 + 0x10)
    
    if (rsi_5.d == 0)
        if (rax_104 != 0)
            rbx_17 = rax_104
        
        if (r15_13 u> 8)
            memset(rbx_17, 0, zx.q(r15_13) << 2)
        else if (r15_13 != 0)
            __builtin_memset(rbx_17, 0, zx.q(r15_13) << 2)
    else
        if (rax_104 != 0)
            rbx_17 = rax_104
        
        int32_t rax_105 = (rsi_5 - 1).d
        
        if (rax_105 s> 8)
            memset(rbx_17, 0xff, (rsi_5 << 2) + -fffffffffffffffc)
        else if (rax_105 s> 0)
            __builtin_memset(rbx_17, 0xffffffff, ((rsi_5 << 2) + -fffffffffffffffc) u>> 2 << 2)
        
        void* rdi_25 = rbx_17 + (rsi_5 << 2)
        *(rbx_17 + (zx.q((rsi_5 - 1).d) << 2)) = 0xffffffff u>> ((neg.d(*r13_7)).b & 0x1f)
        int32_t rdx_62 = r15_13 - rsi_5.d
        
        if (rdx_62 s> 8)
            memset(rdi_25, 0, (zx.q(r15_13) - zx.q(rsi_5.d)) << 2)
        else if (rdx_62 s> 0)
            __builtin_memset(rdi_25, 0, (zx.q(r15_13) - zx.q(rsi_5.d)) << 2)
else
    sub_1405a4a00(rbx_17, 0, rsi_5.d, 4)
    *(rbx_17 + 0x1c) = rsi_5.d << 5
    void* rax_102 = *(rbx_17 + 0x10)
    
    if (rax_102 != 0)
        rbx_17 = rax_102
    
    if (rsi_5.d u> 8)
        memset(rbx_17, 0xff, zx.q(rsi_5.d) << 2)
    else if (rsi_5.d != 0)
        __builtin_memset(rbx_17, 0xffffffff, zx.q(rsi_5.d) << 2)
    
    uint64_t rdx_59 = zx.q((rsi_5 - 1).d)
    *(rbx_17 + (rdx_59 << 2)) &= 0xffffffff u>> ((neg.d(*r13_7)).b & 0x1f)

int32_t rax_109 = *(r14 + 8)
void* rbx_19 = &arg2[0x70]
void* r14_1 = rbx_19 + 0x18
*r14_1 = rax_109
uint32_t rsi_7 = (rax_109 + 0x1f) u>> 5
uint64_t rcx_135 = zx.q((*(rbx_19 + 0x1c) + 0x1f) u>> 5)

if (rsi_7 u<= rcx_135.d)
    void* rax_114 = *(rbx_19 + 0x10)
    
    if (rax_114 != 0)
        rbx_19 = rax_114
    
    if (rcx_135.d u> 8)
        return memset(rbx_19, 0, zx.q(rcx_135.d) << 2) __tailcall
    
    if (rcx_135.d != 0)
        rax_114 = nullptr
        __builtin_memset(rbx_19, 0, rcx_135 << 2)
    
    return rax_114

sub_1405a4a00(rbx_19, 0, rsi_7, 4)
*(rbx_19 + 0x1c) = rsi_7 << 5
void* rax_112 = *(rbx_19 + 0x10)

if (rax_112 != 0)
    rbx_19 = rax_112

if (rsi_7 u> 8)
    memset(rbx_19, 0, zx.q(rsi_7) << 2)
else if (rsi_7 != 0)
    __builtin_memset(rbx_19, 0, zx.q(rsi_7) << 2)

uint64_t rax_113 = zx.q(rsi_7 - 1)
*(rbx_19 + (rax_113 << 2)) &= 0xffffffff u>> ((neg.d(*r14_1)).b & 0x1f)
return rax_113
