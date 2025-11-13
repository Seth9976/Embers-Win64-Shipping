// 函数: sub_140707630
// 地址: 0x140707630
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
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
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
void* var_4a8 = rdx_3
uint8_t rax_10 = (rax_9 u>> 0xf).b
int32_t i_2 = rax_9 & 0x7fff
*(arg2 + 0x10) = &rax[3]
float (* rbx_1)[0x4]

if ((not.b(rax_10) & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
    
    rbx_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
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
float (* r12_1)[0x4]

if ((rax_19.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_20 = 0
        int32_t* rdx_8 = nullptr
        
        do
            i_4 -= *(rdx_8 + r8)
            rax_20 += 1
            rdx_8 = rax_20 << 2
            r9_4 += 1
        while (i_4 s>= *(rdx_8 + r8))
    
    r12_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

void var_318
sub_140742680(&var_318, arg2)
void* rax_22 = sub_140d3c6e0(rdi)
void* var_4f0 = rax_22
void* rax_23
int64_t rax_24
void* rdx_10

if (rax_22 != 0)
    rax_23 = sub_142591550()
    rdx_10 = *(rax_22 + 0x10)
    rax_24 = sx.q(*(rax_23 + 0x38))

if (rax_22 == 0 || rax_24.d s> *(rdx_10 + 0x38)
        || *(*(rdx_10 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
    var_4f0 = nullptr

void* rax_26 = *(rdi + 0x58)
int64_t* var_4a0 = nullptr
void* var_518 = nullptr
int64_t* r14_1

if (rax_26 != 0)
    r14_1 = *(**(rax_26 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    var_4a0 = r14_1
    
    if (rdi[0x86].b != 0)
        void* rax_29 = sub_140d3c6e0(rdi)
        void* rax_30
        void* rcx_11
        int64_t rdx_11
        
        if (rax_29 != 0)
            rax_30 = sub_142591550()
            rcx_11 = *(rax_29 + 0x10)
            rdx_11 = sx.q(*(rax_30 + 0x38))
        
        void* rax_32
        
        if (rax_29 == 0 || rdx_11.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_11 << 3)) != rax_30 + 0x30 || *(rax_29 + 0x430) == 0)
            rax_32 = &r14_1[0x27]
        else
            rax_32 = sub_141f66050(rax_29, rdi[0x1a])
        
        var_518 = rax_32

int64_t* r14_2

if (rax_26 == 0 || r14_1 == 0)
    r14_2 = nullptr
else
    r14_2 = r14_1[3]

void* r15_2 = *(rdi + 0x70)
int32_t rax_34 = (*(*r14_2 + 0x58))(r14_2)
float zmm2[0x4] = 0x3f800000
float zmm8[0x4] = 0x3f800000
zmm8[0] = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_34)
float var_4d4 = zmm8[0]
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_5 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_4b0 = r11_5
char var_1b0
char var_1ae
char var_1ad
char var_1ac
char arg_10
char arg_18

if (var_1b0 != 0 || result.b != 0 || var_1ae != result.b || var_1ad != result.b
        || var_1ac != result.b)
    arg_10 = 1
    
    if (result.b != 0)
        arg_18 = 1
    else
        arg_18 = result.b
else
    arg_10 = result.b
    arg_18 = result.b

int32_t var_4d8 = 0

if (*(arg2 + 0x40) s> 0)
    uint64_t rax_37 = zx.q(arg_20.b)
    float zmm6[0x4] = arg_10.d
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4] = zx.o(0)
    int32_t var_4e4
    arg_20 = var_4e4[0]
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4] = 0x3f000000
    int32_t var_4cc
    float var_524_1 = var_4cc[0]
    int32_t var_4bc
    float var_4f8_1 = var_4bc[0]
    result = rax_37 << 2
    uint64_t r8_3 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(rax_10) << 2
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float var_348_1 = arg_10.d[0]
    uint64_t r10_2 = zx.q(rax_6) << 2
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float var_358_1 = arg_10.d[0]
    uint64_t result_1 = result
    uint64_t var_3f8_1 = r8_3
    uint64_t var_3f0_1 = r9_6
    uint64_t var_3b8_1 = r10_2
    float var_488_1[0x4] = zmm6
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    bool cond:8_1
    
    do
        float (* rdx_14)[0x4] = r12_1
        uint128_t* rcx_16 = r13_1
        r12_1 += result
        r13_1 += r8_3
        int32_t* rdx_15 = var_4a8
        float var_330_1 = (*rdx_14)[0]
        var_4a8 = rdx_15 + r10_2
        uint64_t rdx_17 = zx.q(*rdx_15)
        int64_t var_494_1 = (_mm_unpacklo_ps(*rbx_1, (*rcx_16).q)).q
        
        if (rdx_17.d s< 0 || rdx_17.d s> r11_5)
            int32_t var_324_1 = 0
            int64_t var_3c4_1 = (_mm_unpacklo_ps(zmm2, zmm13[0].q)).q
            int32_t var_3bc_1 = 0
            rdx_17 = zx.q(0.o[0])
        
        uint32_t rbx_5 = (rdx_17 * 3).d
        int32_t rax_41 = (*(*r14_2 + 0x68))(r14_2, zx.q(rbx_5))
        int64_t r8_4 = *r14_2
        int32_t rax_42 = (*(r8_4 + 0x68))(r14_2, zx.q(rbx_5 + 1), r8_4)
        int64_t r8_5 = *r14_2
        int32_t rax_43 = (*(r8_5 + 0x68))(r14_2, zx.q(rbx_5 + 2), r8_5)
        int32_t var_4e8
        int32_t var_4e0
        int32_t var_4d0
        int32_t var_4c8
        uint32_t var_4c0
        int32_t var_4b8
        float zmm0[0x4]
        uint128_t zmm1
        
        if (arg_10 != 0)
            int64_t var_178
            int64_t* rax_45
            int512_t zmm7_1
            rax_45, zmm7_1 = sub_1423162c0(&var_178, var_4f0, rax_41, var_4a0, var_518, 
                ((sx.q(*(r15_2 + 0x34)) + 4) << 4) + r15_2)
            zmm7_1.o = zx.o(*rax_45)
            var_4e0 = rax_45[1].d
            int64_t var_16c[0x2]
            int64_t* rax_52
            int512_t zmm6_1
            rax_52, zmm6_1 = sub_1423162c0(&var_16c, var_4f0, rax_42, var_4a0, var_518, 
                ((sx.q(*(r15_2 + 0x34)) + 4) << 4) + r15_2)
            zmm6_1.o = zx.o(*rax_52)
            var_4c8 = rax_52[1].d
            int64_t var_1a8
            int64_t* rax_59
            rax_59, zmm6, zmm7, zmm8 = sub_1423162c0(&var_1a8, var_4f0, rax_43, var_4a0, var_518, 
                ((sx.q(*(r15_2 + 0x34)) + 4) << 4) + r15_2)
            var_4d0 = zmm6.d
            arg_20 = _mm_shuffle_ps(zmm7, zmm7, 0x55)[0]
            zmm0 = zmm6
            zmm1 = zx.o(*rax_59)
            int32_t rax_60 = rax_59[1].d
            zmm6 = var_488_1
            var_524_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            zmm0 = zmm1
            var_4f8_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            var_4b8 = rax_60
            var_4e8 = zmm7.d
            var_4c0 = zmm1.d
        
        zmm12 = var_330_1
        zmm11 = var_494_1:4.d
        zmm14 = var_494_1.d
        
        if (arg_18 != 0)
            int64_t var_19c
            int64_t* rax_67 = sub_1423162c0(&var_19c, var_4f0, rax_41, var_4a0, var_518, 
                (((sx.q(*(r15_2 + 0x34)) ^ 1) + 4) << 4) + r15_2)
            zmm10 = zx.o(*rax_67)
            int32_t rax_68 = rax_67[1].d
            int64_t var_190
            int64_t* rax_75
            int512_t zmm6_2
            rax_75, zmm6_2 = sub_1423162c0(&var_190, var_4f0, rax_42, var_4a0, var_518, 
                (((sx.q(*(r15_2 + 0x34)) ^ 1) + 4) << 4) + r15_2)
            zmm6_2.o = zx.o(*rax_75)
            int32_t rax_76 = rax_75[1].d
            int64_t var_184
            int64_t* rax_83
            rax_83, zmm6 = sub_1423162c0(&var_184, var_4f0, rax_43, var_4a0, var_518, 
                (((sx.q(*(r15_2 + 0x34)) ^ 1) + 4) << 4) + r15_2)
            int32_t var_44c_1 = 0x3f800000
            var_488_1[0].q = 0
            var_488_1[2] = 0
            zmm1 = zx.o(*rax_83)
            int32_t rax_84 = rax_83[1].d
            zmm0 = zmm1
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm12[0] = zmm12[0] * zmm0[0]
            zmm11[0] = zmm11[0] * zmm6[0]
            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm11[0] = zmm11[0] f* rax_76
            zmm12[0] = zmm12[0] f* rax_84
            zmm11[0] = zmm11[0] * zmm0[0]
            zmm0 = zmm10
            zmm12[0] = zmm12[0] f* zmm1.d
            zmm1.d = zmm14.d f* rax_68
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm14[0] = zmm14[0] * zmm0[0]
            zmm14[0] = zmm14[0] f* zmm10.d
            zmm11[0] = zmm11[0] f+ zmm1.d
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            zmm12[0] = zmm12[0] + zmm14[0]
            zmm12[0] = zmm12[0] + zmm14[0]
            float var_458[0x4]
            var_458[0] = zmm12[0]
            zmm8 = var_4d4
            zmm2 = _mm_shuffle_ps(var_458, var_458, 0xe1)
            zmm2[0] = zmm12[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm11[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_458 = zmm2
            zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x180))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0x160))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0x170))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0x150))
            zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
            var_488_1 = zmm6
            var_358_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
            var_348_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
        
        float zmm3[0x4]
        
        if (var_1b0 != 0 || result_2 != 0)
            void* var_308
            float* rdx_27 = var_308
            zmm11[0] = zmm11[0] f* var_4d0
            zmm1.d = zmm11.d f* var_524_1
            int32_t var_40c_1 = 0x3f800000
            zmm14[0] = zmm14[0] f* var_4e8
            int64_t var_508_1 = 0
            zmm14[0] = zmm14[0] f* arg_20
            int32_t var_500_1 = 0
            zmm7 = var_4c0
            zmm11[0] = zmm11[0] + zmm14[0]
            zmm10 = var_4f8_1
            zmm11[0] = zmm11[0] f* var_4c8
            zmm14[0] = zmm14[0] f+ zmm1.d
            zmm14[0] = zmm14[0] f* var_4e0
            zmm9 = var_4b8
            zmm12[0] = zmm12[0] * zmm7[0]
            zmm12[0] = zmm12[0] f* zmm10.d
            zmm11[0] = zmm11[0] + zmm14[0]
            zmm12[0] = zmm12[0] + zmm11[0]
            zmm12[0] = zmm12[0] * zmm9[0]
            zmm12[0] = zmm12[0] + zmm14[0]
            zmm12[0] = zmm12[0] + zmm11[0]
            float var_418[0x4]
            var_418[0] = zmm12[0]
            zmm2 = _mm_shuffle_ps(var_418, var_418, 0xe1)
            zmm2[0] = zmm12[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm12[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_418 = zmm2
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))
            int32_t var_314
            var_308 = &rdx_27[sx.q(var_314)]
            zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm0), _mm_add_ps(zmm1, zmm2))
            *rdx_27 = zmm3[0]
            void* var_2f0
            float* rdx_28 = var_2f0
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            int32_t var_2fc
            var_2f0 = &rdx_28[sx.q(var_2fc)]
            *rdx_28 = zmm0[0]
            void* var_2d8
            int32_t* rdx_29 = var_2d8
            int32_t var_2e4
            var_2d8 = &rdx_29[sx.q(var_2e4)]
            *rdx_29 = zmm1.d
            
            if (result_2 != 0)
                void* var_2c0
                float* rdx_30 = var_2c0
                zmm3[0] = zmm3[0] - zmm6[0]
                zmm0[0] = zmm0[0] - var_358_1
                zmm1.d = zmm1.d f- var_348_1
                zmm3[0] = zmm3[0] * zmm8[0]
                int32_t var_2cc
                var_2c0 = &rdx_30[sx.q(var_2cc)]
                zmm0[0] = zmm0[0] * zmm8[0]
                *rdx_30 = zmm3[0]
                void* var_2a8
                float* rdx_31 = var_2a8
                zmm1.d = zmm1.d f* zmm8[0]
                int32_t var_2b4
                var_2a8 = &rdx_31[sx.q(var_2b4)]
                *rdx_31 = zmm0[0]
                void* var_290
                int32_t* rdx_32 = var_290
                int32_t var_29c
                var_290 = &rdx_32[sx.q(var_29c)]
                *rdx_32 = zmm1.d
        else
            zmm9 = var_4b8
            zmm10 = var_4f8_1
            zmm7 = var_4c0
        
        zmm14 = var_4e8
        zmm11 = arg_20
        zmm12 = var_4e0
        
        if (var_1ae != 0)
            zmm6 = var_4d0
            zmm2 = var_524_1
            zmm6[0] = zmm6[0] - zmm7[0]
            zmm11[0] = zmm11[0] f- zmm10.d
            zmm1.d = zmm12.d f- zmm9[0]
            zmm14[0] = zmm14[0] - zmm7[0]
            zmm7 = var_4c8
            zmm7[0] = zmm7[0] - zmm9[0]
            zmm2[0] = zmm2[0] f- zmm10.d
            zmm7[0] = zmm7[0] * zmm14[0]
            zmm7[0] = zmm7[0] * zmm11[0]
            zmm8 = zmm2
            zmm8[0] = zmm8[0] f* zmm1.d
            zmm2[0] = zmm2[0] * zmm14[0]
            zmm8[0] = zmm8[0] - zmm7[0]
            zmm6[0] = zmm6[0] * zmm11[0]
            zmm6[0] = zmm6[0] f* zmm1.d
            zmm6[0] = zmm6[0] - zmm2[0]
            zmm7[0] = zmm7[0] - zmm6[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm1.d = zmm6.d f* zmm6[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm7[0] = zmm7[0] + zmm8[0]
            zmm7[0] = zmm7[0] f+ zmm1.d
            float zmm4_1[0x4]
            float zmm5_1[0x4]
            
            if (not(zmm7[0] == 1f))
                if (zmm7[0] >= 9.99999994e-09f)
                    zmm4_1 = zx.o(0)
                    zmm4_1[0] = zmm15[0]
                    zmm5_1 = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                    zmm7[0] = zmm7[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm1.d = zmm7.d f* zmm5_1[0]
                    zmm4_1[0] = zmm4_1[0] f- zmm1.d
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm1.d = zmm5_1.d f* zmm5_1[0]
                    zmm7[0] = zmm7[0] f* zmm1.d
                    zmm4_1[0] = zmm4_1[0] - zmm7[0]
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    float var_528_2 = zmm5_1[0]
                    zmm8[0] = zmm8[0] * zmm5_1[0]
                    zmm7[0] = zmm7[0] * zmm5_1[0]
                    zmm6[0] = zmm6[0] * zmm5_1[0]
                else
                    zmm8 = data_143dbb1f8
                    zmm7 = data_143dbb1fc
                    zmm6 = data_143dbb200
            
            void* var_278
            float* rdx_33 = var_278
            zmm3 = zx.o(0)
            int64_t var_478_1 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
            zmm5_1 = zx.o(0)
            float var_470_1 = zmm6[0]
            int32_t var_43c_1 = 0
            float var_448[0x4]
            var_448[0] = zmm8[0]
            int64_t var_508_2 = 0
            zmm2 = _mm_shuffle_ps(var_448, var_448, 0xe1)
            zmm2[0] = zmm7[0]
            int32_t var_500_2 = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm6[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_448 = zmm2
            zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
            zmm8 = _mm_add_ps(zmm8, zmm0)
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))
            int32_t var_284
            var_278 = &rdx_33[sx.q(var_284)]
            zmm5_1[0] = zmm15[0]
            zmm8 = _mm_add_ps(zmm8, _mm_add_ps(zmm1, zmm2))
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm1.d = zmm7.d f* zmm7[0]
            zmm1.d = zmm1.d f+ zmm8[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm1.d = zmm1.d f+ zmm6[0]
            zmm3[0] = zmm1.d
            zmm4_1 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm1.d = zmm3.d f* zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] f- zmm1.d
            zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm1.d = zmm4_1.d f* zmm4_1[0]
            zmm3[0] = zmm3[0] f* zmm1.d
            zmm5_1[0] = zmm5_1[0] - zmm3[0]
            zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm8[0] = zmm8[0] * zmm4_1[0]
            zmm7[0] = zmm7[0] * zmm4_1[0]
            zmm6[0] = zmm6[0] * zmm4_1[0]
            var_478_1.d = zmm8[0]
            var_478_1:4.d = zmm7[0]
            float var_470_2 = zmm6[0]
            *rdx_33 = zmm8[0]
            void* var_260
            float* rdx_34 = var_260
            float var_528_3 = zmm4_1[0]
            int32_t var_26c
            var_260 = &rdx_34[sx.q(var_26c)]
            *rdx_34 = zmm7[0]
            void* var_248
            float* rdx_35 = var_248
            int32_t var_254
            var_248 = &rdx_35[sx.q(var_254)]
            *rdx_35 = zmm6[0]
        
        char rbx_7 = var_1ac
        
        if (var_1ad != 0 || rbx_7 != 0)
            zmm6 = var_4c0
            zmm7 = zmm10
            int32_t var_38c_1 = 0
            zmm7[0] = zmm7[0] - zmm11[0]
            zmm8 = zmm9
            int32_t var_37c_1 = 0
            zmm9 = var_4d0
            zmm10.d = var_524_1.d f- zmm11[0]
            zmm11 = var_4c8
            zmm8[0] = zmm8[0] - zmm12[0]
            int32_t var_36c_1 = 0
            int128_t var_158
            __builtin_memset(&var_158, 0, 0x20)
            zmm11[0] = zmm11[0] - zmm12[0]
            zmm6[0] = zmm6[0] - zmm14[0]
            int128_t var_138
            __builtin_memcpy(&var_138, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            zmm9[0] = zmm9[0] - zmm14[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_95)[0x4]
            rax_95, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
                sub_140631b10(&var_158, &var_118)
            float var_388[0x4]
            var_388[0] = zmm6[0]
            float var_398[0x4]
            var_398[0] = zmm9[0]
            zmm2 = *rax_95
            float zmm5_2[0x4] = _mm_shuffle_ps(var_388, var_388, 0xe1)
            zmm14 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm5_2[0] = zmm7[0]
            float zmm4_2[0x4] = _mm_shuffle_ps(var_398, var_398, 0xe1)
            zmm4_2[0] = zmm10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm8[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm14 = _mm_mul_ps(zmm14, zmm5_2)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm14 = _mm_add_ps(zmm14, zmm0)
            var_388 = zmm5_2
            float var_378[0x4]
            var_378[0] = var_4e8[0]
            var_398 = zmm4_2
            zmm3 = _mm_shuffle_ps(var_378, var_378, 0xe1)
            zmm3[0] = arg_20[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = var_4e0[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_378 = zmm3
            zmm14 = _mm_add_ps(_mm_add_ps(zmm14, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_95[1]
            zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_2)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4_2)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm3)
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9, zmm0), zmm1), 
                _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12))
            zmm2 = rax_95[2]
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_95[3]
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
                int64_t var_508_3 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_500_3 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm1.d f+ zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm1.d = zmm1.d f+ zmm8[0]
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm0 = zmm13
                    zmm1 = zmm13
                    zmm5_2 = zmm13
                else
                    zmm3 = zx.o(0)
                    zmm4_2 = zx.o(0)
                    zmm4_2[0] = zmm15[0]
                    zmm3[0] = zmm1[0]
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm5_2[0]
                    zmm4_2[0] = zmm4_2[0] f- zmm1.d
                    zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3[0] = zmm3[0] f* zmm1.d
                    zmm4_2[0] = zmm4_2[0] - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm0 = zmm5_2
                    float var_528_4 = zmm5_2[0]
                    zmm0[0] = zmm0[0] * zmm6[0]
                    zmm1.d = zmm5_2.d f* zmm7[0]
                    zmm5_2[0] = zmm5_2[0] * zmm8[0]
                
                void* var_230
                float* rdx_37 = var_230
                zmm3 = zx.o(0)
                int32_t var_42c_1 = 0
                float var_438[0x4]
                var_438[0] = zmm0[0]
                int64_t var_508_4 = 0
                zmm2 = _mm_shuffle_ps(var_438, var_438, 0xe1)
                zmm2[0] = zmm1.d
                int32_t var_500_4 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm5_2[0]
                zmm5_2 = zx.o(0)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_438 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))
                int32_t var_23c
                var_230 = &rdx_37[sx.q(var_23c)]
                zmm5_2[0] = zmm15[0]
                zmm8 = _mm_add_ps(zmm8, _mm_add_ps(zmm1, zmm2))
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm4_2 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm1.d f+ zmm8[0]
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm1.d = zmm1.d f+ zmm4_2[0]
                zmm3[0] = zmm1.d
                zmm6 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * zmm5_2[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm1.d = zmm3.d f* zmm6[0]
                zmm5_2[0] = zmm5_2[0] f- zmm1.d
                zmm6[0] = zmm6[0] * zmm5_2[0]
                zmm6[0] = zmm6[0] + zmm6[0]
                zmm1.d = zmm6.d f* zmm6[0]
                zmm3[0] = zmm3[0] f* zmm1.d
                zmm5_2[0] = zmm5_2[0] - zmm3[0]
                zmm6[0] = zmm6[0] * zmm5_2[0]
                zmm6[0] = zmm6[0] + zmm6[0]
                float var_528_5 = zmm6[0]
                zmm6[0] = zmm6[0] * zmm8[0]
                zmm1.d = zmm6.d f* zmm7[0]
                *rdx_37 = zmm6[0]
                void* var_218
                int32_t* rdx_38 = var_218
                zmm6[0] = zmm6[0] * zmm4_2[0]
                int32_t var_224
                var_218 = &rdx_38[sx.q(var_224)]
                *rdx_38 = zmm1.d
                float* var_200
                float* rdx_39 = var_200
                int32_t var_20c
                var_200 = &rdx_39[sx.q(var_20c)]
                *rdx_39 = zmm6[0]
                rbx_7 = var_1ac
            
            if (rbx_7 != 0)
                zmm2 = data_142d4cc20
                int64_t var_508_5 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_500_5 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm1.d f+ zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm1.d = zmm1.d f+ zmm8[0]
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm0 = zmm13
                    zmm1 = zmm13
                    zmm5_2 = zmm13
                else
                    zmm3 = zx.o(0)
                    zmm4_2 = zx.o(0)
                    zmm4_2[0] = zmm15[0]
                    zmm3[0] = zmm1[0]
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm5_2[0]
                    zmm4_2[0] = zmm4_2[0] f- zmm1.d
                    zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3[0] = zmm3[0] f* zmm1.d
                    zmm4_2[0] = zmm4_2[0] - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm0 = zmm5_2
                    float var_528_6 = zmm5_2[0]
                    zmm0[0] = zmm0[0] * zmm6[0]
                    zmm1.d = zmm5_2.d f* zmm7[0]
                    zmm5_2[0] = zmm5_2[0] * zmm8[0]
                
                float* var_1e8
                float* rdx_40 = var_1e8
                zmm3 = zx.o(0)
                int32_t var_41c_1 = 0
                float var_428[0x4]
                var_428[0] = zmm0[0]
                int64_t var_508_6 = 0
                zmm2 = _mm_shuffle_ps(var_428, var_428, 0xe1)
                zmm2[0] = zmm1.d
                int32_t var_500_6 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm5_2[0]
                zmm5_2 = zx.o(0)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_428 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))
                int32_t var_1f4
                var_1e8 = &rdx_40[sx.q(var_1f4)]
                zmm5_2[0] = zmm15[0]
                zmm8 = _mm_add_ps(zmm8, _mm_add_ps(zmm1, zmm2))
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm1.d f+ zmm8[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm1.d = zmm1.d f+ zmm6[0]
                zmm3[0] = zmm1.d
                zmm4_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * zmm5_2[0]
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm1.d = zmm3.d f* zmm4_2[0]
                zmm5_2[0] = zmm5_2[0] f- zmm1.d
                zmm4_2[0] = zmm4_2[0] * zmm5_2[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm1.d = zmm4_2.d f* zmm4_2[0]
                zmm3[0] = zmm3[0] f* zmm1.d
                zmm5_2[0] = zmm5_2[0] - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm5_2[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm8[0] = zmm8[0] * zmm4_2[0]
                zmm7[0] = zmm7[0] * zmm4_2[0]
                *rdx_40 = zmm8[0]
                void* var_1d0
                float* rdx_41 = var_1d0
                zmm6[0] = zmm6[0] * zmm4_2[0]
                float var_528_7 = zmm4_2[0]
                int32_t var_1dc
                var_1d0 = &rdx_41[sx.q(var_1dc)]
                *rdx_41 = zmm7[0]
                void* var_1b8
                float* rdx_42 = var_1b8
                int32_t var_1c4
                var_1b8 = &rdx_42[sx.q(var_1c4)]
                *rdx_42 = zmm6[0]
        
        zmm8 = var_4d4
        cond:8_1 = var_4d8 + 1 s< *(arg2 + 0x40)
        zmm6 = var_488_1
        zmm2 = 0x3f800000
        rbx_1 += r9_6
        result = result_1
        r9_6 = var_3f0_1
        r10_2 = var_3b8_1
        r11_5 = var_4b0
        var_4d8 += 1
        r8_3 = var_3f8_1
    while (cond:8_1)

return result
