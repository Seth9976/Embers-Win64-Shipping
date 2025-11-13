// 函数: sub_1414d7c10
// 地址: 0x1414d7c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6b8
int64_t rax_1 = __security_cookie ^ &var_6b8
void* r12 = arg1
int64_t* rcx = *(arg1 + 8)
int64_t* rax_3 = (*(*rcx + 0x1d0))(rcx)
int128_t zmm0 = data_142d3f660
int64_t rdx = *(r12 + 8)
int512_t zmm1
zmm1.o = zmm0
void* rax_4 = *rax_3
float temp0 = *(rax_4 + 0x24)
0f - temp0
int32_t rax_5 = *(data_143ee7250 + 4)
int32_t rax_6 = *(data_143ee7370 + 4)
int32_t rax_7 = *(data_143ee72f8 + 4)
int64_t rax_8 = data_1439b5ec0
bool cond:1 = *(rdx + 0xfc0) != 0
int128_t var_468 = zmm0
int128_t var_438
__builtin_memcpy(&var_438, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
        3f", 
    0x30)
void var_488
float zmm7[0x4]
float zmm8[0x4]
int128_t zmm9
int128_t zmm10
zmm7, zmm8, zmm9, zmm10 = sub_1414df6b0(&var_488, rdx, rax_3)
int64_t* rcx_5 = data_143f0f180
void* var_658
(*(*rcx_5 + 0xf8))(rcx_5, &var_658, &var_488, &data_143ee7590, 1, 1)
void* rbx = var_658
void* var_620 = rbx

if (rbx != 0)
    *(rbx + 8) += 1
    rbx = var_620

sub_1405d1550(&var_658)
void var_358
sub_1419928d0(&var_358, arg2)
void*** rax_11 = sub_1410fccd0(&var_358, sub_14139d440(&data_143ec4c60), u"SceneColor", 0)
void*** rax_12 = sub_1410fccd0(&var_358, &data_143ec4ca0, u"SceneDepth", 0)
void*** rax_13 = sub_1410fccd0(&var_358, &rax_3[0x19], u"External", 0)
void*** rax_14
int128_t zmm6
rax_14, zmm6 = sub_1410fccd0(&var_358, &rax_3[0x1a], u"External", 0)
var_658.d = 0

if (*(r12 + 0xa8) s> 0)
    int64_t r14_1 = 0
    int128_t var_48_1 = zmm6
    float var_58_1[0x4] = zmm7
    int128_t var_78_1 = zmm9
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    float var_68_1[0x4] = zmm8
    char var_662
    char var_687_1 = var_662
    
    do
        void* r15_1 = *(r12 + 0xa0)
        uint128_t zmm1_1 = zx.o(*(r14_1 + r15_1 + 0x60c))
        int32_t rax_17 = *(r14_1 + r15_1 + 0x614)
        zmm11 = _mm_max_ss((*(data_143ee72e0 + 4)).d, 0)
        bool cond:9_1 = *(r14_1 + r15_1 + 0xd74) == 0
        int32_t r13_1 = *(r14_1 + r15_1 + 0x497c)
        uint128_t zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        zmm11.d = zmm11.d f* 100000f
        uint8_t r13_2 = not.b((r13_1 u>> 0xf).b) & 1
        float zmm3_1[0x4] = *(rax_4 + 0x10)
        float zmm2_1[0x4] = *(rax_4 + 0x14)
        zmm11 = __maxss_xmmss_memss(zmm11.d, *(r14_1 + r15_1 + 0xd30))
        zmm2_1[0] = zmm2_1[0] * 100000f
        zmm3_1[0] = zmm3_1[0] * 100000f
        zmm2_1[0] = zmm2_1[0] f- zmm0_1.d
        zmm0_1.d = (*(rax_4 + 0x20)).d f* 100000f
        zmm3_1[0] = zmm3_1[0] f- zmm1_1.d
        zmm1_1.d = (*(rax_4 + 0x18)).d f* 100000f
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        zmm1_1.d = zmm1_1.d f- rax_17
        zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
        zmm1_1.d = zmm1_1.d f* zmm1_1.d
        zmm2_1[0] = zmm2_1[0] + zmm3_1[0]
        zmm2_1[0] = zmm2_1[0] f+ zmm1_1.d
        zmm1_1.d = _mm_sqrt_ss(0, zmm2_1[0]).d f- zmm0_1.d
        bool var_688_1 = zmm1_1.d f> 1000f
        int64_t* rsi_2 = r15_1 + 0x5060 + r14_1
        int64_t* rdi_1 = *rsi_2
        int32_t var_638
        int64_t var_298
        sub_140865c40(&var_298, &var_638, rdi_1)
        int64_t rax_19 = sx.q(var_638)
        int64_t r12_1 = var_298
        void* const rcx_14
        
        if (rax_19.d == 0xffffffff)
            rcx_14 = nullptr
        else
            rcx_14 = r12_1 + rax_19 * 0x18
        
        int64_t* rax_21 = rcx_14 + 8
        
        if (rcx_14 == 0)
            rax_21 = nullptr
        
        void*** var_640
        int64_t* var_350
        void var_338
        void*** rax_22
        
        if (rax_21 == 0)
            int128_t* rax_24 = (*(*rdi_1 + 0x10))(rdi_1)
            void*** rax_25 = sub_14081d830(0x88, var_350, 1, 0)
            void*** rcx_16 = rax_25
            
            if (rax_25 == 0)
                rcx_16 = rax_25
            else
                rcx_16[1] = u"External"
                rcx_16[2] = 0
                rcx_16[3].b = 0
                *(rcx_16 + 0x1c) = 0
                rcx_16[4] = 0
                rcx_16[5].w = 0x200
                *rcx_16 = &data_142f11960
                *(rcx_16 + 0x30) = *rax_24
                *(rcx_16 + 0x40) = rax_24[1]
                *(rcx_16 + 0x50) = rax_24[2]
                *(rcx_16 + 0x60) = rax_24[3]
                int128_t zmm0_2 = rax_24[4]
                rcx_16[0x10] = 0
                *(rcx_16 + 0x70) = zmm0_2
            
            int64_t rax_26 = *rsi_2
            void*** var_650 = rcx_16
            rcx_16[0x10] = rax_26
            int64_t* var_568_1 = rsi_2
            var_650[2] = *(*rsi_2 + 0x10)
            void**** var_570 = &var_650
            void var_580
            sub_14107bc20(&var_338, &var_580, &var_570, nullptr)
            var_640 = *rsi_2
            void**** var_560 = &var_640
            void**** var_558_1 = &var_650
            void var_57c
            sub_14107baa0(&var_298, &var_57c, &var_560, nullptr)
            rax_22 = var_650
            r12_1 = var_298
        else
            rax_22 = *rax_21
        
        var_640 = rax_22
        void* rsi_4 = r15_1 + 0x5058 + r14_1
        int64_t* rdi_3 = *rsi_4
        int32_t var_634
        sub_140865c40(&var_298, &var_634, rdi_3)
        int64_t rax_30 = sx.q(var_634)
        void* const rcx_21
        
        if (rax_30.d == 0xffffffff)
            rcx_21 = nullptr
        else
            rcx_21 = r12_1 + rax_30 * 0x18
        
        int64_t* rax_32 = rcx_21 + 8
        
        if (rcx_21 == 0)
            rax_32 = nullptr
        
        void*** rsi_5
        
        if (rax_32 == 0)
            int128_t* rax_34 = (*(*rdi_3 + 0x10))(rdi_3)
            void*** rax_35 = sub_14081d830(0x88, var_350, 1, 0)
            void*** rcx_23 = rax_35
            
            if (rax_35 == 0)
                rcx_23 = nullptr
            else
                rcx_23[2] = 0
                rcx_23[1] = u"External"
                rcx_23[3].b = 0
                *(rcx_23 + 0x1c) = 0
                rcx_23[4] = 0
                rcx_23[5].w = 0x200
                *rcx_23 = &data_142f11960
                *(rcx_23 + 0x30) = *rax_34
                *(rcx_23 + 0x40) = rax_34[1]
                *(rcx_23 + 0x50) = rax_34[2]
                *(rcx_23 + 0x60) = rax_34[3]
                int128_t zmm0_3 = rax_34[4]
                rcx_23[0x10] = 0
                *(rcx_23 + 0x70) = zmm0_3
            
            int64_t rax_36 = *rsi_4
            void*** var_648 = rcx_23
            rcx_23[0x10] = rax_36
            void* var_548_1 = rsi_4
            var_648[2] = *(*rsi_4 + 0x10)
            void**** var_550 = &var_648
            void var_578
            sub_14107bc20(&var_338, &var_578, &var_550, nullptr)
            int64_t var_5d8 = *rsi_4
            int64_t* var_540 = &var_5d8
            void**** var_538_1 = &var_648
            void var_5e8
            sub_14107baa0(&var_298, &var_5e8, &var_540, nullptr)
            rsi_5 = var_648
        else
            rsi_5 = *rax_32
        
        bool rax_40
        
        if (rax_5 s<= 0 || var_688_1 != 0)
            rax_40 = false
        else
            rax_40 = true
        
        bool var_667_1 = rax_40
        
        if (rax_6 s<= 0 || var_688_1 != 0)
            rax_40 = false
        else
            rax_40 = true
        
        bool var_666_1 = rax_40
        bool var_665_1 = cond:9_1
        int32_t var_678_1 = (0f < temp0).d
        uint8_t var_663_1 = r13_2
        uint32_t r9_1 = zx.d(cond:1.w)
        int16_t var_674_1 = r9_1.w
        char r8_6
        char r10_1
        
        if (r13_2 != 0)
            r10_1 = var_678_1:3.b
            r8_6 = var_678_1:1.b
        else
            r8_6 = 0
            r10_1 = 0
            var_678_1:1.b = 0
            var_678_1:3.b = 0
        
        uint32_t rcx_28 = zx.d(var_678_1:2.b)
        char rdx_14 = var_678_1.b
        bool var_664_1
        var_664_1.w = r9_1.w
        
        if (rcx_28.b != 0)
            rdx_14 = 0
        
        var_678_1.b = rdx_14
        bool var_668_1
        var_668_1.d = var_678_1
        uint32_t rax_46 = zx.d(var_674_1.b)
        char temp1_1 = rax_46.b
        rax_46.b = neg.b(rax_46.b)
        char temp2_1 = rcx_28.b
        rcx_28.b = neg.b(rcx_28.b)
        int32_t rax_48 = sbb.d(rax_46, rax_46, temp2_1 != 0) & 4
        uint32_t rax_51 = zx.d(var_674_1:1.b)
        char temp4_1 = rax_51.b
        rax_51.b = neg.b(rax_51.b)
        int32_t r9_7 = (sbb.d(r9_1, r9_1, temp1_1 != 0) & 0x10) + rax_48
            + (sbb.d(rax_48, rax_48, r10_1 != 0) & 8)
            + (sbb.d(rcx_28, rcx_28, temp4_1 != 0) & 0x20) + (sbb.d(rax_51, rax_51, r8_6 != 0) & 2)
        int32_t rax_54
        rax_54.b = rdx_14 != 0
        int128_t var_528
        sub_1419a2ec0(*(r14_1 + r15_1 + 0x5150), &var_528, &data_143ee7720, r9_7 + rax_54)
        zmm9 = var_528
        int128_t var_4c8
        sub_1419a2ec0(*(r14_1 + r15_1 + 0x5150), &var_4c8, &data_143ee7610, 0)
        zmm10 = var_4c8
        void*** var_618_1 = rax_11
        int16_t var_610_1 = 1
        char var_60e_1 = 0
        int32_t var_60c_1 = 0xffffffff
        int64_t var_3d8_1 = 0
        int16_t var_3d0_1 = 0
        char var_3ce_1 = 0
        int32_t var_3cc_1 = 0xffffffff
        int64_t var_3c8_1 = 0
        int16_t var_3c0_1 = 0
        char var_3be_1 = 0
        int32_t var_3bc_1 = 0xffffffff
        int64_t var_3b8_1 = 0
        int16_t var_3b0_1 = 0
        char var_3ae_1 = 0
        int32_t var_3ac_1 = 0xffffffff
        int64_t var_3a8_1 = 0
        int16_t var_3a0_1 = 0
        char var_39e_1 = 0
        int32_t var_39c_1 = 0xffffffff
        int64_t var_398_1 = 0
        int16_t var_390_1 = 0
        char var_38e_1 = 0
        int32_t var_38c_1 = 0xffffffff
        int64_t var_388_1 = 0
        int16_t var_380_1 = 0
        char var_37e_1 = 0
        int32_t var_37c_1 = 0xffffffff
        int64_t var_378_1 = 0
        int16_t var_370_1 = 0
        char var_36e_1 = 0
        int32_t var_36c_1 = 0xffffffff
        int16_t var_600_1 = 1
        char var_5fe_1 = 0
        int32_t var_5fc_1 = 1
        int64_t* rax_57 = sub_14081d830(0x100, var_350, 1, 0)
        int64_t* rdi_5 = rax_57
        
        if (rax_57 == 0)
            rdi_5 = nullptr
        else
            __builtin_memset(rax_57, 0, 0x18)
            sub_14117af20(&rax_57[4])
            __builtin_memset(&rdi_5[0x16], 0, 0x48)
        
        memset(rdi_5, 0, 0x100)
        r12 = arg1
        int64_t* rcx_35 = *(r12 + 8)
        sub_1405d16e0(rdi_5, *((*(*rcx_35 + 0x1d0))(rcx_35) + 0xc0))
        sub_1405d16e0(&rdi_5[1], rbx)
        *(rdi_5 + 0x20) = sub_1405d16e0(&rdi_5[2], *(r14_1 + r15_1 + 0x10))
        *(rdi_5 + 0x30) = var_3d8_1.o
        *(rdi_5 + 0x40) = var_3c8_1.o
        *(rdi_5 + 0x50) = var_3b8_1.o
        *(rdi_5 + 0x60) = var_3a8_1.o
        *(rdi_5 + 0x70) = var_398_1.o
        *(rdi_5 + 0x80) = var_388_1.o
        *(rdi_5 + 0x90) = var_378_1.o
        *(rdi_5 + 0xa0) = rax_12.o
        void var_5b0
        sub_1405d1600(&rdi_5[0x16], sub_14137b9a0(&var_5b0, arg2, 0xf, *(r14_1 + r15_1 + 0x1548)))
        char rcx_42 = sub_1405d1550(&var_5b0)
        rdi_5[0x1b] = rax_8
        rdi_5[0x1c] = rax_8
        rdi_5[0x1d] = rax_8
        rdi_5[0x1e] = rax_8
        rdi_5[0x17] = rax_13
        rdi_5[0x18] = rax_14
        rdi_5[0x19] = var_640
        rdi_5[0x1f].d = zmm11.d * 9.99999975e-06f
        rdi_5[0x1a] = rsi_5
        sub_1414cc0b0(rcx_42)
        int128_t var_4b8_1 = zx.o(0)
        sub_141998c50(var_528.q, &data_143ee9e80, rdi_5)
        float zmm1_5[0x4] = 0x3dcccccd
        float zmm0_6[0x4]
        
        if (rax_7 s> 0)
            zmm7 = *(r14_1 + r15_1 + 0x290)
            zmm0_6 = 0x3f800000
            zmm8 = *(r14_1 + r15_1 + 0x280)
            zmm0_6[0] = 1f / _mm_shuffle_ps(zmm7, zmm7, 0x55)[0]
            int64_t var_5f8_1 = 0
            zmm0_6 = cosf(_mm_max_ss(atanf(zmm0_6[0]), atanf(1f / zmm8[0])))
            zmm0_6[0] = zmm0_6[0] f* zmm11.d
            int32_t var_5ec_1 = 0x3f800000
            zmm2_1 = var_5f8_1.o
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
            int32_t var_4a0_1 = 0
            int32_t var_49c_1 = 0x3f800000
            zmm2_1[0] = __maxss_xmmss_memss(zmm0_6[0], *(r14_1 + r15_1 + 0xd30))[0]
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            var_5f8_1.o = zmm2_1
            zmm3_1 =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(r14_1 + r15_1 + 0x2b0))
            zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), zmm7)
            zmm0_6 =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(r14_1 + r15_1 + 0x2a0))
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm8)
            zmm3_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm0_6), _mm_add_ps(zmm1_5, zmm2_1))
            zmm1_5 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
            zmm1_5[0] = zmm1_5[0] / zmm3_1[0]
        
        zmm0_6 = *(r14_1 + r15_1 + 0x1598)
        float var_4cc_1 = zmm1_5[0]
        bool var_4d0_1 = rax_7 s> 0
        uint8_t var_4cf_1 = r13_2
        void*** rax_66
        char rcx_44
        rax_66, rcx_44 = sub_14081d830(0x78, var_350, 1, 0)
        void*** rsi_6 = rax_66
        
        if (rax_66 == 0)
            rsi_6 = rax_66
        else
            sub_1414cc0b0(rcx_44)
            void* var_510_1 = &data_143ee9eb0
            int128_t var_498 = rdi_5.o
            void var_660
            sub_141992bd0(rsi_6, &var_660, &var_498, 1)
            *rsi_6 = &data_142fb8200
            *(rsi_6 + 0x38) = rdi_5.o
            *(rsi_6 + 0x48) = zmm10
            *(rsi_6 + 0x58) = zmm9
            *(rsi_6 + 0x68) = zmm0_6
        
        sub_1419968d0(&var_358, rsi_6)
        r14_1 += 0x5240
        var_658.d += 1
    while (var_658.d + 1 s< *(r12 + 0xa8))

sub_14199ef00(&var_358)
sub_1410eb9e0(&var_358)
int64_t result = sub_1405d1550(&var_620)
__security_check_cookie(rax_1 ^ &var_6b8)
return result
