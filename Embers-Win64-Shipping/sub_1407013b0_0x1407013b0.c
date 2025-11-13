// 函数: sub_1407013b0
// 地址: 0x1407013b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int64_t* r15 = nullptr
int32_t* r8 = *(arg2 + 0x20)
int16_t i_5 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_5)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

int64_t r10 = *(arg2 + 0x18)
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t arg_10 = rax_6
rax_6.b = not.b(rax_6.b)
void* rdx_4

if ((rax_6.b & 1) == 0)
    rdx_4 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_1 -= *(rdx_2 + r8)
            rax_7 += 1
            rdx_2 = rax_7 << 2
            r9 += 1
        while (i_1 s>= *(rdx_2 + r8))
    
    rdx_4 = sx.q(i_1) + *(r10 + (sx.q(r9) << 3))

uint32_t rax_9 = zx.d(rax[2])
void* var_548 = rdx_4
uint8_t r14_1 = (rax_9 u>> 0xf).b
*(arg2 + 0x10) = &rax[3]
int32_t i_2 = rax_9 & 0x7fff
void* rdx_9

if ((not.b(r14_1) & 1) == 0)
    rdx_9 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_11 = 0
        int64_t rdx_7 = 0
        
        do
            i_2 -= *(r8 + rdx_7)
            rax_11 += 1
            rdx_7 = rax_11 << 2
            r9_1 += 1
        while (i_2 s>= *(r8 + rdx_7))
    
    rdx_9 = sx.q(i_2) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_13 = zx.d(rax[3])
void* var_550 = rdx_9
uint8_t rsi_1 = (rax_13 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i_3 = rax_13 & 0x7fff
void* rdx_14

if ((not.b(rsi_1) & 1) == 0)
    rdx_14 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
else
    int32_t r9_2 = 0
    
    if (i_3 s>= *r8)
        int64_t rax_15 = 0
        int64_t rdx_12 = 0
        
        do
            i_3 -= *(r8 + rdx_12)
            rax_15 += 1
            rdx_12 = rax_15 << 2
            r9_2 += 1
        while (i_3 s>= *(r8 + rdx_12))
    
    rdx_14 = sx.q(i_3) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint8_t rbx_1 = (rcx_5 u>> 0xf).b
int32_t i_4 = rcx_5 & 0x7fff
void* var_558 = rdx_14
void* rdx_19

if ((not.b(rbx_1) & 1) == 0)
    rdx_19 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_19 = 0
        int64_t rdx_17 = 0
        
        do
            i_4 -= *(r8 + rdx_17)
            rax_19 += 1
            rdx_17 = rax_19 << 2
            r9_3 += 1
        while (i_4 s>= *(r8 + rdx_17))
    
    rdx_19 = sx.q(i_4) + *(r10 + (sx.q(r9_3) << 3))

void* var_560 = rdx_19
uint32_t var_628 = 0xffffffff
uint128_t* var_620 = nullptr
int32_t var_618 = 0
sub_140767bd0(&var_628, arg2)
void var_2f8
sub_140742680(&var_2f8, arg2)
void* rax_21 = sub_140d3c6e0(rdi)
void* var_5b0 = rax_21
void* rax_22
int64_t rax_23
void* rdx_24

if (rax_21 != 0)
    rax_22 = sub_142591550()
    rdx_24 = *(rax_21 + 0x10)
    rax_23 = sx.q(*(rax_22 + 0x38))

if (rax_21 == 0 || rax_23.d s> *(rdx_24 + 0x38)
        || *(*(rdx_24 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
    var_5b0 = nullptr

void* rax_25 = *(rdi + 0x58)
void* var_5f0 = nullptr

if (rax_25 != 0)
    r15 = *(**(rax_25 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_28 = sub_140d3c6e0(rdi)
        void* rax_29
        void* rcx_12
        int64_t rdx_25
        
        if (rax_28 != 0)
            rax_29 = sub_142591550()
            rcx_12 = *(rax_28 + 0x10)
            rdx_25 = sx.q(*(rax_29 + 0x38))
        
        void* rax_31
        
        if (rax_28 == 0 || rdx_25.d s> *(rcx_12 + 0x38)
                || *(*(rcx_12 + 0x30) + (rdx_25 << 3)) != rax_29 + 0x30 || *(rax_28 + 0x430) == 0)
            rax_31 = &r15[0x27]
        else
            rax_31 = sub_141f66050(rax_28, rdi[0x1a])
        
        var_5f0 = rax_31

int64_t* rcx_15

if (rax_25 == 0 || r15 == 0)
    rcx_15 = nullptr
else
    rcx_15 = r15[3]

void* rax_32 = *(rdi + 0x70)
int32_t rax_34 = (*(*rcx_15 + 0x58))(rcx_15)
uint128_t zmm15 = 0x3f800000
int32_t var_598 = 0
uint128_t zmm0
zmm0.d = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_34)
int32_t var_564 = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_568 = result.d

if (*(arg2 + 0x40) s> 0)
    uint64_t r12_2 = zx.q(data_14401b1a0)
    uint128_t* r8_2 = var_620
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint64_t rdx_29 = zx.q(rbx_1) << 2
    uint64_t r11_5 = zx.q(arg_10.b) << 2
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t r9_5 = zx.q(rsi_1) << 2
    uint64_t r10_2 = zx.q(r14_1) << 2
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    int64_t rbx_3 = sx.q(var_618) << 2
    float zmm14[0x4] = zx.o(0)
    uint64_t var_390_1 = rdx_29
    uint64_t var_368_1 = r9_5
    uint64_t var_388_1 = r10_2
    uint64_t var_380_1 = r11_5
    int64_t var_398_1 = rbx_3
    int32_t var_43c_1 = 0x3f800000
    bool cond:3_1
    
    do
        uint128_t* rcx_17 = var_560
        int32_t* rdx_30 = var_548
        var_560 = rcx_17 + rdx_29
        float (* rcx_19)[0x4] = var_558
        int32_t var_310_1 = (*rcx_17).d
        var_558 = rcx_19 + r9_5
        uint128_t* rcx_21 = var_550
        var_550 = rcx_21 + r10_2
        zmm0 = _mm_unpacklo_ps(*rcx_21, (*rcx_19)[0].q)
        var_548 = rdx_30 + r11_5
        uint64_t rdx_32 = zx.q(*rdx_30)
        void* rcx_24 = rbx_3 + r8_2
        uint64_t var_524_1 = zmm0.q
        int32_t var_5f8_1 = (*r8_2).d
        
        if (rdx_32.d s< 0 || rdx_32.d s> var_568)
            int32_t var_304_1 = 0
            uint64_t var_374_1 = (_mm_unpacklo_ps(zmm15, zmm14[0].q)).q
            int32_t var_36c_1 = 0
            rdx_32 = zx.q(0.o.d)
        
        uint32_t rbx_4 = (rdx_32 * 3).d
        int32_t rax_43 = (*(*rcx_15 + 0x68))(rcx_15, zx.q(rbx_4))
        int64_t r8_3 = *rcx_15
        uint64_t rsi_2 = zx.q(rax_43)
        int32_t rax_44 = (*(r8_3 + 0x68))(rcx_15, zx.q(rbx_4 + 1), r8_3)
        int64_t r8_4 = *rcx_15
        int32_t rax_45 = (*(r8_4 + 0x68))(rcx_15, zx.q(rbx_4 + 2), r8_4)
        int64_t var_188
        int64_t* rax_47 = sub_1423162c0(&var_188, var_5b0, rsi_2.d, r15, var_5f0, 
            ((sx.q(*(rax_32 + 0x34)) + 4) << 4) + rax_32)
        zmm13 = zx.o(*rax_47)
        int32_t rax_48 = rax_47[1].d
        int64_t var_17c
        int64_t* rax_54 = sub_1423162c0(&var_17c, var_5b0, rax_44, r15, var_5f0, 
            ((sx.q(*(rax_32 + 0x34)) + 4) << 4) + rax_32)
        zmm12 = zx.o(*rax_54)
        int32_t rax_55 = rax_54[1].d
        int64_t var_170
        int64_t* rax_61 = sub_1423162c0(&var_170, var_5b0, rax_45, r15, var_5f0, 
            ((sx.q(*(rax_32 + 0x34)) + 4) << 4) + rax_32)
        zmm11 = zx.o(*rax_61)
        int32_t rax_62 = rax_61[1].d
        int64_t var_164
        int64_t* rax_69 = sub_1423162c0(&var_164, var_5b0, rsi_2.d, r15, var_5f0, 
            (((sx.q(*(rax_32 + 0x34)) ^ 1) + 4) << 4) + rax_32)
        zmm10 = zx.o(*rax_69)
        int32_t rax_70 = rax_69[1].d
        int64_t var_158
        int64_t* rax_77
        int512_t zmm6_1
        rax_77, zmm6_1 = sub_1423162c0(&var_158, var_5b0, rax_44, r15, var_5f0, 
            (((sx.q(*(rax_32 + 0x34)) ^ 1) + 4) << 4) + rax_32)
        zmm6_1.o = zx.o(*rax_77)
        int32_t rax_78 = rax_77[1].d
        int64_t var_14c
        int64_t* rax_85
        int32_t r9_12
        uint128_t zmm6_2
        rax_85, r9_12, zmm6_2 = sub_1423162c0(&var_14c, var_5b0, rax_45, r15, var_5f0, 
            (((sx.q(*(rax_32 + 0x34)) ^ 1) + 4) << 4) + rax_32)
        float zmm1[0x4] = var_310_1
        zmm15 = var_524_1:4.d
        float zmm9_1[0x4] = zmm1
        float zmm4_1[0x4] = var_524_1.d
        float zmm7_1[0x4] = zmm1
        zmm0 = zx.o(*rax_85)
        zmm4_1[0] = zmm4_1[0] f* rax_70
        float zmm8_1[0x4] = zmm1
        result = zx.q(rax_85[1].d)
        uint32_t var_480_1 = zmm0.d
        float var_638_1 = zmm1[0]
        zmm1 = zmm15
        uint32_t var_5a8_1 = zmm10.d
        uint128_t zmm2_1 = result.d
        zmm9_1[0] = zmm9_1[0] f* zmm2_1.d
        int64_t var_578_1 = 0
        int32_t var_600_1 = zmm2_1.d
        zmm2_1 = zmm0
        zmm0 = var_480_1
        zmm8_1[0] = zmm8_1[0] f* zmm0.d
        int32_t var_570_1 = 0
        int32_t var_604_1 = zmm0.d
        zmm0 = rax_78
        int32_t var_608_1 = zmm0.d
        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        zmm7_1[0] = zmm7_1[0] f* zmm2_1.d
        uint64_t var_4d8_1 = zmm2_1.q
        zmm2_1.d = zmm15.d f* zmm0.d
        zmm0 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
        zmm1[0] = zmm1[0] f* zmm0.d
        uint64_t var_458_1 = zmm0.q
        zmm4_1[0] = zmm4_1[0] f+ zmm2_1.d
        zmm0 = zmm6_2.d
        uint128_t zmm3_1
        zmm3_1.d = zmm15.d f* zmm0.d
        int32_t var_5fc_1 = zmm0.d
        zmm0 = zmm10
        zmm10 = var_524_1.d
        zmm4_1[0] = zmm4_1[0] + zmm9_1[0]
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm4_1[0] = zmm4_1[0] f* zmm0.d
        uint64_t var_538_1 = zmm0.q
        zmm0.d = zmm10.d f* var_5a8_1
        zmm4_1[0] = zmm4_1[0] + zmm1[0]
        zmm3_1.d = zmm3_1.d f+ zmm0.d
        zmm4_1[0] = zmm4_1[0] + zmm7_1[0]
        zmm8_1[0] = zmm8_1[0] f+ zmm3_1.d
        zmm7_1 = zmm11
        zmm3_1.d = zmm8_1[0]
        uint32_t var_590_1 = zmm13.d
        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
        zmm8_1 = zmm13
        zmm3_1.d = zmm4_1[0]
        int32_t var_4d0_1 = zmm12.d
        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
        zmm13 = zmm12
        zmm12 = rax_62
        zmm3_1.d = zmm4_1[0]
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        uint128_t var_448 = zmm3_1
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(rdi + 0x160))
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(rdi + 0x150))
        zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(rdi + 0x180))
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
        zmm1 = _mm_add_ps(zmm1, zmm0)
        zmm0 = var_4d0_1
        zmm11 = zmm11.d
        zmm3_1 = _mm_add_ps(__mulps_xmmps_memps(zmm3_1, *(rdi + 0x170)), zmm2_1)
        zmm8_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55)
        zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
        zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
        arg_10 = zmm0.d
        float var_630_1 = zmm12[0]
        zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
        int32_t var_62c_1 = zmm11.d
        zmm1 = rax_55
        float arg_18 = zmm1[0]
        int64_t var_3b8_1 = zmm8_1.q
        uint64_t var_3a8_1 = zmm13.q
        var_578_1.o = zmm3_1
        int64_t var_5b8_1 = zmm7_1.q
        char var_190
        char var_18f
        float zmm5_1[0x4]
        
        if (var_190 != 0 || var_18f != 0)
            void* var_2e8
            int32_t* rdx_42 = var_2e8
            zmm6_2 = var_638_1
            zmm5_1 = zmm10
            zmm9_1 = rax_48
            zmm4_1 = zmm6_2
            zmm0.d = zmm15.d f* zmm1[0]
            zmm2_1 = zmm10
            int32_t var_42c_1 = 0x3f800000
            zmm10.d = zmm10.d f* var_590_1
            zmm1 = zmm15
            var_628.q = 0
            zmm15.d = zmm15.d f* arg_10
            var_620.d = 0
            zmm3_1.d = zmm6_2.d f* zmm12[0]
            zmm1[0] = zmm1[0] f* zmm13.d
            zmm15.d = zmm15.d f+ zmm10.d
            zmm2_1.d = zmm2_1.d f* zmm8_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm9_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm1[0]
            zmm6_2.d = zmm6_2.d f* zmm11.d
            zmm5_1[0] = zmm5_1[0] f+ zmm0.d
            zmm4_1[0] = zmm4_1[0] * zmm7_1[0]
            zmm15.d = zmm15.d f+ zmm6_2.d
            zmm6_2 = var_5f8_1
            zmm2_1.d = zmm2_1.d f+ zmm4_1[0]
            zmm4_1 = var_578_1:4.d
            zmm5_1[0] = zmm5_1[0] f+ zmm3_1.d
            zmm3_1.d = zmm15.d
            _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            zmm3_1.d = zmm2_1.d
            _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1.d = zmm5_1[0]
            zmm5_1 = var_578_1.d
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            uint128_t var_438 = zmm3_1
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(rdi + 0xe0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(rdi + 0xd0))
            zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(rdi + 0x100))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            int32_t var_2f4
            var_2e8 = &rdx_42[sx.q(var_2f4)]
            zmm3_1 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), *(rdi + 0xf0)), zmm2_1)
            zmm2_1 = var_570_1
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
            zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            zmm1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm0.d = zmm0.d f- zmm2_1.d
            zmm3_1.d = zmm3_1.d f- zmm5_1[0]
            zmm1[0] = zmm1[0] - zmm4_1[0]
            zmm0.d = zmm0.d f* zmm6_2.d
            zmm3_1.d = zmm3_1.d f* zmm6_2.d
            zmm1[0] = zmm1[0] f* zmm6_2.d
            zmm0.d = zmm0.d f+ zmm2_1.d
            zmm3_1.d = zmm3_1.d f+ zmm5_1[0]
            zmm1[0] = zmm1[0] + zmm4_1[0]
            *rdx_42 = zmm3_1.d
            void* var_2d0
            float* rdx_43 = var_2d0
            int32_t var_2dc
            var_2d0 = &rdx_43[sx.q(var_2dc)]
            *rdx_43 = zmm1[0]
            void* var_2b8
            int32_t* rdx_44 = var_2b8
            int32_t result_1
            result = sx.q(result_1)
            var_2b8 = &rdx_44[result]
            *rdx_44 = zmm0.d
            
            if (var_18f != 0)
                void* var_2a0
                int32_t* rdx_45 = var_2a0
                zmm0.d = zmm0.d f- zmm2_1.d
                zmm3_1.d = zmm3_1.d f- zmm5_1[0]
                zmm2_1 = var_564
                zmm1[0] = zmm1[0] - zmm4_1[0]
                zmm0.d = zmm0.d f* zmm2_1.d
                int32_t var_2ac
                var_2a0 = &rdx_45[sx.q(var_2ac)]
                zmm3_1.d = zmm3_1.d f* zmm2_1.d
                zmm1[0] = zmm1[0] f* zmm2_1.d
                *rdx_45 = zmm3_1.d
                void* var_288
                float* rdx_46 = var_288
                int32_t var_294
                var_288 = &rdx_46[sx.q(var_294)]
                *rdx_46 = zmm1[0]
                void* var_270
                int32_t* rdx_47 = var_270
                int32_t result_2
                result = sx.q(result_2)
                var_270 = &rdx_47[result]
                *rdx_47 = zmm0.d
            
            zmm1 = arg_18
            zmm0 = arg_10
        else
            zmm9_1 = rax_48
        
        void* var_648_6
        char var_18e
        
        if (var_18e == 0)
            zmm15 = 0x3f800000
        else
            zmm15 = 0x3f800000
            zmm2_1.d = var_590_1.d f- zmm11.d
            zmm10 = data_143dbb200
            zmm3_1.d = zmm1.d f- zmm12[0]
            zmm1 = zmm0
            zmm5_1 = zmm9_1
            zmm1[0] = zmm1[0] f- zmm11.d
            zmm4_1 = zmm8_1
            zmm11 = data_143dbb1fc
            zmm5_1[0] = zmm5_1[0] - zmm12[0]
            zmm12 = data_143dbb1f8
            zmm4_1[0] = zmm4_1[0] - zmm7_1[0]
            zmm9_1 = zmm3_1
            zmm6_2.d = zmm13.d f- zmm7_1[0]
            zmm9_1[0] = zmm9_1[0] f* zmm2_1.d
            zmm8_1 = zmm4_1
            zmm3_1.d = zmm3_1.d f* zmm4_1[0]
            zmm8_1[0] = zmm8_1[0] * zmm1[0]
            zmm0.d = zmm6_2.d f* zmm2_1.d
            zmm6_2.d = zmm6_2.d f* zmm5_1[0]
            zmm8_1[0] = zmm8_1[0] f- zmm0.d
            zmm0.d = zmm5_1.d f* zmm1[0]
            zmm6_2.d = zmm6_2.d f- zmm3_1.d
            zmm9_1[0] = zmm9_1[0] f- zmm0.d
            zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
            zmm0.d = zmm6_2.d f* zmm6_2.d
            zmm2_1.d = zmm9_1.d f* zmm9_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm8_1[0]
            float var_4a8_1
            
            if (not(zmm2_1.d f!= 1f))
                var_4a8_1 = zmm8_1[0]
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm5_1 = _mm_rsqrt_ss(zmm2_1[0], zmm2_1.d)
                zmm1 = 0x3f000000
                zmm3_1.d = zmm2_1.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1[0]
                zmm2_1.d = zmm3_1.d f* zmm0.d
                zmm1[0] = 0.5f f- zmm2_1.d
                zmm0.d = zmm5_1.d f* zmm1[0]
                zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                zmm0.d = zmm5_1.d f* zmm5_1[0]
                zmm3_1.d = zmm3_1.d f* zmm0.d
                zmm4_1[0] = 0.5f f- zmm3_1.d
                zmm0.d = zmm5_1.d f* zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                float var_638_2 = zmm5_1[0]
                zmm0.d = zmm5_1.d f* zmm8_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm9_1[0]
                zmm5_1[0] = zmm5_1[0] f* zmm6_2.d
                zmm8_1 = zmm0
                var_4a8_1 = zmm0.d
                zmm9_1 = zmm5_1
                zmm6_2 = zmm5_1
            else
                var_4a8_1 = zmm10.d
                zmm6_2 = zmm12
                zmm9_1 = zmm11
                zmm8_1 = zmm10
            
            uint64_t var_5c8 = (_mm_unpacklo_ps(zmm6_2, zmm9_1[0].q)).q
            float var_5c0_1 = var_4a8_1
            int32_t var_41c_1 = 0
            float var_428[0x4]
            var_428[0] = zmm6_2.d
            var_628.q = 0
            zmm7_1 = _mm_shuffle_ps(var_428, var_428, 0xe1)
            zmm7_1[0] = zmm9_1[0]
            var_620.d = 0
            zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc6)
            zmm7_1[0] = zmm8_1[0]
            zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
            var_428 = zmm7_1
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0x55), *(rdi + 0xe0))
            zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xff), *(rdi + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0), *(rdi + 0xd0))
            zmm7_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa), *(rdi + 0xf0))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm7_1 = _mm_add_ps(_mm_add_ps(zmm7_1, zmm2_1), zmm1)
            zmm1 = 0x3f000000
            zmm8_1 = 0x3f000000
            zmm0.d = zmm7_1.d f* zmm7_1[0]
            zmm6_2 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
            zmm5_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
            zmm2_1.d = zmm6_2.d f* zmm6_2.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm3_1.d = zmm2_1.d
            zmm4_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1[0]
            zmm2_1.d = zmm3_1.d f* zmm0.d
            zmm1[0] = 0.5f f- zmm2_1.d
            zmm0.d = zmm4_1.d f* zmm1[0]
            zmm1 = 0x3f000000
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm0.d = zmm4_1.d f* zmm4_1[0]
            zmm3_1.d = zmm3_1.d f* zmm0.d
            zmm1[0] = 0.5f f- zmm3_1.d
            zmm0.d = zmm4_1.d f* zmm1[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm0 = zx.o(var_4d8_1)
            zmm3_1.d = var_538_1.d f- zmm0.d
            zmm6_2.d = zmm6_2.d f* zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm4_1[0]
            var_5c8:4.d = zmm6_2.d
            zmm6_2.d = var_5a8_1.d f- var_604_1
            float var_638_3 = zmm4_1[0]
            zmm4_1 = rax_70
            zmm4_1[0] = zmm4_1[0] f- var_600_1
            var_5c8.d = zmm7_1[0]
            float var_5c0_2 = zmm5_1[0]
            zmm1 = var_5fc_1
            zmm1[0] = zmm1[0] f- var_604_1
            zmm5_1 = var_458_1.d
            zmm2_1.d = var_608_1.d f- var_600_1
            zmm5_1[0] = zmm5_1[0] f- zmm0.d
            zmm9_1 = zmm1
            zmm1[0] = zmm1[0] * zmm4_1[0]
            zmm9_1[0] = zmm9_1[0] f* zmm3_1.d
            zmm0.d = zmm6_2.d f* zmm5_1[0]
            zmm6_2.d = zmm6_2.d f* zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm3_1.d
            zmm9_1[0] = zmm9_1[0] f- zmm0.d
            zmm6_2.d = zmm6_2.d f- zmm1[0]
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] f- zmm2_1.d
            zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
            zmm3_1.d = zmm6_2.d f* zmm6_2.d
            zmm0.d = zmm5_1.d f* zmm5_1[0]
            zmm3_1.d = zmm3_1.d f+ zmm0.d
            zmm3_1.d = zmm3_1.d f+ zmm9_1[0]
            
            if (not(zmm3_1.d f== 1f))
                if (zmm3_1.d f>= 9.99999994e-09f)
                    zmm1 = 0x3f000000
                    zmm4_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
                    zmm3_1.d = zmm3_1.d f* 0.5f
                    zmm0.d = zmm4_1.d f* zmm4_1[0]
                    zmm2_1.d = zmm3_1.d f* zmm0.d
                    zmm1[0] = 0.5f f- zmm2_1.d
                    zmm0.d = zmm4_1.d f* zmm1[0]
                    zmm1 = 0x3f000000
                    zmm4_1[0] = zmm4_1[0] f+ zmm0.d
                    zmm0.d = zmm4_1.d f* zmm4_1[0]
                    zmm3_1.d = zmm3_1.d f* zmm0.d
                    zmm1[0] = 0.5f f- zmm3_1.d
                    zmm0.d = zmm4_1.d f* zmm1[0]
                    zmm4_1[0] = zmm4_1[0] f+ zmm0.d
                    float var_638_4 = zmm4_1[0]
                    zmm0.d = zmm4_1.d f* zmm9_1[0]
                    zmm4_1[0] = zmm4_1[0] f* zmm6_2.d
                    zmm9_1 = zmm0
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm6_2 = zmm4_1
                else
                    zmm5_1 = zmm12
                    zmm6_2 = zmm11
                    zmm9_1 = zmm10
            
            int32_t var_40c_1 = 0
            float var_418[0x4]
            var_418[0] = zmm5_1[0]
            var_648_6.d = 0x3f800000
            zmm7_1 = _mm_shuffle_ps(var_418, var_418, 0xe1)
            zmm7_1[0] = zmm6_2.d
            var_628.q = 0
            zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc6)
            zmm7_1[0] = zmm9_1[0]
            var_620.d = 0
            zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
            var_418 = zmm7_1
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0x55), *(rdi + 0x160))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0), *(rdi + 0x150))
            zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xff), *(rdi + 0x180))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm7_1 = _mm_add_ps(
                _mm_add_ps(
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa), *(rdi + 0x170)), 
                    zmm2_1), 
                zmm1)
            zmm0.d = zmm7_1.d f* zmm7_1[0]
            zmm5_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
            zmm6_2 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
            zmm1 = zmm6_2
            zmm1[0] = zmm1[0] f* zmm6_2.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1[0]
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm0 = zmm1
            zmm1 = 0x3f000000
            zmm3_1.d = zmm0.d
            zmm4_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1[0]
            zmm2_1.d = zmm3_1.d f* zmm0.d
            zmm1[0] = 0.5f f- zmm2_1.d
            zmm0.d = zmm4_1.d f* zmm1[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm0.d = zmm4_1.d f* zmm4_1[0]
            zmm3_1.d = zmm3_1.d f* zmm0.d
            zmm8_1[0] = 0.5f f- zmm3_1.d
            zmm0.d = zmm4_1.d f* zmm8_1[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm6_2.d = zmm6_2.d f* zmm4_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm4_1[0]
            int32_t var_49c_1 = zmm6_2.d
            float var_498_1 = zmm5_1[0]
            float var_4a0 = zmm7_1[0]
            float var_638_5 = zmm4_1[0]
            int32_t var_140
            int32_t* rax_91
            rax_91, r9_12, zmm14 = sub_140ae34d0(&var_140, &var_4a0, &var_5c8, r9_12)
            void* var_258
            int32_t* rdx_49 = var_258
            var_5c8 = *rax_91
            zmm1 = var_5c8:4.d
            zmm2_1 = rax_91[2]
            zmm7_1 = zx.o(var_5b8_1)
            zmm8_1 = zx.o(var_3b8_1)
            zmm13 = zx.o(var_3a8_1)
            zmm11 = var_62c_1
            zmm12 = var_630_1
            int32_t var_264
            var_258 = &rdx_49[sx.q(var_264)]
            *rdx_49 = var_5c8.d.d
            void* var_240
            float* rdx_50 = var_240
            int32_t var_24c
            var_240 = &rdx_50[sx.q(var_24c)]
            *rdx_50 = zmm1[0]
            void* var_228
            int32_t* rdx_51 = var_228
            int32_t result_3
            result = sx.q(result_3)
            var_228 = &rdx_51[result]
            *rdx_51 = zmm2_1.d
        
        char var_18d
        char var_18c
        
        if (var_18d != 0 || var_18c != 0)
            int16_t* r14_6 = rsi_2 * (zx.q(r15[0x15].d) << 2) + r15[0x13]
            uint32_t rbx_6 = zx.d(r14_6[1])
            int32_t rsi_5 = (rbx_6 & 0xffff8000) << 0x10
            int32_t var_630_2
            TEB* gsbase
            
            if ((0x7c00 & rbx_6.w) == 0)
                int32_t rbx_7 = rbx_6 & 0x3ff
                
                if (rbx_7 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_7))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_630_2 = (rbx_7 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_5
                else
                    var_630_2 = rsi_5
            else if ((rbx_6.w & 0x7c00) != 0x7c00)
                var_630_2 = ((rbx_6 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_6 & 0x3ff) << 0xd | rsi_5
            else
                var_630_2 = rsi_5 | 0x477fe000
            
            uint32_t rbx_14 = zx.d(*r14_6)
            int32_t rsi_9 = (rbx_14 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rbx_14.w) == 0)
                int32_t rbx_15 = rbx_14 & 0x3ff
                
                if (rbx_15 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_15))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_5b8_1.d = (rbx_15 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_9
                else
                    var_5b8_1.d = rsi_9
            else if ((rbx_14.w & 0x7c00) != 0x7c00)
                var_5b8_1.d =
                    ((rbx_14 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_14 & 0x3ff) << 0xd | rsi_9
            else
                var_5b8_1.d = rsi_9 | 0x477fe000
            
            int16_t* r14_9 = zx.q(rax_44) * (zx.q(r15[0x15].d) << 2) + r15[0x13]
            uint32_t rbx_22 = zx.d(r14_9[1])
            int32_t rsi_13 = (rbx_22 & 0xffff8000) << 0x10
            int32_t var_638_6
            
            if ((0x7c00 & rbx_22.w) == 0)
                int32_t rbx_23 = rbx_22 & 0x3ff
                
                if (rbx_23 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_23))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_638_6 = (rbx_23 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_13
                else
                    var_638_6 = rsi_13
            else if ((rbx_22.w & 0x7c00) != 0x7c00)
                var_638_6 =
                    ((rbx_22 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_22 & 0x3ff) << 0xd | rsi_13
            else
                var_638_6 = rsi_13 | 0x477fe000
            
            uint32_t rbx_30 = zx.d(*r14_9)
            int32_t rsi_17 = (rbx_30 & 0xffff8000) << 0x10
            int32_t var_62c_2
            
            if ((0x7c00 & rbx_30.w) == 0)
                int32_t rbx_31 = rbx_30 & 0x3ff
                
                if (rbx_31 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_31))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_62c_2 = (rbx_31 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_17
                else
                    var_62c_2 = rsi_17
            else if ((rbx_30.w & 0x7c00) != 0x7c00)
                var_62c_2 =
                    ((rbx_30 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_30 & 0x3ff) << 0xd | rsi_17
            else
                var_62c_2 = rsi_17 | 0x477fe000
            
            int16_t* r14_12 = zx.q(rax_45) * (zx.q(r15[0x15].d) << 2) + r15[0x13]
            uint32_t rbx_38 = zx.d(r14_12[1])
            int32_t rsi_21 = (rbx_38 & 0xffff8000) << 0x10
            int32_t var_634_2
            
            if ((0x7c00 & rbx_38.w) == 0)
                int32_t rbx_39 = rbx_38 & 0x3ff
                
                if (rbx_39 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_39))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_634_2 = (rbx_39 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_21
                else
                    var_634_2 = rsi_21
            else if ((rbx_38.w & 0x7c00) != 0x7c00)
                var_634_2 =
                    ((rbx_38 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_38 & 0x3ff) << 0xd | rsi_21
            else
                var_634_2 = rsi_21 | 0x477fe000
            
            uint32_t rbx_46 = zx.d(*r14_12)
            int32_t rsi_25 = (rbx_46 & 0xffff8000) << 0x10
            int32_t arg_20
            
            if ((0x7c00 & rbx_46.w) == 0)
                int32_t rbx_47 = rbx_46 & 0x3ff
                
                if (rbx_47 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_47))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    arg_20 = (rbx_47 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_25
                else
                    arg_20 = rsi_25
            else if ((rbx_46.w & 0x7c00) != 0x7c00)
                arg_20 = ((rbx_46 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_46 & 0x3ff) << 0xd | rsi_25
            else
                arg_20 = rsi_25 | 0x477fe000
            
            zmm1 = arg_10
            zmm1[0] = zmm1[0] f- var_590_1
            zmm4_1 = var_630_2
            zmm7_1[0] = zmm7_1[0] - zmm8_1[0]
            zmm5_1 = var_5b8_1.d
            zmm13.d = zmm13.d f- zmm8_1[0]
            zmm10 = rax_48
            zmm0.d = arg_18.d f- zmm10.d
            zmm3_1.d = arg_20.d f- zmm5_1[0]
            zmm6_2 = data_142d3f660
            zmm2_1.d = var_634_2.d f- zmm4_1[0]
            zmm11.d = zmm11.d f- var_590_1
            arg_10 = zmm1[0]
            zmm12[0] = zmm12[0] f- zmm10.d
            zmm1 = var_62c_2
            arg_18 = zmm0.d
            zmm1[0] = zmm1[0] - zmm5_1[0]
            zmm0.d = var_638_6.d f- zmm4_1[0]
            int32_t var_348_1 = zmm3_1.d
            int32_t var_344_1 = zmm2_1.d
            float var_338_1 = zmm5_1[0]
            float var_358 = zmm1[0]
            float var_334_1 = zmm4_1[0]
            int32_t var_354_1 = zmm0.d
            int32_t var_50c_1 = 0
            int32_t var_4fc_1 = 0
            int32_t var_4ec_1 = 0
            int64_t var_350_1 = 0
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0x3f800000
            uint128_t var_328_1 = zmm6_2
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_197)[0x4]
            float zmm6_3[0x4]
            int32_t zmm7_2
            float zmm8_2
            float zmm10_1[0x4]
            float zmm11_1[0x4]
            float zmm12_1[0x4]
            float zmm13_1
            rax_197, zmm6_3, zmm7_2, zmm8_2, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
                sub_140631b10(&var_358, &var_118)
            float var_508[0x4]
            var_508[0] = zmm11_1[0]
            uint32_t zmm2_2[0x4] = *rax_197
            float var_518[0x4]
            var_518[0] = arg_10[0]
            uint32_t zmm9_2[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float zmm5_2[0x4] = _mm_shuffle_ps(var_508, var_508, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_518, var_518, 0xe1)
            zmm5_2[0] = zmm7_2
            uint128_t zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm4_2[0] = zmm13_1
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm12_1[0]
            zmm4_2[0] = arg_18[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm9_2 = _mm_mul_ps(zmm9_2, zmm5_2)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            zmm9_2 = _mm_add_ps(zmm9_2, zmm0_1)
            float var_4f8[0x4]
            var_4f8[0] = var_590_1.d
            float zmm3_2[0x4] = _mm_shuffle_ps(var_4f8, var_4f8, 0xe1)
            zmm3_2[0] = zmm8_2
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = zmm10_1[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            _mm_add_ps(_mm_add_ps(zmm9_2, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_2)
            zmm2_2 = rax_197[1]
            zmm10_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            int32_t var_50c_2 = 0
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            int32_t var_4fc_2 = 0
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            int32_t var_4ec_2 = 0
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10_1, zmm5_2), zmm0_1), zmm1_1), zmm2_2)
            zmm2_2 = rax_197[2]
            zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm11_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11_1, zmm5_2), zmm0_1), zmm1_1), zmm2_2)
            zmm2_2 = rax_197[3]
            zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm12_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm12_1 = _mm_mul_ps(zmm12_1, zmm5_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            zmm12_1 = _mm_add_ps(zmm12_1, zmm0_1)
            zmm0_1.d = var_604_1.d f- var_5a8_1
            zmm12_1 = _mm_add_ps(zmm12_1, zmm1_1)
            zmm1_1 = var_600_1
            zmm1_1[0] = zmm1_1[0] f- rax_70
            int32_t var_604_2 = zmm0_1.d
            zmm0_1.d = var_608_1.d f- rax_70
            float var_600_2 = zmm1_1[0]
            _mm_add_ps(zmm12_1, zmm2_2)
            zmm1_1 = var_5fc_1
            zmm1_1[0] = zmm1_1[0] f- var_5a8_1
            int32_t var_608_2 = zmm0_1.d
            float var_5fc_2 = zmm1_1[0]
            float zmm6_4[0x4]
            float zmm8_3[0x4]
            float zmm9_3[0x4]
            result, zmm6_4, zmm8_3, zmm9_3, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_358, &var_118)
            zmm5_2[0] = var_604_2.d
            float zmm2_3[0x4] = *result
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_3[0] = zmm8_3[0]
            float zmm7_3[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_600_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_508 = zmm5_3
            zmm4_2[0] = var_5fc_2[0]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm7_3 = _mm_mul_ps(zmm7_3, zmm5_3)
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = zmm13.d
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = var_608_2[0]
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_518 = zmm4_3
            zmm7_3 = _mm_add_ps(zmm7_3, _mm_mul_ps(zmm0, zmm4_3))
            zmm3_2[0] = var_5a8_1.d
            float zmm3_3[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
            zmm3_3[0] = var_538_1.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3[0] = rax_70.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_4f8 = zmm3_3
            zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = *(result + 0x10)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_458_1.o = zmm7_3
            zmm7_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm7_3 = _mm_add_ps(zmm7_3, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm1), zmm2_3)
            zmm2_3 = *(result + 0x20)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_3b8_1.o = zmm7_3
            zmm7_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm7_3 = _mm_add_ps(zmm7_3, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm1), zmm2_3)
            zmm2_3 = *(result + 0x30)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_3a8_1.o = zmm7_3
            zmm7_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm7_3 = _mm_add_ps(zmm7_3, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            zmm13 = 0x322bcc77
            var_578_1.o = _mm_add_ps(_mm_add_ps(zmm7_3, zmm1), zmm2_3)
            
            if (var_18d != 0)
                zmm2_3 = data_142d4cc00
                var_628.q = 0
                zmm6_4 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                var_620.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm12)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm9_3)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7_3 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8_3 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm7_3[0] = zmm7_3[0] * zmm7_3[0]
                zmm7_3[0] = zmm7_3[0] f+ zmm0.d
                zmm0.d = zmm8_3.d f* zmm8_3[0]
                zmm7_3[0] = zmm7_3[0] f+ zmm0.d
                
                if (zmm7_3[0] <= 9.99999994e-09f)
                    zmm6_4 = zmm14
                    zmm7_3 = zmm14
                    zmm8_3 = zmm14
                else
                    zmm4_3 = 0x3f000000
                    zmm3_3 = zx.o(0)
                    zmm2_3 = 0x3f000000
                    zmm3_3[0] = zmm7_3.d
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm0.d
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm6_4[0] = zmm6_4[0] * zmm5_3[0]
                    zmm7_3[0] = zmm7_3[0] * zmm5_3[0]
                    zmm8_3[0] = zmm8_3[0] * zmm5_3[0]
                
                float var_5e4_1 = zmm7_3[0]
                zmm3_3 = zx.o(0)
                float var_5e8 = zmm6_4[0]
                float var_5e0_1 = zmm8_3[0]
                int32_t var_3fc_1 = 0
                float var_408[0x4]
                var_408[0] = zmm6_4[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(var_408, var_408, 0xe1)
                zmm2_3[0] = zmm7_3[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm8_3[0]
                var_628.q = 0
                zmm8_3 = 0x3f000000
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_408 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x100))
                var_620.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0xe0))
                zmm7_3 = _mm_add_ps(zmm7_3, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0xd0)))
                zmm2_3 = 0x3f000000
                zmm7_3 = _mm_add_ps(zmm7_3, zmm1)
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_4 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                zmm3_3[0] = zmm6_4[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * 0.5f
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] f* zmm0.d
                zmm2_3[0] = 0.5f - zmm3_3[0]
                zmm0.d = zmm4_3.d f* zmm2_3[0]
                zmm2_3 = data_142d4cc00
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm0.d = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] f* zmm0.d
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_3a8_1.o)
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                zmm7_3[0] = zmm7_3[0] * zmm4_3[0]
                float var_5e0_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_578_1.o)
                zmm6_4[0] = zmm6_4[0] * zmm4_3[0]
                var_5e8 = zmm7_3[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3[0]
                float var_5e4_2 = zmm6_4[0]
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_3b8_1.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_458_1.o)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_4 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                
                if (zmm6_4[0] <= 9.99999994e-09f)
                    zmm5_3 = zmm14
                    zmm6_4 = zmm14
                    zmm7_3 = zmm14
                else
                    zmm3_3 = zx.o(0)
                    zmm3_3[0] = zmm6_4.d
                    zmm2_3 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm0.d = zmm4_3.d f* zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm0.d
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm4_3.d f* zmm2_3[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                    zmm0.d = 0.5f - zmm3_3[0]
                    zmm4_3[0] = zmm4_3[0] f* zmm0.d
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm6_4[0] = zmm6_4[0] * zmm4_3[0]
                    zmm7_3[0] = zmm7_3[0] * zmm4_3[0]
                
                int32_t var_3cc_1 = 0
                float var_3d8[0x4]
                var_3d8[0] = zmm5_3[0]
                var_648_6.d = zmm15.d
                zmm2_3 = _mm_shuffle_ps(var_3d8, var_3d8, 0xe1)
                zmm2_3[0] = zmm6_4[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm7_3[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3d8 = zmm2_3
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0x160))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0x170))
                zmm2_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0x150))
                zmm3_3 = _mm_add_ps(zmm3_3, zmm0)
                zmm1 = _mm_add_ps(zmm1, zmm2_3)
                zmm2_3 = 0x3f000000
                zmm3_3 = _mm_add_ps(zmm3_3, zmm1)
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0.d = zmm3_3.d f* zmm3_3[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3[0] = zmm3_3[0] * zmm3_3[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm1[0] = zmm1[0] + zmm3_3[0]
                zmm3_3 = zx.o(0)
                zmm3_3[0] = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * 0.5f
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] f* zmm0.d
                zmm2_3[0] = 0.5f - zmm3_3[0]
                zmm0.d = zmm4_3.d f* zmm2_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm8_3[0] = 0.5f - zmm3_3[0]
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                arg_10 = zmm4_3[0]
                int32_t var_134
                int32_t* rax_198
                rax_198, r9_12, zmm9_3, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_134, &var_5e8, &var_5e8, r9_12)
                void* var_210
                int32_t* rdx_61 = var_210
                var_5e8.q = *rax_198
                zmm2_3 = rax_198[2]
                int32_t var_21c
                var_210 = &rdx_61[sx.q(var_21c)]
                *rdx_61 = var_5e8.d
                void* var_1f8
                float* rdx_62 = var_1f8
                int32_t var_204
                var_1f8 = &rdx_62[sx.q(var_204)]
                *rdx_62 = var_5e4_2[0]
                void* var_1e0
                float* rdx_63 = var_1e0
                int32_t result_4
                result = sx.q(result_4)
                var_1e0 = &rdx_63[result]
                *rdx_63 = zmm2_3[0]
            
            if (var_18c != 0)
                zmm2_3 = data_142d4cc20
                var_628.q = 0
                zmm6_4 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                var_620.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm12)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm9_3)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7_3 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8_3 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm7_3[0] = zmm7_3[0] * zmm7_3[0]
                zmm7_3[0] = zmm7_3[0] f+ zmm0.d
                zmm0.d = zmm8_3.d f* zmm8_3[0]
                zmm7_3[0] = zmm7_3[0] f+ zmm0.d
                
                if (zmm7_3[0] f<= zmm13.d)
                    zmm0 = zmm14
                    zmm1 = zmm14
                    zmm5_3 = zmm14
                else
                    zmm4_3 = 0x3f000000
                    zmm3_3 = zx.o(0)
                    zmm2_3 = 0x3f000000
                    zmm3_3[0] = zmm7_3.d
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm0.d
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6_4[0]
                    zmm1[0] = zmm1[0] * zmm7_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8_3[0]
                
                zmm8_3 = 0x3f000000
                zmm3_3 = zx.o(0)
                float var_5d8 = zmm0.d
                float var_5d4_1 = zmm1[0]
                float var_5d0_1 = zmm5_3[0]
                int32_t var_3ec_1 = 0
                float var_3f8[0x4]
                var_3f8[0] = zmm0.d
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3f8, var_3f8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm5_3[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3f8 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x100))
                var_620.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0xe0))
                zmm7_3 = _mm_add_ps(zmm7_3, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0xd0)))
                zmm2_3 = 0x3f000000
                zmm7_3 = _mm_add_ps(zmm7_3, zmm1)
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_4 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                zmm3_3[0] = zmm6_4[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * 0.5f
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] f* zmm0.d
                zmm2_3[0] = 0.5f - zmm3_3[0]
                zmm0.d = zmm4_3.d f* zmm2_3[0]
                zmm2_3 = data_142d4cc20
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm0.d = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] f* zmm0.d
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                arg_10 = zmm4_3[0]
                zmm0.d = zmm4_3.d f* zmm6_4[0]
                zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                int32_t var_5d4_2 = zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm7_3[0]
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm5_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                var_5d8 = zmm4_3[0]
                float var_5d0_2 = zmm4_3[0]
                zmm5_3 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm5_3, zmm12), zmm0), 
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm10), 
                        _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm9_3)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_4 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                
                if (zmm6_4[0] f<= zmm13.d)
                    zmm0 = zmm14
                    zmm1 = zmm14
                    zmm4_3 = zmm14
                else
                    zmm3_3 = zx.o(0)
                    zmm3_3[0] = zmm6_4.d
                    zmm2_3 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm0.d = zmm4_3.d f* zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm0.d
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm4_3.d f* zmm2_3[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                    zmm0.d = 0.5f - zmm3_3[0]
                    zmm4_3[0] = zmm4_3[0] f* zmm0.d
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm1[0] = zmm1[0] * zmm6_4[0]
                    zmm4_3[0] = zmm4_3[0] * zmm7_3[0]
                
                zmm3_3 = zx.o(0)
                int32_t var_3dc_1 = 0
                float var_3e8[0x4]
                var_3e8[0] = zmm0.d
                var_648_6.d = zmm15.d
                zmm2_3 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm4_3[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3e8 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x180))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0x160))
                zmm7_3 = _mm_add_ps(zmm7_3, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0x150)))
                zmm2_3 = 0x3f000000
                zmm7_3 = _mm_add_ps(zmm7_3, zmm1)
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_4 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_4[0] = zmm6_4[0] f+ zmm0.d
                zmm3_3[0] = zmm6_4[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * 0.5f
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] f* zmm0.d
                zmm2_3[0] = 0.5f - zmm3_3[0]
                zmm0.d = zmm4_3.d f* zmm2_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm8_3[0] = 0.5f - zmm3_3[0]
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                arg_10 = zmm4_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm7_3[0]
                zmm0.d = zmm4_3.d f* zmm6_4[0]
                zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                float var_490 = zmm4_3[0]
                int32_t var_48c_1 = zmm0.d
                float var_488_1 = zmm4_3[0]
                int32_t var_128[0x4]
                int32_t* rax_202
                rax_202, zmm14 = sub_140ae34d0(&var_128, &var_490, &var_5d8, r9_12)
                void* var_1c8
                int32_t* rdx_65 = var_1c8
                var_5d8.q = *rax_202
                int32_t rax_203 = rax_202[2]
                int32_t var_1d4
                var_1c8 = &rdx_65[sx.q(var_1d4)]
                *rdx_65 = var_5d8.d
                void* var_1b0
                float* rdx_66 = var_1b0
                int32_t var_1bc
                var_1b0 = &rdx_66[sx.q(var_1bc)]
                *rdx_66 = var_5d4_2[0]
                void* var_198
                int32_t* rdx_67 = var_198
                int32_t result_5
                result = sx.q(result_5)
                var_198 = &rdx_67[result]
                *rdx_67 = rax_203
        
        rdx_29 = var_390_1
        cond:3_1 = var_598 + 1 s< *(arg2 + 0x40)
        r9_5 = var_368_1
        r10_2 = var_388_1
        r11_5 = var_380_1
        rbx_3 = var_398_1
        var_598 += 1
        r8_2 = rcx_24
    while (cond:3_1)

return result
