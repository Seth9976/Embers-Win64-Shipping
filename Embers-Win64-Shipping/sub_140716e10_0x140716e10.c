// 函数: sub_140716e10
// 地址: 0x140716e10
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
int32_t* r15 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r12_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
void* rdx_4

if ((not.b(r12_1) & 1) == 0)
    rdx_4 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int64_t rdx_2 = 0
        
        do
            i_1 -= *(r8 + rdx_2)
            rax_7 += 1
            rdx_2 = rax_7 << 2
            r9 += 1
        while (i_1 s>= *(r8 + rdx_2))
    
    rdx_4 = sx.q(i_1) + *(r10 + (sx.q(r9) << 3))

uint32_t rax_9 = zx.d(rax[2])
void* var_478 = rdx_4
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
void* var_480 = rdx_9
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
uint8_t rdi_1 = (rcx_5 u>> 0xf).b
int32_t i_4 = rcx_5 & 0x7fff
void* var_488 = rdx_14
void* rdx_19

if ((not.b(rdi_1) & 1) == 0)
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

void* var_490 = rdx_19
void var_288
sub_140742680(&var_288, arg2)

if (sub_140d3c6e0(r15) != 0)
    sub_142591550()

void* rax_22 = *(r15 + 0x58)
void* var_4d0 = nullptr
void* rax_25

if (rax_22 != 0)
    rax_25 = *(**(rax_22 + 0x58) + (sx.q(r15[0x1a]) << 3))
    var_4d0 = rax_25
    
    if (r15[0x86].b != 0)
        void* rax_26 = sub_140d3c6e0(r15)
        
        if (rax_26 != 0)
            void* rax_27 = sub_142591550()
            void* rcx_10 = *(rax_26 + 0x10)
            int64_t rdx_23 = sx.q(*(rax_27 + 0x38))
            
            if (rdx_23.d s<= *(rcx_10 + 0x38)
                    && *(*(rcx_10 + 0x30) + (rdx_23 << 3)) == rax_27 + 0x30
                    && *(rax_26 + 0x430) != 0)
                sub_141f66050(rax_26, r15[0x1a])
        
        rax_25 = var_4d0

int64_t* rcx_13

if (rax_22 == 0 || rax_25 == 0)
    rcx_13 = nullptr
else
    rcx_13 = *(rax_25 + 0x18)

void* rax_29 = *(r15 + 0x70)
int32_t rbx_2 = (*(r15 + 0x68)).d
int32_t rax_31 = (*(*rcx_13 + 0x58))(rcx_13)
float zmm2[0x4] = 0x3f800000
float zmm0[0x4] = 0x3f800000
zmm0[0] = 1f f/ r15[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_31)
float var_498 = zmm0[0]
char result_6
uint64_t result = zx.q(result_6)
int32_t r11_5 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_494 = r11_5
char var_120
char var_11e
char var_11d
char var_11c
char arg_10
char arg_18

if (var_120 != 0 || result.b != 0 || var_11e != result.b || var_11d != result.b
        || var_11c != result.b)
    arg_10 = 1
    
    if (result.b != 0)
        arg_18 = 1
    else
        arg_18 = result.b
else
    arg_10 = result.b
    arg_18 = result.b

int32_t var_4c8 = 0

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    float zmm13[0x4] = arg_10.d
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    uint128_t zmm15 = zx.o(0)
    float var_2c8_1 = arg_10.d[0]
    float var_2b8_1 = arg_10.d[0]
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int64_t var_470_1 = (arg_10.d).q
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int64_t var_4a8_1 = (arg_10.d).q
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint64_t rdx_27 = zx.q(rdi_1) << 2
    uint64_t r8_2 = zx.q(rsi_1) << 2
    uint64_t r9_5 = zx.q(r14_1) << 2
    int64_t var_4b8_1 = (arg_10.d).q
    int64_t var_4b0_1 = (arg_10.d).q
    uint64_t r10_2 = zx.q(r12_1) << 2
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int64_t var_4c0_1 = (arg_10.d).q
    uint64_t var_3a0_1 = rdx_27
    uint64_t var_3a8_1 = r8_2
    uint64_t var_358_1 = r9_5
    uint64_t var_3b0_1 = r10_2
    int64_t var_4a0_1 = (arg_10.d).q
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    bool cond:6_1
    
    do
        float (* rcx_15)[0x4] = var_490
        int32_t* rdx_28 = var_478
        var_490 = rcx_15 + rdx_27
        float (* rcx_17)[0x4] = var_488
        float var_2a0_1 = (*rcx_15)[0]
        var_488 = rcx_17 + r8_2
        float (* rcx_19)[0x4] = var_480
        var_480 = rcx_19 + r9_5
        var_478 = rdx_28 + r10_2
        uint64_t rdx_30 = zx.q(*rdx_28)
        int64_t var_464_1 = (_mm_unpacklo_ps(*rcx_19, (*rcx_17)[0].q)).q
        
        if (rdx_30.d s< 0 || rdx_30.d s> r11_5)
            int32_t var_294_1 = 0
            int64_t var_364_1 = (_mm_unpacklo_ps(zmm2, zmm15.q)).q
            int32_t var_35c_1 = 0
            rdx_30 = zx.q(0.o[0])
        
        uint32_t rdi_2 = (rdx_30 * 3).d
        int32_t rax_39 = (*(*rcx_13 + 0x68))(rcx_13, zx.q(rdi_2))
        int64_t r8_3 = *rcx_13
        uint64_t rsi_2 = zx.q(rax_39)
        int32_t rax_40 = (*(r8_3 + 0x68))(rcx_13, zx.q(rdi_2 + 1), r8_3)
        int64_t r8_4 = *rcx_13
        int64_t r12_2 = sx.q(rax_40)
        result = (*(r8_4 + 0x68))(rcx_13, zx.q(rdi_2 + 2), r8_4)
        int64_t r11_6 = sx.q(result.d)
        int64_t r10_3 = sx.q(rsi_2.d)
        float var_4dc
        float var_4d8
        float var_4d4
        
        if (arg_10 != 0)
            int64_t r8_7 =
                *(sx.q(rbx_2) * 0x38 + *(rax_29 + 0x80) + sx.q(*(rax_29 + 0x34)) * 0x10 + 8)
            int64_t rcx_27 = r10_3 * 3
            zmm8 = zx.o(*(r8_7 + (rcx_27 << 2)))
            int32_t rax_41 = *(r8_7 + (rcx_27 << 2) + 8)
            zmm7 = zmm8
            int64_t rcx_28 = r12_2 * 3
            var_4b8_1 = (_mm_shuffle_ps(zmm7, zmm7, 0x55)).q
            int32_t rax_42 = *(r8_7 + (rcx_28 << 2) + 8)
            var_4c0_1 = zmm8.q
            zmm8 = zx.o(*(r8_7 + (rcx_28 << 2)))
            int64_t rcx_29 = r11_6 * 3
            zmm7 = zmm8
            result = zx.q(*(r8_7 + (rcx_29 << 2) + 8))
            var_4a0_1 = (_mm_shuffle_ps(zmm7, zmm7, 0x55)).q
            zmm7 = zx.o(*(r8_7 + (rcx_29 << 2)))
            var_4dc = rax_41[0]
            var_4a8_1 = zmm8.q
            var_470_1 = (_mm_shuffle_ps(zmm7, zmm7, 0x55)).q
            var_4d4 = rax_42[0]
            var_4d8 = result.d[0]
            var_4b0_1 = zmm7.q
        
        zmm11 = var_2a0_1
        zmm12 = var_464_1:4.d
        zmm14 = var_464_1.d
        float zmm1[0x4]
        uint128_t zmm3
        uint128_t zmm4_1
        uint128_t zmm5_1
        
        if (arg_18 != 0)
            zmm2 = zmm12
            zmm8 = zmm11
            int32_t var_41c_1 = 0x3f800000
            int64_t var_4f8_1 = 0
            int32_t var_4f0_1 = 0
            int64_t rdx_38 =
                *(sx.q(rbx_2) * 0x38 + *(rax_29 + 0x80) + (sx.q(*(rax_29 + 0x34)) ^ 1) * 0x10 + 8)
            int64_t rcx_31 = r12_2 * 3
            int64_t rax_45 = r10_3 * 3
            zmm10 = zx.o(*(rdx_38 + (rax_45 << 2)))
            zmm5_1 = zx.o(*(rdx_38 + (rcx_31 << 2)))
            zmm4_1.d = zmm12.d f* zmm5_1.d
            zmm6.d = zmm14.d f* *(rdx_38 + (rax_45 << 2) + 8)
            int32_t rax_47 = *(rdx_38 + (rcx_31 << 2) + 8)
            int64_t rcx_32 = r11_6 * 3
            zmm1 = zx.o(*(rdx_38 + (rcx_32 << 2)))
            zmm9.d = zmm11.d f* zmm1[0]
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm1 = zmm14
            zmm2[0] = zmm2[0] f* rax_47
            result = zx.q(*(rdx_38 + (rcx_32 << 2) + 8))
            zmm8[0] = zmm8[0] * zmm0[0]
            zmm0 = zmm5_1
            zmm6.d = zmm6.d f+ zmm2[0]
            zmm7.d = zmm11.d f* result.d
            zmm3.d = zmm12.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            zmm0 = zmm10
            zmm1[0] = zmm1[0] f* zmm10.d
            zmm6.d = zmm6.d f+ zmm7.d
            zmm5_1.d = zmm14.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            zmm4_1.d = zmm4_1.d f+ zmm1[0]
            zmm5_1.d = zmm5_1.d f+ zmm3.d
            zmm9.d = zmm9.d f+ zmm4_1.d
            zmm5_1.d = zmm5_1.d f+ zmm8[0]
            float var_428[0x4]
            var_428[0] = zmm9.d
            zmm13 = _mm_shuffle_ps(var_428, var_428, 0xe1)
            zmm13[0] = zmm5_1.d
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xc6)
            zmm13[0] = zmm6.d
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
            var_428 = zmm13
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm13, zmm13, 0x55), *(r15 + 0x160))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm13, zmm13, 0), *(r15 + 0x150))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm13, zmm13, 0xff), *(r15 + 0x180))
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm13 = _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(zmm13, *(r15 + 0x170)), zmm2), zmm1)
            var_2b8_1 = _mm_shuffle_ps(zmm13, zmm13, 0x55).d
            var_2c8_1 = _mm_shuffle_ps(zmm13, zmm13, 0xaa).d
        
        if (var_120 != 0 || result_6 != 0)
            void* var_278
            int32_t* rdx_39 = var_278
            zmm0 = zmm12
            zmm0[0] = zmm0[0] * var_4d4
            zmm1 = zmm12
            zmm8 = zx.o(var_4a8_1)
            zmm6 = zx.o(var_4a0_1)
            zmm2 = zmm14
            zmm2[0] = zmm2[0] f* var_4b8_1.d
            zmm4_1 = zmm11
            int32_t var_40c_1 = 0x3f800000
            zmm7 = zx.o(var_4b0_1)
            zmm5_1.d = zmm14.d f* var_4dc
            int64_t var_4f8_2 = 0
            zmm14.d = zmm14.d f* var_4c0_1.d
            int32_t var_4f0_2 = 0
            zmm9 = var_4d8
            zmm5_1.d = zmm5_1.d f+ zmm0[0]
            zmm10 = zx.o(var_470_1)
            zmm3.d = zmm11.d f* zmm9.d
            zmm1[0] = zmm1[0] f* zmm6.d
            zmm5_1.d = zmm5_1.d f+ zmm3.d
            zmm12.d = zmm12.d f* zmm8[0]
            zmm2[0] = zmm2[0] + zmm1[0]
            zmm11.d = zmm11.d f* zmm7.d
            zmm12.d = zmm12.d f+ zmm14.d
            zmm4_1.d = zmm4_1.d f* zmm10.d
            zmm2[0] = zmm2[0] f+ zmm4_1.d
            zmm11.d = zmm11.d f+ zmm12.d
            zmm3.d = zmm11.d
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = zmm2[0]
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = zmm5_1.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_418 = zmm3
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r15 + 0xe0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r15 + 0xd0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r15 + 0x100))
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm1 = _mm_add_ps(zmm1, zmm0)
            int32_t var_284
            var_278 = &rdx_39[sx.q(var_284)]
            zmm3 = _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(zmm3, *(r15 + 0xf0)), zmm2), zmm1)
            *rdx_39 = zmm3.d
            void* var_260
            float* rdx_40 = var_260
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            int32_t var_26c
            var_260 = &rdx_40[sx.q(var_26c)]
            *rdx_40 = zmm1[0]
            void* var_248
            float* rdx_41 = var_248
            int32_t result_1
            result = sx.q(result_1)
            var_248 = &rdx_41[result]
            *rdx_41 = zmm2[0]
            
            if (result_6 != 0)
                void* var_230
                float* rdx_42 = var_230
                zmm3.d = zmm3.d f- zmm13[0]
                zmm0 = var_498
                zmm2[0] = zmm2[0] - var_2c8_1
                zmm1[0] = zmm1[0] - var_2b8_1
                int32_t var_23c
                var_230 = &rdx_42[sx.q(var_23c)]
                zmm2[0] = zmm2[0] * zmm0[0]
                zmm1[0] = zmm1[0] * zmm0[0]
                zmm0[0] = zmm0[0] f* zmm3.d
                *rdx_42 = zmm0[0]
                void* var_218
                float* rdx_43 = var_218
                int32_t var_224
                var_218 = &rdx_43[sx.q(var_224)]
                *rdx_43 = zmm1[0]
                void* var_200
                float* rdx_44 = var_200
                int32_t result_2
                result = sx.q(result_2)
                var_200 = &rdx_44[result]
                *rdx_44 = zmm2[0]
        else
            zmm10 = zx.o(var_470_1)
            zmm6 = zx.o(var_4a0_1)
            zmm7 = zx.o(var_4b0_1)
            zmm8 = zx.o(var_4a8_1)
            zmm9 = var_4d8
        
        zmm14 = var_4dc
        zmm11 = zx.o(var_4b8_1)
        zmm12 = zx.o(var_4c0_1)
        
        if (var_11e != 0)
            zmm6.d = zmm6.d f- zmm10.d
            zmm3.d = var_4d4.d f- zmm9.d
            zmm4_1.d = zmm11.d f- zmm10.d
            zmm2 = zmm12
            zmm2[0] = zmm2[0] f- zmm7.d
            zmm8[0] = zmm8[0] f- zmm7.d
            zmm5_1.d = zmm14.d f- zmm9.d
            zmm0 = zmm6
            zmm9 = zmm3
            zmm3.d = zmm3.d f* zmm4_1.d
            zmm0[0] = zmm0[0] * zmm2[0]
            zmm9.d = zmm9.d f* zmm2[0]
            zmm7.d = zmm4_1.d f* zmm8[0]
            zmm6.d = zmm6.d f* zmm5_1.d
            zmm7.d = zmm7.d f- zmm0[0]
            zmm0 = zmm5_1
            zmm0[0] = zmm0[0] * zmm8[0]
            zmm6.d = zmm6.d f- zmm3.d
            zmm9.d = zmm9.d f- zmm0[0]
            zmm1 = zmm7
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm2 = zmm6
            zmm2[0] = zmm2[0] f* zmm6.d
            zmm0 = zmm9
            zmm0[0] = zmm0[0] f* zmm9.d
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] + zmm1[0]
            float var_430_1
            
            if (not(zmm2[0] != 1f))
                var_430_1 = zmm7.d
            else if (zmm2[0] >= 9.99999994e-09f)
                zmm1 = 0x3f000000
                zmm3.d = zmm2[0]
                zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0 = zmm5_1
                zmm0[0] = zmm0[0] f* zmm5_1.d
                zmm2 = zmm3
                zmm2[0] = zmm2[0] * zmm0[0]
                zmm0 = zmm5_1
                zmm1[0] = 0.5f - zmm2[0]
                zmm0[0] = zmm0[0] * zmm1[0]
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm0 = zmm5_1
                zmm0[0] = zmm0[0] f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm0[0]
                zmm0 = zmm5_1
                zmm4_1.d = 0.5f f- zmm3.d
                zmm0[0] = zmm0[0] f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm0 = zmm5_1
                int32_t var_504_1 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0[0] = zmm0[0] f* zmm7.d
                zmm1[0] = zmm1[0] f* zmm9.d
                var_430_1 = zmm0[0]
                zmm7 = zmm0
                zmm6.d = zmm6.d f* zmm5_1.d
                zmm9 = zmm1
            else
                zmm7 = data_143dbb200
                zmm6 = data_143dbb1f8
                zmm9 = data_143dbb1fc
                var_430_1 = zmm7.d
            
            void* var_1e8
            float* rdx_45 = var_1e8
            int64_t var_458_1 = (_mm_unpacklo_ps(zmm6, zmm9.q)).q
            float var_450_1 = var_430_1
            int32_t var_3fc_1 = 0
            float var_408[0x4]
            var_408[0] = zmm6.d
            int64_t var_4f8_3 = 0
            zmm8 = _mm_shuffle_ps(var_408, var_408, 0xe1)
            zmm8[0] = zmm9.d
            int32_t var_4f0_3 = 0
            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xc6)
            zmm8[0] = zmm7.d
            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            var_408 = zmm8
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0x55), *(r15 + 0xe0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xff), *(r15 + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), *(r15 + 0xd0))
            zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xaa), *(r15 + 0xf0))
            int32_t var_1f4
            var_1e8 = &rdx_45[sx.q(var_1f4)]
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm8 = _mm_add_ps(_mm_add_ps(zmm8, zmm2), zmm1)
            zmm1 = 0x3f000000
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm2 = zmm7
            zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm2[0] = zmm2[0] f* zmm7.d
            zmm2[0] = zmm2[0] + zmm8[0]
            zmm0 = zmm6
            zmm0[0] = zmm0[0] f* zmm6.d
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm3.d = zmm2[0]
            zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0 = zmm5_1
            zmm0[0] = zmm0[0] f* zmm5_1.d
            zmm2 = zmm3
            zmm2[0] = zmm2[0] * zmm0[0]
            zmm0 = zmm5_1
            zmm1[0] = 0.5f - zmm2[0]
            zmm0[0] = zmm0[0] * zmm1[0]
            zmm5_1.d = zmm5_1.d f+ zmm0[0]
            zmm0 = zmm5_1
            zmm0[0] = zmm0[0] f* zmm5_1.d
            zmm3.d = zmm3.d f* zmm0[0]
            zmm0 = zmm5_1
            zmm4_1.d = 0.5f f- zmm3.d
            zmm0[0] = zmm0[0] f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f+ zmm0[0]
            zmm8[0] = zmm8[0] f* zmm5_1.d
            zmm6.d = zmm6.d f* zmm5_1.d
            zmm7.d = zmm7.d f* zmm5_1.d
            var_458_1.d = zmm8[0]
            int32_t var_450_2 = zmm6.d
            var_458_1:4.d = zmm7.d
            *rdx_45 = zmm8[0]
            void* var_1d0
            int32_t* rdx_46 = var_1d0
            int32_t var_504_2 = zmm5_1.d
            int32_t var_1dc
            var_1d0 = &rdx_46[sx.q(var_1dc)]
            *rdx_46 = zmm7.d
            void* var_1b8
            int32_t* rdx_47 = var_1b8
            int32_t result_3
            result = sx.q(result_3)
            var_1b8 = &rdx_47[result]
            *rdx_47 = zmm6.d
        
        if (var_11d != 0 || var_11c != 0)
            int16_t* r14_5 = rsi_2 * (zx.q(*(var_4d0 + 0xa8)) << 2) + *(var_4d0 + 0x98)
            uint32_t rdi_4 = zx.d(r14_5[1])
            int32_t rsi_5 = (rdi_4 & 0xffff8000) << 0x10
            int32_t var_4e4_1
            TEB* gsbase
            
            if ((0x7c00 & rdi_4.w) == 0)
                int32_t rdi_5 = rdi_4 & 0x3ff
                
                if (rdi_5 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rdi_5))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_49 = 0xa - int.d(zmm0[0])
                    var_4e4_1 = (rdi_5 << (rdx_49.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_49) << 0x17 & 0x7f800000) | rsi_5
                else
                    var_4e4_1 = rsi_5
            else if ((rdi_4.w & 0x7c00) != 0x7c00)
                var_4e4_1 = ((rdi_4 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_4 & 0x3ff) << 0xd | rsi_5
            else
                var_4e4_1 = rsi_5 | 0x477fe000
            
            uint32_t rdi_12 = zx.d(*r14_5)
            int32_t rsi_9 = (rdi_12 & 0xffff8000) << 0x10
            int32_t var_4e8_1
            
            if ((0x7c00 & rdi_12.w) == 0)
                int32_t rdi_13 = rdi_12 & 0x3ff
                
                if (rdi_13 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rdi_13))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_51 = 0xa - int.d(zmm0[0])
                    var_4e8_1 = (rdi_13 << (rdx_51.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_51) << 0x17 & 0x7f800000) | rsi_9
                else
                    var_4e8_1 = rsi_9
            else if ((rdi_12.w & 0x7c00) != 0x7c00)
                var_4e8_1 =
                    ((rdi_12 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_12 & 0x3ff) << 0xd | rsi_9
            else
                var_4e8_1 = rsi_9 | 0x477fe000
            
            int16_t* r14_8 = zx.q(r12_2.d) * (zx.q(*(var_4d0 + 0xa8)) << 2) + *(var_4d0 + 0x98)
            uint32_t rdi_20 = zx.d(r14_8[1])
            int32_t rsi_13 = (rdi_20 & 0xffff8000) << 0x10
            int32_t var_504_3
            
            if ((0x7c00 & rdi_20.w) == 0)
                int32_t rdi_21 = rdi_20 & 0x3ff
                
                if (rdi_21 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rdi_21))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_53 = 0xa - int.d(zmm0[0])
                    var_504_3 = (rdi_21 << (rdx_53.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_53) << 0x17 & 0x7f800000) | rsi_13
                else
                    var_504_3 = rsi_13
            else if ((rdi_20.w & 0x7c00) != 0x7c00)
                var_504_3 =
                    ((rdi_20 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_20 & 0x3ff) << 0xd | rsi_13
            else
                var_504_3 = rsi_13 | 0x477fe000
            
            uint32_t rdi_28 = zx.d(*r14_8)
            int32_t rsi_17 = (rdi_28 & 0xffff8000) << 0x10
            int32_t var_4e0_1
            
            if ((0x7c00 & rdi_28.w) == 0)
                int32_t rdi_29 = rdi_28 & 0x3ff
                
                if (rdi_29 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rdi_29))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_55 = 0xa - int.d(zmm0[0])
                    var_4e0_1 = (rdi_29 << (rdx_55.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_55) << 0x17 & 0x7f800000) | rsi_17
                else
                    var_4e0_1 = rsi_17
            else if ((rdi_28.w & 0x7c00) != 0x7c00)
                var_4e0_1 =
                    ((rdi_28 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_28 & 0x3ff) << 0xd | rsi_17
            else
                var_4e0_1 = rsi_17 | 0x477fe000
            
            int16_t* r14_11 = zx.q(r11_6.d) * (zx.q(*(var_4d0 + 0xa8)) << 2) + *(var_4d0 + 0x98)
            uint64_t r12_4 = zx.q(data_14401b1a0)
            uint32_t rdi_36 = zx.d(r14_11[1])
            int32_t rsi_21 = (rdi_36 & 0xffff8000) << 0x10
            int32_t var_508_2
            
            if ((0x7c00 & rdi_36.w) == 0)
                int32_t rdi_37 = rdi_36 & 0x3ff
                
                if (rdi_37 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_4 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rdi_37))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_56 = 0xa - int.d(zmm0[0])
                    var_508_2 = (rdi_37 << (rdx_56.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_56) << 0x17 & 0x7f800000) | rsi_21
                else
                    var_508_2 = rsi_21
            else if ((rdi_36.w & 0x7c00) != 0x7c00)
                var_508_2 =
                    ((rdi_36 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_36 & 0x3ff) << 0xd | rsi_21
            else
                var_508_2 = rsi_21 | 0x477fe000
            
            uint32_t rdi_44 = zx.d(*r14_11)
            float rsi_25 = (rdi_44 & 0xffff8000) << 0x10
            float arg_20
            
            if ((0x7c00 & rdi_44.w) == 0)
                int32_t rdi_45 = rdi_44 & 0x3ff
                
                if (rdi_45 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_4 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rdi_45))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_57 = 0xa - int.d(zmm0[0])
                    arg_20 = (rdi_45 << (rdx_57.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_57) << 0x17 & 0x7f800000) | rsi_25
                else
                    arg_20 = rsi_25
            else if ((rdi_44.w & 0x7c00) != 0x7c00)
                arg_20 = ((rdi_44 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_44 & 0x3ff) << 0xd | rsi_25
            else
                arg_20 = rsi_25 | 0x477fe000
            
            zmm4_1 = var_4e4_1
            zmm5_1 = var_4e8_1
            zmm0 = var_504_3
            zmm0[0] = zmm0[0] f- zmm4_1.d
            zmm2 = var_508_2
            zmm3.d = arg_20.d f- zmm5_1.d
            zmm1 = var_4e0_1
            zmm2[0] = zmm2[0] f- zmm4_1.d
            zmm1[0] = zmm1[0] f- zmm5_1.d
            zmm7.d = zmm10.d f- zmm11.d
            zmm6.d = var_4b0_1.d f- zmm12.d
            zmm8 = var_4d8
            zmm10.d = var_4a0_1.d f- zmm11.d
            zmm9.d = var_4a8_1.d f- zmm12.d
            zmm12 = data_142d3f660
            zmm8[0] = zmm8[0] f- zmm14.d
            float var_304_1 = zmm0[0]
            zmm11.d = var_4d4.d f- zmm14.d
            float var_308 = zmm1[0]
            float var_2d8_1[0x4] = zmm12
            int32_t var_2f8_1 = zmm3.d
            float var_2f4_1 = zmm2[0]
            int32_t var_2e8_1 = zmm5_1.d
            int32_t var_2e4_1 = zmm4_1.d
            int32_t var_33c_1 = 0
            int32_t var_32c_1 = 0
            int32_t var_31c_1 = 0
            int64_t var_300_1 = 0
            int64_t var_2f0_1 = 0
            int64_t var_2e0_1 = 0x3f800000
            uint32_t var_118[0x4][0x4]
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
                sub_140631b10(&var_308, &var_118)
            float var_338[0x4]
            var_338[0] = zmm6.d
            uint128_t zmm4_2
            zmm4_2.d = zmm9.d
            zmm2 = *result
            float zmm5_2[0x4] = _mm_shuffle_ps(var_338, var_338, 0xe1)
            zmm14 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7.d
            _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_2.d = zmm10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm5_2[0] = zmm8[0]
            _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2.d = zmm11.d
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm14 = _mm_mul_ps(zmm14, zmm5_2)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            var_338 = zmm5_2
            uint128_t var_348 = zmm4_2
            zmm14 = _mm_add_ps(zmm14, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm12)
            zmm3.d = zx.o(var_4c0_1)[0]
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = zx.o(var_4b8_1)[0]
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = var_4dc[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_328 = zmm3
            zmm14 = _mm_add_ps(_mm_add_ps(zmm14, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x10)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x20)
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x30)
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
            
            if (var_11d != 0)
                zmm2 = data_142d4cc00
                int64_t var_4f8_4 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_4f0_4 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0 = zmm6
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm1[0] = zmm1[0] + zmm8[0]
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm6 = zmm15
                    zmm7 = zmm15
                    zmm8 = zmm15
                else
                    zmm3.d = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] * zmm5_2[0]
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm5_2[0] = zmm5_2[0] * zmm2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm5_2[0]
                    zmm4_2.d = 0.5f f- zmm3.d
                    zmm5_2[0] = zmm5_2[0] f* zmm4_2.d
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    arg_20 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1a0
                float* rdx_59 = var_1a0
                int32_t var_3ec_1 = 0
                float var_3f8[0x4]
                var_3f8[0] = zmm6.d
                int64_t var_4f8_5 = 0
                zmm2 = _mm_shuffle_ps(var_3f8, var_3f8, 0xe1)
                zmm2[0] = zmm7.d
                int32_t var_4f0_5 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3f8 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r15 + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r15 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r15 + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_1ac
                var_1a0 = &rdx_59[sx.q(var_1ac)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r15 + 0xd0)))
                zmm2 = 0x3f000000
                zmm8 = _mm_add_ps(zmm8, zmm1)
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm8[0]
                zmm0 = zmm6
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm3.d = zmm1[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0 = zmm4_2
                zmm0[0] = zmm0[0] f* zmm4_2.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] * zmm0[0]
                zmm0 = zmm4_2
                zmm2[0] = 0.5f - zmm1[0]
                zmm0[0] = zmm0[0] * zmm2[0]
                zmm4_2.d = zmm4_2.d f+ zmm0[0]
                zmm1 = zmm4_2
                zmm0 = zmm4_2
                zmm1[0] = zmm1[0] f* zmm4_2.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm5_2[0] = 0.5f f- zmm3.d
                zmm0[0] = zmm0[0] * zmm5_2[0]
                zmm4_2.d = zmm4_2.d f+ zmm0[0]
                zmm8[0] = zmm8[0] f* zmm4_2.d
                zmm7.d = zmm7.d f* zmm4_2.d
                *rdx_59 = zmm8[0]
                void* var_188
                int32_t* rdx_60 = var_188
                zmm6.d = zmm6.d f* zmm4_2.d
                arg_20 = zmm4_2.d
                int32_t var_194
                var_188 = &rdx_60[sx.q(var_194)]
                *rdx_60 = zmm7.d
                void* var_170
                int32_t* rdx_61 = var_170
                int32_t result_4
                result = sx.q(result_4)
                var_170 = &rdx_61[result]
                *rdx_61 = zmm6.d
            
            if (var_11c != 0)
                zmm2 = data_142d4cc20
                int64_t var_4f8_6 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_4f0_6 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0 = zmm6
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm1[0] = zmm1[0] + zmm8[0]
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm6 = zmm15
                    zmm7 = zmm15
                    zmm8 = zmm15
                else
                    zmm3.d = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] * zmm5_2[0]
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm5_2[0] = zmm5_2[0] * zmm2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm5_2[0]
                    zmm4_2.d = 0.5f f- zmm3.d
                    zmm5_2[0] = zmm5_2[0] f* zmm4_2.d
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    arg_20 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_158
                float* rdx_62 = var_158
                int32_t var_3dc_1 = 0
                float var_3e8[0x4]
                var_3e8[0] = zmm6.d
                int64_t var_4f8_7 = 0
                zmm2 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
                zmm2[0] = zmm7.d
                int32_t var_4f0_7 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3e8 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r15 + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r15 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r15 + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_164
                var_158 = &rdx_62[sx.q(var_164)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r15 + 0xd0)))
                zmm2 = 0x3f000000
                zmm8 = _mm_add_ps(zmm8, zmm1)
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm8[0]
                zmm0 = zmm6
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm3.d = zmm1[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0 = zmm4_2
                zmm0[0] = zmm0[0] f* zmm4_2.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] * zmm0[0]
                zmm0 = zmm4_2
                zmm2[0] = 0.5f - zmm1[0]
                zmm0[0] = zmm0[0] * zmm2[0]
                zmm4_2.d = zmm4_2.d f+ zmm0[0]
                zmm1 = zmm4_2
                zmm0 = zmm4_2
                zmm1[0] = zmm1[0] f* zmm4_2.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm5_2[0] = 0.5f f- zmm3.d
                zmm0[0] = zmm0[0] * zmm5_2[0]
                zmm4_2.d = zmm4_2.d f+ zmm0[0]
                zmm8[0] = zmm8[0] f* zmm4_2.d
                zmm7.d = zmm7.d f* zmm4_2.d
                *rdx_62 = zmm8[0]
                void* var_140
                int32_t* rdx_63 = var_140
                zmm6.d = zmm6.d f* zmm4_2.d
                arg_20 = zmm4_2.d
                int32_t var_14c
                var_140 = &rdx_63[sx.q(var_14c)]
                *rdx_63 = zmm7.d
                int32_t* var_128
                int32_t* rdx_64 = var_128
                int32_t result_5
                result = sx.q(result_5)
                var_128 = &rdx_64[result]
                *rdx_64 = zmm6.d
        
        zmm2 = 0x3f800000
        cond:6_1 = var_4c8 + 1 s< *(arg2 + 0x40)
        rdx_27 = var_3a0_1
        r9_5 = var_358_1
        r10_2 = var_3b0_1
        r11_5 = var_494
        var_4c8 += 1
        r8_2 = var_3a8_1
    while (cond:6_1)

return result
