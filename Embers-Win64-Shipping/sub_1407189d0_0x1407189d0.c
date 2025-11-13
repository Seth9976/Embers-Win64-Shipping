// 函数: sub_1407189d0
// 地址: 0x1407189d0
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
int32_t* r14 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rdi_1

if ((not.b(rax_6) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    rdi_1 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
uint128_t* rbx_1

if ((rax_10.b & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
    
    rbx_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i_3 = rax_13 & 0x7fff
uint32_t arg_18 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
float (* r13_1)[0x4]

if ((rax_14.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_10 = rax_19
rax_19.b = not.b(rax_19.b)
uint128_t* r12_1

if ((rax_19.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
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
    
    r12_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t var_5a8 = 0xffffffff
uint128_t* var_5a0 = nullptr
int32_t var_598 = 0
sub_140767bd0(&var_5a8, arg2)
void var_2f8
sub_140742680(&var_2f8, arg2)

if (sub_140d3c6e0(r14) != 0)
    sub_142591550()

void* rax_23 = *(r14 + 0x58)
void* rax_26

if (rax_23 != 0)
    rax_26 = *(**(rax_23 + 0x58) + (sx.q(r14[0x1a]) << 3))
    
    if (r14[0x86].b != 0)
        void* rax_27 = sub_140d3c6e0(r14)
        
        if (rax_27 != 0)
            void* rax_28 = sub_142591550()
            void* rcx_11 = *(rax_27 + 0x10)
            int64_t rdx_7 = sx.q(*(rax_28 + 0x38))
            
            if (rdx_7.d s<= *(rcx_11 + 0x38) && *(*(rcx_11 + 0x30) + (rdx_7 << 3)) == rax_28 + 0x30
                    && *(rax_27 + 0x430) != 0)
                sub_141f66050(rax_27, r14[0x1a])

int64_t* rsi_2

if (rax_23 == 0 || rax_26 == 0)
    rsi_2 = nullptr
else
    rsi_2 = *(rax_26 + 0x18)

void* rax_30 = *(r14 + 0x70)
int32_t rax_31 = r14[0x1a]
int64_t* var_500 = rsi_2
int32_t rax_33 = (*(*rsi_2 + 0x58))(rsi_2)
uint128_t zmm11 = 0x3f800000
int32_t var_528 = 0
uint128_t zmm0
zmm0.d = 1f f/ r14[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_33)
int32_t var_504 = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_508 = result.d

if (*(arg2 + 0x40) s> 0)
    uint128_t* r8_1 = var_5a0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm12 = zx.o(0)
    uint64_t rcx_17 = zx.q(arg_10.b) << 2
    uint64_t r9_6 = zx.q(arg_18.b) << 2
    uint64_t r10_2 = zx.q(arg_20.b) << 2
    uint64_t r11_5 = zx.q(rax_6) << 2
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    int64_t rdx_10 = sx.q(rax_31) * 0x38
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    uint64_t var_328_1 = rcx_17
    uint64_t var_350_1 = r9_6
    uint64_t var_340_1 = r10_2
    uint64_t var_348_1 = r11_5
    int32_t var_3ec_1 = 0x3f800000
    bool cond:3_1
    
    do
        uint128_t* rdx_11 = r12_1
        r12_1 += rcx_17
        float (* rcx_18)[0x4] = r13_1
        r13_1 += r9_6
        uint64_t rdx_12 = zx.q(*rdi_1)
        int32_t var_310_1 = (*rdx_11).d
        uint64_t var_4a4_1 = (_mm_unpacklo_ps(*rbx_1, (*rcx_18)[0].q)).q
        int32_t var_5b8_1 = (*r8_1).d
        
        if (rdx_12.d s< 0 || rdx_12.d s> var_508)
            int32_t var_304_1 = 0
            uint64_t var_334_1 = (_mm_unpacklo_ps(zmm11, zmm12.q)).q
            int32_t var_32c_1 = 0
            rdx_12 = zx.q(0.o.d)
        
        uint32_t rbx_5 = (rdx_12 * 3).d
        int32_t rax_43 = (*(*rsi_2 + 0x68))(rsi_2, zx.q(rbx_5))
        int64_t r8_2 = *rsi_2
        int64_t rsi_3 = sx.q((*(r8_2 + 0x68))(rsi_2, zx.q(rbx_5 + 1), r8_2))
        int64_t r8_3 = *var_500
        zmm14 = var_310_1
        int64_t r11_6 = sx.q(rax_43) * 3
        zmm13 = var_4a4_1:4.d
        int64_t r9_7 = rsi_3 * 3
        zmm15 = var_4a4_1.d
        float zmm5_1[0x4] = zmm13
        float zmm4_1[0x4] = zmm13
        int64_t r8_5 = sx.q((*(r8_3 + 0x68))(var_500, zx.q(rbx_5 + 2), r8_3)) * 3
        int64_t rbx_6 = sx.q(*(rax_30 + 0x34))
        int64_t r10_3 = *(rax_30 + 0x80)
        int64_t rdx_16 = *((rbx_6 << 4) + r10_3 + rdx_10 + 8)
        int32_t rcx_27 = *(rdx_16 + (r11_6 << 2) + 8)
        int32_t rax_47 = *(rdx_16 + (r9_7 << 2) + 8)
        zmm9 = zx.o(*(rdx_16 + (r11_6 << 2)))
        zmm10 = zx.o(*(rdx_16 + (r9_7 << 2)))
        zmm11 = zx.o(*(rdx_16 + (r8_5 << 2)))
        int32_t rax_48 = *(rdx_16 + (r8_5 << 2) + 8)
        int64_t rcx_28 = *(((rbx_6 ^ 1) << 4) + r10_3 + rdx_10 + 8)
        zmm0 = zx.o(*(rcx_28 + (r8_5 << 2)))
        float zmm2[0x4] = zx.o(*(rcx_28 + (r9_7 << 2)))
        float zmm1[0x4] = zx.o(*(rcx_28 + (r11_6 << 2)))
        int32_t rax_49 = *(rcx_28 + (r11_6 << 2) + 8)
        uint64_t var_428_1 = zmm0.q
        zmm8.d = zmm14.d f* zmm0.d
        zmm0 = zmm0.q:4.d
        int32_t rax_50 = *(rcx_28 + (r9_7 << 2) + 8)
        int32_t var_584_1 = zmm0.d
        zmm14[0] = zmm14[0] f* zmm0.d
        result = zx.q(*(rcx_28 + (r8_5 << 2) + 8))
        int64_t var_45c_1 = zmm2.q
        int64_t var_4b8_1 = zmm2.q
        zmm5_1[0] = zmm5_1[0] * zmm2[0]
        zmm0 = result.d
        arg_20 = zmm0.d
        zmm14[0] = zmm14[0] f* zmm0.d
        zmm0 = var_45c_1:4.d
        int32_t var_580_1 = zmm0.d
        zmm4_1[0] = zmm4_1[0] f* zmm0.d
        zmm0 = rax_50
        int64_t var_498_1 = zmm1.q
        int64_t var_540_1 = zmm1.q
        zmm15[0] = zmm15[0] * zmm1[0]
        int32_t var_5b4_1 = zmm0.d
        uint128_t zmm3
        zmm3.d = zmm13.d f* zmm0.d
        zmm5_1[0] = zmm5_1[0] + zmm15[0]
        zmm15[0] = zmm15[0] f* var_540_1:4.d
        int64_t var_518_1 = 0
        zmm0.d = zmm15.d f* rax_49
        int32_t var_510_1 = 0
        zmm4_1[0] = zmm4_1[0] + zmm15[0]
        uint32_t var_534_1 = zmm9.d
        zmm8.d = zmm8.d f+ zmm5_1[0]
        uint32_t var_450_1 = zmm10.d
        zmm3.d = zmm3.d f+ zmm0.d
        uint32_t var_444_1 = zmm11.d
        zmm14[0] = zmm14[0] + zmm4_1[0]
        zmm14[0] = zmm14[0] f+ zmm3.d
        zmm3.d = zmm8.d
        zmm8 = zmm10
        zmm10 = var_444_1
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm3.d = zmm14[0]
        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        zmm6 = rax_48
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3.d = zmm14[0]
        float var_588_1 = zmm6[0]
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm7 = zmm9
        uint128_t var_3f8 = zmm3
        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(r14 + 0x170))
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r14 + 0x150))
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r14 + 0x180))
        zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r14 + 0x160))
        zmm2 = _mm_add_ps(zmm2, zmm0)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm0 = var_450_1
        arg_18 = zmm0.d
        zmm1 = _mm_add_ps(zmm1, zmm3)
        void* var_568
        var_568.d = zmm10.d
        int64_t var_418_1 = zmm7.q
        uint64_t var_408_1 = zmm8.q
        zmm9 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm1 = rax_47
        arg_10 = zmm1[0]
        var_518_1.o = zmm2
        char var_190
        char var_18f
        
        if (var_190 != 0 || var_18f != 0)
            void* var_2e8
            float* rdx_17 = var_2e8
            zmm1 = zmm13
            zmm3 = zmm13
            zmm13.d = zmm13.d f* arg_10
            int32_t var_3dc_1 = 0x3f800000
            zmm15[0] = zmm15[0] f* var_534_1
            var_5a8.q = 0
            zmm11 = rcx_27
            zmm1[0] = zmm1[0] f* zmm0.d
            var_5a0.d = 0
            zmm3.d = zmm3.d f* zmm8.d
            zmm15[0] = zmm15[0] + zmm1[0]
            zmm0.d = zmm15.d f* zmm7[0]
            zmm14[0] = zmm14[0] f* zmm10.d
            zmm3.d = zmm3.d f+ zmm0.d
            zmm14[0] = zmm14[0] f* zmm9.d
            zmm14[0] = zmm14[0] + zmm15[0]
            zmm15[0] = zmm15[0] f* zmm11.d
            zmm14[0] = zmm14[0] f+ zmm3.d
            zmm14[0] = zmm14[0] * zmm6[0]
            float var_3e8[0x4]
            var_3e8[0] = zmm14[0]
            zmm13.d = zmm13.d f+ zmm15[0]
            zmm4_1 = var_518_1:4.d
            zmm2 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
            zmm2[0] = zmm14[0]
            zmm5_1 = var_510_1
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm13.d = zmm13.d f+ zmm14[0]
            zmm2[0] = zmm13.d
            zmm13 = var_5b8_1
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_3e8 = zmm2
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
            zmm3 = _mm_add_ps(zmm3, zmm0)
            int32_t var_2f4
            var_2e8 = &rdx_17[sx.q(var_2f4)]
            zmm1 =
                _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
            zmm2 = var_518_1.d
            zmm3 = _mm_add_ps(zmm3, zmm1)
            zmm1 = zmm3
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm1[0] = zmm1[0] - zmm2[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm0.d = zmm0.d f- zmm4_1[0]
            zmm3.d = zmm3.d f- zmm5_1[0]
            zmm1[0] = zmm1[0] f* zmm13.d
            zmm0.d = zmm0.d f* zmm13.d
            zmm1[0] = zmm1[0] + zmm2[0]
            zmm3.d = zmm3.d f* zmm13.d
            zmm0.d = zmm0.d f+ zmm4_1[0]
            zmm3.d = zmm3.d f+ zmm5_1[0]
            *rdx_17 = zmm1[0]
            void* var_2d0
            int32_t* rdx_18 = var_2d0
            int32_t var_2dc
            var_2d0 = &rdx_18[sx.q(var_2dc)]
            *rdx_18 = zmm0.d
            void* var_2b8
            int32_t* rdx_19 = var_2b8
            int32_t result_1
            result = sx.q(result_1)
            var_2b8 = &rdx_19[result]
            *rdx_19 = zmm3.d
            
            if (var_18f != 0)
                void* var_2a0
                float* rdx_20 = var_2a0
                zmm1[0] = zmm1[0] - zmm2[0]
                zmm0.d = zmm0.d f- zmm4_1[0]
                zmm2 = var_504
                zmm3.d = zmm3.d f- zmm5_1[0]
                zmm1[0] = zmm1[0] * zmm2[0]
                int32_t var_2ac
                var_2a0 = &rdx_20[sx.q(var_2ac)]
                zmm0.d = zmm0.d f* zmm2[0]
                *rdx_20 = zmm1[0]
                void* var_288
                int32_t* rdx_21 = var_288
                zmm3.d = zmm3.d f* zmm2[0]
                int32_t var_294
                var_288 = &rdx_21[sx.q(var_294)]
                *rdx_21 = zmm0.d
                void* var_270
                int32_t* rdx_22 = var_270
                int32_t result_2
                result = sx.q(result_2)
                var_270 = &rdx_22[result]
                *rdx_22 = zmm3.d
            
            zmm1 = arg_10
            zmm0 = arg_18
        else
            zmm11 = rcx_27
        
        char var_18e
        
        if (var_18e == 0)
            zmm11 = 0x3f800000
        else
            zmm1[0] = zmm1[0] - var_588_1
            zmm5_1 = var_534_1
            zmm2 = zmm8
            zmm15 = data_143dbb200
            zmm2[0] = zmm2[0] f- zmm9.d
            zmm5_1[0] = zmm5_1[0] f- zmm10.d
            zmm4_1 = zmm7
            zmm3 = zmm11
            zmm11 = 0x3f800000
            zmm3.d = zmm3.d f- zmm6[0]
            zmm6 = zmm0
            zmm4_1[0] = zmm4_1[0] f- zmm9.d
            zmm6[0] = zmm6[0] f- zmm10.d
            zmm5_1[0] = zmm5_1[0] * zmm2[0]
            zmm8.d = zmm5_1.d f* zmm1[0]
            zmm7 = zmm3
            zmm7[0] = zmm7[0] * zmm2[0]
            zmm3.d = zmm3.d f* zmm6[0]
            zmm0.d = zmm1.d f* zmm4_1[0]
            zmm8.d = zmm8.d f- zmm3.d
            zmm6[0] = zmm6[0] * zmm4_1[0]
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm6[0] = zmm6[0] - zmm5_1[0]
            zmm0.d = zmm8.d f* zmm8.d
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm7[0] = zmm7[0] f+ zmm0.d
            zmm7[0] = zmm7[0] + zmm6[0]
            
            if (not(zmm7[0] == 1f))
                if (zmm7[0] >= 9.99999994e-09f)
                    zmm4_1 = 0x3f000000
                    zmm0 = zmm7
                    zmm5_1 = _mm_rsqrt_ss(zmm0[0], zmm0.d)
                    zmm2 = 0x3f000000
                    zmm3.d = zmm0.d f* 0.5f
                    zmm0.d = zmm5_1.d f* zmm5_1[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm5_1.d f* zmm2[0]
                    zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm3.d = zmm3.d f* zmm5_1[0]
                    zmm4_1[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_1.d f* zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                    float var_5b8_2 = zmm5_1[0]
                    zmm7[0] = zmm7[0] * zmm5_1[0]
                    zmm8.d = zmm8.d f* zmm5_1[0]
                    zmm6[0] = zmm6[0] * zmm5_1[0]
                else
                    zmm7 = data_143dbb1f8
                    zmm6 = zmm15
                    zmm8 = data_143dbb1fc
            
            float var_430_1 = zmm6[0]
            uint64_t var_550 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
            float var_548_1 = var_430_1
            int32_t var_3cc_1 = 0
            float var_3d8[0x4]
            var_3d8[0] = zmm7[0]
            var_5a8.q = 0
            zmm2 = _mm_shuffle_ps(var_3d8, var_3d8, 0xe1)
            zmm2[0] = zmm8.d
            var_5a0.d = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm6[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_3d8 = zmm2
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm1 =
                _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
            zmm2 = 0x3f000000
            zmm7 = _mm_add_ps(zmm7, zmm1)
            zmm0.d = zmm7.d f* zmm7[0]
            zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1[0]
            zmm6[0] = zmm6[0] f+ zmm0.d
            zmm3.d = zmm6[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1[0]
            zmm1 = zmm3
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm2[0] = 0.5f - zmm1[0]
            zmm0.d = zmm4_1.d f* zmm2[0]
            zmm2 = rax_49
            zmm2[0] = zmm2[0] f- arg_20
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm3.d = zmm3.d f* zmm4_1[0]
            zmm0.d = 0.5f f- zmm3.d
            zmm3.d = var_540_1:4.d.d f- var_584_1
            zmm4_1[0] = zmm4_1[0] f* zmm0.d
            zmm0 = zx.o(var_428_1)
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm7[0] = zmm7[0] * zmm4_1[0]
            zmm6[0] = zmm6[0] * zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            float var_5b8_3 = zmm4_1[0]
            zmm4_1 = zx.o(var_498_1)
            var_550.d = zmm7[0]
            zmm4_1[0] = zmm4_1[0] f- zmm0.d
            var_550:4.d = zmm6[0]
            float var_548_2 = zmm5_1[0]
            zmm5_1 = var_5b4_1
            zmm7 = zmm2
            zmm5_1[0] = zmm5_1[0] f- arg_20
            zmm6 = zx.o(var_4b8_1)
            zmm1 = var_580_1
            zmm6[0] = zmm6[0] f- zmm0.d
            zmm1[0] = zmm1[0] f- var_584_1
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm2[0] = zmm2[0] * zmm6[0]
            zmm7[0] = zmm7[0] * zmm1[0]
            zmm5_1[0] = zmm5_1[0] - zmm2[0]
            zmm0.d = zmm5_1.d f* zmm3.d
            zmm4_1[0] = zmm4_1[0] * zmm1[0]
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm6[0] = zmm6[0] f* zmm3.d
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm6[0] = zmm6[0] - zmm4_1[0]
            zmm0.d = zmm7.d f* zmm7[0]
            zmm5_1[0] = zmm5_1[0] f+ zmm0.d
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm5_1[0] = zmm5_1[0] + zmm6[0]
            
            if (not(zmm5_1[0] == 1f))
                if (zmm5_1[0] >= 9.99999994e-09f)
                    zmm0 = zmm5_1
                    zmm2 = 0x3f000000
                    zmm4_1 = _mm_rsqrt_ss(zmm0[0], zmm0.d)
                    zmm3.d = zmm0.d f* 0.5f
                    zmm0.d = zmm4_1.d f* zmm4_1[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm4_1.d f* zmm2[0]
                    zmm4_1[0] = zmm4_1[0] f+ zmm0.d
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm3.d = zmm3.d f* zmm4_1[0]
                    zmm0.d = 0.5f f- zmm3.d
                    zmm4_1[0] = zmm4_1[0] f* zmm0.d
                    zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                    float var_5b8_4 = zmm4_1[0]
                    zmm0.d = zmm4_1.d f* zmm7[0]
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm7 = zmm0
                    zmm6[0] = zmm6[0] * zmm4_1[0]
                else
                    zmm7 = data_143dbb1f8
                    zmm6 = zmm15
                    zmm5_1 = data_143dbb1fc
            
            int32_t var_3bc_1 = 0
            float var_3c8[0x4]
            var_3c8[0] = zmm7[0]
            int32_t var_5c8_1 = 0x3f800000
            zmm2 = _mm_shuffle_ps(var_3c8, var_3c8, 0xe1)
            zmm2[0] = zmm5_1[0]
            var_5a8.q = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm6[0]
            var_5a0.d = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_3c8 = zmm2
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x180))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0x170))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0x160))
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm1 =
                _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0x150)))
            zmm2 = 0x3f000000
            zmm7 = _mm_add_ps(zmm7, zmm1)
            zmm0.d = zmm7.d f* zmm7[0]
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1[0]
            zmm6[0] = zmm6[0] f+ zmm0.d
            zmm3.d = zmm6[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1[0]
            zmm1 = zmm3
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm2[0] = 0.5f - zmm1[0]
            zmm0.d = zmm4_1.d f* zmm2[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm3.d = zmm3.d f* zmm4_1[0]
            zmm8.d = 0.5f f- zmm3.d
            zmm0.d = zmm4_1.d f* zmm8.d
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            float var_5b8_5 = zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm7[0]
            zmm0.d = zmm4_1.d f* zmm6[0]
            zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
            float var_488 = zmm4_1[0]
            int32_t var_484_1 = zmm0.d
            float var_480_1 = zmm4_1[0]
            int32_t var_148
            int32_t* rax_56
            rax_56, r9_7, zmm9, zmm12 = sub_140ae34d0(&var_148, &var_488, &var_550, r9_7.d)
            void* var_258
            int32_t* rdx_24 = var_258
            var_550 = *rax_56
            zmm1 = var_550:4.d
            zmm2 = rax_56[2]
            zmm7 = zx.o(var_418_1)
            zmm8 = zx.o(var_408_1)
            zmm10 = var_568.d
            zmm6 = var_588_1
            int32_t var_264
            var_258 = &rdx_24[sx.q(var_264)]
            *rdx_24 = var_550.d.d
            void* var_240
            float* rdx_25 = var_240
            int32_t var_24c
            var_240 = &rdx_25[sx.q(var_24c)]
            *rdx_25 = zmm1[0]
            void* var_228
            float* rdx_26 = var_228
            int32_t result_3
            result = sx.q(result_3)
            var_228 = &rdx_26[result]
            *rdx_26 = zmm2[0]
        
        char var_18c
        char rbx_10 = var_18c
        char var_18d
        
        if (var_18d != 0 || rbx_10 != 0)
            zmm1 = arg_10
            zmm1[0] = zmm1[0] f- rcx_27
            zmm2 = arg_18
            zmm6[0] = zmm6[0] f- rcx_27
            zmm2[0] = zmm2[0] f- var_534_1
            zmm10.d = zmm10.d f- var_534_1
            arg_10 = zmm1[0]
            zmm9.d = zmm9.d f- zmm7[0]
            int32_t var_4ec_1 = 0
            int128_t var_188
            __builtin_memset(&var_188, 0, 0x20)
            zmm8.d = zmm8.d f- zmm7[0]
            float var_588_2 = zmm6[0]
            data_142d3f660
            arg_18 = zmm2[0]
            int32_t var_4dc_1 = 0
            int32_t var_4cc_1 = 0
            int128_t var_168
            __builtin_memcpy(&var_168, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_60)[0x4]
            float zmm6_1[0x4]
            float zmm7_1
            float zmm8_1[0x4]
            float zmm9_1[0x4]
            float zmm10_1[0x4]
            rax_60, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_140631b10(&var_188, &var_118)
            float var_4e8[0x4]
            var_4e8[0] = zmm10_1[0]
            uint32_t zmm2_1[0x4] = *rax_60
            float var_4f8[0x4]
            var_4f8[0] = arg_18.d
            uint32_t zmm15_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float zmm5_2[0x4] = _mm_shuffle_ps(var_4e8, var_4e8, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_4f8, var_4f8, 0xe1)
            zmm5_2[0] = zmm9_1[0]
            zmm4_2[0] = zmm8_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm5_2[0] = var_588_2.d
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm4_2[0] = arg_10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            uint128_t zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            uint128_t zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm15_1 = _mm_mul_ps(zmm15_1, zmm5_2)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm15_1 = _mm_add_ps(zmm15_1, zmm0_1)
            float var_4d8[0x4]
            var_4d8[0] = var_534_1.d
            float var_4f8_1[0x4] = zmm4_2
            float zmm3_1[0x4] = _mm_shuffle_ps(var_4d8, var_4d8, 0xe1)
            zmm3_1[0] = zmm7_1
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1[0] = rcx_27.d
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            float var_4d8_1[0x4] = zmm3_1
            _mm_add_ps(_mm_add_ps(zmm15_1, _mm_mul_ps(zmm1_1, zmm3_1)), zmm2_1)
            zmm2_1 = rax_60[1]
            zmm10_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm10_1 = _mm_mul_ps(zmm10_1, zmm5_2)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm3_1)
            int32_t var_4ec_2 = 0
            int32_t var_4dc_2 = 0
            int32_t var_4cc_2 = 0
            _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm10_1, zmm0_1), zmm1_1), 
                _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1))
            zmm2_1 = rax_60[2]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm8_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm8_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm8_1, zmm5_2), zmm0_1), zmm1_1), 
                zmm2_1)
            zmm2_1 = rax_60[3]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm9_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm9_1 = _mm_mul_ps(zmm9_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            zmm9_1 = _mm_add_ps(zmm9_1, zmm0_1)
            zmm2_1 = _mm_mul_ps(zmm2_1, zmm6_1)
            zmm0_1.d = var_584_1.d f- var_540_1:4.d
            var_418_1.o = zmm8_1
            int32_t var_584_2 = zmm0_1.d
            zmm0_1.d = arg_20.d f- rax_49
            arg_20 = zmm0_1.d
            zmm0_1.d = var_4b8_1.d f- var_498_1.d
            var_408_1.o = _mm_add_ps(_mm_add_ps(zmm9_1, zmm1_1), zmm2_1)
            uint64_t var_4b8_2 = zmm0_1.q
            zmm0_1.d = var_580_1.d f- var_540_1:4.d
            int32_t var_580_2 = zmm0_1.d
            zmm0_1.d = var_5b4_1.d f- rax_49
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_188, &var_118)
            zmm5_2[0] = zmm7[0]
            zmm2 = *result
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            uint128_t zmm4_3
            zmm4_3.d = zx.o(var_4b8_2)[0]
            zmm5_3[0] = var_584_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = arg_20.d
            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_4e8 = zmm5_3
            zmm3 = _mm_mul_ps(zmm3, zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xe1)
            zmm4_3.d = var_580_2[0]
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm4_3.d = zmm0_1.d[0]
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_4f8 = zmm4_3
            var_518_1.o = _mm_add_ps(zmm3, _mm_mul_ps(zmm0, zmm4_3))
            zmm3.d = var_498_1.d
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = var_540_1:4.d.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = rax_49.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_4d8 = zmm3
            zmm0 = _mm_add_ps(_mm_add_ps(var_518_1.o, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x10)
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            var_518_1.o = zmm0
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm7 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm7, zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x20)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_4b8_2.o = zmm7
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm7 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm7, zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x30)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_498_1.o = zmm7
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            var_428_1.o = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm7, zmm0), zmm1), zmm2)
            
            if (var_18d == 0)
                zmm9 = 0x322bcc77
            else
                zmm2 = data_142d4cc00
                var_5a8.q = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm8)
                var_5a0.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6 = _mm_mul_ps(zmm6, zmm9)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm15)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm5_3 = zmm12
                else
                    zmm4_3 = zmm14
                    zmm3.d = zmm7.d
                    zmm2 = zmm4_3
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* zmm4_3.d
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm2[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3.d = zmm3.d f* zmm5_3[0]
                    zmm4_3.d = zmm4_3.d f- zmm3.d
                    zmm0.d = zmm5_3.d f* zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6[0]
                    zmm1[0] = zmm1[0] * zmm7[0]
                    zmm5_3[0] = zmm5_3[0] f* zmm8.d
                
                float var_578 = zmm0.d
                float var_574_1 = zmm1[0]
                float var_570_1 = zmm5_3[0]
                int32_t var_3ac_1 = 0
                float var_3b8[0x4]
                var_3b8[0] = zmm0.d
                var_5a8.q = 0
                zmm2 = _mm_shuffle_ps(var_3b8, var_3b8, 0xe1)
                zmm2[0] = zmm1[0]
                var_5a0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm5_3[0]
                var_5a8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3b8 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
                var_5a0.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm8 = zmm14
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
                zmm2 = zmm8
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm3.d = zmm6[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* zmm8.d
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = zmm2[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2[0]
                zmm2 = data_142d4cc00
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm1 = zmm4_3
                zmm0.d = zmm8.d f- zmm3.d
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_498_1.o)
                zmm4_3.d = zmm4_3.d f+ zmm1[0]
                zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                zmm7[0] = zmm7[0] f* zmm4_3.d
                float var_570_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_428_1.o)
                zmm6[0] = zmm6[0] f* zmm4_3.d
                var_578 = zmm7[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3.d
                float var_574_2 = zmm6[0]
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_4b8_2.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_518_1.o)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                
                if (zmm6[0] <= 9.99999994e-09f)
                    zmm5_3 = zmm12
                    zmm6 = zmm12
                    zmm7 = zmm12
                else
                    zmm3.d = zmm6.d
                    zmm2 = zmm8
                    zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm3.d = zmm3.d f* zmm8.d
                    zmm0.d = zmm4_3.d f* zmm4_3.d
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm2[0]
                    zmm4_3.d = zmm4_3.d f+ zmm0.d
                    zmm1 = zmm4_3
                    zmm1[0] = zmm1[0] f* zmm4_3.d
                    zmm3.d = zmm3.d f* zmm1[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm8.d f- zmm3.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_3.d = zmm4_3.d f+ zmm1[0]
                    arg_10 = zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                    zmm6[0] = zmm6[0] f* zmm4_3.d
                    zmm7[0] = zmm7[0] f* zmm4_3.d
                
                int32_t var_39c_1 = 0
                float var_3a8[0x4]
                var_3a8[0] = zmm5_3[0]
                int32_t var_5c8_2 = zmm11.d
                zmm2 = _mm_shuffle_ps(var_3a8, var_3a8, 0xe1)
                zmm2[0] = zmm6[0]
                var_5a8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm7[0]
                var_5a0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3a8 = zmm2
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0x160))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0x170))
                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0x150))
                zmm3 = _mm_add_ps(zmm3, zmm0)
                zmm1 = _mm_add_ps(zmm1, zmm2)
                zmm2 = zmm8
                zmm3 = _mm_add_ps(zmm3, zmm1)
                zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm0.d = zmm3.d f* zmm3.d
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                zmm3.d = zmm3.d f* zmm3.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm1[0] = zmm1[0] f+ zmm3.d
                zmm3.d = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* zmm8.d
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = zmm2[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm8.d = zmm8.d f- zmm3.d
                zmm0.d = zmm4_3.d f* zmm8.d
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                arg_10 = zmm4_3.d
                int32_t var_13c
                int32_t* rax_61
                rax_61, r9_7, zmm9, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_13c, &var_578, &var_578, r9_7.d)
                void* var_210
                int32_t* rdx_30 = var_210
                var_578.q = *rax_61
                zmm2 = rax_61[2]
                int32_t var_21c
                var_210 = &rdx_30[sx.q(var_21c)]
                *rdx_30 = var_578.d
                void* var_1f8
                float* rdx_31 = var_1f8
                int32_t var_204
                var_1f8 = &rdx_31[sx.q(var_204)]
                *rdx_31 = var_574_2[0]
                void* var_1e0
                float* rdx_32 = var_1e0
                int32_t result_4
                result = sx.q(result_4)
                zmm8 = var_418_1.o
                var_1e0 = &rdx_32[result]
                *rdx_32 = zmm2[0]
                rbx_10 = var_18c
            
            if (rbx_10 != 0)
                zmm2 = data_142d4cc20
                var_5a8.q = 0
                zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_408_1.o)
                var_5a0.d = 0
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm8)
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, _mm_mul_ps(zmm2, zmm15)))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] f<= zmm9.d)
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm5_3 = zmm12
                else
                    zmm4_3 = zmm14
                    zmm3.d = zmm7.d
                    zmm2 = zmm4_3
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* zmm4_3.d
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm2[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3.d = zmm3.d f* zmm5_3[0]
                    zmm4_3.d = zmm4_3.d f- zmm3.d
                    zmm0.d = zmm5_3.d f* zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6[0]
                    zmm1[0] = zmm1[0] * zmm7[0]
                    zmm5_3[0] = zmm5_3[0] f* zmm8.d
                
                float var_560 = zmm0.d
                float var_55c_1 = zmm1[0]
                float var_558_1 = zmm5_3[0]
                int32_t var_38c_1 = 0
                float var_398[0x4]
                var_398[0] = zmm0.d
                var_5a8.q = 0
                zmm2 = _mm_shuffle_ps(var_398, var_398, 0xe1)
                zmm2[0] = zmm1[0]
                var_5a0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm5_3[0]
                var_5a8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_398 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
                var_5a0.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm8 = zmm14
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
                zmm2 = zmm8
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm3.d = zmm6[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* zmm8.d
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = zmm2[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2[0]
                zmm2 = data_142d4cc20
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm1 = zmm4_3
                zmm0.d = zmm8.d f- zmm3.d
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm4_3.d = zmm4_3.d f+ zmm1[0]
                arg_10 = zmm4_3.d
                zmm0.d = zmm4_3.d f* zmm6[0]
                zmm1 = zmm4_3
                zmm4_3.d = zmm4_3.d f* zmm5_3[0]
                int32_t var_55c_2 = zmm0.d
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_408_1.o)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                var_560 = zmm1[0]
                int32_t var_558_2 = zmm4_3.d
                zmm0 = __mulps_xmmps_memps(zmm0, var_418_1.o)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm10)
                zmm5_3 = _mm_add_ps(_mm_add_ps(zmm5_3, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm15)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                
                if (zmm6[0] f<= zmm9.d)
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm4_3 = zmm12
                else
                    zmm3.d = zmm6.d
                    zmm2 = zmm8
                    zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm3.d = zmm3.d f* zmm8.d
                    zmm0.d = zmm4_3.d f* zmm4_3.d
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm2[0]
                    zmm4_3.d = zmm4_3.d f+ zmm0.d
                    zmm1 = zmm4_3
                    zmm1[0] = zmm1[0] f* zmm4_3.d
                    zmm3.d = zmm3.d f* zmm1[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm8.d f- zmm3.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_3.d = zmm4_3.d f+ zmm1[0]
                    arg_10 = zmm4_3.d
                    zmm1 = zmm4_3
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm1[0] = zmm1[0] * zmm6[0]
                    zmm4_3.d = zmm4_3.d f* zmm7[0]
                
                int32_t var_37c_1 = 0
                float var_388[0x4]
                var_388[0] = zmm0.d
                int32_t var_5c8_3 = zmm11.d
                zmm2 = _mm_shuffle_ps(var_388, var_388, 0xe1)
                zmm2[0] = zmm1[0]
                var_5a8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm4_3.d
                var_5a0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_388 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x180))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0x160))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0x150)))
                zmm2 = zmm8
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm3.d = zmm6[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* zmm8.d
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = zmm2[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm8.d = zmm8.d f- zmm3.d
                zmm0.d = zmm4_3.d f* zmm8.d
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                arg_10 = zmm4_3.d
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm0.d = zmm4_3.d f* zmm6[0]
                zmm4_3.d = zmm4_3.d f* zmm5_3[0]
                float var_478 = zmm1[0]
                int32_t var_474_1 = zmm0.d
                int32_t var_470_1 = zmm4_3.d
                int32_t var_130[0x6]
                int32_t* rax_65
                rax_65, zmm12 = sub_140ae34d0(&var_130, &var_478, &var_560, r9_7.d)
                void* var_1c8
                int32_t* rdx_34 = var_1c8
                var_560.q = *rax_65
                zmm2 = rax_65[2]
                int32_t var_1d4
                var_1c8 = &rdx_34[sx.q(var_1d4)]
                *rdx_34 = var_560.d
                void* var_1b0
                float* rdx_35 = var_1b0
                int32_t var_1bc
                var_1b0 = &rdx_35[sx.q(var_1bc)]
                *rdx_35 = var_55c_2[0]
                void* var_198
                float* rdx_36 = var_198
                int32_t result_5
                result = sx.q(result_5)
                var_198 = &rdx_36[result]
                *rdx_36 = zmm2[0]
        
        rbx_1 += r10_2
        cond:3_1 = var_528 + 1 s< *(arg2 + 0x40)
        rdi_1 += r11_5
        rsi_2 = var_500
        rcx_17 = var_328_1
        r9_6 = var_350_1
        r10_2 = var_340_1
        r11_5 = var_348_1
        var_528 += 1
        r8_1 += sx.q(var_598) << 2
    while (cond:3_1)

return result
