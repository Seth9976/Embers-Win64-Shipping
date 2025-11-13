// 函数: sub_14070a460
// 地址: 0x14070a460
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
void* var_458 = rdx_3
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
void* var_460 = rdx_8
uint8_t rax_14 = (rax_13 u>> 0xf).b
int32_t i_3 = rax_13 & 0x7fff
*(arg2 + 0x10) = &rax[4]
void* rdx_13

if ((not.b(rax_14) & 1) == 0)
    rdx_13 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
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
    
    rdx_13 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_20 = rax_19
rax_19.b = not.b(rax_19.b)
void* var_468 = rdx_13
uint128_t* rbx_1

if ((rax_19.b & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_20 = 0
        int32_t* rdx_16 = nullptr
        
        do
            i_4 -= *(rdx_16 + r8)
            rax_20 += 1
            rdx_16 = rax_20 << 2
            r9_4 += 1
        while (i_4 s>= *(rdx_16 + r8))
    
    rbx_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

void var_2d8
sub_140742680(&var_2d8, arg2)
void* rax_22 = sub_140d3c6e0(rdi)
void* const r13 = rax_22
void* rax_23
int64_t rax_24
void* rdx_18

if (rax_22 != 0)
    rax_23 = sub_142591550()
    rdx_18 = *(r13 + 0x10)
    rax_24 = sx.q(*(rax_23 + 0x38))

if (rax_22 == 0 || rax_24.d s> *(rdx_18 + 0x38)
        || *(*(rdx_18 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
    r13 = nullptr

void* rax_26 = *(rdi + 0x58)
int64_t* r15 = nullptr
void* r12 = nullptr

if (rax_26 != 0)
    r15 = *(**(rax_26 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_29 = sub_140d3c6e0(rdi)
        void* rax_30
        void* rcx_11
        int64_t rdx_19
        
        if (rax_29 != 0)
            rax_30 = sub_142591550()
            rcx_11 = *(rax_29 + 0x10)
            rdx_19 = sx.q(*(rax_30 + 0x38))
        
        if (rax_29 == 0 || rdx_19.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_19 << 3)) != rax_30 + 0x30 || *(rax_29 + 0x430) == 0)
            r12 = &r15[0x27]
        else
            r12 = sub_141f66050(rax_29, rdi[0x1a])

int64_t* rsi_2

if (rax_26 == 0 || r15 == 0)
    rsi_2 = nullptr
else
    rsi_2 = r15[3]

void* rdi_1 = *(rdi + 0x70)
uint128_t zmm2 = 0x3f800000
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*rsi_2 + 0x58))(rsi_2))
uint128_t zmm0
zmm0.d = 1f f/ rdi[0x64]
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_7 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_46c = r11_7
int32_t var_470 = zmm0.d
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

int32_t var_498 = 0

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    int32_t var_47c
    uint128_t zmm12 = var_47c
    float zmm13[0x4] = zx.o(0)
    uint128_t zmm14 = arg_10.d
    int32_t var_478
    float zmm15[0x4] = var_478
    result = zx.q(arg_20.b) << 2
    uint64_t r8_3 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(rax_10) << 2
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int32_t var_4a4
    arg_20 = var_4a4.d
    uint64_t r10_2 = zx.q(rax_6) << 2
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int32_t var_48c
    int32_t var_4c0_1 = var_48c.d
    int32_t var_4bc_1 = zmm12.d
    uint64_t result_1 = result
    uint64_t var_410_1 = r8_3
    uint64_t var_398_1 = r9_6
    uint64_t var_418_1 = r10_2
    bool cond:7_1
    
    do
        uint128_t* rax_37 = var_468
        uint128_t* r8_4 = var_460
        int32_t* rdx_23 = var_458
        int32_t var_300_1 = (*rbx_1).d
        var_468 = rax_37 + r8_3
        var_458 = rdx_23 + r10_2
        uint64_t rdx_25 = zx.q(*rdx_23)
        var_460 = r8_4 + r9_6
        uint64_t var_444_1 = (_mm_unpacklo_ps(*r8_4, (*rax_37).q)).q
        
        if (rdx_25.d s< 0 || rdx_25.d s> r11_7)
            int32_t var_2f4_1 = 0
            uint64_t var_3a4_1 = (_mm_unpacklo_ps(zmm2, zmm13[0].q)).q
            int32_t var_39c_1 = 0
            rdx_25 = zx.q(0.o.d)
        
        uint32_t rbx_5 = (rdx_25 * 3).d
        int32_t rax_42 = (*(*rsi_2 + 0x68))(rsi_2, zx.q(rbx_5))
        int64_t r8_6 = *rsi_2
        int32_t rax_43 = (*(r8_6 + 0x68))(rsi_2, zx.q(rbx_5 + 1), r8_6)
        int64_t r8_7 = *rsi_2
        int32_t rax_44 = (*(r8_7 + 0x68))(rsi_2, zx.q(rbx_5 + 2), r8_7)
        int32_t var_4a8
        int32_t var_4a0
        int32_t var_490
        int32_t var_488
        uint32_t var_480
        uint128_t zmm1
        
        if (arg_10.b != 0)
            int64_t var_138
            int64_t* rax_45
            int512_t zmm7_1
            rax_45, zmm7_1 = sub_1423162c0(&var_138, r13, rax_42, r15, r12, 
                ((sx.q(*(rdi_1 + 0x34)) + 4) << 4) + rdi_1)
            zmm7_1.o = zx.o(*rax_45)
            var_4a0 = rax_45[1].d
            int64_t var_168
            int64_t* rax_51
            int512_t zmm6_1
            rax_51, zmm6_1 = sub_1423162c0(&var_168, r13, rax_43, r15, r12, 
                ((sx.q(*(rdi_1 + 0x34)) + 4) << 4) + rdi_1)
            zmm6_1.o = zx.o(*rax_51)
            var_488 = rax_51[1].d
            int64_t var_15c
            int64_t* rax_57
            rax_57, zmm6, zmm7 = sub_1423162c0(&var_15c, r13, rax_44, r15, r12, 
                ((sx.q(*(rdi_1 + 0x34)) + 4) << 4) + rdi_1)
            zmm0 = zmm7
            var_4a8 = zmm7.d
            arg_20 = _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm0 = zmm6
            zmm1 = zx.o(*rax_57)
            int32_t rax_58 = rax_57[1].d
            var_4c0_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm12 = zmm0
            zmm15 = rax_58
            var_4bc_1 = zmm0.d
            var_490 = zmm6.d
            var_480 = zmm1.d
        
        zmm10 = var_300_1
        zmm11 = var_444_1:4.d
        zmm9 = var_444_1.d
        uint128_t zmm3
        float zmm4_1
        uint128_t zmm5_1
        float var_4b8
        float var_4b4
        
        if (arg_18 == 0)
            zmm6 = var_4b8
            zmm8 = var_4b4
        else
            int64_t var_12c[0x2]
            int64_t* rax_64
            int512_t zmm8_1
            rax_64, zmm8_1 = sub_1423162c0(&var_12c, r13, rax_42, r15, r12, 
                (((sx.q(*(rdi_1 + 0x34)) ^ 1) + 4) << 4) + rdi_1)
            zmm8_1.o = zx.o(*rax_64)
            int32_t rax_65 = rax_64[1].d
            int64_t var_150
            int64_t* rax_71
            int512_t zmm6_2
            rax_71, zmm6_2 = sub_1423162c0(&var_150, r13, rax_43, r15, r12, 
                (((sx.q(*(rdi_1 + 0x34)) ^ 1) + 4) << 4) + rdi_1)
            zmm6_2.o = zx.o(*rax_71)
            int32_t rax_72 = rax_71[1].d
            int64_t var_144
            int64_t* rax_78
            rax_78, zmm6, zmm8, zmm9 = sub_1423162c0(&var_144, r13, rax_44, r15, r12, 
                (((sx.q(*(rdi_1 + 0x34)) ^ 1) + 4) << 4) + rdi_1)
            zmm5_1.d = zmm11.d f* zmm6[0]
            zmm1 = zx.o(*rax_78)
            zmm14.d = zmm9.d f* rax_65
            zmm7 = zmm10
            zmm3.d = zmm11.d f* rax_72
            zmm7[0] = zmm7[0] f* rax_78[1].d
            zmm0.d = zmm10.d f* zmm1.d
            zmm14.d = zmm14.d f+ zmm3.d
            int32_t var_4b8_1 = zmm0.d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm14.d = zmm14.d f+ zmm7[0]
            zmm2.d = zmm10.d f* zmm0.d
            zmm0 = zmm6
            zmm6 = var_4b8_1
            int32_t var_4b4_1 = zmm2.d
            zmm4_1 = zmm11.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm0 = zmm8
            zmm2.d = zmm9.d f* zmm8[0]
            zmm8 = var_4b4_1
            zmm1.d = zmm9.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm5_1.d = zmm5_1.d f+ zmm2.d
            zmm6[0] = zmm6[0] f+ zmm5_1.d
            zmm8[0] = zmm8[0] + zmm4_1 f+ zmm1.d
            var_4b8 = zmm6[0]
            var_4b4 = zmm8[0]
        
        if (var_170 != 0 || result_2 != 0)
            void* var_2c8
            int32_t* rdx_35 = var_2c8
            zmm2 = zmm9
            zmm4_1 = zmm9.d f* arg_20
            zmm9.d = zmm9.d f* var_4a0
            zmm0.d = zmm11.d f* var_490
            int32_t var_2d4
            var_2c8 = &rdx_35[sx.q(var_2d4)]
            zmm2.d = zmm2.d f* var_4a8
            zmm7 = var_480
            zmm1.d = zmm11.d f* var_4c0_1
            zmm11.d = zmm11.d f* var_488
            zmm2.d = zmm2.d f+ zmm0.d
            zmm5_1.d = zmm10.d f* zmm7[0]
            zmm3.d = zmm10.d f* zmm12.d
            zmm9.d = zmm9.d f+ zmm11.d
            zmm5_1.d = zmm5_1.d f+ zmm2.d
            zmm10.d = zmm10.d f* zmm15[0]
            zmm4_1 = zmm4_1 f+ zmm1.d f+ zmm3.d
            zmm9.d = zmm9.d f+ zmm10.d
            *rdx_35 = zmm5_1.d
            void* var_2b0
            float* rdx_36 = var_2b0
            int32_t var_2bc
            var_2b0 = &rdx_36[sx.q(var_2bc)]
            *rdx_36 = zmm4_1
            int32_t* var_298
            int32_t* rdx_37 = var_298
            int32_t var_2a4
            var_298 = &rdx_37[sx.q(var_2a4)]
            *rdx_37 = zmm9.d
            
            if (result_2 != 0)
                void* var_280
                int32_t* rdx_38 = var_280
                zmm5_1.d = zmm5_1.d f- zmm6[0]
                zmm0 = var_470
                zmm9.d = zmm9.d f- zmm14.d
                zmm5_1.d = zmm5_1.d f* zmm0.d
                int32_t var_28c
                var_280 = &rdx_38[sx.q(var_28c)]
                zmm4_1 = (zmm4_1 - zmm8[0]) f* zmm0.d
                *rdx_38 = zmm5_1.d
                void* var_268
                float* rdx_39 = var_268
                zmm9.d = zmm9.d f* zmm0.d
                int32_t var_274
                var_268 = &rdx_39[sx.q(var_274)]
                *rdx_39 = zmm4_1
                void* var_250
                int32_t* rdx_40 = var_250
                int32_t var_25c
                var_250 = &rdx_40[sx.q(var_25c)]
                *rdx_40 = zmm9.d
        else
            zmm7 = var_480
        
        zmm10 = var_4a8
        zmm11 = arg_20
        zmm9 = var_4a0
        
        if (var_16e != 0)
            zmm6 = var_490
            zmm6[0] = zmm6[0] - zmm7[0]
            zmm3.d = zmm11.d f- zmm12.d
            zmm1.d = zmm9.d f- zmm15[0]
            zmm4_1 = zmm10.d - zmm7[0]
            zmm7 = var_488
            zmm7[0] = zmm7[0] - zmm15[0]
            zmm2.d = var_4c0_1.d f- zmm12.d
            zmm7[0] = zmm7[0] * zmm4_1
            zmm0.d = zmm7.d f* zmm3.d
            zmm8 = zmm2
            zmm8[0] = zmm8[0] f* zmm1.d
            zmm2.d = zmm2.d f* zmm4_1
            zmm8[0] = zmm8[0] f- zmm0.d
            zmm6[0] = zmm6[0] f* zmm3.d
            zmm0.d = zmm6.d f* zmm1.d
            zmm6[0] = zmm6[0] f- zmm2.d
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm0.d = zmm8.d f* zmm8[0]
            zmm1.d = zmm6.d f* zmm6[0]
            zmm3.d = zmm7.d f* zmm7[0]
            zmm3.d = zmm3.d f+ zmm0.d
            zmm3.d = zmm3.d f+ zmm1.d
            float var_420_1
            
            if (not(zmm3.d f!= 1f))
                var_420_1 = zmm6[0]
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
                zmm0 = zmm5_1
                zmm1 = zmm5_1
                zmm5_1.d = zmm5_1.d f* zmm6[0]
                zmm0.d = zmm0.d f* zmm8[0]
                zmm1.d = zmm1.d f* zmm7[0]
                zmm6 = zmm5_1
                zmm8 = zmm0
                var_420_1 = zmm5_1.d
                zmm7 = zmm1
            else
                zmm6 = data_143dbb200
                zmm8 = data_143dbb1f8
                zmm7 = data_143dbb1fc
                var_420_1 = zmm6[0]
            
            void* var_238
            float* rdx_41 = var_238
            float var_2e8_1 = var_420_1
            uint64_t var_2f0_1 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
            int32_t var_244
            var_238 = &rdx_41[sx.q(var_244)]
            *rdx_41 = zmm8[0]
            void* var_220
            float* rdx_42 = var_220
            int32_t var_22c
            var_220 = &rdx_42[sx.q(var_22c)]
            *rdx_42 = zmm7[0]
            void* var_208
            float* rdx_43 = var_208
            int32_t var_214
            var_208 = &rdx_43[sx.q(var_214)]
            *rdx_43 = zmm6[0]
        
        char rbx_7 = var_16c
        
        if (var_16d != 0 || rbx_7 != 0)
            int64_t rdx_44 = r15[0x13]
            zmm7 = zmm12
            uint64_t rcx_40 = zx.q(r15[0x15].d)
            zmm7[0] = zmm7[0] f- zmm11.d
            zmm6 = var_480
            zmm15[0] = zmm15[0] f- zmm9.d
            zmm6[0] = zmm6[0] f- zmm10.d
            zmm12 = data_142d3f660
            zmm9.d = var_490.d f- zmm10.d
            int64_t rax_91 = zx.q(rax_42) * rcx_40
            zmm10.d = var_4c0_1.d f- zmm11.d
            zmm11.d = var_488.d f- var_4a0
            int32_t var_37c_1 = 0
            int32_t var_36c_1 = 0
            int32_t var_35c_1 = 0
            int64_t var_340_1 = 0
            zmm4_1 = *(rdx_44 + (rax_91 << 3))
            zmm5_1 = *(rdx_44 + (rax_91 << 3) + 4)
            int64_t rax_93 = zx.q(rax_43) * rcx_40
            float var_328_1 = zmm4_1
            int32_t var_324_1 = zmm5_1.d
            int64_t var_330_1 = 0
            int64_t var_320_1 = 0x3f800000
            zmm2.d = (*(rdx_44 + (rax_93 << 3))).d f- zmm4_1
            zmm3.d = (*(rdx_44 + (rax_93 << 3) + 4)).d f- zmm5_1.d
            int64_t rax_95 = zx.q(rax_44) * rcx_40
            int32_t var_348 = zmm2.d
            int32_t var_344_1 = zmm3.d
            zmm0.d = (*(rdx_44 + (rax_95 << 3))).d f- zmm4_1
            zmm1.d = (*(rdx_44 + (rax_95 << 3) + 4)).d f- zmm5_1.d
            int32_t var_338_1 = zmm0.d
            uint128_t var_318_1 = zmm12
            int32_t var_334_1 = zmm1.d
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_96)[0x4]
            rax_96, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_348, &var_118)
            float var_378[0x4]
            var_378[0] = zmm6[0]
            float var_388[0x4]
            var_388[0] = zmm9.d
            zmm2 = *rax_96
            float zmm5_2[0x4] = _mm_shuffle_ps(var_378, var_378, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7[0]
            zmm7 = zmm0
            uint128_t var_3c8_1 = zmm0
            float zmm4_2[0x4] = _mm_shuffle_ps(var_388, var_388, 0xe1)
            zmm4_2[0] = zmm10.d
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm8[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11.d
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm7 = _mm_mul_ps(zmm7, zmm5_2)
            var_378 = zmm5_2
            var_388 = zmm4_2
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm3.d = var_4a8.d
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = arg_20.d
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = var_4a0.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_368 = zmm3
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_96[1]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            float var_3c8_2[0x4] = zmm7
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_96[2]
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_96[3]
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
                int64_t var_438_1 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_430_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
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
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1f0
                float* rdx_46 = var_1f0
                int32_t var_1fc
                var_1f0 = &rdx_46[sx.q(var_1fc)]
                *rdx_46 = zmm6[0]
                void* var_1d8
                float* rdx_47 = var_1d8
                int32_t var_1e4
                var_1d8 = &rdx_47[sx.q(var_1e4)]
                *rdx_47 = zmm7[0]
                float* var_1c0
                float* rdx_48 = var_1c0
                zmm7 = var_3c8_2
                int32_t var_1cc
                var_1c0 = &rdx_48[sx.q(var_1cc)]
                *rdx_48 = zmm8[0]
                rbx_7 = var_16c
            
            if (rbx_7 != 0)
                zmm2 = data_142d4cc20
                int64_t var_438_2 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_430_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
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
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1a8
                float* rdx_49 = var_1a8
                int32_t var_1b4
                var_1a8 = &rdx_49[sx.q(var_1b4)]
                *rdx_49 = zmm6[0]
                void* var_190
                float* rdx_50 = var_190
                int32_t var_19c
                var_190 = &rdx_50[sx.q(var_19c)]
                *rdx_50 = zmm7[0]
                void* var_178
                float* rdx_51 = var_178
                int32_t var_184
                var_178 = &rdx_51[sx.q(var_184)]
                *rdx_51 = zmm8[0]
        
        zmm12 = var_4bc_1
        cond:7_1 = var_498 + 1 s< *(arg2 + 0x40)
        zmm2 = 0x3f800000
        rbx_1 += result
        result = result_1
        r8_3 = var_410_1
        r10_2 = var_418_1
        r11_7 = var_46c
        var_498 += 1
        r9_6 = var_398_1
    while (cond:7_1)

return result
