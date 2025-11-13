// 函数: sub_140724060
// 地址: 0x140724060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int64_t* r14 = nullptr
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
*(arg2 + 0x10) = &rax[2]
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rbx_1

if ((not.b(rax_6) & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    rbx_1 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
uint128_t* r13_1

if ((rax_10.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_2 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_11 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_2 -= *(rdx_2 + r8)
            rax_11 += 1
            rdx_2 = rax_11 << 2
            r9_2 += 1
        while (i_2 s>= *(rdx_2 + r8))
    
    r13_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i_3 = rax_13 & 0x7fff
uint32_t arg_18 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
float (* r12_1)[0x4]

if ((rax_14.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_3 s>= *r8)
        int64_t rax_15 = 0
        int32_t* rdx_3 = nullptr
        
        do
            i_3 -= *(rdx_3 + r8)
            rax_15 += 1
            rdx_3 = rax_15 << 2
            r9_3 += 1
        while (i_3 s>= *(rdx_3 + r8))
    
    r12_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_10 = rax_19
rax_19.b = not.b(rax_19.b)
uint128_t* r15_1

if ((rax_19.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_20 = 0
        int32_t* rdx_4 = nullptr
        
        do
            i_4 -= *(rdx_4 + r8)
            rax_20 += 1
            rdx_4 = rax_20 << 2
            r9_4 += 1
        while (i_4 s>= *(rdx_4 + r8))
    
    r15_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t var_618 = 0xffffffff
uint128_t* var_610 = nullptr
int32_t var_608 = 0
sub_140767bd0(&var_618, arg2)
void var_2f8
sub_140742680(&var_2f8, arg2)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

void* rcx_9 = *(rdi + 0x58)
void* var_548 = nullptr

if (rcx_9 != 0)
    r14 = *(**(rcx_9 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_25 = sub_140d3c6e0(rdi)
        void* rax_27
        void* rcx_12
        int64_t rdx_7
        
        if (rax_25 != 0)
            rax_27 = sub_142591550() + 0x30
            rcx_12 = *(rax_25 + 0x10)
            rdx_7 = sx.q(*(rax_27 + 8))
        
        void* rax_28
        
        if (rax_25 == 0 || rdx_7.d s> *(rcx_12 + 0x38)
                || *(*(rcx_12 + 0x30) + (rdx_7 << 3)) != rax_27 || *(rax_25 + 0x430) == 0)
            rax_28 = &r14[0x27]
        else
            rax_28 = sub_141f66050(rax_25, rdi[0x1a])
        
        var_548 = rax_28

int64_t* rcx_15

if (rcx_9 == 0 || r14 == 0)
    rcx_15 = nullptr
else
    rcx_15 = r14[3]

int32_t rax_30 = (*(*rcx_15 + 0x58))(rcx_15)
uint128_t zmm11 = 0x3f800000
int32_t var_590 = 0
uint128_t zmm0
zmm0.d = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_30)
int32_t var_554 = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_558 = result.d

if (*(arg2 + 0x40) s> 0)
    uint128_t* r8_2 = var_610
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    int128_t zmm12 = zx.o(0)
    result = zx.q(arg_10.b) << 2
    uint64_t r9_6 = zx.q(arg_18.b) << 2
    uint64_t r10_2 = zx.q(arg_20.b) << 2
    uint64_t r11_5 = zx.q(rax_6) << 2
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    uint64_t result_1 = result
    uint64_t var_398_1 = r9_6
    uint64_t var_3a8_1 = r10_2
    uint64_t var_3a0_1 = r11_5
    int32_t var_40c_1 = 0x3f800000
    bool cond:4_1
    
    do
        uint128_t* rdx_10 = r15_1
        float (* rcx_19)[0x4] = r12_1
        r15_1 += result
        r12_1 += r9_6
        uint128_t* rax_35 = r13_1
        r13_1 += r10_2
        uint64_t rdx_11 = zx.q(*rbx_1)
        int32_t var_310_1 = (*rdx_10).d
        uint64_t var_4d4_1 = (_mm_unpacklo_ps(*rax_35, (*rcx_19)[0].q)).q
        zmm0 = *r8_2
        int32_t var_628_1 = zmm0.d
        
        if (rdx_11.d s< 0 || rdx_11.d s> var_558)
            int32_t var_304_1 = 0
            uint64_t var_374_1 = (_mm_unpacklo_ps(zmm11, zmm12.q)).q
            int32_t var_36c_1 = 0
            zmm0 = 0.o
            rdx_11 = zx.q(zmm0.d)
        
        uint32_t rbx_5 = (rdx_11 * 3).d
        int32_t rax_38 = (*(*rcx_15 + 0x68))(zmm0, zx.q(rbx_5))
        int64_t r8_3 = *rcx_15
        int32_t rax_40 = (*(r8_3 + 0x68))(rcx_15, zx.q(rbx_5 + 1), r8_3)
        int64_t r8_4 = *rcx_15
        int32_t rax_42 = (*(r8_4 + 0x68))(rcx_15, zx.q(rbx_5 + 2), r8_4)
        void var_134
        int64_t* rax_44 = sub_142316040(&var_134, rcx_9, r14, var_548, rax_38)
        int32_t rcx_26 = rax_44[1].d
        zmm11 = zx.o(*rax_44)
        void var_188
        int64_t* rax_46 = sub_142316040(&var_188, rcx_9, r14, var_548, rax_40)
        zmm10 = zx.o(*rax_46)
        int32_t rax_47 = rax_46[1].d
        void var_17c
        int64_t* rax_49 = sub_142316040(&var_17c, rcx_9, r14, var_548, rax_42)
        zmm9 = zx.o(*rax_49)
        int32_t rax_50 = rax_49[1].d
        void var_170
        int64_t* rax_52 = sub_142316040(&var_170, rcx_9, r14, var_548, rax_38)
        int64_t zmm0_1 = *rax_52
        int32_t rax_53 = rax_52[1].d
        void var_164
        int64_t* rax_55 = sub_142316040(&var_164, rcx_9, r14, var_548, rax_40)
        zmm15 = zx.o(*rax_55)
        int32_t rax_56 = rax_55[1].d
        uint64_t var_4c8_1 = zmm15.q
        void var_158
        int64_t* rax_58
        int32_t r9_13
        rax_58, r9_13 = sub_142316040(&var_158, rcx_9, r14, var_548, rax_42)
        zmm0 = zx.o(*rax_58)
        int32_t rax_59 = rax_58[1].d
        uint64_t var_4f8_2 = zmm0.q
        zmm14 = var_310_1
        zmm13 = var_4d4_1:4.d
        uint128_t zmm4_1 = zx.o(zmm0_1)
        zmm8.d = zmm14.d f* zmm0.d
        zmm0 = zmm0.q:4.d
        zmm14[0] = zmm14[0] f* zmm0.d
        float zmm1[0x4] = zmm13
        int64_t var_578_1 = 0
        uint128_t zmm3_1
        zmm3_1.d = zmm13.d f* zmm15.d
        int32_t var_570_1 = 0
        arg_18 = zmm0.d
        zmm0 = rax_59
        uint128_t zmm6_1
        zmm6_1.d = zmm14.d f* zmm0.d
        arg_20 = zmm0.d
        uint64_t var_588_1 = zmm4_1.q
        zmm0 = zmm15.q:4.d
        zmm15 = var_4d4_1.d
        uint128_t zmm2_1
        zmm2_1.d = zmm13.d f* zmm0.d
        uint128_t zmm5_1
        zmm5_1.d = zmm15.d f* rax_53
        int32_t var_5f4_1 = zmm0.d
        zmm0 = rax_56
        zmm1[0] = zmm1[0] f* zmm0.d
        int32_t var_5f8_1 = zmm0.d
        zmm0.d = zmm15.d f* zmm4_1.d
        zmm4_1.d = zmm15.d f* var_588_1:4.d
        zmm5_1.d = zmm5_1.d f+ zmm1[0]
        zmm0.d = zmm0.d f+ zmm3_1.d
        uint32_t var_498_1 = zmm10.d
        zmm4_1.d = zmm4_1.d f+ zmm2_1.d
        uint32_t var_5b8_1 = zmm11.d
        zmm5_1.d = zmm5_1.d f+ zmm6_1.d
        zmm6_1 = zmm10
        zmm10 = rax_50
        zmm8.d = zmm8.d f+ zmm0.d
        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
        int32_t var_54c_1 = zmm10.d
        zmm4_1.d = zmm4_1.d f+ zmm14[0]
        uint64_t var_560_1 = zmm6_1.q
        zmm7 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
        zmm3_1.d = zmm8.d
        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
        zmm3_1.d = zmm4_1.d
        zmm8 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
        zmm3_1.d = zmm5_1.d
        uint64_t var_448_1 = zmm8.q
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        uint128_t var_418 = zmm3_1
        zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), *(rdi + 0x170))
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(rdi + 0x150))
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(rdi + 0x180))
        zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(rdi + 0x160))
        zmm2_1 = _mm_add_ps(zmm2_1, zmm0)
        zmm0 = var_498_1
        arg_10 = zmm0.d
        zmm2_1 = _mm_add_ps(zmm2_1, _mm_add_ps(zmm1, zmm3_1))
        zmm1 = rax_47
        float var_5f0_1 = zmm1[0]
        var_578_1.o = zmm2_1
        zmm9 = zmm9.d
        float var_550_1 = zmm9[0]
        int64_t var_438_1 = zmm7.q
        char var_190
        char var_18f
        
        if (var_190 != 0 || var_18f != 0)
            void* var_2e8
            float* rdx_21 = var_2e8
            zmm3_1 = zmm13
            zmm11 = rcx_26
            zmm2_1.d = zmm13.d f* zmm0.d
            int32_t var_3fc_1 = 0x3f800000
            zmm13.d = zmm13.d f* zmm1[0]
            var_618.q = 0
            zmm3_1.d = zmm3_1.d f* zmm6_1.d
            var_610.d = 0
            zmm0.d = zmm15.d f* var_5b8_1
            zmm1 = zmm15
            zmm1[0] = zmm1[0] f* zmm8.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm4_1.d = zmm14.d f* zmm9[0]
            zmm3_1.d = zmm3_1.d f+ zmm1[0]
            zmm5_1.d = zmm14.d f* zmm7[0]
            zmm15.d = zmm15.d f* zmm11.d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            zmm14[0] = zmm14[0] f* zmm10.d
            zmm5_1.d = zmm5_1.d f+ zmm3_1.d
            zmm13.d = zmm13.d f+ zmm15.d
            zmm2_1.d = zmm4_1.d
            zmm4_1 = var_578_1:4.d
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm5_1.d
            zmm5_1 = var_570_1
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm14[0] = zmm14[0] f+ zmm13.d
            zmm13 = var_628_1
            zmm2_1.d = zmm14[0]
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_408 = zmm2_1
            zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(rdi + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(rdi + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(rdi + 0xe0))
            zmm3_1 = _mm_add_ps(zmm3_1, zmm0)
            int32_t var_2f4
            var_2e8 = &rdx_21[sx.q(var_2f4)]
            zmm1 = _mm_add_ps(zmm1, 
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(rdi + 0xd0)))
            zmm2_1 = var_578_1.d
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
            zmm1 = zmm3_1
            zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm1[0] = zmm1[0] f- zmm2_1.d
            zmm0.d = zmm0.d f- zmm4_1.d
            zmm3_1.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d f- zmm5_1.d
            zmm1[0] = zmm1[0] f* zmm13.d
            zmm0.d = zmm0.d f* zmm13.d
            zmm1[0] = zmm1[0] f+ zmm2_1.d
            zmm3_1.d = zmm3_1.d f* zmm13.d
            zmm0.d = zmm0.d f+ zmm4_1.d
            zmm3_1.d = zmm3_1.d f+ zmm5_1.d
            *rdx_21 = zmm1[0]
            void* var_2d0
            int32_t* rdx_22 = var_2d0
            int32_t var_2dc
            var_2d0 = &rdx_22[sx.q(var_2dc)]
            *rdx_22 = zmm0.d
            void* var_2b8
            int32_t* rdx_23 = var_2b8
            int32_t var_2c4
            var_2b8 = &rdx_23[sx.q(var_2c4)]
            *rdx_23 = zmm3_1.d
            
            if (var_18f != 0)
                void* var_2a0
                float* rdx_24 = var_2a0
                zmm1[0] = zmm1[0] f- zmm2_1.d
                zmm0.d = zmm0.d f- zmm4_1.d
                zmm2_1 = var_554
                zmm3_1.d = zmm3_1.d f- zmm5_1.d
                zmm1[0] = zmm1[0] f* zmm2_1.d
                int32_t var_2ac
                var_2a0 = &rdx_24[sx.q(var_2ac)]
                zmm0.d = zmm0.d f* zmm2_1.d
                *rdx_24 = zmm1[0]
                void* var_288
                int32_t* rdx_25 = var_288
                zmm3_1.d = zmm3_1.d f* zmm2_1.d
                int32_t var_294
                var_288 = &rdx_25[sx.q(var_294)]
                *rdx_25 = zmm0.d
                void* var_270
                int32_t* rdx_26 = var_270
                int32_t var_27c
                var_270 = &rdx_26[sx.q(var_27c)]
                *rdx_26 = zmm3_1.d
            
            zmm0 = arg_10
        else
            zmm11 = rcx_26
        
        char var_18e
        
        if (var_18e == 0)
            zmm11 = 0x3f800000
        else
            zmm1 = var_5f0_1
            zmm3_1.d = var_560_1.d f- zmm7[0]
            zmm1[0] = zmm1[0] f- zmm10.d
            zmm15 = data_143dbb200
            zmm5_1.d = var_5b8_1.d f- zmm9[0]
            zmm4_1.d = zmm0.d f- zmm9[0]
            zmm2_1 = zmm11
            zmm11 = 0x3f800000
            zmm6_1.d = zmm8.d f- zmm7[0]
            zmm2_1.d = zmm2_1.d f- zmm10.d
            zmm7 = zmm3_1
            zmm8.d = zmm5_1.d f* zmm1[0]
            zmm5_1.d = zmm5_1.d f* zmm3_1.d
            zmm0.d = zmm6_1.d f* zmm1[0]
            zmm7[0] = zmm7[0] f* zmm2_1.d
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm6_1.d = zmm6_1.d f- zmm5_1.d
            zmm8.d = zmm8.d f- zmm0.d
            zmm2_1.d = zmm7.d f* zmm7[0]
            zmm1 = zmm6_1
            zmm1[0] = zmm1[0] f* zmm6_1.d
            zmm0.d = zmm8.d f* zmm8.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1[0]
            int32_t var_470_1
            
            if (not(zmm2_1.d f!= 1f))
                var_470_1 = zmm6_1.d
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm3_1.d = zmm2_1.d
                zmm5_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
                zmm3_1.d = zmm3_1.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1 = zmm3_1
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2_1.d = 0.5f - zmm1[0]
                zmm0.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1.d
                zmm3_1.d = zmm3_1.d f* zmm1[0]
                zmm4_1.d = 0.5f f- zmm3_1.d
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                int32_t var_628_2 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm7[0]
                zmm5_1.d = zmm5_1.d f* zmm6_1.d
                zmm1[0] = zmm1[0] f* zmm8.d
                zmm7 = zmm0
                var_470_1 = zmm5_1.d
                zmm6_1 = zmm5_1
                zmm8 = zmm1
            else
                zmm7 = data_143dbb1f8
                zmm6_1 = zmm15
                zmm8 = data_143dbb1fc
                var_470_1 = zmm6_1.d
            
            uint64_t var_5a8 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
            int32_t var_5a0_1 = var_470_1
            int32_t var_3ec_1 = 0
            zmm2_1.d = zmm7[0]
            var_618.q = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm8.d
            var_610.d = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm2_1.d = zmm6_1.d
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_3f8 = zmm2_1
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(rdi + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(rdi + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(rdi + 0xe0))
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(rdi + 0xd0))))
            zmm0.d = zmm7.d f* zmm7[0]
            zmm6_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm1 = zmm6_1
            zmm1[0] = zmm1[0] f* zmm6_1.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm3_1.d = zmm1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm1 = zmm3_1
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm2_1.d = 0.5f - zmm1[0]
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm2_1.d = rax_53.d f- arg_20
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1 = zmm4_1
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1[0]
            zmm1 = zmm4_1
            zmm0.d = 0.5f f- zmm3_1.d
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm0 = zx.o(var_4f8_2)
            zmm4_1.d = zmm4_1.d f+ zmm1[0]
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            zmm7[0] = zmm7[0] f* zmm4_1.d
            var_5a8:4.d = zmm6_1.d
            zmm6_1.d = var_588_1:4.d.d f- arg_18
            int32_t var_5a0_2 = zmm5_1.d
            int32_t var_628_3 = zmm4_1.d
            zmm5_1.d = zmm0_1.d f- zmm0.d
            var_5a8.d = zmm7[0]
            zmm4_1.d = var_4c8_1.d f- zmm0.d
            zmm3_1.d = var_5f4_1.d f- arg_18
            zmm1 = var_5f8_1
            zmm0 = zmm6_1
            zmm1[0] = zmm1[0] f- arg_20
            zmm9 = zmm5_1
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm7 = zmm3_1
            zmm5_1.d = zmm5_1.d f* zmm3_1.d
            zmm0.d = zmm0.d f* zmm1[0]
            zmm7[0] = zmm7[0] f* zmm2_1.d
            zmm6_1.d = zmm6_1.d f- zmm5_1.d
            zmm9[0] = zmm9[0] * zmm1[0]
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm1 = zmm6_1
            zmm1[0] = zmm1[0] f* zmm6_1.d
            zmm9[0] = zmm9[0] f- zmm0.d
            zmm2_1.d = zmm7.d f* zmm7[0]
            zmm0.d = zmm9.d f* zmm9[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1[0]
            
            if (not(zmm2_1.d f== 1f))
                if (zmm2_1.d f>= 9.99999994e-09f)
                    zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                    zmm3_1.d = zmm2_1.d f* 0.5f
                    zmm0.d = zmm4_1.d f* zmm4_1.d
                    zmm1 = zmm3_1
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2_1.d = 0.5f - zmm1[0]
                    zmm0.d = zmm4_1.d f* zmm2_1.d
                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                    zmm1 = zmm4_1
                    zmm1[0] = zmm1[0] f* zmm4_1.d
                    zmm3_1.d = zmm3_1.d f* zmm1[0]
                    zmm1 = zmm4_1
                    zmm0.d = 0.5f f- zmm3_1.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_1.d = zmm4_1.d f+ zmm1[0]
                    int32_t var_628_4 = zmm4_1.d
                    zmm7[0] = zmm7[0] f* zmm4_1.d
                    zmm9[0] = zmm9[0] f* zmm4_1.d
                    zmm6_1.d = zmm6_1.d f* zmm4_1.d
                else
                    zmm7 = data_143dbb1f8
                    zmm6_1 = zmm15
                    zmm9 = data_143dbb1fc
            
            int32_t var_3ac_1 = 0
            zmm2_1.d = zmm7[0]
            int32_t var_638_7 = 0x3f800000
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm9[0]
            var_618.q = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm2_1.d = zmm6_1.d
            var_610.d = 0
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_3b8 = zmm2_1
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(rdi + 0x180))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(rdi + 0x170))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(rdi + 0x160))
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(rdi + 0x150))))
            zmm0.d = zmm7.d f* zmm7[0]
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm1 = zmm6_1
            zmm1[0] = zmm1[0] f* zmm6_1.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm3_1.d = zmm1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm1 = zmm3_1
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm2_1.d = 0.5f - zmm1[0]
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1 = zmm4_1
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1[0]
            zmm8.d = 0.5f f- zmm3_1.d
            zmm0.d = zmm4_1.d f* zmm8.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm7[0] = zmm7[0] f* zmm4_1.d
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            float var_468 = zmm7[0]
            int32_t var_464_1 = zmm6_1.d
            int32_t var_460_1 = zmm5_1.d
            int32_t var_628_5 = zmm4_1.d
            int32_t var_14c
            int32_t* rax_67
            rax_67, r9_13, zmm12 = sub_140ae34d0(&var_14c, &var_468, &var_5a8, r9_13)
            void* var_258
            int32_t* rdx_28 = var_258
            var_5a8 = *rax_67
            zmm1 = var_5a8:4.d
            zmm2_1 = rax_67[2]
            int32_t var_264
            var_258 = &rdx_28[sx.q(var_264)]
            zmm7 = zx.o(var_438_1)
            zmm8 = zx.o(var_448_1)
            zmm6_1 = zx.o(var_560_1)
            zmm9 = var_550_1
            zmm10 = var_54c_1
            *rdx_28 = var_5a8.d.d
            void* var_240
            float* rdx_29 = var_240
            int32_t var_24c
            var_240 = &rdx_29[sx.q(var_24c)]
            *rdx_29 = zmm1[0]
            void* var_228
            int32_t* rdx_30 = var_228
            int32_t var_234
            var_228 = &rdx_30[sx.q(var_234)]
            *rdx_30 = zmm2_1.d
        
        char var_18c
        char rbx_7 = var_18c
        char var_18d
        
        if (var_18d != 0 || rbx_7 != 0)
            int64_t rdx_31 = r14[0x13]
            zmm6_1.d = zmm6_1.d f- zmm8.d
            uint64_t rcx_42 = zx.q(r14[0x15].d)
            zmm7[0] = zmm7[0] f- zmm8.d
            zmm12.d = arg_10.d f- var_5b8_1
            zmm9[0] = zmm9[0] f- var_5b8_1
            zmm10.d = zmm10.d f- rcx_26
            int64_t rax_73 = zx.q(rax_38) * rcx_42
            arg_10 = zmm12.d
            zmm12.d = var_5f0_1.d f- rcx_26
            uint64_t var_560_2 = zmm6_1.q
            int32_t var_52c_1 = 0
            int32_t var_51c_1 = 0
            int32_t var_50c_1 = 0
            zmm4_1 = *(rdx_31 + (rax_73 << 3))
            zmm5_1 = *(rdx_31 + (rax_73 << 3) + 4)
            int64_t rax_75 = zx.q(rax_40) * rcx_42
            int32_t var_338_1 = zmm4_1.d
            int32_t var_334_1 = zmm5_1.d
            uint128_t var_328_1 = data_142d3f660
            int64_t var_350_1 = 0
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0x3f800000
            zmm2_1.d = (*(rdx_31 + (rax_75 << 3))).d f- zmm4_1.d
            zmm3_1.d = (*(rdx_31 + (rax_75 << 3) + 4)).d f- zmm5_1.d
            int64_t rax_77 = zx.q(rax_42) * rcx_42
            int32_t var_358 = zmm2_1.d
            int32_t var_354_1 = zmm3_1.d
            zmm1 = *(rdx_31 + (rax_77 << 3) + 4)
            zmm0.d = (*(rdx_31 + (rax_77 << 3))).d f- zmm4_1.d
            zmm1[0] = zmm1[0] f- zmm5_1.d
            int32_t var_348_1 = zmm0.d
            float var_344_1 = zmm1[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_78)[0x4]
            float zmm6_2[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            float zmm9_1
            uint32_t zmm10_1[0x4]
            int32_t zmm12_1
            rax_78, zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm12_1 =
                sub_140631b10(&var_358, &var_118)
            float var_528[0x4]
            var_528[0] = zmm9_1
            uint32_t zmm2_2[0x4] = *rax_78
            float var_538[0x4]
            var_538[0] = arg_10.d
            float zmm5_2[0x4] = _mm_shuffle_ps(var_528, var_528, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_538, var_538, 0xe1)
            zmm5_2[0] = zmm7_1[0]
            zmm4_2[0] = var_560_2.d
            float zmm0_2[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm10_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm12_1
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm4_2)
            uint32_t zmm15_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x55), zmm5_2)
            float var_538_1[0x4] = zmm4_2
            uint128_t zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm15_1 = _mm_add_ps(zmm15_1, zmm0_2)
            float var_518[0x4]
            var_518[0] = var_5b8_1[0]
            float zmm3_2[0x4] = _mm_shuffle_ps(var_518, var_518, 0xe1)
            zmm3_2[0] = zmm8_1[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm12_1 = var_588_1:4.d
            zmm3_2[0] = rcx_26[0]
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            int32_t var_52c_2 = 0
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            int32_t var_51c_2 = 0
            float var_518_1[0x4] = zmm3_2
            int32_t var_50c_2 = 0
            _mm_add_ps(_mm_add_ps(zmm15_1, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_2)
            zmm2_2 = rax_78[1]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm10_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10_1, zmm5_2), zmm0_2), zmm1_1), zmm2_2)
            zmm2_2 = rax_78[2]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm7_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            zmm7_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_1, zmm5_2), zmm0_2), zmm1_1), 
                zmm2_2)
            zmm2_2 = rax_78[3]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm8_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm8_1 = _mm_mul_ps(zmm8_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
            zmm8_1 = _mm_add_ps(zmm8_1, zmm0_2)
            zmm2_2 = _mm_mul_ps(zmm2_2, zmm6_2)
            zmm0_2 = arg_18
            zmm0_2[0] = zmm0_2[0] f- zmm12_1
            var_438_1.o = zmm7_1
            zmm8_1 = _mm_add_ps(zmm8_1, zmm1_1)
            arg_18 = zmm0_2[0]
            zmm0_2 = arg_20
            zmm0_2[0] = zmm0_2[0] f- rax_53
            zmm8_1 = _mm_add_ps(zmm8_1, zmm2_2)
            arg_20 = zmm0_2[0]
            zmm0_2 = zx.o(var_4c8_1)
            zmm0_2[0] = zmm0_2[0] f- zmm0_1.d
            var_448_1.o = zmm8_1
            int64_t var_4c8_2 = zmm0_2.q
            zmm0_2 = var_5f4_1
            zmm0_2[0] = zmm0_2[0] f- zmm12_1
            float var_5f4_2 = zmm0_2[0]
            zmm0_2 = var_5f8_1
            zmm0_2[0] = zmm0_2[0] f- rax_53
            float var_5f8_2 = zmm0_2[0]
            uint32_t (* rax_79)[0x4]
            float zmm6_3[0x4]
            rax_79, zmm6_3, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_358, &var_118)
            float zmm2_3[0x4] = *rax_79
            zmm5_2[0] = zmm9[0]
            uint128_t zmm4_3
            zmm4_3.d = var_4c8_2.d
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            var_578_1.o = zmm0
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_3[0] = arg_18[0]
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xe1)
            zmm4_3.d = var_5f4_2.d
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = arg_20[0]
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            zmm9 = _mm_mul_ps(zmm0, zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm4_3.d = var_5f8_2[0]
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm9 = _mm_add_ps(zmm9, zmm0)
            var_528 = zmm5_3
            uint128_t zmm3_3
            zmm3_3.d = zmm0_1.d
            var_538 = zmm4_3
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
            zmm3_3.d = zmm12.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3.d = rax_53.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_518 = zmm3_3
            zmm9 = _mm_add_ps(_mm_add_ps(zmm9, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = rax_79[1]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_578_1.o = zmm9
            zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9, zmm0), _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = rax_79[2]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_4c8_2.o = zmm9
            zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9, zmm0), _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = rax_79[3]
            int64_t var_4e8_1
            var_4e8_1.o = zmm9
            zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm12 = zx.o(0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm9 = _mm_add_ps(zmm9, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_3)
            var_4f8_2.o = _mm_add_ps(_mm_add_ps(zmm9, zmm1), zmm2_3)
            zmm9 = 0x322bcc77
            
            if (var_18d != 0)
                zmm2_3 = data_142d4cc00
                var_618.q = 0
                zmm6_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                var_610.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6_3 = _mm_mul_ps(zmm6_3, zmm8)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_3 = _mm_add_ps(_mm_add_ps(zmm6_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_3.d f* zmm6_3[0]
                zmm7 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6_3 = zx.o(0)
                    zmm7 = zx.o(0)
                    zmm8 = zx.o(0)
                else
                    zmm4_3 = zmm14
                    zmm3_3.d = zmm7.d
                    zmm2_3 = zmm4_3
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm4_3.d
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2_3[0] = zmm2_3[0] - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm5_3[0]
                    zmm4_3.d = zmm4_3.d f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm6_3[0] = zmm6_3[0] * zmm5_3[0]
                    zmm7[0] = zmm7[0] * zmm5_3[0]
                    zmm8.d = zmm8.d f* zmm5_3[0]
                
                float var_5e4_1 = zmm7[0]
                float var_5e8 = zmm6_3[0]
                int32_t var_5e0_1 = zmm8.d
                int32_t var_3dc_1 = 0
                float var_3e8[0x4]
                var_3e8[0] = zmm6_3[0]
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
                zmm2_3[0] = zmm7[0]
                var_610.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm8.d
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3e8 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x100))
                var_610.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm8 = zmm14
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0xd0)))
                zmm2_3 = zmm8
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8.d
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2_3[0] = zmm2_3[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2_3[0]
                zmm2_3 = data_142d4cc00
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1[0]
                zmm1 = zmm4_3
                zmm0.d = zmm8.d f- zmm3_3.d
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_4e8_1.o)
                zmm4_3.d = zmm4_3.d f+ zmm1[0]
                zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                zmm7[0] = zmm7[0] f* zmm4_3.d
                float var_5e0_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_4f8_2.o)
                zmm6_3[0] = zmm6_3[0] f* zmm4_3.d
                var_5e8 = zmm7[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3.d
                float var_5e4_2 = zmm6_3[0]
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_4c8_2.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_578_1.o)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                
                if (zmm6_3[0] <= 9.99999994e-09f)
                    zmm5_3 = zx.o(0)
                    zmm6_3 = zx.o(0)
                    zmm7 = zx.o(0)
                else
                    zmm3_3.d = zmm6_3.d
                    zmm2_3 = zmm8
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm8.d
                    zmm0.d = zmm4_3.d f* zmm4_3.d
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2_3[0] = zmm2_3[0] - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm2_3[0]
                    zmm4_3.d = zmm4_3.d f+ zmm0.d
                    zmm1 = zmm4_3
                    zmm1[0] = zmm1[0] f* zmm4_3.d
                    zmm3_3.d = zmm3_3.d f* zmm1[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm8.d f- zmm3_3.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_3.d = zmm4_3.d f+ zmm1[0]
                    arg_10 = zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                    zmm6_3[0] = zmm6_3[0] f* zmm4_3.d
                    zmm7[0] = zmm7[0] f* zmm4_3.d
                
                int32_t var_41c_1 = 0
                float var_428[0x4]
                var_428[0] = zmm5_3[0]
                int32_t var_638_8 = zmm11.d
                zmm2_3 = _mm_shuffle_ps(var_428, var_428, 0xe1)
                zmm2_3[0] = zmm6_3[0]
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm7[0]
                var_610.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_428 = zmm2_3
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0x150))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x180))
                zmm2_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0x160))
                zmm3_3 = _mm_add_ps(zmm3_3, zmm0)
                zmm1 = _mm_add_ps(zmm1, zmm2_3)
                zmm2_3 = zmm8
                zmm3_3 = _mm_add_ps(zmm3_3, zmm1)
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0.d = zmm3_3.d f* zmm3_3.d
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3.d = zmm3_3.d f* zmm3_3.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm1[0] = zmm1[0] f+ zmm3_3.d
                zmm3_3.d = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8.d
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2_3[0] = zmm2_3[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2_3[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1[0]
                zmm8.d = zmm8.d f- zmm3_3.d
                zmm0.d = zmm4_3.d f* zmm8.d
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                arg_10 = zmm4_3.d
                int32_t var_140
                int32_t* rax_80
                rax_80, r9_13, zmm9, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_140, &var_5e8, &var_5e8, r9_13)
                void* var_210
                int32_t* rdx_35 = var_210
                var_5e8.q = *rax_80
                zmm2_3 = rax_80[2]
                int32_t var_21c
                var_210 = &rdx_35[sx.q(var_21c)]
                *rdx_35 = var_5e8.d
                void* var_1f8
                float* rdx_36 = var_1f8
                int32_t var_204
                var_1f8 = &rdx_36[sx.q(var_204)]
                *rdx_36 = var_5e4_2[0]
                void* var_1e0
                float* rdx_37 = var_1e0
                zmm7 = var_438_1.o
                zmm8 = var_448_1.o
                int32_t var_1ec
                var_1e0 = &rdx_37[sx.q(var_1ec)]
                *rdx_37 = zmm2_3[0]
                rbx_7 = var_18c
            
            if (rbx_7 != 0)
                zmm2_3 = data_142d4cc20
                var_618.q = 0
                zmm6_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                var_610.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6_3 = _mm_mul_ps(zmm6_3, zmm8)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_3 = _mm_add_ps(_mm_add_ps(zmm6_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_3.d f* zmm6_3[0]
                zmm7 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] <= zmm9[0])
                    zmm0 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm5_3 = zx.o(0)
                else
                    zmm4_3 = zmm14
                    zmm3_3.d = zmm7.d
                    zmm2_3 = zmm4_3
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm4_3.d
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2_3[0] = zmm2_3[0] - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm5_3[0]
                    zmm4_3.d = zmm4_3.d f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6_3[0]
                    zmm1[0] = zmm1[0] * zmm7[0]
                    zmm5_3[0] = zmm5_3[0] f* zmm8.d
                
                float var_5c8 = zmm0.d
                float var_5c4_1 = zmm1[0]
                float var_5c0_1 = zmm5_3[0]
                int32_t var_3cc_1 = 0
                float var_3d8[0x4]
                var_3d8[0] = zmm0.d
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3d8, var_3d8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_610.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm5_3[0]
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3d8 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x100))
                var_610.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm8 = zmm14
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0xd0)))
                zmm2_3 = zmm8
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8.d
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2_3[0] = zmm2_3[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2_3[0]
                zmm2_3 = data_142d4cc20
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1[0]
                zmm1 = zmm4_3
                zmm0.d = zmm8.d f- zmm3_3.d
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm4_3.d = zmm4_3.d f+ zmm1[0]
                arg_10 = zmm4_3.d
                zmm0.d = zmm4_3.d f* zmm6_3[0]
                zmm1 = zmm4_3
                zmm4_3.d = zmm4_3.d f* zmm5_3[0]
                int32_t var_5c4_2 = zmm0.d
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_448_1.o)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                var_5c8 = zmm1[0]
                int32_t var_5c0_2 = zmm4_3.d
                zmm0 = __mulps_xmmps_memps(zmm0, var_438_1.o)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm10)
                zmm5_3 = _mm_add_ps(_mm_add_ps(zmm5_3, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                
                if (zmm6_3[0] <= zmm9[0])
                    zmm0 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm4_3 = zx.o(0)
                else
                    zmm3_3.d = zmm6_3.d
                    zmm2_3 = zmm8
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm8.d
                    zmm0.d = zmm4_3.d f* zmm4_3.d
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2_3[0] = zmm2_3[0] - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm2_3[0]
                    zmm4_3.d = zmm4_3.d f+ zmm0.d
                    zmm1 = zmm4_3
                    zmm1[0] = zmm1[0] f* zmm4_3.d
                    zmm3_3.d = zmm3_3.d f* zmm1[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm8.d f- zmm3_3.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_3.d = zmm4_3.d f+ zmm1[0]
                    arg_10 = zmm4_3.d
                    zmm1 = zmm4_3
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm1[0] = zmm1[0] * zmm6_3[0]
                    zmm4_3.d = zmm4_3.d f* zmm7[0]
                
                int32_t var_3bc_1 = 0
                float var_3c8[0x4]
                var_3c8[0] = zmm0.d
                int32_t var_638_9 = zmm11.d
                zmm2_3 = _mm_shuffle_ps(var_3c8, var_3c8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm4_3.d
                var_610.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3c8 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x180))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0x160))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0x150)))
                zmm2_3 = zmm8
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8.d
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2_3[0] = zmm2_3[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2_3[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1[0]
                zmm8.d = zmm8.d f- zmm3_3.d
                zmm0.d = zmm4_3.d f* zmm8.d
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                arg_10 = zmm4_3.d
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm0.d = zmm4_3.d f* zmm6_3[0]
                zmm4_3.d = zmm4_3.d f* zmm5_3[0]
                float var_458 = zmm1[0]
                int32_t var_454_1 = zmm0.d
                int32_t var_450_1 = zmm4_3.d
                int32_t var_128[0x4]
                int32_t* rax_85
                rax_85, zmm12 = sub_140ae34d0(&var_128, &var_458, &var_5c8, r9_13)
                void* var_1c8
                int32_t* rdx_39 = var_1c8
                var_5c8.q = *rax_85
                int32_t rax_86 = rax_85[2]
                int32_t var_1d4
                var_1c8 = &rdx_39[sx.q(var_1d4)]
                *rdx_39 = var_5c8.d
                void* var_1b0
                float* rdx_40 = var_1b0
                int32_t var_1bc
                var_1b0 = &rdx_40[sx.q(var_1bc)]
                *rdx_40 = var_5c4_2[0]
                void* var_198
                int32_t* rdx_41 = var_198
                int32_t var_1a4
                var_198 = &rdx_41[sx.q(var_1a4)]
                *rdx_41 = rax_86
        
        rbx_1 += r11_5
        cond:4_1 = var_590 + 1 s< *(arg2 + 0x40)
        result = result_1
        r9_6 = var_398_1
        r10_2 = var_3a8_1
        r11_5 = var_3a0_1
        var_590 += 1
        r8_2 += sx.q(var_608) << 2
    while (cond:4_1)

return result
