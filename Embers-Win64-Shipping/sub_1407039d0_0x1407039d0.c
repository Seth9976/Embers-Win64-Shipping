// 函数: sub_1407039d0
// 地址: 0x1407039d0
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
int32_t* r14 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t r12_1 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
void* rdx_4

if ((not.b(r12_1.b) & 1) == 0)
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
void* var_4a8 = rdx_4
uint8_t rsi_1 = (rax_9 u>> 0xf).b
*(arg2 + 0x10) = &rax[3]
int32_t i_2 = rax_9 & 0x7fff
void* rdx_9

if ((not.b(rsi_1) & 1) == 0)
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
void* var_4b0 = rdx_9
uint8_t rdi_1 = (rax_13 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i_3 = rax_13 & 0x7fff
void* rdx_14

if ((not.b(rdi_1) & 1) == 0)
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
void* var_4b8 = rdx_14
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

void* var_4c0 = rdx_19
void var_2d8
sub_140742680(&var_2d8, arg2)
void* rax_21 = sub_140d3c6e0(r14)
void* var_4f8 = rax_21
void* rax_22
int64_t rax_23
void* rdx_23

if (rax_21 != 0)
    rax_22 = sub_142591550()
    rdx_23 = *(rax_21 + 0x10)
    rax_23 = sx.q(*(rax_22 + 0x38))

if (rax_21 == 0 || rax_23.d s> *(rdx_23 + 0x38)
        || *(*(rdx_23 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
    var_4f8 = nullptr

void* rax_25 = *(r14 + 0x58)
int64_t* r15_1 = nullptr
void* var_528 = nullptr

if (rax_25 != 0)
    r15_1 = *(**(rax_25 + 0x58) + (sx.q(r14[0x1a]) << 3))
    
    if (r14[0x86].b != 0)
        void* rax_28 = sub_140d3c6e0(r14)
        void* rax_29
        void* rcx_11
        int64_t rdx_24
        
        if (rax_28 != 0)
            rax_29 = sub_142591550()
            rcx_11 = *(rax_28 + 0x10)
            rdx_24 = sx.q(*(rax_29 + 0x38))
        
        void* rax_31
        
        if (rax_28 == 0 || rdx_24.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_24 << 3)) != rax_29 + 0x30 || *(rax_28 + 0x430) == 0)
            rax_31 = &r15_1[0x27]
        else
            rax_31 = sub_141f66050(rax_28, r14[0x1a])
        
        var_528 = rax_31

int64_t* rcx_14

if (rax_25 == 0 || r15_1 == 0)
    rcx_14 = nullptr
else
    rcx_14 = r15_1[3]

void* rax_32 = *(r14 + 0x70)
int32_t rax_34 = (*(*rcx_14 + 0x58))(rcx_14)
float zmm2[0x4] = 0x3f800000
float zmm9[0x4] = 0x3f800000
zmm9[0] = 1f f/ r14[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_34)
float var_4ec = zmm9[0]
char result_6
uint64_t result = zx.q(result_6)
int32_t r11_5 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_4c8 = r11_5
char var_170
char var_16e
char var_16d
char var_16c
uint32_t arg_10
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

int32_t var_4f0 = 0

if (*(arg2 + 0x40) s> 0)
    float zmm6[0x4] = arg_10
    uint128_t zmm10 = 0x3f000000
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    float zmm14[0x4] = zx.o(0)
    int32_t var_504
    float arg_20 = var_504[0]
    float zmm15[0x4] = arg_10
    uint64_t rdx_28 = zx.q(rbx_1) << 2
    uint64_t r8_3 = zx.q(rdi_1) << 2
    uint64_t r9_5 = zx.q(rsi_1) << 2
    int32_t var_4d4
    float var_53c_1 = var_4d4[0]
    uint64_t r10_2 = zx.q(r12_1.b) << 2
    float var_308_1 = arg_10[0]
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int32_t var_4e4
    float var_52c_1 = var_4e4[0]
    uint64_t var_3f0_1 = rdx_28
    uint64_t var_398_1 = r8_3
    uint64_t var_3f8_1 = r9_5
    uint64_t var_3e8_1 = r10_2
    float var_498_1[0x4] = zmm6
    bool cond:6_1
    
    do
        float (* rcx_16)[0x4] = var_4c0
        int32_t* rdx_29 = var_4a8
        var_4c0 = rcx_16 + rdx_28
        float (* rcx_18)[0x4] = var_4b8
        float var_2e4_1 = (*rcx_16)[0]
        var_4b8 = rcx_18 + r8_3
        float (* rcx_20)[0x4] = var_4b0
        var_4b0 = rcx_20 + r9_5
        var_4a8 = rdx_29 + r10_2
        uint64_t rdx_31 = zx.q(*rdx_29)
        int64_t var_484_1 = (_mm_unpacklo_ps(*rcx_20, (*rcx_18)[0].q)).q
        
        if (rdx_31.d s< 0 || rdx_31.d s> r11_5)
            int32_t var_2f0_1 = 0
            int64_t var_3a4_1 = (_mm_unpacklo_ps(zmm2, zmm14[0].q)).q
            int32_t var_39c_1 = 0
            rdx_31 = zx.q(0.o[0])
        
        uint32_t rbx_2 = (rdx_31 * 3).d
        int32_t rax_42 = (*(*rcx_14 + 0x68))(rcx_14, zx.q(rbx_2))
        int64_t r8_4 = *rcx_14
        uint64_t rdi_2 = zx.q(rax_42)
        int32_t rax_43 = (*(r8_4 + 0x68))(rcx_14, zx.q(rbx_2 + 1), r8_4)
        int64_t r8_5 = *rcx_14
        result = (*(r8_5 + 0x68))(rcx_14, zx.q(rbx_2 + 2), r8_5)
        int32_t rsi_3 = result.d
        int32_t var_540_1 = result.d
        int32_t var_508
        int32_t var_500
        int32_t var_4e8
        int32_t var_4e0
        int32_t var_4d8
        int32_t var_4d0
        float zmm0[0x4]
        float zmm1[0x4]
        float zmm7[0x4]
        
        if (arg_10.b != 0)
            int64_t var_168
            int64_t* rax_45
            int512_t zmm7_1
            rax_45, zmm7_1 = sub_1423162c0(&var_168, var_4f8, rdi_2.d, r15_1, var_528, 
                ((sx.q(*(rax_32 + 0x34)) + 4) << 4) + rax_32)
            zmm7_1.o = zx.o(*rax_45)
            var_500 = rax_45[1].d
            int64_t var_15c
            int64_t* rax_52
            int512_t zmm6_1
            rax_52, zmm6_1 = sub_1423162c0(&var_15c, var_4f8, rax_43, r15_1, var_528, 
                ((sx.q(*(rax_32 + 0x34)) + 4) << 4) + rax_32)
            zmm6_1.o = zx.o(*rax_52)
            var_4d0 = rax_52[1].d
            int64_t var_150
            int64_t* rax_59
            rax_59, zmm6, zmm7, zmm9 = sub_1423162c0(&var_150, var_4f8, rsi_3, r15_1, var_528, 
                ((sx.q(*(rax_32 + 0x34)) + 4) << 4) + rax_32)
            var_4d8 = zmm6.d
            arg_20 = _mm_shuffle_ps(zmm7, zmm7, 0x55)[0]
            zmm0 = zmm6
            zmm1 = zx.o(*rax_59)
            result = zx.q(rax_59[1].d)
            zmm6 = var_498_1
            var_53c_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            var_52c_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
            var_4e0 = result.d
            var_508 = zmm7.d
            var_4e8 = zmm1.d
        
        zmm11 = var_2e4_1
        zmm12 = var_484_1:4.d
        zmm13 = var_484_1.d
        
        if (arg_18 != 0)
            int64_t var_144
            int64_t* rax_66 = sub_1423162c0(&var_144, var_4f8, rdi_2.d, r15_1, var_528, 
                (((sx.q(*(rax_32 + 0x34)) ^ 1) + 4) << 4) + rax_32)
            zmm10 = zx.o(*rax_66)
            int32_t rax_67 = rax_66[1].d
            int64_t var_138
            int64_t* rax_74
            int512_t zmm6_2
            rax_74, zmm6_2 = sub_1423162c0(&var_138, var_4f8, rax_43, r15_1, var_528, 
                (((sx.q(*(rax_32 + 0x34)) ^ 1) + 4) << 4) + rax_32)
            zmm6_2.o = zx.o(*rax_74)
            int32_t rax_75 = rax_74[1].d
            int64_t var_12c[0x2]
            int64_t* rax_82
            rax_82, zmm6 = sub_1423162c0(&var_12c, var_4f8, rsi_3, r15_1, var_528, 
                (((sx.q(*(rax_32 + 0x34)) ^ 1) + 4) << 4) + rax_32)
            int32_t var_3fc_1 = 0x3f800000
            var_498_1[0].q = 0
            var_498_1[2] = 0
            zmm1 = zx.o(*rax_82)
            result = zx.q(rax_82[1].d)
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm12[0] = zmm12[0] f* rax_75
            zmm11[0] = zmm11[0] * zmm0[0]
            zmm11[0] = zmm11[0] f* result.d
            zmm12[0] = zmm12[0] * zmm6[0]
            zmm13[0] = zmm13[0] f* rax_67
            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm12[0] = zmm12[0] * zmm0[0]
            zmm0 = zmm10
            zmm11[0] = zmm11[0] * zmm1[0]
            zmm13[0] = zmm13[0] + zmm12[0]
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm13[0] = zmm13[0] * zmm0[0]
            zmm13[0] = zmm13[0] f* zmm10.d
            zmm13[0] = zmm13[0] + zmm11[0]
            zmm13[0] = zmm13[0] + zmm12[0]
            zmm12[0] = zmm12[0] + zmm13[0]
            zmm13[0] = zmm13[0] + zmm11[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            zmm10 = 0x3f000000
            float var_408[0x4]
            var_408[0] = zmm11[0]
            zmm9 = var_4ec
            zmm15 = _mm_shuffle_ps(var_408, var_408, 0xe1)
            zmm15[0] = zmm13[0]
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xc6)
            zmm15[0] = zmm13[0]
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
            var_408 = zmm15
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm15, zmm15, 0x55), *(r14 + 0x160))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm15, zmm15, 0), *(r14 + 0x150))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm15, zmm15, 0xff), *(r14 + 0x180))
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm15 = _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(zmm15, *(r14 + 0x170)), zmm2), zmm1)
            zmm6 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            var_498_1 = zmm6
            var_308_1 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)[0]
        
        float zmm3[0x4]
        
        if (var_170 != 0 || result_6 != 0)
            void* var_2c8
            float* rdx_41 = var_2c8
            zmm12[0] = zmm12[0] f* var_4d0
            zmm12[0] = zmm12[0] * var_53c_1
            int32_t var_43c_1 = 0x3f800000
            zmm12[0] = zmm12[0] f* var_4d8
            int64_t var_518_1 = 0
            zmm13[0] = zmm13[0] * arg_20
            int32_t var_510_1 = 0
            zmm11[0] = zmm11[0] f* var_4e8
            zmm13[0] = zmm13[0] f* var_500
            zmm13[0] = zmm13[0] + zmm12[0]
            zmm13[0] = zmm13[0] f* var_508
            zmm7 = var_4e0
            zmm13[0] = zmm13[0] + zmm12[0]
            zmm8 = var_52c_1
            zmm11[0] = zmm11[0] * zmm7[0]
            zmm12[0] = zmm12[0] + zmm13[0]
            zmm11[0] = zmm11[0] * zmm8[0]
            zmm13[0] = zmm13[0] + zmm11[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            zmm13[0] = zmm13[0] + zmm11[0]
            float var_448[0x4]
            var_448[0] = zmm11[0]
            zmm3 = _mm_shuffle_ps(var_448, var_448, 0xe1)
            zmm3[0] = zmm13[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = zmm13[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_448 = zmm3
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r14 + 0xe0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r14 + 0xd0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r14 + 0x100))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            int32_t var_2d4
            var_2c8 = &rdx_41[sx.q(var_2d4)]
            zmm3 = _mm_add_ps(
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(r14 + 0xf0)), 
                    zmm2), 
                zmm1)
            *rdx_41 = zmm3[0]
            void* var_2b0
            float* rdx_42 = var_2b0
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            int32_t var_2bc
            var_2b0 = &rdx_42[sx.q(var_2bc)]
            *rdx_42 = zmm0[0]
            void* var_298
            float* rdx_43 = var_298
            int32_t result_1
            result = sx.q(result_1)
            var_298 = &rdx_43[result]
            *rdx_43 = zmm1[0]
            
            if (result_6 != 0)
                void* var_280
                float* rdx_44 = var_280
                zmm3[0] = zmm3[0] - zmm15[0]
                zmm0[0] = zmm0[0] - zmm6[0]
                zmm1[0] = zmm1[0] - var_308_1
                zmm3[0] = zmm3[0] * zmm9[0]
                int32_t var_28c
                var_280 = &rdx_44[sx.q(var_28c)]
                zmm0[0] = zmm0[0] * zmm9[0]
                *rdx_44 = zmm3[0]
                void* var_268
                float* rdx_45 = var_268
                zmm1[0] = zmm1[0] * zmm9[0]
                int32_t var_274
                var_268 = &rdx_45[sx.q(var_274)]
                *rdx_45 = zmm0[0]
                void* var_250
                float* rdx_46 = var_250
                int32_t result_2
                result = sx.q(result_2)
                var_250 = &rdx_46[result]
                *rdx_46 = zmm1[0]
        else
            zmm7 = var_4e0
            zmm8 = var_52c_1
        
        zmm12 = var_500
        zmm13 = arg_20
        zmm11 = var_4e8
        float zmm4_1[0x4]
        float zmm5_1[0x4]
        
        if (var_16e != 0)
            zmm9 = var_508
            zmm6 = zmm12
            zmm2 = var_53c_1
            zmm6[0] = zmm6[0] - zmm7[0]
            zmm1 = var_4d8
            zmm2[0] = zmm2[0] - zmm8[0]
            zmm3 = var_4d0
            zmm9[0] = zmm9[0] - zmm11[0]
            zmm3[0] = zmm3[0] - zmm7[0]
            zmm1[0] = zmm1[0] - zmm11[0]
            zmm13[0] = zmm13[0] - zmm8[0]
            zmm9[0] = zmm9[0] * zmm2[0]
            zmm7 = zmm13
            zmm9[0] = zmm9[0] * zmm3[0]
            zmm7[0] = zmm7[0] * zmm1[0]
            zmm13[0] = zmm13[0] * zmm3[0]
            zmm7[0] = zmm7[0] - zmm9[0]
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm9[0] = zmm9[0] - zmm6[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm6[0] = zmm6[0] - zmm13[0]
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] + zmm9[0]
            zmm6[0] = zmm6[0] + zmm7[0]
            float var_450_1
            
            if (not(zmm6[0] != 1f))
                var_450_1 = zmm7[0]
            else if (zmm6[0] >= 9.99999994e-09f)
                zmm4_1 = zx.o(0)
                zmm4_1[0] = zmm10[0]
                zmm5_1 = _mm_rsqrt_ss(zmm6[0], zmm6[0])
                zmm6[0] = zmm6[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm6[0] = zmm6[0] * zmm5_1[0]
                zmm4_1[0] = zmm4_1[0] - zmm6[0]
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm6[0] = zmm6[0] * zmm5_1[0]
                zmm4_1[0] = zmm4_1[0] - zmm6[0]
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                float var_544_1 = zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm7[0]
                zmm5_1[0] = zmm5_1[0] * zmm9[0]
                zmm5_1[0] = zmm5_1[0] * zmm6[0]
                zmm7 = zmm5_1
                var_450_1 = zmm5_1[0]
                zmm9 = zmm5_1
                zmm6 = zmm5_1
            else
                zmm7 = data_143dbb200
                zmm6 = data_143dbb1f8
                zmm9 = data_143dbb1fc
                var_450_1 = zmm7[0]
            
            void* var_238
            float* rdx_47 = var_238
            zmm3 = zx.o(0)
            zmm4_1 = zx.o(0)
            int64_t var_478_1 = (_mm_unpacklo_ps(zmm6, zmm9[0].q)).q
            float var_470_1 = var_450_1
            int32_t var_42c_1 = 0
            float var_438[0x4]
            var_438[0] = zmm6[0]
            int64_t var_518_2 = 0
            zmm8 = _mm_shuffle_ps(var_438, var_438, 0xe1)
            zmm8[0] = zmm9[0]
            int32_t var_510_2 = 0
            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xc6)
            zmm8[0] = zmm7[0]
            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            var_438 = zmm8
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0x55), *(r14 + 0xe0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xff), *(r14 + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), *(r14 + 0xd0))
            zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xaa), *(r14 + 0xf0))
            int32_t var_244
            var_238 = &rdx_47[sx.q(var_244)]
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm8 = _mm_add_ps(_mm_add_ps(zmm8, zmm2), zmm1)
            zmm4_1[0] = zmm10[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm7[0] = zmm7[0] + zmm8[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm7[0] = zmm7[0] + zmm6[0]
            zmm3[0] = zmm7[0]
            zmm5_1 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm3[0] = zmm3[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] - zmm3[0]
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm3[0] = zmm3[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] - zmm3[0]
            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
            zmm8[0] = zmm8[0] * zmm5_1[0]
            zmm6[0] = zmm6[0] * zmm5_1[0]
            zmm7[0] = zmm7[0] * zmm5_1[0]
            var_478_1.d = zmm8[0]
            float var_470_2 = zmm6[0]
            var_478_1:4.d = zmm7[0]
            *rdx_47 = zmm8[0]
            void* var_220
            float* rdx_48 = var_220
            float var_544_2 = zmm5_1[0]
            int32_t var_22c
            var_220 = &rdx_48[sx.q(var_22c)]
            *rdx_48 = zmm7[0]
            void* var_208
            float* rdx_49 = var_208
            int32_t result_3
            result = sx.q(result_3)
            var_208 = &rdx_49[result]
            *rdx_49 = zmm6[0]
        
        if (var_16d != 0 || var_16c != 0)
            uint64_t r12_4 = zx.q(data_14401b1a0)
            int16_t* rsi_6 = rdi_2 * (zx.q(r15_1[0x15].d) << 2) + r15_1[0x13]
            uint32_t rbx_4 = zx.d(rsi_6[1])
            int32_t rdi_5 = (rbx_4 & 0xffff8000) << 0x10
            int32_t var_530_1
            TEB* gsbase
            
            if ((0x7c00 & rbx_4.w) == 0)
                int32_t rbx_5 = rbx_4 & 0x3ff
                
                if (rbx_5 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_4 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_5))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_50 = 0xa - int.d(zmm0[0])
                    var_530_1 = (rbx_5 << (rdx_50.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_50) << 0x17 & 0x7f800000) | rdi_5
                else
                    var_530_1 = rdi_5
            else if ((rbx_4.w & 0x7c00) != 0x7c00)
                var_530_1 = ((rbx_4 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_4 & 0x3ff) << 0xd | rdi_5
            else
                var_530_1 = rdi_5 | 0x477fe000
            
            uint32_t rbx_12 = zx.d(*rsi_6)
            int32_t rdi_9 = (rbx_12 & 0xffff8000) << 0x10
            int32_t var_534_1
            
            if ((0x7c00 & rbx_12.w) == 0)
                int32_t rbx_13 = rbx_12 & 0x3ff
                
                if (rbx_13 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_4 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_13))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_51 = 0xa - int.d(zmm0[0])
                    var_534_1 = (rbx_13 << (rdx_51.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_51) << 0x17 & 0x7f800000) | rdi_9
                else
                    var_534_1 = rdi_9
            else if ((rbx_12.w & 0x7c00) != 0x7c00)
                var_534_1 =
                    ((rbx_12 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_12 & 0x3ff) << 0xd | rdi_9
            else
                var_534_1 = rdi_9 | 0x477fe000
            
            int16_t* rsi_9 = zx.q(rax_43) * (zx.q(r15_1[0x15].d) << 2) + r15_1[0x13]
            uint32_t rbx_20 = zx.d(rsi_9[1])
            int32_t rdi_13 = (rbx_20 & 0xffff8000) << 0x10
            int32_t var_548_2
            
            if ((0x7c00 & rbx_20.w) == 0)
                int32_t rbx_21 = rbx_20 & 0x3ff
                
                if (rbx_21 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_4 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_21))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_52 = 0xa - int.d(zmm0[0])
                    var_548_2 = (rbx_21 << (rdx_52.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_52) << 0x17 & 0x7f800000) | rdi_13
                else
                    var_548_2 = rdi_13
            else if ((rbx_20.w & 0x7c00) != 0x7c00)
                var_548_2 =
                    ((rbx_20 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_20 & 0x3ff) << 0xd | rdi_13
            else
                var_548_2 = rdi_13 | 0x477fe000
            
            uint32_t rbx_28 = zx.d(*rsi_9)
            int32_t rdi_17 = (rbx_28 & 0xffff8000) << 0x10
            int32_t var_544_3
            
            if ((0x7c00 & rbx_28.w) == 0)
                int32_t rbx_29 = rbx_28 & 0x3ff
                
                if (rbx_29 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_4 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_29))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_53 = 0xa - int.d(zmm0[0])
                    var_544_3 = (rbx_29 << (rdx_53.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_53) << 0x17 & 0x7f800000) | rdi_17
                else
                    var_544_3 = rdi_17
            else if ((rbx_28.w & 0x7c00) != 0x7c00)
                var_544_3 =
                    ((rbx_28 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_28 & 0x3ff) << 0xd | rdi_17
            else
                var_544_3 = rdi_17 | 0x477fe000
            
            int16_t* rsi_12 = zx.q(var_540_1) * (zx.q(r15_1[0x15].d) << 2) + r15_1[0x13]
            uint32_t rbx_36 = zx.d(rsi_12[1])
            int32_t rdi_21 = (rbx_36 & 0xffff8000) << 0x10
            int32_t var_540_2
            
            if ((0x7c00 & rbx_36.w) == 0)
                int32_t rbx_37 = rbx_36 & 0x3ff
                
                if (rbx_37 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_4 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_37))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_54 = 0xa - int.d(zmm0[0])
                    var_540_2 = (rbx_37 << (rdx_54.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_54) << 0x17 & 0x7f800000) | rdi_21
                else
                    var_540_2 = rdi_21
            else if ((rbx_36.w & 0x7c00) != 0x7c00)
                var_540_2 =
                    ((rbx_36 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_36 & 0x3ff) << 0xd | rdi_21
            else
                var_540_2 = rdi_21 | 0x477fe000
            
            uint32_t rbx_44 = zx.d(*rsi_12)
            int32_t rdi_25 = (rbx_44 & 0xffff8000) << 0x10
            int32_t var_538_1
            
            if ((0x7c00 & rbx_44.w) == 0)
                int32_t rbx_45 = rbx_44 & 0x3ff
                
                if (rbx_45 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_4 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_45))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_55 = 0xa - int.d(zmm0[0])
                    var_538_1 = (rbx_45 << (rdx_55.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_55) << 0x17 & 0x7f800000) | rdi_25
                else
                    var_538_1 = rdi_25
            else if ((rbx_44.w & 0x7c00) != 0x7c00)
                var_538_1 =
                    ((rbx_44 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_44 & 0x3ff) << 0xd | rdi_25
            else
                var_538_1 = rdi_25 | 0x477fe000
            
            zmm4_1 = var_530_1
            zmm5_1 = var_534_1
            zmm0 = var_548_2
            zmm6 = zmm11
            zmm3 = var_538_1
            zmm0[0] = zmm0[0] - zmm4_1[0]
            zmm2 = var_540_2
            zmm3[0] = zmm3[0] - zmm5_1[0]
            zmm1 = var_544_3
            zmm2[0] = zmm2[0] - zmm4_1[0]
            zmm8 = var_4e0
            zmm1[0] = zmm1[0] - zmm5_1[0]
            zmm11 = var_4d0
            zmm8[0] = zmm8[0] - zmm12[0]
            zmm7 = var_52c_1
            zmm11[0] = zmm11[0] - zmm12[0]
            zmm12 = data_142d3f660
            zmm7[0] = zmm7[0] - zmm13[0]
            zmm9 = var_4d8
            zmm6[0] = zmm6[0] f- var_508
            zmm9[0] = zmm9[0] f- var_508
            float var_344_1 = zmm0[0]
            zmm10.d = var_53c_1.d f- zmm13[0]
            float var_348 = zmm1[0]
            float var_318_1[0x4] = zmm12
            float var_338_1 = zmm3[0]
            float var_334_1 = zmm2[0]
            float var_328_1 = zmm5_1[0]
            float var_324_1 = zmm4_1[0]
            int32_t var_37c_1 = 0
            int32_t var_36c_1 = 0
            int32_t var_35c_1 = 0
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0
            int64_t var_320_1 = 0x3f800000
            uint32_t var_118[0x4][0x4]
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                sub_140631b10(&var_348, &var_118)
            float var_378[0x4]
            var_378[0] = zmm6[0]
            float var_388[0x4]
            var_388[0] = zmm9[0]
            zmm2 = *result
            float zmm5_2[0x4] = _mm_shuffle_ps(var_378, var_378, 0xe1)
            zmm13 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7[0]
            float zmm4_2[0x4] = _mm_shuffle_ps(var_388, var_388, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_2[0] = zmm10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm5_2[0] = zmm8[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm13 = _mm_mul_ps(zmm13, zmm5_2)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            var_378 = zmm5_2
            var_388 = zmm4_2
            zmm13 = _mm_add_ps(zmm13, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm12)
            float var_368[0x4]
            var_368[0] = var_508[0]
            zmm3 = _mm_shuffle_ps(var_368, var_368, 0xe1)
            zmm3[0] = arg_20[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = var_500[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_368 = zmm3
            zmm13 = _mm_add_ps(_mm_add_ps(zmm13, _mm_mul_ps(zmm1, zmm3)), zmm2)
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
            
            if (var_16d != 0)
                zmm2 = data_142d4cc00
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int64_t var_518_3 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                int32_t var_510_3 = 0
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm13)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6 = zmm14
                    zmm7 = zmm14
                    zmm8 = zmm14
                else
                    zmm3 = zx.o(0)
                    zmm4_2 = 0x3f000000
                    zmm3[0] = zmm7[0]
                    zmm2 = 0x3f000000
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm4_2[0] = 0.5f - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    float var_548_3 = zmm5_2[0]
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1f0
                float* rdx_57 = var_1f0
                zmm3 = zx.o(0)
                int32_t var_41c_1 = 0
                float var_428[0x4]
                var_428[0] = zmm6[0]
                int64_t var_518_4 = 0
                zmm2 = _mm_shuffle_ps(var_428, var_428, 0xe1)
                zmm2[0] = zmm7[0]
                int32_t var_510_4 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_428 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_1fc
                var_1f0 = &rdx_57[sx.q(var_1fc)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
                zmm2 = 0x3f000000
                zmm8 = _mm_add_ps(zmm8, zmm1)
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm3[0] = zmm7[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm2[0] = 0.5f - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm2[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm5_2[0] = 0.5f - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm5_2[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm8[0] = zmm8[0] * zmm4_2[0]
                zmm7[0] = zmm7[0] * zmm4_2[0]
                *rdx_57 = zmm8[0]
                void* var_1d8
                float* rdx_58 = var_1d8
                zmm6[0] = zmm6[0] * zmm4_2[0]
                float var_548_4 = zmm4_2[0]
                int32_t var_1e4
                var_1d8 = &rdx_58[sx.q(var_1e4)]
                *rdx_58 = zmm7[0]
                void* var_1c0
                float* rdx_59 = var_1c0
                int32_t result_4
                result = sx.q(result_4)
                var_1c0 = &rdx_59[result]
                *rdx_59 = zmm6[0]
            
            if (var_16c == 0)
                zmm10 = 0x3f000000
            else
                zmm2 = data_142d4cc20
                int64_t var_518_5 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_510_5 = 0
                zmm10 = 0x3f000000
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm13)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6 = zmm14
                    zmm7 = zmm14
                    zmm8 = zmm14
                else
                    zmm3 = zx.o(0)
                    zmm4_2 = 0x3f000000
                    zmm3[0] = zmm7[0]
                    zmm2 = 0x3f000000
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm4_2[0] = 0.5f - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    float var_548_5 = zmm5_2[0]
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1a8
                float* rdx_60 = var_1a8
                zmm3 = zx.o(0)
                int32_t var_40c_1 = 0
                float var_418[0x4]
                var_418[0] = zmm6[0]
                int64_t var_518_6 = 0
                zmm2 = _mm_shuffle_ps(var_418, var_418, 0xe1)
                zmm2[0] = zmm7[0]
                int32_t var_510_6 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_418 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_1b4
                var_1a8 = &rdx_60[sx.q(var_1b4)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
                zmm2 = 0x3f000000
                zmm8 = _mm_add_ps(zmm8, zmm1)
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm3[0] = zmm7[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm2[0] = 0.5f - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm2[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm5_2[0] = 0.5f - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm5_2[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm8[0] = zmm8[0] * zmm4_2[0]
                zmm7[0] = zmm7[0] * zmm4_2[0]
                *rdx_60 = zmm8[0]
                void* var_190
                float* rdx_61 = var_190
                zmm6[0] = zmm6[0] * zmm4_2[0]
                float var_548_6 = zmm4_2[0]
                int32_t var_19c
                var_190 = &rdx_61[sx.q(var_19c)]
                *rdx_61 = zmm7[0]
                void* var_178
                float* rdx_62 = var_178
                int32_t result_5
                result = sx.q(result_5)
                var_178 = &rdx_62[result]
                *rdx_62 = zmm6[0]
        
        zmm9 = var_4ec
        cond:6_1 = var_4f0 + 1 s< *(arg2 + 0x40)
        zmm2 = 0x3f800000
        zmm6 = var_498_1
        rdx_28 = var_3f0_1
        r9_5 = var_3f8_1
        r10_2 = var_3e8_1
        r11_5 = var_4c8
        var_4f0 += 1
        r8_3 = var_398_1
    while (cond:6_1)

return result
