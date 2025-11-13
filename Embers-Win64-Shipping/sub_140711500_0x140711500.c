// 函数: sub_140711500
// 地址: 0x140711500
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
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t arg_20 = rax_6
rax_6.b = not.b(rax_6.b)
int32_t* r13_1

if ((rax_6.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_18 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
uint128_t* r12_1

if ((rax_10.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
    
    r12_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i_3 = rax_13 & 0x7fff
uint32_t arg_10 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
float (* r15_1)[0x4]

if ((rax_14.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_3 s>= *r8)
        int64_t rax_15 = 0
        int64_t rdx_3 = 0
        
        do
            i_3 -= *(r8 + rdx_3)
            rax_15 += 1
            rdx_3 = rax_15 << 2
            r9_3 += 1
        while (i_3 s>= *(r8 + rdx_3))
    
    r15_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint8_t rbx_1 = (rcx_5 u>> 0xf).b
int32_t i_4 = rcx_5 & 0x7fff
uint128_t* r14_1

if ((not.b(rbx_1) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_19 = 0
        int64_t rdx_4 = 0
        
        do
            i_4 -= *(r8 + rdx_4)
            rax_19 += 1
            rdx_4 = rax_19 << 2
            r9_4 += 1
        while (i_4 s>= *(r8 + rdx_4))
    
    r14_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t var_5c8 = 0xffffffff
uint128_t* var_5c0 = nullptr
int32_t var_5b8 = 0
sub_140767bd0(&var_5c8, arg2)
void var_2b8
sub_140742680(&var_2b8, arg2)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

void* rax_22 = *(rdi + 0x58)
void* var_580 = nullptr
void* rax_25

if (rax_22 != 0)
    rax_25 = *(**(rax_22 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    var_580 = rax_25
    
    if (rdi[0x86].b != 0)
        void* rax_26 = sub_140d3c6e0(rdi)
        
        if (rax_26 != 0)
            void* rax_28 = sub_142591550() + 0x30
            void* rcx_11 = *(rax_26 + 0x10)
            int64_t rdx_7 = sx.q(*(rax_28 + 8))
            
            if (rdx_7.d s<= *(rcx_11 + 0x38) && *(*(rcx_11 + 0x30) + (rdx_7 << 3)) == rax_28
                    && *(rax_26 + 0x430) != 0)
                sub_141f66050(rax_26, rdi[0x1a])
        
        rax_25 = var_580

int64_t* rcx_14

if (rax_22 == 0 || rax_25 == 0)
    rcx_14 = nullptr
else
    rcx_14 = *(rax_25 + 0x18)

void* rax_29 = *(rdi + 0x70)
int32_t rax_30 = rdi[0x1a]
int32_t rax_32 = (*(*rcx_14 + 0x58))(rcx_14)
uint128_t zmm11 = 0x3f800000
int32_t var_544 = 0
uint128_t zmm0
zmm0.d = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_32)
int32_t var_50c = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_510 = result.d

if (*(arg2 + 0x40) s> 0)
    uint128_t* r8_2 = var_5c0
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
    int128_t zmm12 = zx.o(0)
    int64_t rbx_3 = sx.q(var_5b8) << 2
    uint64_t rcx_17 = zx.q(rbx_1) << 2
    uint64_t r9_6 = zx.q(arg_10.b) << 2
    uint64_t r10_2 = zx.q(arg_18.b) << 2
    uint64_t r11_5 = zx.q(arg_20.b) << 2
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    int64_t rax_37 = sx.q(rax_30) * 0x38
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    uint64_t var_328_1 = rcx_17
    uint64_t var_360_1 = r9_6
    uint64_t var_348_1 = r10_2
    uint64_t var_350_1 = r11_5
    int64_t var_358_1 = rbx_3
    int32_t var_3dc_1 = 0x3f800000
    bool cond:4_1
    
    do
        uint128_t* rdx_10 = r14_1
        uint128_t* rax_38 = r12_1
        r14_1 += rcx_17
        r12_1 += r10_2
        float (* rcx_18)[0x4] = r15_1
        r15_1 += r9_6
        uint64_t rdx_11 = zx.q(*r13_1)
        r13_1 += r11_5
        void* rcx_19 = rbx_3 + r8_2
        int32_t var_2d0_1 = (*rdx_10).d
        uint64_t var_494_1 = (_mm_unpacklo_ps(*rax_38, (*rcx_18)[0].q)).q
        zmm0 = *r8_2
        int32_t var_5d8_1 = zmm0.d
        
        if (rdx_11.d s< 0 || rdx_11.d s> var_510)
            int32_t var_2c4_1 = 0
            uint64_t var_334_1 = (_mm_unpacklo_ps(zmm11, zmm12.q)).q
            int32_t var_32c_1 = 0
            zmm0 = 0.o
            rdx_11 = zx.q(zmm0.d)
        
        uint32_t rbx_4 = (rdx_11 * 3).d
        int32_t rax_41 = (*(*rcx_14 + 0x68))(zmm0, zx.q(rbx_4))
        int64_t r8_3 = *rcx_14
        int32_t rax_43 = (*(r8_3 + 0x68))(rcx_14, zx.q(rbx_4 + 1), r8_3)
        int64_t r8_4 = *rcx_14
        zmm14 = var_2d0_1
        zmm13 = var_494_1:4.d
        int64_t r8_5 = sx.q((*(r8_4 + 0x68))(rcx_14, zx.q(rbx_4 + 2), r8_4))
        int64_t r11_6 = sx.q(rax_41) * 3
        int32_t var_504_1 = r8_5.d
        float zmm4_1[0x4] = zmm13
        float zmm5_1[0x4] = zmm13
        int64_t r8_6 = r8_5 * 3
        int64_t rbx_5 = sx.q(*(rax_29 + 0x34))
        int64_t r10_3 = *(rax_29 + 0x80)
        int64_t r9_7 = sx.q(rax_43) * 3
        int64_t rdx_16 = *((rbx_5 << 4) + r10_3 + rax_37 + 8)
        int32_t rax_48 = *(rdx_16 + (r9_7 << 2) + 8)
        int32_t rcx_27 = *(rdx_16 + (r11_6 << 2) + 8)
        zmm9 = zx.o(*(rdx_16 + (r11_6 << 2)))
        zmm10 = zx.o(*(rdx_16 + (r9_7 << 2)))
        zmm11 = zx.o(*(rdx_16 + (r8_6 << 2)))
        int32_t rax_49 = *(rdx_16 + (r8_6 << 2) + 8)
        int64_t rcx_28 = *(((rbx_5 ^ 1) << 4) + r10_3 + rax_37 + 8)
        zmm0 = zx.o(*(rcx_28 + (r8_6 << 2)))
        float zmm2[0x4] = zx.o(*(rcx_28 + (r9_7 << 2)))
        int32_t rax_51 = *(rcx_28 + (r11_6 << 2) + 8)
        float zmm1[0x4] = zx.o(*(rcx_28 + (r11_6 << 2)))
        uint64_t var_4a8_2 = zmm0.q
        zmm8.d = zmm14.d f* zmm0.d
        zmm0 = zmm0.q:4.d
        int32_t rax_52 = *(rcx_28 + (r9_7 << 2) + 8)
        arg_20 = zmm0.d
        zmm14[0] = zmm14[0] f* zmm0.d
        result = zx.q(*(rcx_28 + (r8_6 << 2) + 8))
        zmm0 = result.d
        arg_18 = zmm0.d
        zmm14[0] = zmm14[0] f* zmm0.d
        zmm0 = zmm2.q:4.d
        int32_t var_5a8_1 = zmm0.d
        zmm4_1[0] = zmm4_1[0] f* zmm0.d
        zmm0 = rax_52
        int32_t var_5a4_1 = zmm0.d
        int64_t var_488_1 = zmm1.q
        int64_t var_4b8_1 = zmm2.q
        zmm5_1[0] = zmm5_1[0] * zmm2[0]
        zmm15 = var_494_1.d
        uint128_t zmm3
        zmm3.d = zmm13.d f* zmm0.d
        int64_t var_528_1 = 0
        zmm15[0] = zmm15[0] * zmm1[0]
        int32_t var_520_1 = 0
        zmm0.d = zmm15.d f* rax_51
        int64_t var_540_1 = zmm1.q
        zmm5_1[0] = zmm5_1[0] + zmm15[0]
        uint32_t var_558_1 = zmm9.d
        zmm15[0] = zmm15[0] f* var_540_1:4.d
        zmm3.d = zmm3.d f+ zmm0.d
        uint32_t var_420_1 = zmm10.d
        zmm8.d = zmm8.d f+ zmm5_1[0]
        uint32_t var_470_1 = zmm11.d
        zmm4_1[0] = zmm4_1[0] + zmm15[0]
        zmm14[0] = zmm14[0] f+ zmm3.d
        zmm3.d = zmm8.d
        zmm8 = zmm10
        zmm10 = var_470_1
        zmm14[0] = zmm14[0] + zmm4_1[0]
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        int32_t var_508_1 = zmm10.d
        uint64_t var_3f8_1 = zmm8.q
        zmm3.d = zmm14[0]
        zmm6 = rax_48
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3.d = zmm14[0]
        float var_5a0_1 = zmm6[0]
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm7 = zmm9
        uint128_t var_3e8 = zmm3
        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(rdi + 0x180))
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(rdi + 0x160))
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(rdi + 0x170))
        zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(rdi + 0x150))
        zmm2 = _mm_add_ps(zmm2, zmm0)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm0 = rax_49
        int32_t var_588_1 = zmm0.d
        zmm1 = _mm_add_ps(zmm1, zmm3)
        int64_t var_408_1 = zmm7.q
        zmm9 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm1 = var_420_1
        arg_10 = zmm1[0]
        var_528_1.o = zmm2
        char var_150
        char var_14f
        
        if (var_150 != 0 || var_14f != 0)
            void* var_2a8
            float* rdx_17 = var_2a8
            zmm2 = zmm13
            zmm11 = rcx_27
            zmm2[0] = zmm2[0] * zmm1[0]
            int32_t var_3cc_1 = 0x3f800000
            zmm14[0] = zmm14[0] f* zmm0.d
            var_5c8.q = 0
            zmm3.d = zmm13.d f* zmm8.d
            var_5c0.d = 0
            zmm15[0] = zmm15[0] * zmm7[0]
            zmm13.d = zmm13.d f* zmm6[0]
            zmm6 = var_558_1
            zmm3.d = zmm3.d f+ zmm15[0]
            zmm0.d = zmm15.d f* zmm6[0]
            zmm14[0] = zmm14[0] f* zmm10.d
            zmm2[0] = zmm2[0] f+ zmm0.d
            zmm14[0] = zmm14[0] f* zmm9.d
            zmm15[0] = zmm15[0] f* zmm11.d
            zmm14[0] = zmm14[0] f+ zmm3.d
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm13.d = zmm13.d f+ zmm15[0]
            float var_3d8[0x4]
            var_3d8[0] = zmm14[0]
            zmm4_1 = var_528_1:4.d
            zmm2 = _mm_shuffle_ps(var_3d8, var_3d8, 0xe1)
            zmm14[0] = zmm14[0] f+ zmm13.d
            zmm13 = var_5d8_1
            zmm2[0] = zmm14[0]
            zmm5_1 = var_520_1
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm14[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_3d8 = zmm2
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
            zmm3 = _mm_add_ps(zmm3, zmm0)
            int32_t var_2b4
            var_2a8 = &rdx_17[sx.q(var_2b4)]
            zmm1 =
                _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0)))
            zmm2 = var_528_1.d
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
            void* var_290
            int32_t* rdx_18 = var_290
            int32_t var_29c
            var_290 = &rdx_18[sx.q(var_29c)]
            *rdx_18 = zmm0.d
            void* var_278
            int32_t* rdx_19 = var_278
            int32_t result_1
            result = sx.q(result_1)
            var_278 = &rdx_19[result]
            *rdx_19 = zmm3.d
            
            if (var_14f != 0)
                void* var_260
                float* rdx_20 = var_260
                zmm1[0] = zmm1[0] - zmm2[0]
                zmm0.d = zmm0.d f- zmm4_1[0]
                zmm2 = var_50c
                zmm3.d = zmm3.d f- zmm5_1[0]
                zmm1[0] = zmm1[0] * zmm2[0]
                int32_t var_26c
                var_260 = &rdx_20[sx.q(var_26c)]
                zmm0.d = zmm0.d f* zmm2[0]
                *rdx_20 = zmm1[0]
                void* var_248
                int32_t* rdx_21 = var_248
                zmm3.d = zmm3.d f* zmm2[0]
                int32_t var_254
                var_248 = &rdx_21[sx.q(var_254)]
                *rdx_21 = zmm0.d
                void* var_230
                int32_t* rdx_22 = var_230
                int32_t result_2
                result = sx.q(result_2)
                var_230 = &rdx_22[result]
                *rdx_22 = zmm3.d
            
            zmm1 = arg_10
            zmm0 = var_588_1
        else
            zmm11 = rcx_27
            zmm6 = var_558_1
        
        char var_14e
        
        if (var_14e == 0)
            zmm11 = 0x3f800000
        else
            zmm15 = data_143dbb200
            zmm5_1 = zmm6
            zmm5_1[0] = zmm5_1[0] f- zmm10.d
            zmm6 = zmm7
            zmm4_1 = zmm1
            zmm1 = var_5a0_1
            zmm6[0] = zmm6[0] f- zmm9.d
            zmm1[0] = zmm1[0] f- zmm0.d
            zmm2 = zmm8
            zmm2[0] = zmm2[0] f- zmm9.d
            zmm3 = zmm11
            zmm11 = 0x3f800000
            zmm3.d = zmm3.d f- zmm0.d
            zmm4_1[0] = zmm4_1[0] f- zmm10.d
            zmm0.d = zmm6.d f* zmm1[0]
            zmm5_1[0] = zmm5_1[0] * zmm2[0]
            zmm7 = zmm3
            zmm7[0] = zmm7[0] * zmm2[0]
            zmm8.d = zmm5_1.d f* zmm1[0]
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm6[0] = zmm6[0] * zmm4_1[0]
            zmm3.d = zmm3.d f* zmm4_1[0]
            zmm6[0] = zmm6[0] - zmm5_1[0]
            zmm8.d = zmm8.d f- zmm3.d
            zmm0.d = zmm7.d f* zmm7[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm2 = zmm8
            zmm2[0] = zmm2[0] f* zmm8.d
            zmm2[0] = zmm2[0] f+ zmm0.d
            zmm2[0] = zmm2[0] + zmm6[0]
            float var_45c_1
            
            if (not(zmm2[0] != 1f))
                var_45c_1 = zmm6[0]
            else if (zmm2[0] >= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm0 = zmm2
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
                float var_5d8_2 = zmm5_1[0]
                zmm7[0] = zmm7[0] * zmm5_1[0]
                zmm8.d = zmm8.d f* zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm6[0]
                var_45c_1 = zmm5_1[0]
                zmm6 = zmm5_1
            else
                zmm7 = data_143dbb1f8
                zmm6 = zmm15
                zmm8 = data_143dbb1fc
                var_45c_1 = zmm6[0]
            
            uint64_t var_568 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
            float var_560_1 = var_45c_1
            int32_t var_3bc_1 = 0
            float var_3c8[0x4]
            var_3c8[0] = zmm7[0]
            var_5c8.q = 0
            zmm2 = _mm_shuffle_ps(var_3c8, var_3c8, 0xe1)
            zmm2[0] = zmm8.d
            var_5c0.d = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm6[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_3c8 = zmm2
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm1 = _mm_add_ps(zmm1, zmm2)
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
            zmm2 = zx.o(var_4b8_1)
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm3.d = zmm3.d f* zmm4_1[0]
            zmm0.d = 0.5f f- zmm3.d
            zmm4_1[0] = zmm4_1[0] f* zmm0.d
            zmm0 = zx.o(var_4a8_2)
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm1 = rax_51
            zmm1[0] = zmm1[0] f- arg_18
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm7[0] = zmm7[0] * zmm4_1[0]
            zmm6[0] = zmm6[0] * zmm4_1[0]
            float var_560_2 = zmm5_1[0]
            zmm5_1 = var_540_1:4.d
            zmm5_1[0] = zmm5_1[0] f- arg_20
            float var_5d8_3 = zmm4_1[0]
            zmm4_1 = zx.o(var_488_1)
            var_568.d = zmm7[0]
            zmm4_1[0] = zmm4_1[0] f- zmm0.d
            var_568:4.d = zmm6[0]
            zmm6 = var_5a4_1
            zmm2[0] = zmm2[0] f- zmm0.d
            zmm6[0] = zmm6[0] f- arg_18
            zmm7 = zmm1
            zmm3.d = var_5a8_1.d f- arg_20
            zmm1[0] = zmm1[0] * zmm2[0]
            zmm6[0] = zmm6[0] * zmm4_1[0]
            zmm0.d = zmm6.d f* zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm2[0]
            zmm6[0] = zmm6[0] - zmm1[0]
            zmm7[0] = zmm7[0] f* zmm3.d
            zmm3.d = zmm3.d f* zmm4_1[0]
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm5_1[0] = zmm5_1[0] f- zmm3.d
            zmm0.d = zmm7.d f* zmm7[0]
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm6[0] = zmm6[0] f+ zmm0.d
            zmm6[0] = zmm6[0] + zmm5_1[0]
            
            if (not(zmm6[0] == 1f))
                if (zmm6[0] >= 9.99999994e-09f)
                    zmm0 = zmm6
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
                    float var_5d8_4 = zmm4_1[0]
                    zmm0.d = zmm4_1.d f* zmm7[0]
                    zmm4_1[0] = zmm4_1[0] * zmm6[0]
                    zmm7 = zmm0
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm6 = zmm4_1
                else
                    zmm7 = data_143dbb1f8
                    zmm5_1 = zmm15
                    zmm6 = data_143dbb1fc
            
            int32_t var_3ac_1 = 0
            float var_3b8[0x4]
            var_3b8[0] = zmm7[0]
            int32_t var_5e8_1 = 0x3f800000
            zmm2 = _mm_shuffle_ps(var_3b8, var_3b8, 0xe1)
            zmm2[0] = zmm6[0]
            var_5c8.q = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm5_1[0]
            var_5c0.d = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_3b8 = zmm2
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0x160))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0x150))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0x170))
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm1 = _mm_add_ps(zmm1, 
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x180)))
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
            zmm7[0] = zmm7[0] * zmm4_1[0]
            zmm6[0] = zmm6[0] * zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            float var_448 = zmm7[0]
            float var_444_1 = zmm6[0]
            float var_440_1 = zmm5_1[0]
            float var_5d8_5 = zmm4_1[0]
            int32_t var_148
            int32_t* rax_58
            rax_58, r9_7, zmm9, zmm12 = sub_140ae34d0(&var_148, &var_448, &var_568, r9_7.d)
            void* var_218
            int32_t* rdx_24 = var_218
            var_568 = *rax_58
            zmm1 = var_568:4.d
            zmm2 = rax_58[2]
            int32_t var_224
            var_218 = &rdx_24[sx.q(var_224)]
            zmm7 = zx.o(var_408_1)
            zmm8 = zx.o(var_3f8_1)
            zmm10 = var_508_1
            *rdx_24 = var_568.d.d
            void* var_200
            float* rdx_25 = var_200
            int32_t var_20c
            var_200 = &rdx_25[sx.q(var_20c)]
            *rdx_25 = zmm1[0]
            void* var_1e8
            float* rdx_26 = var_1e8
            int32_t result_3
            result = sx.q(result_3)
            var_1e8 = &rdx_26[result]
            *rdx_26 = zmm2[0]
        
        char var_14c
        char rbx_9 = var_14c
        char var_14d
        
        if (var_14d != 0 || rbx_9 != 0)
            zmm9.d = zmm9.d f- zmm7[0]
            zmm8.d = zmm8.d f- zmm7[0]
            zmm12.d = arg_10.d f- var_558_1
            zmm6 = data_142d3f660
            int64_t rdx_27 = *(var_580 + 0x98)
            uint64_t rcx_39 = zx.q(*(var_580 + 0xa8))
            zmm15 = var_588_1
            zmm10.d = zmm10.d f- var_558_1
            zmm15[0] = zmm15[0] f- rcx_27
            int64_t rax_64 = zx.q(rax_41) * rcx_39
            arg_10 = zmm12.d
            zmm12.d = var_5a0_1.d f- rcx_27
            float var_2e8_1[0x4] = zmm6
            int32_t var_4ec_1 = 0
            int32_t var_4dc_1 = 0
            int32_t var_4cc_1 = 0
            int64_t var_310_1 = 0
            zmm4_1 = *(rdx_27 + (rax_64 << 3))
            zmm5_1 = *(rdx_27 + (rax_64 << 3) + 4)
            int64_t rax_66 = zx.q(rax_43) * rcx_39
            float var_2f8_1 = zmm4_1[0]
            float var_2f4_1 = zmm5_1[0]
            int64_t var_300_1 = 0
            int64_t var_2f0_1 = 0x3f800000
            zmm2 = *(rdx_27 + (rax_66 << 3))
            zmm3 = *(rdx_27 + (rax_66 << 3) + 4)
            zmm2[0] = zmm2[0] - zmm4_1[0]
            zmm3.d = zmm3.d f- zmm5_1[0]
            int64_t rax_68 = zx.q(var_504_1) * rcx_39
            float var_318 = zmm2[0]
            int32_t var_314_1 = zmm3.d
            zmm1 = *(rdx_27 + (rax_68 << 3) + 4)
            zmm0.d = (*(rdx_27 + (rax_68 << 3))).d f- zmm4_1[0]
            zmm1[0] = zmm1[0] - zmm5_1[0]
            int32_t var_308_1 = zmm0.d
            float var_304_1 = zmm1[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_69)[0x4]
            float zmm6_1[0x4]
            float zmm7_1
            float zmm8_1[0x4]
            float zmm9_1[0x4]
            uint128_t zmm10_1
            int32_t zmm12_1
            uint32_t zmm15_1[0x4]
            rax_69, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm12_1, zmm15_1 =
                sub_140631b10(&var_318, &var_118)
            float var_4e8[0x4]
            var_4e8[0] = zmm10_1.d
            uint32_t zmm2_1[0x4] = *rax_69
            float var_4f8[0x4]
            var_4f8[0] = arg_10[0]
            uint128_t zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm10_1 = zmm0_1
            float zmm5_2[0x4] = _mm_shuffle_ps(var_4e8, var_4e8, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_4f8, var_4f8, 0xe1)
            zmm5_2[0] = zmm9_1[0]
            var_5c8.o = zmm0_1
            zmm4_2[0] = zmm8_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm15_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm12_1
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm10_1 = _mm_mul_ps(zmm10_1, zmm5_2)
            float var_4f8_1[0x4] = zmm4_2
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm10_1 = _mm_add_ps(zmm10_1, zmm0_1)
            float var_4d8[0x4]
            var_4d8[0] = var_558_1.d
            float zmm3_1[0x4] = _mm_shuffle_ps(var_4d8, var_4d8, 0xe1)
            zmm3_1[0] = zmm7_1
            zmm12_1 = var_540_1:4.d
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            int32_t var_4ec_2 = 0
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1[0] = rcx_27.d
            int32_t var_4dc_2 = 0
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            float var_4d8_1[0x4] = zmm3_1
            int32_t var_4cc_2 = 0
            _mm_add_ps(_mm_add_ps(zmm10_1, _mm_mul_ps(zmm1_1, zmm3_1)), zmm2_1)
            zmm2_1 = rax_69[1]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm15_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm15_1, zmm5_2), zmm0_1), zmm1_1), zmm2_1)
            zmm2_1 = rax_69[2]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm8_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm8_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm8_1, zmm5_2), zmm0_1), zmm1_1), 
                zmm2_1)
            zmm2_1 = rax_69[3]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm9_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm9_1 = _mm_mul_ps(zmm9_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            zmm9_1 = _mm_add_ps(zmm9_1, zmm0_1)
            zmm2_1 = _mm_mul_ps(zmm2_1, zmm6_1)
            zmm0_1.d = arg_20.d f- zmm12_1
            var_408_1.o = zmm8_1
            zmm9_1 = _mm_add_ps(zmm9_1, zmm1_1)
            zmm1_1 = zx.o(var_488_1)
            zmm1_1[0]
            arg_20 = zmm0_1.d
            zmm0_1.d = arg_18.d f- rax_51
            zmm9_1 = _mm_add_ps(zmm9_1, zmm2_1)
            arg_18 = zmm0_1.d
            zmm0_1.d = var_4b8_1.d f- zmm1_1[0]
            var_3f8_1.o = zmm9_1
            uint64_t var_4b8_2 = zmm0_1.q
            zmm0_1.d = var_5a8_1.d f- zmm12_1
            int32_t var_5a8_2 = zmm0_1.d
            zmm0_1.d = var_5a4_1.d f- rax_51
            int32_t var_5a4_2 = zmm0_1.d
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_318, &var_118)
            zmm5_2[0] = zmm7[0]
            zmm2 = *result
            uint128_t zmm4_3
            zmm4_3.d = var_4b8_2.d
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_3[0] = arg_20[0]
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xe1)
            zmm4_3.d = var_5a8_2.d
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = arg_18.d
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3.d = var_5a4_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            zmm1 = _mm_mul_ps(zmm1, zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_4e8 = zmm5_3
            var_4f8 = zmm4_3
            zmm1 = _mm_add_ps(zmm1, _mm_mul_ps(zmm0, zmm4_3))
            zmm3.d = var_488_1.d
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = zmm12.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            var_528_1.o = zmm1
            zmm3.d = rax_51.d
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_4d8 = zmm3
            zmm0 = _mm_add_ps(_mm_add_ps(var_528_1.o, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x10)
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            var_528_1.o = zmm0
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm6)
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
            zmm2 = *(result + 0x20)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_4b8_2.o = zmm7
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm6)
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
            zmm12 = zx.o(0)
            zmm2 = *(result + 0x30)
            var_488_1.o = zmm7
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm6)
            var_4a8_2.o = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
            
            if (var_14d == 0)
                zmm9 = 0x322bcc77
            else
                zmm2 = data_142d4cc00
                var_5c8.q = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm8)
                var_5c0.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm6 = _mm_mul_ps(zmm6, zmm9)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm10)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6 = zx.o(0)
                    zmm7 = zx.o(0)
                    zmm8 = zx.o(0)
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
                    zmm6[0] = zmm6[0] * zmm5_3[0]
                    zmm7[0] = zmm7[0] * zmm5_3[0]
                    zmm8.d = zmm8.d f* zmm5_3[0]
                
                float var_594_1 = zmm7[0]
                float var_598 = zmm6[0]
                int32_t var_590_1 = zmm8.d
                int32_t var_39c_1 = 0
                float var_3a8[0x4]
                var_3a8[0] = zmm6[0]
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(var_3a8, var_3a8, 0xe1)
                zmm2[0] = zmm7[0]
                var_5c0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8.d
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3a8 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
                var_5c0.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm8 = zmm14
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0)))
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
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_488_1.o)
                zmm4_3.d = zmm4_3.d f+ zmm1[0]
                zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                zmm7[0] = zmm7[0] f* zmm4_3.d
                float var_590_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_4a8_2.o)
                zmm6[0] = zmm6[0] f* zmm4_3.d
                var_598 = zmm7[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3.d
                float var_594_2 = zmm6[0]
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_4b8_2.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_528_1.o)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                
                if (zmm6[0] <= 9.99999994e-09f)
                    zmm5_3 = zx.o(0)
                    zmm6 = zx.o(0)
                    zmm7 = zx.o(0)
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
                
                int32_t var_38c_1 = 0
                float var_398[0x4]
                var_398[0] = zmm5_3[0]
                int32_t var_5e8_2 = zmm11.d
                zmm2 = _mm_shuffle_ps(var_398, var_398, 0xe1)
                zmm2[0] = zmm6[0]
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm7[0]
                var_5c0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_398 = zmm2
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0x160))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x180))
                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0x150))
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
                int32_t* rax_70
                rax_70, r9_7, zmm9, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_13c, &var_598, &var_598, r9_7.d)
                void* var_1d0
                int32_t* rdx_31 = var_1d0
                var_598.q = *rax_70
                zmm2 = rax_70[2]
                int32_t var_1dc
                var_1d0 = &rdx_31[sx.q(var_1dc)]
                *rdx_31 = var_598.d
                void* var_1b8
                float* rdx_32 = var_1b8
                int32_t var_1c4
                var_1b8 = &rdx_32[sx.q(var_1c4)]
                *rdx_32 = var_594_2[0]
                void* var_1a0
                float* rdx_33 = var_1a0
                int32_t result_4
                result = sx.q(result_4)
                zmm8 = var_408_1.o
                var_1a0 = &rdx_33[result]
                *rdx_33 = zmm2[0]
                rbx_9 = var_14c
            
            if (rbx_9 != 0)
                zmm2 = data_142d4cc20
                var_5c8.q = 0
                zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_3f8_1.o)
                var_5c0.d = 0
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm8)
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, _mm_mul_ps(zmm2, zmm10)))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] f<= zmm9.d)
                    zmm0 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm5_3 = zx.o(0)
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
                int32_t var_37c_1 = 0
                float var_388[0x4]
                var_388[0] = zmm0.d
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(var_388, var_388, 0xe1)
                zmm2[0] = zmm1[0]
                var_5c0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm5_3[0]
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_388 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
                var_5c0.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm8 = zmm14
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0)))
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
                int32_t var_574_2 = zmm0.d
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_3f8_1.o)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                var_578 = zmm1[0]
                int32_t var_570_2 = zmm4_3.d
                zmm0 = __mulps_xmmps_memps(zmm0, var_408_1.o)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm15)
                zmm5_3 = _mm_add_ps(_mm_add_ps(zmm5_3, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm10)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm6[0] = zmm6[0] f+ zmm0.d
                
                if (zmm6[0] f<= zmm9.d)
                    zmm0 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm4_3 = zx.o(0)
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
                
                int32_t var_36c_1 = 0
                float var_378[0x4]
                var_378[0] = zmm0.d
                int32_t var_5e8_3 = zmm11.d
                zmm2 = _mm_shuffle_ps(var_378, var_378, 0xe1)
                zmm2[0] = zmm1[0]
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm4_3.d
                var_5c0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_378 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0x170))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0x160))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0x150)))
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
                zmm7[0] = zmm7[0] f* zmm4_3.d
                zmm6[0] = zmm6[0] f* zmm4_3.d
                zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                float var_458 = zmm7[0]
                float var_454_1 = zmm6[0]
                float var_450_1 = zmm5_3[0]
                arg_10 = zmm4_3.d
                int32_t var_130[0x6]
                int32_t* rax_74
                rax_74, zmm12 = sub_140ae34d0(&var_130, &var_458, &var_578, r9_7.d)
                void* var_188
                int32_t* rdx_35 = var_188
                var_578.q = *rax_74
                zmm2 = rax_74[2]
                int32_t var_194
                var_188 = &rdx_35[sx.q(var_194)]
                *rdx_35 = var_578.d
                void* var_170
                float* rdx_36 = var_170
                int32_t var_17c
                var_170 = &rdx_36[sx.q(var_17c)]
                *rdx_36 = var_574_2[0]
                void* var_158
                float* rdx_37 = var_158
                int32_t result_5
                result = sx.q(result_5)
                var_158 = &rdx_37[result]
                *rdx_37 = zmm2[0]
        
        rcx_17 = var_328_1
        cond:4_1 = var_544 + 1 s< *(arg2 + 0x40)
        r9_6 = var_360_1
        r10_2 = var_348_1
        r11_5 = var_350_1
        rbx_3 = var_358_1
        var_544 += 1
        r8_2 = rcx_19
    while (cond:4_1)

return result
