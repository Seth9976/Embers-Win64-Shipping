// 函数: sub_140710440
// 地址: 0x140710440
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
void* var_448 = rdx_3
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
void* var_450 = rdx_8
uint8_t rax_14 = (rax_13 u>> 0xf).b
int32_t i_3 = rax_13 & 0x7fff
*(arg2 + 0x10) = &rax[4]
uint128_t* r13_1

if ((not.b(rax_14) & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

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

void var_318
sub_140742680(&var_318, arg2)
void* rax_22 = sub_140d3c6e0(rdi)
void* var_440 = rax_22
void* rax_23
int64_t rax_24
void* rdx_14

if (rax_22 != 0)
    rax_23 = sub_142591550()
    rdx_14 = *(rax_22 + 0x10)
    rax_24 = sx.q(*(rax_23 + 0x38))

if (rax_22 == 0 || rax_24.d s> *(rdx_14 + 0x38)
        || *(*(rdx_14 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
    var_440 = nullptr

void* rax_26 = *(rdi + 0x58)
int64_t* r15 = nullptr
void* var_4a0 = nullptr

if (rax_26 != 0)
    r15 = *(**(rax_26 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_29 = sub_140d3c6e0(rdi)
        void* rax_30
        void* rcx_11
        int64_t rdx_15
        
        if (rax_29 != 0)
            rax_30 = sub_142591550()
            rcx_11 = *(rax_29 + 0x10)
            rdx_15 = sx.q(*(rax_30 + 0x38))
        
        void* rax_32
        
        if (rax_29 == 0 || rdx_15.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_15 << 3)) != rax_30 + 0x30 || *(rax_29 + 0x430) == 0)
            rax_32 = &r15[0x27]
        else
            rax_32 = sub_141f66050(rax_29, rdi[0x1a])
        
        var_4a0 = rax_32

int64_t* r14

if (rax_26 == 0 || r15 == 0)
    r14 = nullptr
else
    r14 = r15[3]

void* rdi_1 = *(rdi + 0x70)
uint128_t zmm2 = 0x3f800000
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*r14 + 0x58))(r14))
uint128_t zmm8
zmm8.d = 1f f/ rdi[0x64]
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_7 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_458 = r11_7
int32_t var_47c = zmm8.d
char var_1b0
char var_1ae
char var_1ad
char var_1ac
int32_t* arg_10
char arg_18

if (var_1b0 != 0 || result.b != 0 || var_1ae != result.b || var_1ad != result.b
        || var_1ac != result.b)
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
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    int32_t var_464
    uint128_t zmm12 = var_464
    uint128_t zmm13 = zx.o(0)
    uint128_t zmm14 = arg_10.d
    uint128_t zmm15 = arg_10.d
    result = zx.q(arg_20.b) << 2
    uint64_t r8_3 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(rax_10) << 2
    int32_t var_48c
    arg_20 = var_48c.d
    uint64_t r10_2 = zx.q(rax_6) << 2
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    int32_t var_474
    int32_t var_4b4_1 = var_474.d
    int32_t var_4b0_1 = zmm12.d
    uint64_t result_1 = result
    uint64_t var_400_1 = r8_3
    uint64_t var_398_1 = r9_6
    uint64_t var_3c8_1 = r10_2
    bool cond:8_1
    
    do
        uint128_t* rdx_18 = r12_1
        uint128_t* rcx_16 = r13_1
        r13_1 += r8_3
        r12_1 += result
        uint128_t* r8_4 = var_450
        int32_t* rdx_19 = var_448
        int32_t var_340_1 = (*rdx_18).d
        var_448 = rdx_19 + r10_2
        uint64_t rdx_21 = zx.q(*rdx_19)
        var_450 = r8_4 + r9_6
        uint64_t var_434_1 = (_mm_unpacklo_ps(*r8_4, (*rcx_16).q)).q
        
        if (rdx_21.d s< 0 || rdx_21.d s> r11_7)
            int32_t var_334_1 = 0
            uint64_t var_3b4_1 = (_mm_unpacklo_ps(zmm2, zmm13.q)).q
            int32_t var_3ac_1 = 0
            rdx_21 = zx.q(0.o.d)
        
        uint32_t rbx_2 = (rdx_21 * 3).d
        int32_t rax_40 = (*(*r14 + 0x68))(r14, zx.q(rbx_2))
        int64_t r8_6 = *r14
        int32_t rax_41 = (*(r8_6 + 0x68))(r14, zx.q(rbx_2 + 1), r8_6)
        int64_t r8_7 = *r14
        int32_t rax_42 = (*(r8_7 + 0x68))(r14, zx.q(rbx_2 + 2), r8_7)
        int32_t var_490
        int32_t var_488
        uint32_t var_478
        int32_t var_470
        uint32_t var_468
        int32_t var_460
        uint128_t zmm0
        uint128_t zmm1
        
        if (arg_10.b != 0)
            int64_t var_1a8
            int64_t* rax_44
            int512_t zmm7_1
            rax_44, zmm7_1 = sub_1423162c0(&var_1a8, var_440, rax_40, r15, var_4a0, 
                ((sx.q(*(rdi_1 + 0x34)) + 4) << 4) + rdi_1)
            zmm7_1.o = zx.o(*rax_44)
            var_488 = rax_44[1].d
            int64_t var_19c
            int64_t* rax_51
            int512_t zmm6_1
            rax_51, zmm6_1 = sub_1423162c0(&var_19c, var_440, rax_41, r15, var_4a0, 
                ((sx.q(*(rdi_1 + 0x34)) + 4) << 4) + rdi_1)
            zmm6_1.o = zx.o(*rax_51)
            var_470 = rax_51[1].d
            int64_t var_190
            int64_t* rax_58
            rax_58, zmm6, zmm7, zmm8 = sub_1423162c0(&var_190, var_440, rax_42, r15, var_4a0, 
                ((sx.q(*(rdi_1 + 0x34)) + 4) << 4) + rdi_1)
            zmm0 = zmm7
            var_490 = zmm7.d
            arg_20 = _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm1 = zx.o(*rax_58)
            int32_t rax_59 = rax_58[1].d
            var_4b4_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55).d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_4b0_1 = zmm0.d
            zmm12 = zmm0
            var_460 = rax_59
            var_478 = zmm6.d
            var_468 = zmm1.d
        
        zmm10 = var_340_1
        zmm9 = var_434_1:4.d
        zmm11 = var_434_1.d
        uint128_t zmm3
        float zmm4_1
        uint128_t zmm5_1
        int32_t var_498
        
        if (arg_18 == 0)
            zmm6 = var_498
        else
            int64_t var_184
            int64_t* rax_66
            int512_t zmm8_1
            rax_66, zmm8_1 = sub_1423162c0(&var_184, var_440, rax_40, r15, var_4a0, 
                (((sx.q(*(rdi_1 + 0x34)) ^ 1) + 4) << 4) + rdi_1)
            zmm8_1.o = zx.o(*rax_66)
            int32_t rax_67 = rax_66[1].d
            int64_t var_178
            int64_t* rax_74
            int512_t zmm6_2
            rax_74, zmm6_2 = sub_1423162c0(&var_178, var_440, rax_41, r15, var_4a0, 
                (((sx.q(*(rdi_1 + 0x34)) ^ 1) + 4) << 4) + rdi_1)
            zmm6_2.o = zx.o(*rax_74)
            int32_t rax_75 = rax_74[1].d
            int64_t var_16c[0x2]
            int64_t* rax_82
            rax_82, zmm6, zmm8, zmm9 = sub_1423162c0(&var_16c, var_440, rax_42, r15, var_4a0, 
                (((sx.q(*(rdi_1 + 0x34)) ^ 1) + 4) << 4) + rdi_1)
            zmm7 = zmm10
            zmm15.d = zmm9.d f* zmm6.d
            zmm1 = zx.o(*rax_82)
            zmm14.d = zmm11.d f* rax_67
            zmm3.d = zmm9.d f* rax_75
            zmm5_1.d = zmm10.d f* rax_82[1].d
            zmm14.d = zmm14.d f+ zmm3.d
            zmm2.d = zmm10.d f* _mm_shuffle_ps(zmm1, zmm1, 0x55).d
            zmm4_1 = zmm9.d f* _mm_shuffle_ps(zmm6, zmm6, 0x55).d
            zmm14.d = zmm14.d f+ zmm5_1.d
            zmm6 = zmm2.d
            zmm7[0] = zmm7[0] f* zmm1.d
            zmm1.d = zmm11.d f* _mm_shuffle_ps(zmm8, zmm8, 0x55).d
            zmm2.d = zmm11.d f* zmm8.d
            zmm15.d = zmm15.d f+ zmm2.d
            zmm6.d = zmm6.d f+ zmm4_1 f+ zmm1.d
            zmm15.d = zmm15.d f+ zmm7[0]
            var_498 = zmm6.d
            zmm8 = var_47c
        
        if (var_1b0 != 0 || result_2 != 0)
            void* var_308
            float* rdx_31 = var_308
            zmm1 = zmm9
            zmm4_1 = zmm9.d f* var_478
            zmm9.d = zmm9.d f* var_470
            zmm0.d = zmm11.d f* var_490
            int32_t var_314
            var_308 = &rdx_31[sx.q(var_314)]
            zmm7 = var_468
            zmm1.d = zmm1.d f* var_4b4_1
            zmm2.d = zmm11.d f* arg_20
            zmm11.d = zmm11.d f* var_488
            zmm5_1.d = zmm10.d f* zmm12.d
            zmm2.d = zmm2.d f+ zmm1.d
            zmm12 = var_460
            zmm9.d = zmm9.d f+ zmm11.d
            zmm3.d = zmm10.d f* zmm7[0]
            zmm5_1.d = zmm5_1.d f+ zmm2.d
            zmm10.d = zmm10.d f* zmm12.d
            zmm4_1 = zmm4_1 f+ zmm0.d f+ zmm3.d
            zmm9.d = zmm9.d f+ zmm10.d
            *rdx_31 = zmm4_1
            void* var_2f0
            int32_t* rdx_32 = var_2f0
            int32_t var_2fc
            var_2f0 = &rdx_32[sx.q(var_2fc)]
            *rdx_32 = zmm5_1.d
            void* var_2d8
            int32_t* rdx_33 = var_2d8
            int32_t var_2e4
            var_2d8 = &rdx_33[sx.q(var_2e4)]
            *rdx_33 = zmm9.d
            
            if (result_2 != 0)
                void* var_2c0
                float* rdx_34 = var_2c0
                zmm5_1.d = zmm5_1.d f- zmm6.d
                zmm9.d = zmm9.d f- zmm14.d
                int32_t var_2cc
                var_2c0 = &rdx_34[sx.q(var_2cc)]
                zmm5_1.d = zmm5_1.d f* zmm8.d
                *rdx_34 = (zmm4_1 f- zmm15.d) f* zmm8.d
                void* var_2a8
                int32_t* rdx_35 = var_2a8
                zmm9.d = zmm9.d f* zmm8.d
                int32_t var_2b4
                var_2a8 = &rdx_35[sx.q(var_2b4)]
                *rdx_35 = zmm5_1.d
                void* var_290
                int32_t* rdx_36 = var_290
                int32_t var_29c
                var_290 = &rdx_36[sx.q(var_29c)]
                *rdx_36 = zmm9.d
        else
            zmm12 = var_460
            zmm7 = var_468
        
        zmm10 = var_490
        zmm11 = arg_20
        zmm9 = var_4b0_1
        
        if (var_1ae != 0)
            zmm6.d = var_478.d f- zmm7[0]
            zmm3.d = zmm11.d f- zmm9.d
            zmm1.d = var_488.d f- zmm12.d
            zmm4_1 = zmm10.d - zmm7[0]
            zmm7 = var_470
            zmm7[0] = zmm7[0] f- zmm12.d
            zmm2.d = var_4b4_1.d f- zmm9.d
            zmm7[0] = zmm7[0] * zmm4_1
            zmm0.d = zmm7.d f* zmm3.d
            zmm8.d = zmm2.d f* zmm1.d
            zmm2.d = zmm2.d f* zmm4_1
            zmm8.d = zmm8.d f- zmm0.d
            zmm0 = zmm6
            zmm6.d = zmm6.d f* zmm3.d
            zmm0.d = zmm0.d f* zmm1.d
            zmm6.d = zmm6.d f- zmm2.d
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm0.d = zmm8.d f* zmm8.d
            zmm1.d = zmm6.d f* zmm6.d
            zmm3.d = zmm7.d f* zmm7[0]
            zmm3.d = zmm3.d f+ zmm0.d
            zmm3.d = zmm3.d f+ zmm1.d
            int32_t var_410_1
            
            if (not(zmm3.d f!= 1f))
                var_410_1 = zmm6.d
            else if (zmm3.d f>= 9.99999994e-09f)
                zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm2.d = 0.5f f- zmm1.d
                zmm0.d = zmm5_1.d f* zmm2.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                int32_t var_4b8_2 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm8.d
                zmm5_1.d = zmm5_1.d f* zmm6.d
                zmm1.d = zmm1.d f* zmm7[0]
                zmm8 = zmm0
                var_410_1 = zmm5_1.d
                zmm6 = zmm5_1
                zmm7 = zmm1
            else
                zmm6 = data_143dbb200
                zmm8 = data_143dbb1f8
                zmm7 = data_143dbb1fc
                var_410_1 = zmm6.d
            
            void* var_278
            int32_t* rdx_37 = var_278
            int32_t var_328_1 = var_410_1
            uint64_t var_330_1 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
            int32_t var_284
            var_278 = &rdx_37[sx.q(var_284)]
            *rdx_37 = zmm8.d
            void* var_260
            float* rdx_38 = var_260
            int32_t var_26c
            var_260 = &rdx_38[sx.q(var_26c)]
            *rdx_38 = zmm7[0]
            void* var_248
            int32_t* rdx_39 = var_248
            int32_t var_254
            var_248 = &rdx_39[sx.q(var_254)]
            *rdx_39 = zmm6.d
        
        char rbx_4 = var_1ac
        
        if (var_1ad != 0 || rbx_4 != 0)
            zmm7 = zmm9
            int32_t var_37c_1 = 0
            zmm6.d = var_468.d f- zmm10.d
            int32_t var_36c_1 = 0
            int128_t var_158
            __builtin_memset(&var_158, 0, 0x20)
            zmm9.d = var_478.d f- zmm10.d
            zmm7[0] = zmm7[0] f- zmm11.d
            zmm10.d = var_4b4_1.d f- zmm11.d
            zmm11.d = var_470.d f- var_488
            zmm8.d = zmm12.d f- var_488
            int32_t var_35c_1 = 0
            int128_t var_138
            __builtin_memcpy(&var_138, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_94)[0x4]
            rax_94, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_158, &var_118)
            float var_378[0x4]
            var_378[0] = zmm6.d
            float var_388[0x4]
            var_388[0] = zmm9.d
            zmm2 = *rax_94
            float zmm5_2[0x4] = _mm_shuffle_ps(var_378, var_378, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7[0]
            uint128_t var_3a8_1 = zmm0
            zmm7 = zmm0
            float zmm4_2[0x4] = _mm_shuffle_ps(var_388, var_388, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm4_2[0] = zmm10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm8.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11.d
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm7 = _mm_mul_ps(zmm7, zmm5_2)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            var_378 = zmm5_2
            zmm3.d = var_490.d
            var_388 = zmm4_2
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = arg_20.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = var_488.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_368 = zmm3
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_94[1]
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            float var_3a8_2[0x4] = zmm7
            zmm9 = _mm_add_ps(_mm_mul_ps(zmm9, zmm5_2), _mm_mul_ps(zmm0, zmm4_2))
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm9 = _mm_add_ps(_mm_add_ps(zmm9, zmm1), zmm2)
            zmm2 = rax_94[2]
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_94[3]
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
            
            if (var_1ad != 0)
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
                zmm0.d = zmm6.d f* zmm6.d
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
                    zmm3.d = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm2.d = 0.5f f- zmm1.d
                    zmm0.d = zmm5_2.d f* zmm2.d
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_2[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    float var_4b8_3 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8.d = zmm8.d f* zmm5_2[0]
                
                void* var_230
                int32_t* rdx_41 = var_230
                int32_t var_23c
                var_230 = &rdx_41[sx.q(var_23c)]
                *rdx_41 = zmm6.d
                void* var_218
                float* rdx_42 = var_218
                int32_t var_224
                var_218 = &rdx_42[sx.q(var_224)]
                *rdx_42 = zmm7[0]
                void* var_200
                int32_t* rdx_43 = var_200
                zmm7 = var_3a8_2
                int32_t var_20c
                var_200 = &rdx_43[sx.q(var_20c)]
                *rdx_43 = zmm8.d
                rbx_4 = var_1ac
            
            if (rbx_4 != 0)
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
                zmm0.d = zmm6.d f* zmm6.d
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
                    zmm3.d = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm2.d = 0.5f f- zmm1.d
                    zmm0.d = zmm5_2.d f* zmm2.d
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_2[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    float var_4b8_4 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8.d = zmm8.d f* zmm5_2[0]
                
                void* var_1e8
                int32_t* rdx_44 = var_1e8
                int32_t var_1f4
                var_1e8 = &rdx_44[sx.q(var_1f4)]
                *rdx_44 = zmm6.d
                void* var_1d0
                float* rdx_45 = var_1d0
                int32_t var_1dc
                var_1d0 = &rdx_45[sx.q(var_1dc)]
                *rdx_45 = zmm7[0]
                void* var_1b8
                int32_t* rdx_46 = var_1b8
                int32_t var_1c4
                var_1b8 = &rdx_46[sx.q(var_1c4)]
                *rdx_46 = zmm8.d
        
        zmm12 = var_4b0_1
        cond:8_1 = var_480 + 1 s< *(arg2 + 0x40)
        zmm8 = var_47c
        zmm2 = 0x3f800000
        result = result_1
        r8_3 = var_400_1
        r10_2 = var_3c8_1
        r11_7 = var_458
        var_480 += 1
        r9_6 = var_398_1
    while (cond:8_1)

return result
