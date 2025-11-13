// 函数: sub_1407274c0
// 地址: 0x1407274c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
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
        int32_t* rdx_7 = nullptr
        
        do
            i_2 -= *(rdx_7 + r8)
            rax_11 += 1
            rdx_7 = rax_11 << 2
            r9_1 += 1
        while (i_2 s>= *(rdx_7 + r8))
    
    rdx_9 = sx.q(i_2) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_13 = zx.d(rax[3])
void* var_528 = rdx_9
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
        int32_t* rdx_12 = nullptr
        
        do
            i_3 -= *(rdx_12 + r8)
            rax_15 += 1
            rdx_12 = rax_15 << 2
            r9_2 += 1
        while (i_3 s>= *(rdx_12 + r8))
    
    rdx_14 = sx.q(i_3) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint8_t rbx_1 = (rcx_5 u>> 0xf).b
int32_t i_4 = rcx_5 & 0x7fff
void* var_530 = rdx_14
void* rdx_19

if ((not.b(rbx_1) & 1) == 0)
    rdx_19 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_19 = 0
        int32_t* rdx_17 = nullptr
        
        do
            i_4 -= *(rdx_17 + r8)
            rax_19 += 1
            rdx_17 = rax_19 << 2
            r9_3 += 1
        while (i_4 s>= *(rdx_17 + r8))
    
    rdx_19 = sx.q(i_4) + *(r10 + (sx.q(r9_3) << 3))

void* var_538 = rdx_19
uint32_t var_628 = 0xffffffff
float (* var_620)[0x4] = nullptr
int32_t var_618 = 0
sub_140767bd0(&var_628, arg2)
void var_2f8
sub_140742680(&var_2f8, arg2)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

void* rax_22 = *(rdi + 0x58)
int64_t* r15 = nullptr
void* var_5e0 = nullptr

if (rax_22 != 0)
    r15 = *(**(rax_22 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_25 = sub_140d3c6e0(rdi)
        void* rax_26
        void* rcx_11
        int64_t rdx_24
        
        if (rax_25 != 0)
            rax_26 = sub_142591550()
            rcx_11 = *(rax_25 + 0x10)
            rdx_24 = sx.q(*(rax_26 + 0x38))
        
        void* rax_28
        
        if (rax_25 == 0 || rdx_24.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_24 << 3)) != rax_26 + 0x30 || *(rax_25 + 0x430) == 0)
            rax_28 = &r15[0x27]
        else
            rax_28 = sub_141f66050(rax_25, rdi[0x1a])
        
        var_5e0 = rax_28

int64_t* rcx_14

if (rax_22 == 0 || r15 == 0)
    rcx_14 = nullptr
else
    rcx_14 = r15[3]

int32_t rax_30 = (*(*rcx_14 + 0x58))(rcx_14)
float zmm15[0x4] = 0x3f800000
float zmm0[0x4] = 0x3f800000
int32_t var_598 = 0
zmm0[0] = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_30)
float var_53c = zmm0[0]
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_540 = result.d

if (*(arg2 + 0x40) s> 0)
    uint64_t r12_2 = zx.q(data_14401b1a0)
    float (* r8_1)[0x4] = var_620
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint64_t rdx_28 = zx.q(rbx_1) << 2
    uint64_t r11_5 = zx.q(arg_10.b) << 2
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t r9_5 = zx.q(rsi_1) << 2
    uint64_t r10_2 = zx.q(r14_1) << 2
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    int64_t rbx_3 = sx.q(var_618) << 2
    float zmm14[0x4] = zx.o(0)
    uint64_t var_3c8_1 = rdx_28
    uint64_t var_3a8_1 = r9_5
    uint64_t var_3c0_1 = r10_2
    uint64_t var_3b8_1 = r11_5
    int64_t var_3b0_1 = rbx_3
    int32_t var_42c_1 = 0x3f800000
    bool cond:2_1
    
    do
        float (* rcx_16)[0x4] = var_538
        int32_t* rdx_29 = var_548
        var_538 = rcx_16 + rdx_28
        float (* rcx_18)[0x4] = var_530
        float var_310_1 = (*rcx_16)[0]
        var_530 = rcx_18 + r9_5
        float (* rcx_20)[0x4] = var_528
        var_528 = rcx_20 + r10_2
        zmm0 = _mm_unpacklo_ps(*rcx_20, (*rcx_18)[0].q)
        var_548 = rdx_29 + r11_5
        uint64_t rdx_31 = zx.q(*rdx_29)
        float (* rcx_23)[0x4] = rbx_3 + r8_1
        int64_t var_574_1 = zmm0.q
        float var_5f8_1 = (*r8_1)[0]
        
        if (rdx_31.d s< 0 || rdx_31.d s> var_540)
            int32_t var_304_1 = 0
            int64_t var_384_1 = (_mm_unpacklo_ps(zmm15, zmm14[0].q)).q
            int32_t var_37c_1 = 0
            rdx_31 = zx.q(0.o[0])
        
        uint32_t rbx_4 = (rdx_31 * 3).d
        int32_t rax_39 = (*(*rcx_14 + 0x68))(rcx_14, zx.q(rbx_4))
        int64_t r8_2 = *rcx_14
        uint64_t rsi_2 = zx.q(rax_39)
        int32_t rax_40 = (*(r8_2 + 0x68))(rcx_14, zx.q(rbx_4 + 1), r8_2)
        int64_t r8_3 = *rcx_14
        int32_t rax_41 = (*(r8_3 + 0x68))(rcx_14, zx.q(rbx_4 + 2), r8_3)
        void var_134
        int64_t* rax_42 = sub_142316040(&var_134, rax_22, r15, var_5e0, rsi_2.d)
        int32_t rcx_28 = rax_42[1].d
        zmm13 = zx.o(*rax_42)
        void var_188
        int64_t* rax_43 = sub_142316040(&var_188, rax_22, r15, var_5e0, rax_40)
        zmm12 = zx.o(*rax_43)
        int32_t rax_44 = rax_43[1].d
        void var_17c
        int64_t* rax_45 = sub_142316040(&var_17c, rax_22, r15, var_5e0, rax_41)
        zmm11 = zx.o(*rax_45)
        int32_t rax_46 = rax_45[1].d
        void var_170
        int64_t* rax_47 = sub_142316040(&var_170, rax_22, r15, var_5e0, rsi_2.d)
        zmm10 = zx.o(*rax_47)
        int32_t rax_48 = rax_47[1].d
        void var_164
        int64_t* rax_49
        int512_t zmm6_1
        rax_49, zmm6_1 = sub_142316040(&var_164, rax_22, r15, var_5e0, rax_40)
        zmm6_1.o = zx.o(*rax_49)
        int32_t rax_50 = rax_49[1].d
        void var_158
        int64_t* rax_51
        int32_t r9_12
        uint128_t zmm6_2
        rax_51, r9_12, zmm6_2 = sub_142316040(&var_158, rax_22, r15, var_5e0, rax_41)
        zmm15 = var_310_1
        zmm0 = zx.o(*rax_51)
        result = zx.q(rax_51[1].d)
        float zmm1[0x4] = result.d
        float var_600_1 = zmm1[0]
        zmm9.d = zmm15.d f* zmm1[0]
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        float zmm4_1[0x4] = var_574_1.d
        zmm0 = zmm0.d
        zmm4_1[0] = zmm4_1[0] f* rax_48
        int64_t var_568_1 = 0
        zmm15[0] = zmm15[0] * zmm0[0]
        int32_t var_560_1 = 0
        float var_604_1 = zmm0[0]
        zmm0 = rax_50
        float var_608_1 = zmm0[0]
        zmm15[0] = zmm15[0] * zmm1[0]
        int64_t var_4d8_1 = zmm1.q
        zmm1 = var_574_1:4.d
        uint32_t var_4d0_1 = zmm6_2.d
        uint128_t zmm2_1
        zmm2_1.d = zmm1.d f* zmm0[0]
        zmm0 = zmm6_2
        zmm6_2 = var_574_1:4.d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm1[0] = zmm1[0] * zmm0[0]
        zmm4_1[0] = zmm4_1[0] f+ zmm2_1.d
        int64_t var_448_1 = zmm0.q
        zmm0 = var_4d0_1
        uint128_t zmm3_1
        zmm3_1.d = zmm6_2.d f* zmm0[0]
        float var_5fc_1 = zmm0[0]
        zmm4_1[0] = zmm4_1[0] f+ zmm9.d
        zmm0 = zmm10
        uint32_t var_5a8_1 = zmm10.d
        zmm10 = var_574_1.d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm4_1[0] = zmm4_1[0] * zmm0[0]
        int64_t var_550_1 = zmm0.q
        zmm0 = zmm10
        zmm0[0] = zmm0[0] f* var_5a8_1
        zmm4_1[0] = zmm4_1[0] + zmm1[0]
        uint32_t var_590_1 = zmm13.d
        int32_t var_4c0_1 = zmm12.d
        zmm3_1.d = zmm3_1.d f+ zmm0[0]
        zmm4_1[0] = zmm4_1[0] + zmm15[0]
        zmm7 = zmm11
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm15[0] = zmm15[0] f+ zmm3_1.d
        int64_t var_5b8_1 = zmm7.q
        zmm3_1.d = zmm15[0]
        zmm8 = zmm13
        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
        zmm13 = zmm12
        zmm12 = rax_46
        zmm3_1.d = zmm4_1[0]
        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
        zmm3_1.d = zmm4_1[0]
        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        uint128_t var_438 = zmm3_1
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(rdi + 0x160))
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(rdi + 0x150))
        zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(rdi + 0x180))
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
        zmm1 = _mm_add_ps(zmm1, zmm0)
        zmm3_1 = __mulps_xmmps_memps(zmm3_1, *(rdi + 0x170))
        zmm0 = var_4c0_1
        zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
        arg_10 = zmm0[0]
        zmm3_1 = _mm_add_ps(zmm3_1, zmm2_1)
        float var_62c_1 = zmm12[0]
        int64_t var_398_1 = zmm8.q
        uint64_t var_378_1 = zmm13.q
        zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
        zmm1 = rax_44
        float arg_18 = zmm1[0]
        var_568_1.o = zmm3_1
        zmm11 = zmm11.d
        int32_t arg_20 = zmm11.d
        char var_190
        char var_18f
        float zmm5_1[0x4]
        
        if (var_190 != 0 || var_18f != 0)
            void* var_2e8
            int32_t* rdx_41 = var_2e8
            zmm0 = zmm6_2
            zmm9 = rcx_28
            zmm0[0] = zmm0[0] * zmm1[0]
            zmm5_1 = zmm10
            int32_t var_41c_1 = 0x3f800000
            zmm3_1.d = zmm15.d f* zmm12[0]
            zmm1 = zmm6_2
            var_628.q = 0
            zmm6_2.d = zmm6_2.d f* arg_10
            zmm2_1 = zmm10
            var_620.d = 0
            zmm10.d = zmm10.d f* var_590_1
            zmm1[0] = zmm1[0] f* zmm13.d
            zmm2_1.d = zmm2_1.d f* zmm8[0]
            zmm6_2.d = zmm6_2.d f+ zmm10.d
            zmm5_1[0] = zmm5_1[0] f* zmm9.d
            zmm2_1.d = zmm2_1.d f+ zmm1[0]
            zmm15[0] = zmm15[0] * zmm7[0]
            zmm5_1[0] = zmm5_1[0] + zmm0[0]
            zmm15[0] = zmm15[0] f* zmm11.d
            zmm2_1.d = zmm2_1.d f+ zmm15[0]
            zmm4_1 = var_568_1:4.d
            zmm15[0] = zmm15[0] f+ zmm6_2.d
            zmm6_2 = var_5f8_1
            zmm5_1[0] = zmm5_1[0] f+ zmm3_1.d
            zmm3_1.d = zmm15[0]
            _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            zmm3_1.d = zmm2_1.d
            _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1.d = zmm5_1[0]
            zmm5_1 = var_568_1.d
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            uint128_t var_428 = zmm3_1
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(rdi + 0xe0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(rdi + 0xd0))
            zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(rdi + 0x100))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            int32_t var_2f4
            var_2e8 = &rdx_41[sx.q(var_2f4)]
            zmm3_1 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), *(rdi + 0xf0)), zmm2_1)
            zmm2_1 = var_560_1
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
            zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            zmm1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm0[0] = zmm0[0] f- zmm2_1.d
            zmm3_1.d = zmm3_1.d f- zmm5_1[0]
            zmm1[0] = zmm1[0] - zmm4_1[0]
            zmm0[0] = zmm0[0] f* zmm6_2.d
            zmm3_1.d = zmm3_1.d f* zmm6_2.d
            zmm1[0] = zmm1[0] f* zmm6_2.d
            zmm0[0] = zmm0[0] f+ zmm2_1.d
            zmm3_1.d = zmm3_1.d f+ zmm5_1[0]
            zmm1[0] = zmm1[0] + zmm4_1[0]
            *rdx_41 = zmm3_1.d
            void* var_2d0
            float* rdx_42 = var_2d0
            int32_t var_2dc
            var_2d0 = &rdx_42[sx.q(var_2dc)]
            *rdx_42 = zmm1[0]
            void* var_2b8
            float* rdx_43 = var_2b8
            int32_t result_1
            result = sx.q(result_1)
            var_2b8 = &rdx_43[result]
            *rdx_43 = zmm0[0]
            
            if (var_18f != 0)
                void* var_2a0
                int32_t* rdx_44 = var_2a0
                zmm0[0] = zmm0[0] f- zmm2_1.d
                zmm3_1.d = zmm3_1.d f- zmm5_1[0]
                zmm2_1 = var_53c
                zmm1[0] = zmm1[0] - zmm4_1[0]
                zmm0[0] = zmm0[0] f* zmm2_1.d
                int32_t var_2ac
                var_2a0 = &rdx_44[sx.q(var_2ac)]
                zmm3_1.d = zmm3_1.d f* zmm2_1.d
                zmm1[0] = zmm1[0] f* zmm2_1.d
                *rdx_44 = zmm3_1.d
                void* var_288
                float* rdx_45 = var_288
                int32_t var_294
                var_288 = &rdx_45[sx.q(var_294)]
                *rdx_45 = zmm1[0]
                void* var_270
                float* rdx_46 = var_270
                int32_t result_2
                result = sx.q(result_2)
                var_270 = &rdx_46[result]
                *rdx_46 = zmm0[0]
            
            zmm1 = arg_18
            zmm0 = arg_10
        else
            zmm9 = rcx_28
        
        char var_18e
        
        if (var_18e == 0)
            zmm15 = 0x3f800000
        else
            zmm15 = 0x3f800000
            zmm2_1.d = var_590_1.d f- zmm11.d
            zmm10 = data_143dbb200
            zmm3_1.d = zmm1.d f- zmm12[0]
            zmm1 = zmm0
            zmm5_1 = zmm9
            zmm1[0] = zmm1[0] f- zmm11.d
            zmm4_1 = zmm8
            zmm11 = data_143dbb1fc
            zmm5_1[0] = zmm5_1[0] - zmm12[0]
            zmm12 = data_143dbb1f8
            zmm4_1[0] = zmm4_1[0] - zmm7[0]
            zmm6_2.d = zmm13.d f- zmm7[0]
            zmm9.d = zmm3_1.d f* zmm2_1.d
            zmm8 = zmm4_1
            zmm3_1.d = zmm3_1.d f* zmm4_1[0]
            zmm0 = zmm6_2
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm0[0] = zmm0[0] f* zmm2_1.d
            zmm6_2.d = zmm6_2.d f* zmm5_1[0]
            zmm8[0] = zmm8[0] - zmm0[0]
            zmm5_1[0] = zmm5_1[0] * zmm1[0]
            zmm6_2.d = zmm6_2.d f- zmm3_1.d
            zmm9.d = zmm9.d f- zmm5_1[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm0 = zmm6_2
            zmm0[0] = zmm0[0] f* zmm6_2.d
            zmm2_1.d = zmm9.d f* zmm9.d
            zmm2_1.d = zmm2_1.d f+ zmm0[0]
            zmm2_1.d = zmm2_1.d f+ zmm8[0]
            float var_498_1
            
            if (not(zmm2_1.d f!= 1f))
                var_498_1 = zmm8[0]
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm0 = zmm2_1
                zmm3_1 = zmm0
                zmm5_1 = _mm_rsqrt_ss(zmm0[0], zmm3_1.d)
                zmm1 = 0x3f000000
                zmm3_1.d = zmm3_1.d f* 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm2_1.d = zmm3_1.d f* zmm5_1[0]
                zmm1[0] = 0.5f f- zmm2_1.d
                zmm5_1[0] = zmm5_1[0] * zmm1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3_1.d = zmm3_1.d f* zmm5_1[0]
                zmm4_1[0] = 0.5f f- zmm3_1.d
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                float var_638_1 = zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm8[0]
                zmm5_1[0] = zmm5_1[0] f* zmm9.d
                zmm5_1[0] = zmm5_1[0] f* zmm6_2.d
                zmm8 = zmm5_1
                var_498_1 = zmm5_1[0]
                zmm9 = zmm5_1
                zmm6_2 = zmm5_1
            else
                var_498_1 = zmm10.d
                zmm6_2 = zmm12
                zmm9 = zmm11
                zmm8 = zmm10
            
            int64_t var_5c8 = (_mm_unpacklo_ps(zmm6_2, zmm9.q)).q
            float var_5c0_1 = var_498_1
            int32_t var_40c_1 = 0
            float var_418[0x4]
            var_418[0] = zmm6_2.d
            var_628.q = 0
            zmm7 = _mm_shuffle_ps(var_418, var_418, 0xe1)
            zmm7[0] = zmm9.d
            var_620.d = 0
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc6)
            zmm7[0] = zmm8[0]
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            var_418 = zmm7
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0x55), *(rdi + 0xe0))
            zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xff), *(rdi + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0), *(rdi + 0xd0))
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), *(rdi + 0xf0))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm2_1), zmm1)
            zmm1 = 0x3f000000
            zmm8 = 0x3f000000
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm6_2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm2_1.d = zmm6_2.d f* zmm6_2.d
            zmm2_1.d = zmm2_1.d f+ zmm7[0]
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm5_1[0]
            zmm3_1.d = zmm2_1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm2_1.d = zmm3_1.d f* zmm4_1[0]
            zmm1[0] = 0.5f f- zmm2_1.d
            zmm4_1[0] = zmm4_1[0] * zmm1[0]
            zmm1 = 0x3f000000
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm3_1.d = zmm3_1.d f* zmm4_1[0]
            zmm1[0] = 0.5f f- zmm3_1.d
            zmm4_1[0] = zmm4_1[0] * zmm1[0]
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm0 = zx.o(var_4d8_1)
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm6_2.d = zmm6_2.d f* zmm4_1[0]
            zmm7[0] = zmm7[0] * zmm4_1[0]
            var_5c8:4.d = zmm6_2.d
            zmm6_2.d = var_5a8_1.d f- var_604_1
            float var_5c0_2 = zmm5_1[0]
            zmm5_1 = rax_48
            zmm5_1[0] = zmm5_1[0] - var_600_1
            float var_638_2 = zmm4_1[0]
            zmm4_1 = zx.o(var_550_1)
            var_5c8.d = zmm7[0]
            zmm4_1[0] = zmm4_1[0] - zmm0[0]
            zmm1 = var_5fc_1
            zmm1[0] = zmm1[0] - var_604_1
            zmm3_1.d = var_608_1.d f- var_600_1
            zmm2_1.d = var_448_1.d.d f- zmm0[0]
            zmm0 = zmm6_2
            zmm9.d = zmm1.d f* zmm4_1[0]
            zmm0[0] = zmm0[0] f* zmm2_1.d
            zmm6_2.d = zmm6_2.d f* zmm3_1.d
            zmm9.d = zmm9.d f- zmm0[0]
            zmm3_1.d = zmm3_1.d f* zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] f* zmm2_1.d
            zmm5_1[0] = zmm5_1[0] * zmm1[0]
            zmm5_1[0] = zmm5_1[0] f- zmm3_1.d
            zmm1 = zmm9
            zmm1[0] = zmm1[0] f* zmm9.d
            zmm6_2.d = zmm6_2.d f- zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm2_1.d = zmm6_2.d f* zmm6_2.d
            zmm2_1.d = zmm2_1.d f+ zmm5_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm1[0]
            
            if (not(zmm2_1.d f== 1f))
                if (zmm2_1.d f>= 9.99999994e-09f)
                    zmm0 = zmm2_1
                    zmm1 = 0x3f000000
                    zmm3_1 = zmm0
                    zmm4_1 = _mm_rsqrt_ss(zmm0[0], zmm3_1.d)
                    zmm3_1.d = zmm3_1.d f* 0.5f
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm2_1.d = zmm3_1.d f* zmm4_1[0]
                    zmm1[0] = 0.5f f- zmm2_1.d
                    zmm4_1[0] = zmm4_1[0] * zmm1[0]
                    zmm1 = 0x3f000000
                    zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm3_1.d = zmm3_1.d f* zmm4_1[0]
                    zmm1[0] = 0.5f f- zmm3_1.d
                    zmm4_1[0] = zmm4_1[0] * zmm1[0]
                    zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                    float var_638_3 = zmm4_1[0]
                    zmm4_1[0] = zmm4_1[0] f* zmm9.d
                    zmm4_1[0] = zmm4_1[0] f* zmm6_2.d
                    zmm9 = zmm4_1
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm6_2 = zmm4_1
                else
                    zmm5_1 = zmm12
                    zmm6_2 = zmm11
                    zmm9 = zmm10
            
            int32_t var_3cc_1 = 0
            float var_3d8[0x4]
            var_3d8[0] = zmm5_1[0]
            int32_t var_648_7 = 0x3f800000
            zmm7 = _mm_shuffle_ps(var_3d8, var_3d8, 0xe1)
            zmm7[0] = zmm6_2.d
            var_628.q = 0
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc6)
            zmm7[0] = zmm9.d
            var_620.d = 0
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            var_3d8 = zmm7
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0x55), *(rdi + 0x160))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0), *(rdi + 0x150))
            zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xff), *(rdi + 0x180))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm7 = _mm_add_ps(
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), *(rdi + 0x170)), 
                    zmm2_1), 
                zmm1)
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6_2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm1 = zmm6_2
            zmm1[0] = zmm1[0] f* zmm6_2.d
            zmm1[0] = zmm1[0] + zmm7[0]
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm1[0] = zmm1[0] + zmm5_1[0]
            zmm0 = zmm1
            zmm1 = 0x3f000000
            zmm3_1.d = zmm0[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm2_1.d = zmm3_1.d f* zmm4_1[0]
            zmm1[0] = 0.5f f- zmm2_1.d
            zmm4_1[0] = zmm4_1[0] * zmm1[0]
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm3_1.d = zmm3_1.d f* zmm4_1[0]
            zmm8[0] = 0.5f f- zmm3_1.d
            zmm4_1[0] = zmm4_1[0] * zmm8[0]
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm6_2.d = zmm6_2.d f* zmm4_1[0]
            zmm7[0] = zmm7[0] * zmm4_1[0]
            int32_t var_48c_1 = zmm6_2.d
            float var_488_1 = zmm5_1[0]
            float var_490 = zmm7[0]
            float var_638_4 = zmm4_1[0]
            int32_t var_14c
            int32_t* rax_57
            rax_57, r9_12, zmm14 = sub_140ae34d0(&var_14c, &var_490, &var_5c8, r9_12)
            void* var_258
            float* rdx_48 = var_258
            var_5c8 = *rax_57
            zmm1 = var_5c8:4.d
            zmm2_1 = rax_57[2]
            zmm7 = zx.o(var_5b8_1)
            zmm8 = zx.o(var_398_1)
            zmm13 = zx.o(var_378_1)
            zmm11 = arg_20
            zmm12 = var_62c_1
            int32_t var_264
            var_258 = &rdx_48[sx.q(var_264)]
            *rdx_48 = var_5c8.d[0]
            void* var_240
            float* rdx_49 = var_240
            int32_t var_24c
            var_240 = &rdx_49[sx.q(var_24c)]
            *rdx_49 = zmm1[0]
            void* var_228
            int32_t* rdx_50 = var_228
            int32_t result_3
            result = sx.q(result_3)
            var_228 = &rdx_50[result]
            *rdx_50 = zmm2_1.d
        
        char var_18d
        char var_18c
        
        if (var_18d != 0 || var_18c != 0)
            int16_t* r14_6 = rsi_2 * (zx.q(r15[0x15].d) << 2) + r15[0x13]
            uint32_t rbx_6 = zx.d(r14_6[1])
            int32_t rsi_5 = (rbx_6 & 0xffff8000) << 0x10
            int32_t var_638_5
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
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_7))
                    zmm0, r9_12 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_51 = 0xa - int.d(zmm0[0])
                    var_638_5 = (rbx_7 << (rdx_51.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_51) << 0x17 & 0x7f800000) | rsi_5
                else
                    var_638_5 = rsi_5
            else if ((rbx_6.w & 0x7c00) != 0x7c00)
                var_638_5 = ((rbx_6 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_6 & 0x3ff) << 0xd | rsi_5
            else
                var_638_5 = rsi_5 | 0x477fe000
            
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
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_15))
                    zmm0, r9_12 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_52 = 0xa - int.d(zmm0[0])
                    var_5b8_1.d = (rbx_15 << (rdx_52.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_52) << 0x17 & 0x7f800000) | rsi_9
                else
                    var_5b8_1.d = rsi_9
            else if ((rbx_14.w & 0x7c00) != 0x7c00)
                var_5b8_1.d =
                    ((rbx_14 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_14 & 0x3ff) << 0xd | rsi_9
            else
                var_5b8_1.d = rsi_9 | 0x477fe000
            
            int16_t* r14_9 = zx.q(rax_40) * (zx.q(r15[0x15].d) << 2) + r15[0x13]
            uint32_t rbx_22 = zx.d(r14_9[1])
            int32_t rsi_13 = (rbx_22 & 0xffff8000) << 0x10
            int32_t var_62c_2
            
            if ((0x7c00 & rbx_22.w) == 0)
                int32_t rbx_23 = rbx_22 & 0x3ff
                
                if (rbx_23 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_23))
                    zmm0, r9_12 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_53 = 0xa - int.d(zmm0[0])
                    var_62c_2 = (rbx_23 << (rdx_53.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_53) << 0x17 & 0x7f800000) | rsi_13
                else
                    var_62c_2 = rsi_13
            else if ((rbx_22.w & 0x7c00) != 0x7c00)
                var_62c_2 =
                    ((rbx_22 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_22 & 0x3ff) << 0xd | rsi_13
            else
                var_62c_2 = rsi_13 | 0x477fe000
            
            uint32_t rbx_30 = zx.d(*r14_9)
            int32_t rsi_17 = (rbx_30 & 0xffff8000) << 0x10
            int32_t var_630_2
            
            if ((0x7c00 & rbx_30.w) == 0)
                int32_t rbx_31 = rbx_30 & 0x3ff
                
                if (rbx_31 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_31))
                    zmm0, r9_12 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_54 = 0xa - int.d(zmm0[0])
                    var_630_2 = (rbx_31 << (rdx_54.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_54) << 0x17 & 0x7f800000) | rsi_17
                else
                    var_630_2 = rsi_17
            else if ((rbx_30.w & 0x7c00) != 0x7c00)
                var_630_2 =
                    ((rbx_30 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_30 & 0x3ff) << 0xd | rsi_17
            else
                var_630_2 = rsi_17 | 0x477fe000
            
            int16_t* r14_12 = zx.q(rax_41) * (zx.q(r15[0x15].d) << 2) + r15[0x13]
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
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_39))
                    zmm0, r9_12 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_55 = 0xa - int.d(zmm0[0])
                    var_634_2 = (rbx_39 << (rdx_55.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_55) << 0x17 & 0x7f800000) | rsi_21
                else
                    var_634_2 = rsi_21
            else if ((rbx_38.w & 0x7c00) != 0x7c00)
                var_634_2 =
                    ((rbx_38 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_38 & 0x3ff) << 0xd | rsi_21
            else
                var_634_2 = rsi_21 | 0x477fe000
            
            uint32_t rbx_46 = zx.d(*r14_12)
            int32_t rsi_25 = (rbx_46 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rbx_46.w) == 0)
                int32_t rbx_47 = rbx_46 & 0x3ff
                
                if (rbx_47 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_47))
                    zmm0, r9_12 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_56 = 0xa - int.d(zmm0[0])
                    arg_20 = (rbx_47 << (rdx_56.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_56) << 0x17 & 0x7f800000) | rsi_25
                else
                    arg_20 = rsi_25
            else if ((rbx_46.w & 0x7c00) != 0x7c00)
                arg_20 = ((rbx_46 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_46 & 0x3ff) << 0xd | rsi_25
            else
                arg_20 = rsi_25 | 0x477fe000
            
            zmm0 = arg_18
            zmm1 = arg_10
            zmm1[0] = zmm1[0] f- var_590_1
            zmm4_1 = var_638_5
            zmm7[0] = zmm7[0] - zmm8[0]
            zmm5_1 = var_5b8_1.d
            zmm13.d = zmm13.d f- zmm8[0]
            zmm10 = rcx_28
            zmm0[0] = zmm0[0] f- zmm10.d
            zmm3_1.d = arg_20.d f- zmm5_1[0]
            zmm6_2 = data_142d3f660
            zmm2_1.d = var_634_2.d f- zmm4_1[0]
            zmm11.d = zmm11.d f- var_590_1
            arg_10 = zmm1[0]
            zmm12[0] = zmm12[0] f- zmm10.d
            zmm1 = var_630_2
            arg_18 = zmm0[0]
            zmm1[0] = zmm1[0] - zmm5_1[0]
            zmm0 = var_62c_2
            zmm0[0] = zmm0[0] - zmm4_1[0]
            int32_t var_348_1 = zmm3_1.d
            int32_t var_344_1 = zmm2_1.d
            float var_338_1 = zmm5_1[0]
            float var_358 = zmm1[0]
            float var_334_1 = zmm4_1[0]
            float var_354_1 = zmm0[0]
            int32_t var_50c_1 = 0
            int32_t var_4fc_1 = 0
            int32_t var_4ec_1 = 0
            int64_t var_350_1 = 0
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0x3f800000
            uint128_t var_328_1 = zmm6_2
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_163)[0x4]
            float zmm6_3[0x4]
            float zmm7_1
            int32_t zmm8_1
            float zmm10_1[0x4]
            float zmm11_1[0x4]
            float zmm12_1[0x4]
            float zmm13_1
            rax_163, zmm6_3, zmm7_1, zmm8_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
                sub_140631b10(&var_358, &var_118)
            float var_508[0x4]
            var_508[0] = zmm11_1[0]
            uint32_t zmm2_2[0x4] = *rax_163
            float var_518[0x4]
            var_518[0] = arg_10[0]
            uint32_t zmm9_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float zmm5_2[0x4] = _mm_shuffle_ps(var_508, var_508, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_518, var_518, 0xe1)
            zmm5_2[0] = zmm7_1
            uint128_t zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm4_2[0] = zmm13_1
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm12_1[0]
            zmm4_2[0] = arg_18[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm9_1 = _mm_mul_ps(zmm9_1, zmm5_2)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            zmm9_1 = _mm_add_ps(zmm9_1, zmm0_1)
            float var_4f8[0x4]
            var_4f8[0] = var_590_1.d
            float zmm3_2[0x4] = _mm_shuffle_ps(var_4f8, var_4f8, 0xe1)
            zmm3_2[0] = zmm8_1
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = zmm10_1[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            _mm_add_ps(_mm_add_ps(zmm9_1, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_2)
            zmm2_2 = rax_163[1]
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
            zmm2_2 = rax_163[2]
            zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm11_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11_1, zmm5_2), zmm0_1), zmm1_1), zmm2_2)
            zmm2_2 = rax_163[3]
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
            zmm1_1[0] = zmm1_1[0] f- rax_48
            int32_t var_604_2 = zmm0_1.d
            zmm0_1.d = var_608_1.d f- rax_48
            float var_600_2 = zmm1_1[0]
            _mm_add_ps(zmm12_1, zmm2_2)
            zmm1_1 = var_5fc_1
            zmm1_1[0] = zmm1_1[0] f- var_5a8_1
            int32_t var_608_2 = zmm0_1.d
            float var_5fc_2 = zmm1_1[0]
            float zmm6_4[0x4]
            result, zmm6_4, zmm7, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_358, &var_118)
            zmm5_2[0] = var_604_2[0]
            float zmm2_3[0x4] = *result
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_3[0] = zmm7[0]
            zmm8 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_600_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_508 = zmm5_3
            zmm4_2[0] = var_5fc_2[0]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = zmm13.d
            zmm8 = _mm_mul_ps(zmm8, zmm5_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = var_608_2[0]
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_518 = zmm4_3
            zmm8 = _mm_add_ps(zmm8, _mm_mul_ps(zmm0, zmm4_3))
            zmm3_2[0] = var_5a8_1[0]
            float zmm3_3[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
            zmm3_3[0] = zx.o(var_550_1)[0]
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3[0] = rax_48[0]
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_4f8 = zmm3_3
            zmm8 = _mm_add_ps(_mm_add_ps(zmm8, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = *(result + 0x10)
            zmm7 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm7 = _mm_mul_ps(zmm7, zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            var_448_1.o = zmm8
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2_3)
            zmm2_3 = *(result + 0x20)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_398_1.o = zmm7
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2_3)
            zmm2_3 = *(result + 0x30)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_378_1.o = zmm7
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            zmm13 = 0x322bcc77
            var_568_1.o = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2_3)
            
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
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm9)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm6_4[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6_4 = zmm14
                    zmm7 = zmm14
                    zmm8 = zmm14
                else
                    zmm4_3 = 0x3f000000
                    zmm3_3 = zx.o(0)
                    zmm2_3 = 0x3f000000
                    zmm3_3[0] = zmm7[0]
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    arg_10 = zmm5_3[0]
                    zmm6_4[0] = zmm6_4[0] * zmm5_3[0]
                    zmm7[0] = zmm7[0] * zmm5_3[0]
                    zmm8[0] = zmm8[0] * zmm5_3[0]
                
                float var_5ec_1 = zmm7[0]
                zmm3_3 = zx.o(0)
                float var_5f0 = zmm6_4[0]
                float var_5e8_1 = zmm8[0]
                int32_t var_3fc_1 = 0
                float var_408[0x4]
                var_408[0] = zmm6_4[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(var_408, var_408, 0xe1)
                zmm2_3[0] = zmm7[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm8[0]
                var_628.q = 0
                zmm8 = 0x3f000000
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_408 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x100))
                var_620.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0xd0)))
                zmm2_3 = 0x3f000000
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_4 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] + zmm7[0]
                zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                zmm6_4[0] = zmm6_4[0] + zmm5_3[0]
                zmm3_3[0] = zmm6_4[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * 0.5f
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm2_3[0] = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm2_3[0]
                zmm2_3 = data_142d4cc00
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                zmm0 = 0x3f000000
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm0[0] = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm0[0]
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_378_1.o)
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                zmm7[0] = zmm7[0] * zmm4_3[0]
                float var_5e8_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_568_1.o)
                zmm6_4[0] = zmm6_4[0] * zmm4_3[0]
                var_5f0 = zmm7[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3[0]
                float var_5ec_2 = zmm6_4[0]
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_398_1.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_448_1.o)))
                zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                zmm6_4 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] + zmm5_3[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm6_4[0] = zmm6_4[0] + zmm7[0]
                
                if (zmm6_4[0] <= 9.99999994e-09f)
                    zmm5_3 = zmm14
                    zmm6_4 = zmm14
                    zmm7 = zmm14
                else
                    zmm3_3 = zx.o(0)
                    zmm3_3[0] = zmm6_4[0]
                    zmm2_3 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm2_3[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    zmm0 = 0x3f000000
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                    zmm0[0] = 0.5f - zmm3_3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm0[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm6_4[0] = zmm6_4[0] * zmm4_3[0]
                    zmm7[0] = zmm7[0] * zmm4_3[0]
                
                int32_t var_44c_1 = 0
                float var_458[0x4]
                var_458[0] = zmm5_3[0]
                float var_648_8 = zmm15[0]
                zmm2_3 = _mm_shuffle_ps(var_458, var_458, 0xe1)
                zmm2_3[0] = zmm6_4[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm7[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_458 = zmm2_3
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0x150))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x180))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0x160))
                zmm2_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0x170))
                zmm3_3 = _mm_add_ps(zmm3_3, zmm0)
                zmm1 = _mm_add_ps(zmm1, zmm2_3)
                zmm2_3 = 0x3f000000
                zmm3_3 = _mm_add_ps(zmm3_3, zmm1)
                zmm0 = zmm3_3
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0[0] = zmm0[0] * zmm3_3[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3[0] = zmm3_3[0] * zmm3_3[0]
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm1[0] = zmm1[0] + zmm3_3[0]
                zmm3_3 = zx.o(0)
                zmm3_3[0] = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * 0.5f
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm2_3[0] = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm2_3[0]
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm8[0] = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm8[0]
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                arg_10 = zmm4_3[0]
                int32_t var_140
                int32_t* rax_164
                rax_164, r9_12, zmm9, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_140, &var_5f0, &var_5f0, r9_12)
                void* var_210
                float* rdx_60 = var_210
                var_5f0.q = *rax_164
                zmm2_3 = rax_164[2]
                int32_t var_21c
                var_210 = &rdx_60[sx.q(var_21c)]
                *rdx_60 = var_5f0[0]
                void* var_1f8
                float* rdx_61 = var_1f8
                int32_t var_204
                var_1f8 = &rdx_61[sx.q(var_204)]
                *rdx_61 = var_5ec_2[0]
                void* var_1e0
                float* rdx_62 = var_1e0
                int32_t result_4
                result = sx.q(result_4)
                var_1e0 = &rdx_62[result]
                *rdx_62 = zmm2_3[0]
            
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
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm9)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm6_4[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] f<= zmm13.d)
                    zmm0 = zmm14
                    zmm1 = zmm14
                    zmm5_3 = zmm14
                else
                    zmm4_3 = 0x3f000000
                    zmm3_3 = zx.o(0)
                    zmm2_3 = 0x3f000000
                    zmm3_3[0] = zmm7[0]
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm0 = zmm5_3
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0[0] = zmm0[0] * zmm6_4[0]
                    zmm1[0] = zmm1[0] * zmm7[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8[0]
                
                zmm8 = 0x3f000000
                zmm3_3 = zx.o(0)
                float var_5d8 = zmm0[0]
                float var_5d4_1 = zmm1[0]
                float var_5d0_1 = zmm5_3[0]
                int32_t var_3ec_1 = 0
                float var_3f8[0x4]
                var_3f8[0] = zmm0[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3f8, var_3f8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm5_3[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3f8 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x100))
                var_620.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0xd0)))
                zmm2_3 = 0x3f000000
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_4 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] + zmm7[0]
                zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                zmm6_4[0] = zmm6_4[0] + zmm5_3[0]
                zmm3_3[0] = zmm6_4[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * 0.5f
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm2_3[0] = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm2_3[0]
                zmm2_3 = data_142d4cc20
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                zmm0 = 0x3f000000
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm0[0] = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm0[0]
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                arg_10 = zmm4_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm6_4[0]
                zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                float var_5d4_2 = zmm4_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm7[0]
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm5_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                var_5d8 = zmm4_3[0]
                float var_5d0_2 = zmm4_3[0]
                zmm5_3 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm5_3, zmm12), zmm0), 
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm10), 
                        _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm9)))
                zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                zmm6_4 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] + zmm5_3[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm6_4[0] = zmm6_4[0] + zmm7[0]
                
                if (zmm6_4[0] f<= zmm13.d)
                    zmm0 = zmm14
                    zmm1 = zmm14
                    zmm4_3 = zmm14
                else
                    zmm3_3 = zx.o(0)
                    zmm3_3[0] = zmm6_4[0]
                    zmm2_3 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm2_3[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    zmm0 = 0x3f000000
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                    zmm0[0] = 0.5f - zmm3_3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm0[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    zmm0 = zmm4_3
                    arg_10 = zmm4_3[0]
                    zmm1 = zmm4_3
                    zmm0[0] = zmm0[0] * zmm5_3[0]
                    zmm1[0] = zmm1[0] * zmm6_4[0]
                    zmm4_3[0] = zmm4_3[0] * zmm7[0]
                
                zmm3_3 = zx.o(0)
                int32_t var_3dc_1 = 0
                float var_3e8[0x4]
                var_3e8[0] = zmm0[0]
                float var_648_9 = zmm15[0]
                zmm2_3 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm4_3[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3e8 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x180))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0x160))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0x150)))
                zmm2_3 = 0x3f000000
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_4 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm6_4[0] = zmm6_4[0] + zmm7[0]
                zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                zmm6_4[0] = zmm6_4[0] + zmm5_3[0]
                zmm3_3[0] = zmm6_4[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * 0.5f
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm2_3[0] = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm2_3[0]
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                zmm8[0] = 0.5f - zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm8[0]
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                arg_10 = zmm4_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm7[0]
                zmm4_3[0] = zmm4_3[0] * zmm6_4[0]
                zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                float var_480 = zmm4_3[0]
                float var_47c_1 = zmm4_3[0]
                float var_478_1 = zmm4_3[0]
                int32_t var_128[0x4]
                int32_t* rax_168
                rax_168, zmm14 = sub_140ae34d0(&var_128, &var_480, &var_5d8, r9_12)
                void* var_1c8
                float* rdx_64 = var_1c8
                var_5d8.q = *rax_168
                int32_t rax_169 = rax_168[2]
                int32_t var_1d4
                var_1c8 = &rdx_64[sx.q(var_1d4)]
                *rdx_64 = var_5d8[0]
                void* var_1b0
                float* rdx_65 = var_1b0
                int32_t var_1bc
                var_1b0 = &rdx_65[sx.q(var_1bc)]
                *rdx_65 = var_5d4_2[0]
                void* var_198
                int32_t* rdx_66 = var_198
                int32_t result_5
                result = sx.q(result_5)
                var_198 = &rdx_66[result]
                *rdx_66 = rax_169
        
        rdx_28 = var_3c8_1
        cond:2_1 = var_598 + 1 s< *(arg2 + 0x40)
        r9_5 = var_3a8_1
        r10_2 = var_3c0_1
        r11_5 = var_3b8_1
        rbx_3 = var_3b0_1
        var_598 += 1
        r8_1 = rcx_23
    while (cond:2_1)

return result
