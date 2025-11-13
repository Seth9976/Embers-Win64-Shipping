// 函数: sub_140730130
// 地址: 0x140730130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_5 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_5)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        r9 += 1
    while (i s>= *(rcx + r8))

int64_t r10 = *(arg2 + 0x18)
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
*(arg2 + 0x10) = &rax[2]
void* rdx_3

if ((not.b(rax_6) & 1) == 0)
    rdx_3 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_1 = nullptr
        
        do
            i_1 -= *(rdx_1 + r8)
            rax_7 += 1
            rdx_1 = rax_7 << 2
            r9_1 += 1
        while (i_1 s>= *(rdx_1 + r8))
    
    rdx_3 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
void* var_440 = rdx_3
uint8_t rax_10 = (rax_9 u>> 0xf).b
int32_t i_2 = rax_9 & 0x7fff
*(arg2 + 0x10) = &rax[3]
void* rdx_8

if ((not.b(rax_10) & 1) == 0)
    rdx_8 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_2 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_11 = 0
        int32_t* rdx_6 = nullptr
        
        do
            i_2 -= *(rdx_6 + r8)
            rax_11 += 1
            rdx_6 = rax_11 << 2
            r9_2 += 1
        while (i_2 s>= *(rdx_6 + r8))
    
    rdx_8 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
void* var_448 = rdx_8
uint8_t rax_14 = (rax_13 u>> 0xf).b
int32_t i_3 = rax_13 & 0x7fff
*(arg2 + 0x10) = &rax[4]
uint128_t* rbx_1

if ((not.b(rax_14) & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_3 s>= *r8)
        int64_t rax_15 = 0
        int32_t* rdx_11 = nullptr
        
        do
            i_3 -= *(rdx_11 + r8)
            rax_15 += 1
            rdx_11 = rax_15 << 2
            r9_3 += 1
        while (i_3 s>= *(rdx_11 + r8))
    
    rbx_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_20 = rax_19
rax_19.b = not.b(rax_19.b)
uint128_t* r12_1

if ((rax_19.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_20 = 0
        int32_t* rdx_12 = nullptr
        
        do
            i_4 -= *(rdx_12 + r8)
            rax_20 += 1
            rdx_12 = rax_20 << 2
            r9_4 += 1
        while (i_4 s>= *(rdx_12 + r8))
    
    r12_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

void var_2d8
sub_140742680(&var_2d8, arg2)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

void* r13 = *(rdi + 0x58)
int64_t* r14 = nullptr
void* r15 = nullptr

if (r13 != 0)
    r14 = *(**(r13 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_25 = sub_140d3c6e0(rdi)
        void* rax_26
        void* rcx_10
        int64_t rdx_14
        
        if (rax_25 != 0)
            rax_26 = sub_142591550()
            rcx_10 = *(rax_25 + 0x10)
            rdx_14 = sx.q(*(rax_26 + 0x38))
        
        if (rax_25 == 0 || rdx_14.d s> *(rcx_10 + 0x38)
                || *(*(rcx_10 + 0x30) + (rdx_14 << 3)) != rax_26 + 0x30 || *(rax_25 + 0x430) == 0)
            r15 = &r14[0x27]
        else
            r15 = sub_141f66050(rax_25, rdi[0x1a])

int64_t* rdi_1

if (r13 == 0 || r14 == 0)
    rdi_1 = nullptr
else
    rdi_1 = r14[3]

float zmm2[0x4] = 0x3f800000
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*rdi_1 + 0x58))(rdi_1))
uint128_t zmm0
zmm0.d = 1f f/ rdi[0x64]
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_7 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_450 = r11_7
int32_t var_454 = zmm0.d
char var_170
char var_16e
char var_16d
char var_16c
int32_t* arg_10
char arg_18

if (var_170 != 0 || result.b != 0 || var_16e != result.b || var_16d != result.b
        || var_16c != result.b)
    arg_10.b = 1
    
    if (result.b != 0)
        arg_18 = 1
    else
        arg_18 = result.b
else
    arg_10.b = result.b
    arg_18 = result.b

int32_t var_480 = 0

if (*(arg2 + 0x40) s> 0)
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm13[0x4] = zx.o(0)
    float zmm14[0x4] = arg_10.d
    float zmm15[0x4] = arg_10.d
    result = zx.q(arg_20.b) << 2
    uint64_t r8_2 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(rax_10) << 2
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int32_t var_48c
    arg_20 = var_48c.d
    uint64_t r10_2 = zx.q(rax_6) << 2
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    int32_t var_464
    int32_t var_498_1 = var_464.d
    int32_t var_474
    float var_49c_1 = var_474[0]
    uint64_t result_1 = result
    uint64_t var_3f8_1 = r8_2
    uint64_t var_398_1 = r9_6
    uint64_t var_3c0_1 = r10_2
    bool cond:7_1
    
    do
        uint128_t* rdx_17 = r12_1
        r12_1 += result
        uint128_t* r8_3 = var_448
        int32_t* rdx_18 = var_440
        int32_t var_300_1 = (*rdx_17).d
        var_440 = rdx_18 + r10_2
        uint64_t rdx_20 = zx.q(*rdx_18)
        var_448 = r8_3 + r9_6
        uint64_t var_434_1 = (_mm_unpacklo_ps(*r8_3, (*rbx_1).q)).q
        
        if (rdx_20.d s< 0 || rdx_20.d s> r11_7)
            int32_t var_2f4_1 = 0
            uint64_t var_3b4_1 = (_mm_unpacklo_ps(zmm2, zmm13[0].q)).q
            int32_t var_3ac_1 = 0
            rdx_20 = zx.q(0.o.d)
        
        uint32_t rbx_5 = (rdx_20 * 3).d
        int32_t rax_36 = (*(*rdi_1 + 0x68))(rdi_1, zx.q(rbx_5))
        int64_t r8_5 = *rdi_1
        int32_t rax_37 = (*(r8_5 + 0x68))(rdi_1, zx.q(rbx_5 + 1), r8_5)
        int64_t r8_6 = *rdi_1
        int32_t rax_38 = (*(r8_6 + 0x68))(rdi_1, zx.q(rbx_5 + 2), r8_6)
        int32_t var_490
        int32_t var_488
        uint32_t var_478
        int32_t var_470
        int32_t var_468
        int32_t var_460
        uint128_t zmm1
        float zmm7[0x4]
        
        if (arg_10.b != 0)
            void var_168
            int64_t* rax_39 = sub_142316040(&var_168, r13, r14, r15, rax_36)
            zmm7 = zx.o(*rax_39)
            var_488 = rax_39[1].d
            void var_15c
            int64_t* rax_41
            int512_t zmm6_1
            rax_41, zmm6_1 = sub_142316040(&var_15c, r13, r14, r15, rax_37)
            zmm6_1.o = zx.o(*rax_41)
            var_460 = rax_41[1].d
            void var_150
            int64_t* rax_44
            rax_44, zmm6 = sub_142316040(&var_150, r13, r14, r15, rax_38)
            zmm0 = zmm7
            var_490 = zmm7.d
            arg_20 = _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm0 = zmm6
            zmm1 = zx.o(*rax_44)
            int32_t rax_45 = rax_44[1].d
            var_498_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            var_49c_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
            var_470 = rax_45
            var_468 = zmm6.d
            var_478 = zmm1.d
        
        zmm9 = var_300_1
        zmm10 = var_434_1:4.d
        zmm11 = var_434_1.d
        float zmm4_1
        float var_458
        
        if (arg_18 == 0)
            zmm12 = var_458
        else
            void var_144
            int64_t* rax_46 = sub_142316040(&var_144, r13, r14, r15, rax_36)
            zmm8 = zx.o(*rax_46)
            int32_t rax_47 = rax_46[1].d
            void var_138
            int64_t* rax_49
            int512_t zmm6_2
            rax_49, zmm6_2 = sub_142316040(&var_138, r13, r14, r15, rax_37)
            zmm6_2.o = zx.o(*rax_49)
            float rax_50 = rax_49[1].d
            void var_12c
            int64_t* rax_52
            rax_52, zmm6 = sub_142316040(&var_12c, r13, r14, r15, rax_38)
            zmm15 = zmm9
            zmm14 = zmm10
            zmm4_1 = zmm10[0] * rax_50
            zmm12 = zmm9
            zmm1 = zx.o(*rax_52)
            int32_t rax_53 = rax_52[1].d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm9[0] = zmm9[0] f* zmm0.d
            zmm15[0] = zmm15[0] f* zmm1.d
            zmm0 = zmm6
            zmm12[0] = zmm12[0] f* rax_53
            zmm1.d = zmm11.d f* rax_47
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm14[0] = zmm14[0] f* zmm0.d
            zmm0 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm11[0] = zmm11[0] f* zmm0.d
            zmm10[0] = zmm10[0] * zmm6[0]
            zmm11[0] = zmm11[0] f* zmm8.d
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm12[0] = zmm12[0] + zmm4_1 f+ zmm1.d
            zmm10[0] = zmm10[0] + zmm11[0]
            zmm14[0] = zmm14[0] + zmm9[0]
            var_458 = zmm12[0]
            zmm15[0] = zmm15[0] + zmm10[0]
        
        if (var_170 != 0 || result_2 != 0)
            void* var_2c8
            float* rdx_30 = var_2c8
            zmm6 = var_468
            zmm4_1 = zmm9[0] f* var_478
            zmm10[0] = zmm10[0] f* var_498_1
            int32_t var_2d4
            var_2c8 = &rdx_30[sx.q(var_2d4)]
            zmm7 = var_49c_1
            zmm0.d = zmm11.d f* var_490
            zmm1.d = zmm11.d f* arg_20
            zmm10[0] = zmm10[0] f* var_460
            zmm11[0] = zmm11[0] f* var_488
            zmm10[0] = zmm10[0] f+ zmm1.d
            zmm8 = var_470
            zmm10[0] = zmm10[0] * zmm6[0]
            zmm9[0] = zmm9[0] * zmm7[0]
            zmm10[0] = zmm10[0] + zmm11[0]
            zmm10[0] = zmm10[0] f+ zmm0.d
            zmm9[0] = zmm9[0] f* zmm8.d
            zmm9[0] = zmm9[0] + zmm10[0]
            zmm9[0] = zmm9[0] + zmm10[0]
            zmm4_1 = zmm4_1 + zmm10[0]
            *rdx_30 = zmm4_1
            void* var_2b0
            float* rdx_31 = var_2b0
            int32_t var_2bc
            var_2b0 = &rdx_31[sx.q(var_2bc)]
            *rdx_31 = zmm9[0]
            void* var_298
            float* rdx_32 = var_298
            int32_t var_2a4
            var_298 = &rdx_32[sx.q(var_2a4)]
            *rdx_32 = zmm9[0]
            
            if (result_2 != 0)
                void* var_280
                float* rdx_33 = var_280
                zmm4_1 = zmm4_1 - zmm15[0]
                zmm9[0] = zmm9[0] - zmm14[0]
                zmm0 = var_454
                zmm9[0] = zmm9[0] - zmm12[0]
                int32_t var_28c
                var_280 = &rdx_33[sx.q(var_28c)]
                zmm9[0] = zmm9[0] f* zmm0.d
                *rdx_33 = zmm4_1 f* zmm0.d
                void* var_268
                float* rdx_34 = var_268
                zmm9[0] = zmm9[0] f* zmm0.d
                int32_t var_274
                var_268 = &rdx_34[sx.q(var_274)]
                *rdx_34 = zmm9[0]
                void* var_250
                float* rdx_35 = var_250
                int32_t var_25c
                var_250 = &rdx_35[sx.q(var_25c)]
                *rdx_35 = zmm9[0]
        else
            zmm8 = var_470
            zmm7 = var_49c_1
            zmm6 = var_468
        
        zmm10 = var_490
        zmm9 = var_478
        zmm11 = arg_20
        zmm12 = var_488
        float zmm3[0x4]
        float zmm5_1[0x4]
        
        if (var_16e != 0)
            zmm2 = var_498_1
            zmm6[0] = zmm6[0] - zmm9[0]
            zmm2[0] = zmm2[0] - zmm7[0]
            zmm11[0] = zmm11[0] - zmm7[0]
            zmm7 = var_460
            zmm1.d = zmm12.d f- zmm8.d
            zmm7[0] = zmm7[0] f- zmm8.d
            zmm4_1 = zmm10[0] - zmm9[0]
            zmm8.d = zmm2.d f* zmm1.d
            zmm2[0] = zmm2[0] * zmm4_1
            zmm0.d = zmm7.d f* zmm11[0]
            zmm7[0] = zmm7[0] * zmm4_1
            zmm8.d = zmm8.d f- zmm0.d
            zmm6[0] = zmm6[0] * zmm11[0]
            zmm0.d = zmm6.d f* zmm1.d
            zmm6[0] = zmm6[0] - zmm2[0]
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm0.d = zmm8.d f* zmm8.d
            zmm1.d = zmm6.d f* zmm6[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm7[0] = zmm7[0] f+ zmm0.d
            zmm7[0] = zmm7[0] f+ zmm1.d
            float var_410_1
            
            if (not(zmm7[0] != 1f))
                var_410_1 = zmm6[0]
            else if (zmm7[0] >= 9.99999994e-09f)
                zmm0 = zmm7
                zmm3 = zmm0
                zmm5_1 = _mm_rsqrt_ss(zmm0[0], zmm3[0])
                zmm2 = 0x3f000000
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1[0]
                zmm1.d = zmm3.d f* zmm0.d
                zmm2[0] = 0.5f f- zmm1.d
                zmm0.d = zmm5_1.d f* zmm2[0]
                zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                zmm1.d = zmm5_1.d f* zmm5_1[0]
                zmm3[0] = zmm3[0] f* zmm1.d
                zmm0.d = zmm5_1.d f* (0.5f - zmm3[0])
                zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                zmm5_1[0] = zmm5_1[0] * zmm6[0]
                zmm0.d = zmm5_1.d f* zmm8.d
                zmm1.d = zmm5_1.d f* zmm7[0]
                zmm6 = zmm5_1
                zmm8 = zmm0
                var_410_1 = zmm5_1[0]
                zmm7 = zmm1
            else
                zmm6 = data_143dbb200
                zmm8 = data_143dbb1f8
                zmm7 = data_143dbb1fc
                var_410_1 = zmm6[0]
            
            void* var_238
            int32_t* rdx_36 = var_238
            float var_2e8_1 = var_410_1
            uint64_t var_2f0_1 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
            int32_t var_244
            var_238 = &rdx_36[sx.q(var_244)]
            *rdx_36 = zmm8.d
            void* var_220
            float* rdx_37 = var_220
            int32_t var_22c
            var_220 = &rdx_37[sx.q(var_22c)]
            *rdx_37 = zmm7[0]
            void* var_208
            float* rdx_38 = var_208
            int32_t var_214
            var_208 = &rdx_38[sx.q(var_214)]
            *rdx_38 = zmm6[0]
        
        char rbx_7 = var_16c
        
        if (var_16d != 0 || rbx_7 != 0)
            int64_t rdx_39 = r14[0x13]
            uint64_t rcx_36 = zx.q(r14[0x15].d)
            zmm9[0] = zmm9[0] - zmm10[0]
            zmm9 = var_468
            zmm7 = var_49c_1
            zmm9[0] = zmm9[0] - zmm10[0]
            zmm10 = var_498_1
            zmm7[0] = zmm7[0] - zmm11[0]
            zmm10[0] = zmm10[0] - zmm11[0]
            zmm11 = var_460
            zmm8.d = var_470.d f- zmm12[0]
            int64_t rax_65 = zx.q(rax_36) * rcx_36
            zmm11[0] = zmm11[0] - zmm12[0]
            zmm12 = data_142d3f660
            int32_t var_37c_1 = 0
            int32_t var_36c_1 = 0
            int32_t var_35c_1 = 0
            int64_t var_340_1 = 0
            zmm4_1 = *(rdx_39 + (rax_65 << 3))
            zmm5_1 = *(rdx_39 + (rax_65 << 3) + 4)
            int64_t rax_67 = zx.q(rax_37) * rcx_36
            float var_328_1 = zmm4_1
            float var_324_1 = zmm5_1[0]
            int64_t var_330_1 = 0
            int64_t var_320_1 = 0x3f800000
            zmm2 = *(rdx_39 + (rax_67 << 3))
            zmm3 = *(rdx_39 + (rax_67 << 3) + 4)
            zmm2[0] = zmm2[0] - zmm4_1
            zmm3[0] = zmm3[0] - zmm5_1[0]
            int64_t rax_69 = zx.q(rax_38) * rcx_36
            float var_348 = zmm2[0]
            float var_344_1 = zmm3[0]
            zmm0.d = (*(rdx_39 + (rax_69 << 3))).d f- zmm4_1
            zmm1.d = (*(rdx_39 + (rax_69 << 3) + 4)).d f- zmm5_1[0]
            int32_t var_338_1 = zmm0.d
            uint128_t var_318_1 = zmm12
            int32_t var_334_1 = zmm1.d
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_70)[0x4]
            rax_70, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_348, &var_118)
            float var_378[0x4]
            var_378[0] = zmm6[0]
            float var_388[0x4]
            var_388[0] = zmm9[0]
            zmm2 = *rax_70
            float zmm5_2[0x4] = _mm_shuffle_ps(var_378, var_378, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7[0]
            zmm7 = zmm0
            uint128_t var_3a8_1 = zmm0
            float zmm4_2[0x4] = _mm_shuffle_ps(var_388, var_388, 0xe1)
            zmm4_2[0] = zmm10[0]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm8.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm7 = _mm_mul_ps(zmm7, zmm5_2)
            var_378 = zmm5_2
            var_388 = zmm4_2
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            float var_368[0x4]
            var_368[0] = var_490.d
            zmm3 = _mm_shuffle_ps(var_368, var_368, 0xe1)
            zmm3[0] = arg_20.d
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = var_488.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_368 = zmm3
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_70[1]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            float var_3a8_2[0x4] = zmm7
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_70[2]
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_70[3]
            zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm11 = _mm_mul_ps(zmm11, zmm5_2)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm11 = _mm_add_ps(zmm11, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm12)
            zmm11 = _mm_add_ps(_mm_add_ps(zmm11, zmm1), zmm2)
            
            if (var_16d != 0)
                zmm2 = data_142d4cc00
                int64_t var_428_1 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_420_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm4_2 = 0x3f000000
                    zmm3 = zx.o(0)
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm2[0] = 0.5f f- zmm1.d
                    zmm0.d = zmm5_2.d f* zmm2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3[0] = zmm3[0] f* zmm1.d
                    zmm4_2[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8.d = zmm8.d f* zmm5_2[0]
                
                void* var_1f0
                float* rdx_41 = var_1f0
                int32_t var_1fc
                var_1f0 = &rdx_41[sx.q(var_1fc)]
                *rdx_41 = zmm6[0]
                void* var_1d8
                float* rdx_42 = var_1d8
                int32_t var_1e4
                var_1d8 = &rdx_42[sx.q(var_1e4)]
                *rdx_42 = zmm7[0]
                void* var_1c0
                int32_t* rdx_43 = var_1c0
                zmm7 = var_3a8_2
                int32_t var_1cc
                var_1c0 = &rdx_43[sx.q(var_1cc)]
                *rdx_43 = zmm8.d
                rbx_7 = var_16c
            
            if (rbx_7 != 0)
                zmm2 = data_142d4cc20
                int64_t var_428_2 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_420_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm4_2 = 0x3f000000
                    zmm3 = zx.o(0)
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm2[0] = 0.5f f- zmm1.d
                    zmm0.d = zmm5_2.d f* zmm2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3[0] = zmm3[0] f* zmm1.d
                    zmm4_2[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8.d = zmm8.d f* zmm5_2[0]
                
                void* var_1a8
                float* rdx_44 = var_1a8
                int32_t var_1b4
                var_1a8 = &rdx_44[sx.q(var_1b4)]
                *rdx_44 = zmm6[0]
                void* var_190
                float* rdx_45 = var_190
                int32_t var_19c
                var_190 = &rdx_45[sx.q(var_19c)]
                *rdx_45 = zmm7[0]
                void* var_178
                int32_t* rdx_46 = var_178
                int32_t var_184
                var_178 = &rdx_46[sx.q(var_184)]
                *rdx_46 = zmm8.d
        
        zmm2 = 0x3f800000
        cond:7_1 = var_480 + 1 s< *(arg2 + 0x40)
        rbx_1 += r8_2
        result = result_1
        r8_2 = var_3f8_1
        r10_2 = var_3c0_1
        r11_7 = var_450
        var_480 += 1
        r9_6 = var_398_1
    while (cond:7_1)

return result
