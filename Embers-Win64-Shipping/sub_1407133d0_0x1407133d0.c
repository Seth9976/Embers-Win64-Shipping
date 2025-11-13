// 函数: sub_1407133d0
// 地址: 0x1407133d0
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
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t var_4e0 = rax_6
rax_6.b = not.b(rax_6.b)
void* rdx_3

if ((rax_6.b & 1) == 0)
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
void* var_480 = rdx_3
uint8_t rax_10 = (rax_9 u>> 0xf).b
int32_t i_2 = rax_9 & 0x7fff
*(arg2 + 0x10) = &rax[3]
uint128_t* rdi_1

if ((not.b(rax_10) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
    
    rdi_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint8_t rax_14 = (rax_13 u>> 0xf).b
int32_t i_3 = rax_13 & 0x7fff
*(arg2 + 0x10) = &rax[4]
float (* r13_1)[0x4]

if ((not.b(rax_14) & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_3 s>= *r8)
        int64_t rax_15 = 0
        int32_t* rdx_7 = nullptr
        
        do
            i_3 -= *(rdx_7 + r8)
            rax_15 += 1
            rdx_7 = rax_15 << 2
            r9_3 += 1
        while (i_3 s>= *(rdx_7 + r8))
    
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
        int64_t rdx_8 = 0
        
        do
            i_4 -= *(r8 + rdx_8)
            rax_20 += 1
            rdx_8 = rax_20 << 2
            r9_4 += 1
        while (i_4 s>= *(r8 + rdx_8))
    
    r12_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

void var_288
sub_140742680(&var_288, arg2)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

void* rax_23 = *(rsi + 0x58)
void* var_440 = nullptr
void* r15_1

if (rax_23 != 0)
    r15_1 = *(**(rax_23 + 0x58) + (sx.q(rsi[0x1a]) << 3))
    var_440 = r15_1
    
    if (rsi[0x86].b != 0)
        void* rax_26 = sub_140d3c6e0(rsi)
        
        if (rax_26 != 0)
            void* rax_27 = sub_142591550()
            void* rcx_10 = *(rax_26 + 0x10)
            int64_t rdx_10 = sx.q(*(rax_27 + 0x38))
            
            if (rdx_10.d s<= *(rcx_10 + 0x38)
                    && *(*(rcx_10 + 0x30) + (rdx_10 << 3)) == rax_27 + 0x30
                    && *(rax_26 + 0x430) != 0)
                sub_141f66050(rax_26, rsi[0x1a])

int64_t* r15_2

if (rax_23 == 0 || r15_1 == 0)
    r15_2 = nullptr
else
    r15_2 = *(r15_1 + 0x18)

void* rax_29 = *(rsi + 0x70)
int32_t rbx_2 = (*(rsi + 0x68)).d
int32_t rax_31 = (*(*r15_2 + 0x58))(r15_2)
float zmm2[0x4] = 0x3f800000
uint128_t zmm0
zmm0.d = 1f f/ rsi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_31)
int32_t var_484 = zmm0.d
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_5 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_488 = r11_5
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
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint128_t zmm13 = zx.o(0)
    int32_t var_2c8_1 = arg_10.d.d
    float zmm15[0x4] = arg_10.d
    int64_t var_478_1 = (arg_10.d).q
    result = zx.q(arg_20.b) << 2
    uint64_t r8_2 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(rax_10) << 2
    int64_t var_4c0_1 = (arg_10.d).q
    uint64_t r10_2 = zx.q(var_4e0.b) << 2
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int32_t var_2b8_1 = arg_10.d.d
    uint64_t result_1 = result
    uint64_t var_3a0_1 = r8_2
    uint64_t var_398_1 = r9_6
    uint64_t var_390_1 = r10_2
    int64_t var_4a0_1 = (arg_10.d).q
    uint64_t var_498_1 = (arg_10.d).q
    int64_t var_490_1 = (arg_10.d).q
    int64_t var_4a8_1 = (arg_10.d).q
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    bool cond:8_1
    
    do
        uint128_t* rdx_13 = r12_1
        float (* rcx_15)[0x4] = r13_1
        r12_1 += result
        r13_1 += r8_2
        int32_t* rdx_14 = var_480
        int32_t var_294_1 = (*rdx_13).d
        var_480 = rdx_14 + r10_2
        uint64_t rdx_16 = zx.q(*rdx_14)
        uint64_t var_464_1 = (_mm_unpacklo_ps(*rdi_1, (*rcx_15)[0].q)).q
        
        if (rdx_16.d s< 0 || rdx_16.d s> r11_5)
            int32_t var_2a0_1 = 0
            uint64_t var_374_1 = (_mm_unpacklo_ps(zmm2, zmm13.q)).q
            int32_t var_36c_1 = 0
            rdx_16 = zx.q(0.o.d)
        
        uint32_t rdi_5 = (rdx_16 * 3).d
        int32_t rax_38 = (*(*r15_2 + 0x68))(r15_2, zx.q(rdi_5))
        int64_t r8_3 = *r15_2
        int32_t rax_39 = (*(r8_3 + 0x68))(r15_2, zx.q(rdi_5 + 1), r8_3)
        int64_t r8_4 = *r15_2
        int64_t r9_7 = sx.q(rax_38)
        uint64_t r11_6 = zx.q((*(r8_4 + 0x68))(r15_2, zx.q(rdi_5 + 2), r8_4))
        int32_t var_4dc
        int64_t r10_3
        uint128_t zmm10
        
        if (arg_10 == 0)
            r10_3 = zx.q(rax_39)
        else
            r10_3 = sx.q(rax_39)
            int64_t rdx_21 =
                *((sx.q(*(rax_29 + 0x34)) << 4) + sx.q(rbx_2) * 0x38 + *(rax_29 + 0x80) + 8)
            int64_t rcx_22 = r9_7 * 3
            zmm8 = zx.o(*(rdx_21 + (rcx_22 << 2)))
            zmm10 = zmm8
            int64_t rcx_23 = r10_3 * 3
            arg_20 = (*(rdx_21 + (rcx_22 << 2) + 8)).d
            zmm0 = *(rdx_21 + (rcx_23 << 2) + 8)
            var_4c0_1 = zmm8.q
            zmm8 = zx.o(*(rdx_21 + (rcx_23 << 2)))
            int64_t rcx_24 = sx.q(r11_6.d) * 3
            int32_t rax_44 = *(rdx_21 + (rcx_24 << 2) + 8)
            zmm7 = zmm8
            var_4a8_1 = (_mm_shuffle_ps(zmm7, zmm7, 0x55)).q
            zmm7 = zx.o(*(rdx_21 + (rcx_24 << 2)))
            var_4e0 = zmm0.d
            var_478_1 = (_mm_shuffle_ps(zmm7, zmm7, 0x55)).q
            var_4dc = rax_44.d
            var_490_1 = (_mm_shuffle_ps(zmm10, zmm10, 0x55)).q
            var_498_1 = zmm8.q
            var_4a0_1 = zmm7.q
        
        zmm12 = var_294_1
        uint128_t zmm14 = var_464_1:4.d
        zmm11 = var_464_1.d
        int64_t var_4d8
        float zmm1[0x4]
        float zmm3[0x4]
        float zmm4_1[0x4]
        uint128_t zmm5_1
        uint128_t zmm6
        uint128_t zmm9
        
        if (arg_18 != 0)
            zmm4_1 = zmm14
            zmm3 = zmm14
            int32_t var_41c_1 = 0x3f800000
            var_4d8 = 0
            int32_t var_4d0_1 = 0
            int64_t r8_8 =
                *(((sx.q(*(rax_29 + 0x34)) ^ 1) << 4) + sx.q(rbx_2) * 0x38 + *(rax_29 + 0x80) + 8)
            int64_t rax_47 = r9_7 * 3
            zmm7 = zx.o(*(r8_8 + (rax_47 << 2)))
            int32_t rax_48 = *(r8_8 + (rax_47 << 2) + 8)
            int64_t rcx_26 = sx.q(r10_3.d) * 3
            zmm2 = zx.o(*(r8_8 + (rcx_26 << 2)))
            int32_t rax_50 = *(r8_8 + (rcx_26 << 2) + 8)
            zmm4_1[0] = zmm4_1[0] * zmm2[0]
            zmm5_1.d = zmm14.d f* rax_50
            int64_t rcx_27 = sx.q(r11_6.d) * 3
            zmm1 = zx.o(*(r8_8 + (rcx_27 << 2)))
            int32_t rax_52 = *(r8_8 + (rcx_27 << 2) + 8)
            zmm0 = zmm1
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm12[0] = zmm12[0] f* zmm0.d
            zmm0 = zmm2
            zmm10.d = zmm12.d f* zmm1[0]
            zmm9.d = zmm12.d f* rax_52
            zmm11[0] = zmm11[0] f* rax_48
            zmm11[0] = zmm11[0] f* zmm7.d
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm5_1.d = zmm5_1.d f+ zmm11[0]
            zmm3[0] = zmm3[0] f* zmm0.d
            zmm11[0] = zmm11[0] + zmm4_1[0]
            zmm6.d = zmm11.d f* _mm_shuffle_ps(zmm7, zmm7, 0x55).d
            zmm9.d = zmm9.d f+ zmm5_1.d
            zmm10.d = zmm10.d f+ zmm11[0]
            zmm6.d = zmm6.d f+ zmm3[0]
            float var_428[0x4]
            var_428[0] = zmm10.d
            zmm2 = _mm_shuffle_ps(var_428, var_428, 0xe1)
            zmm6.d = zmm6.d f+ zmm12[0]
            zmm2[0] = zmm6.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm9.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_428 = zmm2
            zmm15 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rsi + 0x180))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rsi + 0x160))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rsi + 0x170))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rsi + 0x150))
            zmm15 = _mm_add_ps(_mm_add_ps(zmm15, zmm0), _mm_add_ps(zmm1, zmm2))
            var_2c8_1 = _mm_shuffle_ps(zmm15, zmm15, 0x55).d
            var_2b8_1 = _mm_shuffle_ps(zmm15, zmm15, 0xaa).d
        
        if (var_120 != 0 || result_2 != 0)
            void* var_278
            float* rdx_26 = var_278
            zmm11[0] = zmm11[0] f* var_4c0_1.d
            zmm11[0] = zmm11[0] f* arg_20
            zmm0 = zmm14
            int32_t var_40c_1 = 0x3f800000
            zmm6 = zx.o(var_498_1)
            zmm1 = zmm14
            zmm7 = zx.o(var_4a8_1)
            zmm10 = zx.o(var_490_1)
            zmm8 = zx.o(var_4a0_1)
            zmm9 = zx.o(var_478_1)
            zmm14.d = zmm14.d f* var_4e0
            var_4d8 = 0
            zmm12[0] = zmm12[0] f* var_4dc
            int32_t var_4d0_2 = 0
            zmm11[0] = zmm11[0] f* zmm10.d
            zmm11[0] = zmm11[0] f+ zmm14.d
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm0.d = zmm0.d f* zmm6.d
            zmm12[0] = zmm12[0] * zmm8[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            zmm11[0] = zmm11[0] + zmm1[0]
            zmm5_1.d = zmm12.d f* zmm9.d
            zmm11[0] = zmm11[0] f+ zmm0.d
            zmm5_1.d = zmm5_1.d f+ zmm11[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            float var_418[0x4]
            var_418[0] = zmm11[0]
            zmm2 = _mm_shuffle_ps(var_418, var_418, 0xe1)
            zmm2[0] = zmm5_1.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm11[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_418 = zmm2
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rsi + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rsi + 0xe0))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rsi + 0xf0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rsi + 0xd0))
            int32_t var_284
            var_278 = &rdx_26[sx.q(var_284)]
            zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm0), _mm_add_ps(zmm1, zmm2))
            *rdx_26 = zmm3[0]
            void* var_260
            int32_t* rdx_27 = var_260
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            int32_t var_26c
            var_260 = &rdx_27[sx.q(var_26c)]
            *rdx_27 = zmm0.d
            void* var_248
            float* rdx_28 = var_248
            int32_t var_254
            var_248 = &rdx_28[sx.q(var_254)]
            *rdx_28 = zmm1[0]
            
            if (result_2 != 0)
                void* var_230
                float* rdx_29 = var_230
                zmm3[0] = zmm3[0] - zmm15[0]
                zmm2 = var_484
                zmm0.d = zmm0.d f- var_2c8_1
                zmm1[0] = zmm1[0] f- var_2b8_1
                zmm3[0] = zmm3[0] * zmm2[0]
                int32_t var_23c
                var_230 = &rdx_29[sx.q(var_23c)]
                zmm0.d = zmm0.d f* zmm2[0]
                *rdx_29 = zmm3[0]
                void* var_218
                int32_t* rdx_30 = var_218
                zmm1[0] = zmm1[0] * zmm2[0]
                int32_t var_224
                var_218 = &rdx_30[sx.q(var_224)]
                *rdx_30 = zmm0.d
                void* var_200
                float* rdx_31 = var_200
                int32_t var_20c
                var_200 = &rdx_31[sx.q(var_20c)]
                *rdx_31 = zmm1[0]
        else
            zmm9 = zx.o(var_478_1)
            zmm10 = zx.o(var_490_1)
            zmm7 = zx.o(var_4a8_1)
            zmm8 = zx.o(var_4a0_1)
            zmm6 = zx.o(var_498_1)
        
        zmm11 = zx.o(var_4c0_1)
        zmm12 = var_4dc
        
        if (var_11e != 0)
            zmm1 = arg_20
            zmm6.d = zmm6.d f- zmm8[0]
            zmm2 = zmm7
            zmm1[0] = zmm1[0] - zmm12[0]
            zmm2[0] = zmm2[0] f- zmm9.d
            zmm7.d = var_4e0.d f- zmm12[0]
            zmm3 = zmm10
            zmm3[0] = zmm3[0] f- zmm9.d
            zmm11[0] = zmm11[0] - zmm8[0]
            zmm8 = zmm2
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm0.d = zmm7.d f* zmm3[0]
            zmm7.d = zmm7.d f* zmm11[0]
            zmm8[0] = zmm8[0] f- zmm0.d
            zmm2[0] = zmm2[0] * zmm11[0]
            zmm0 = zmm6
            zmm6.d = zmm6.d f* zmm3[0]
            zmm0.d = zmm0.d f* zmm1[0]
            zmm6.d = zmm6.d f- zmm2[0]
            zmm7.d = zmm7.d f- zmm0.d
            zmm0.d = zmm8.d f* zmm8[0]
            zmm1 = zmm6
            zmm1[0] = zmm1[0] f* zmm6.d
            zmm3 = zmm7
            zmm3[0] = zmm3[0] f* zmm7.d
            zmm3[0] = zmm3[0] f+ zmm0.d
            zmm3[0] = zmm3[0] + zmm1[0]
            
            if (not(zmm3[0] == 1f))
                if (zmm3[0] >= 9.99999994e-09f)
                    zmm4_1 = 0x3f000000
                    zmm0 = zmm3
                    zmm3 = zmm0
                    zmm5_1 = _mm_rsqrt_ss(zmm0.d, zmm3[0])
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = zmm5_1.d f* zmm5_1.d
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_1.d f* zmm2[0]
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    zmm1 = zmm5_1
                    zmm1[0] = zmm1[0] f* zmm5_1.d
                    zmm3[0] = zmm3[0] * zmm1[0]
                    zmm4_1[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_1.d f* zmm4_1[0]
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    int32_t var_4e4_2 = zmm5_1.d
                    zmm8[0] = zmm8[0] f* zmm5_1.d
                    zmm7.d = zmm7.d f* zmm5_1.d
                    zmm6.d = zmm6.d f* zmm5_1.d
                else
                    zmm8 = data_143dbb1f8
                    zmm7 = data_143dbb1fc
                    zmm6 = data_143dbb200
            
            void* var_1e8
            float* rdx_32 = var_1e8
            zmm3 = zx.o(0)
            uint64_t var_458_1 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
            int32_t var_450_1 = zmm6.d
            int32_t var_3fc_1 = 0
            float var_408[0x4]
            var_408[0] = zmm8[0]
            var_4d8 = 0
            zmm2 = _mm_shuffle_ps(var_408, var_408, 0xe1)
            zmm2[0] = zmm7.d
            int32_t var_4d0_3 = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm6.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_408 = zmm2
            zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rsi + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rsi + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rsi + 0xe0))
            zmm8 = _mm_add_ps(zmm8, zmm0)
            int32_t var_1f4
            var_1e8 = &rdx_32[sx.q(var_1f4)]
            zmm1 =
                _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rsi + 0xd0)))
            zmm2 = 0x3f000000
            zmm8 = _mm_add_ps(zmm8, zmm1)
            zmm0.d = zmm8.d f* zmm8[0]
            zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm1 = zmm7
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm0.d = zmm6.d f* zmm6.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm3[0] = zmm1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1[0]
            zmm3[0] = zmm3[0] f* zmm0.d
            zmm2[0] = 0.5f - zmm3[0]
            zmm0.d = zmm4_1.d f* zmm2[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm3[0] = zmm3[0] * zmm4_1[0]
            zmm5_1.d = 0.5f - zmm3[0]
            zmm0.d = zmm4_1.d f* zmm5_1.d
            zmm4_1[0] = zmm4_1[0] f+ zmm0.d
            zmm8[0] = zmm8[0] * zmm4_1[0]
            zmm7.d = zmm7.d f* zmm4_1[0]
            zmm6.d = zmm6.d f* zmm4_1[0]
            var_458_1.d = zmm8[0]
            var_458_1:4.d = zmm7.d
            int32_t var_450_2 = zmm6.d
            *rdx_32 = zmm8[0]
            void* var_1d0
            int32_t* rdx_33 = var_1d0
            float var_4e4_3 = zmm4_1[0]
            int32_t var_1dc
            var_1d0 = &rdx_33[sx.q(var_1dc)]
            *rdx_33 = zmm7.d
            void* var_1b8
            int32_t* rdx_34 = var_1b8
            int32_t var_1c4
            var_1b8 = &rdx_34[sx.q(var_1c4)]
            *rdx_34 = zmm6.d
        
        char rdi_7 = var_11c
        
        if (var_11d != 0 || rdi_7 != 0)
            zmm7.d = zmm9.d f- zmm10.d
            zmm6.d = var_4a0_1.d f- zmm11[0]
            zmm9.d = var_498_1.d f- zmm11[0]
            int64_t rdx_35 = *(var_440 + 0x98)
            zmm8 = zmm12
            uint64_t rcx_37 = zx.q(*(var_440 + 0xa8))
            zmm12 = data_142d3f660
            zmm11 = var_4e0
            zmm10.d = var_4a8_1.d f- var_490_1.d
            zmm8[0] = zmm8[0] f- arg_20
            zmm11[0] = zmm11[0] f- arg_20
            int64_t rax_65 = zx.q(rax_38) * rcx_37
            int32_t var_33c_1 = 0
            int32_t var_32c_1 = 0
            int32_t var_31c_1 = 0
            int64_t var_300_1 = 0
            zmm4_1 = *(rdx_35 + (rax_65 << 3))
            zmm5_1 = *(rdx_35 + (rax_65 << 3) + 4)
            int64_t rax_67 = zx.q(r10_3.d) * rcx_37
            float var_2e8_1 = zmm4_1[0]
            int32_t var_2e4_1 = zmm5_1.d
            int64_t var_2f0_1 = 0
            int64_t var_2e0_1 = 0x3f800000
            zmm2 = *(rdx_35 + (rax_67 << 3))
            zmm3 = *(rdx_35 + (rax_67 << 3) + 4)
            zmm2[0] = zmm2[0] - zmm4_1[0]
            zmm3[0] = zmm3[0] f- zmm5_1.d
            int64_t rax_69 = r11_6 * rcx_37
            float var_308 = zmm2[0]
            float var_304_1 = zmm3[0]
            zmm1 = *(rdx_35 + (rax_69 << 3) + 4)
            zmm0.d = (*(rdx_35 + (rax_69 << 3))).d f- zmm4_1[0]
            zmm1[0] = zmm1[0] f- zmm5_1.d
            int32_t var_2f8_1 = zmm0.d
            uint128_t var_2d8_1 = zmm12
            float var_2f4_1 = zmm1[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_70)[0x4]
            rax_70, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_308, &var_118)
            float var_338[0x4]
            var_338[0] = zmm6.d
            float var_348[0x4]
            var_348[0] = zmm9.d
            zmm2 = *rax_70
            float zmm5_2[0x4] = _mm_shuffle_ps(var_338, var_338, 0xe1)
            zmm5_2[0] = zmm7.d
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm7 = zmm0
            float zmm4_2[0x4] = _mm_shuffle_ps(var_348, var_348, 0xe1)
            var_4d8.o = zmm0
            zmm4_2[0] = zmm10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm8[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11[0]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm7 = _mm_mul_ps(zmm7, zmm5_2)
            var_338 = zmm5_2
            var_348 = zmm4_2
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            float var_328[0x4]
            var_328[0] = var_4c0_1.d
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm3 = _mm_shuffle_ps(var_328, var_328, 0xe1)
            zmm3[0] = zmm14.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = arg_20.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_328 = zmm3
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_70[1]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            var_4d8.o = zmm7
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_70[2]
            zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm11 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_70[3]
            zmm14 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm14 = _mm_mul_ps(zmm14, zmm5_2)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm14 = _mm_add_ps(zmm14, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm12)
            zmm14 = _mm_add_ps(_mm_add_ps(zmm14, zmm1), zmm2)
            
            if (var_11d != 0)
                zmm2 = data_142d4cc00
                int64_t var_4b8_1 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                int32_t var_4b0_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6 = _mm_mul_ps(zmm6, zmm14)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm3 = zx.o(0)
                    zmm4_2 = 0x3f000000
                    zmm3[0] = zmm1.d
                    zmm2 = 0x3f000000
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_2.d f* zmm2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm4_2[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    float var_4e8_2 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1a0
                float* rdx_37 = var_1a0
                zmm3 = zx.o(0)
                int32_t var_3ec_1 = 0
                float var_3f8[0x4]
                var_3f8[0] = zmm6.d
                int64_t var_4b8_2 = 0
                zmm2 = _mm_shuffle_ps(var_3f8, var_3f8, 0xe1)
                zmm2[0] = zmm7.d
                int32_t var_4b0_2 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3f8 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rsi + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rsi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rsi + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_1ac
                var_1a0 = &rdx_37[sx.q(var_1ac)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rsi + 0xd0)))
                zmm2 = 0x3f000000
                zmm8 = _mm_add_ps(zmm8, zmm1)
                zmm0.d = zmm8.d f* zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm1 = zmm7
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm6.d f* zmm6.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm3[0] = zmm1[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = zmm4_2.d f* zmm4_2[0]
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm3[0]
                zmm0.d = zmm4_2.d f* zmm2[0]
                zmm4_2[0] = zmm4_2[0] f+ zmm0.d
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm5_2[0] = 0.5f - zmm3[0]
                zmm0.d = zmm4_2.d f* zmm5_2[0]
                zmm4_2[0] = zmm4_2[0] f+ zmm0.d
                zmm7.d = zmm7.d f* zmm4_2[0]
                zmm8[0] = zmm8[0] * zmm4_2[0]
                zmm6.d = zmm6.d f* zmm4_2[0]
                *rdx_37 = zmm8[0]
                void* var_188
                int32_t* rdx_38 = var_188
                float var_4e8_3 = zmm4_2[0]
                int32_t var_194
                var_188 = &rdx_38[sx.q(var_194)]
                *rdx_38 = zmm7.d
                void* var_170
                int32_t* rdx_39 = var_170
                zmm7 = var_4d8.o
                int32_t var_17c
                var_170 = &rdx_39[sx.q(var_17c)]
                *rdx_39 = zmm6.d
                rdi_7 = var_11c
            
            if (rdi_7 != 0)
                zmm2 = data_142d4cc20
                int64_t var_4b8_3 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int32_t var_4b0_3 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm14)
                zmm6 = _mm_mul_ps(zmm6, zmm10)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm11)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm3 = zx.o(0)
                    zmm4_2 = 0x3f000000
                    zmm3[0] = zmm1.d
                    zmm2 = 0x3f000000
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_2.d f* zmm2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm4_2[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    float var_4e8_4 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_158
                float* rdx_40 = var_158
                zmm3 = zx.o(0)
                int32_t var_3dc_1 = 0
                float var_3e8[0x4]
                var_3e8[0] = zmm6.d
                int64_t var_4b8_4 = 0
                zmm2 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
                zmm2[0] = zmm7.d
                int32_t var_4b0_4 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3e8 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rsi + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rsi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rsi + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_164
                var_158 = &rdx_40[sx.q(var_164)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rsi + 0xd0)))
                zmm2 = 0x3f000000
                zmm8 = _mm_add_ps(zmm8, zmm1)
                zmm0.d = zmm8.d f* zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm6.d f* zmm6.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm3[0] = zmm1[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = zmm4_2.d f* zmm4_2[0]
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm3[0]
                zmm0.d = zmm4_2.d f* zmm2[0]
                zmm4_2[0] = zmm4_2[0] f+ zmm0.d
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm5_2[0] = 0.5f - zmm3[0]
                zmm0.d = zmm4_2.d f* zmm5_2[0]
                zmm4_2[0] = zmm4_2[0] f+ zmm0.d
                zmm8[0] = zmm8[0] * zmm4_2[0]
                zmm7.d = zmm7.d f* zmm4_2[0]
                *rdx_40 = zmm8[0]
                void* var_140
                int32_t* rdx_41 = var_140
                zmm6.d = zmm6.d f* zmm4_2[0]
                float var_4e8_5 = zmm4_2[0]
                int32_t var_14c
                var_140 = &rdx_41[sx.q(var_14c)]
                *rdx_41 = zmm7.d
                void* var_128
                int32_t* rdx_42 = var_128
                int32_t var_134
                var_128 = &rdx_42[sx.q(var_134)]
                *rdx_42 = zmm6.d
        
        zmm2 = 0x3f800000
        cond:8_1 = var_4c8 + 1 s< *(arg2 + 0x40)
        rdi_1 += r9_6
        result = result_1
        r9_6 = var_398_1
        r10_2 = var_390_1
        r11_5 = var_488
        var_4c8 += 1
        r8_2 = var_3a0_1
    while (cond:8_1)

return result
