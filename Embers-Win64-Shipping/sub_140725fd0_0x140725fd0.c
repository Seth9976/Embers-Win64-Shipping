// 函数: sub_140725fd0
// 地址: 0x140725fd0
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
void* var_498 = rdx_3
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

void var_2d8
sub_140742680(&var_2d8, arg2)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

void* rcx_8 = *(rdi + 0x58)
int64_t* r15 = nullptr
void* var_4a8 = nullptr

if (rcx_8 != 0)
    r15 = *(**(rcx_8 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_25 = sub_140d3c6e0(rdi)
        void* rax_26
        void* rcx_11
        int64_t rdx_10
        
        if (rax_25 != 0)
            rax_26 = sub_142591550()
            rcx_11 = *(rax_25 + 0x10)
            rdx_10 = sx.q(*(rax_26 + 0x38))
        
        void* rax_28
        
        if (rax_25 == 0 || rdx_10.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_10 << 3)) != rax_26 + 0x30 || *(rax_25 + 0x430) == 0)
            rax_28 = &r15[0x27]
        else
            rax_28 = sub_141f66050(rax_25, rdi[0x1a])
        
        var_4a8 = rax_28

int64_t* rsi_2

if (rcx_8 == 0 || r15 == 0)
    rsi_2 = nullptr
else
    rsi_2 = r15[3]

int32_t rax_30 = (*(*rsi_2 + 0x58))(rsi_2)
float zmm2[0x4] = 0x3f800000
float zmm8[0x4] = 0x3f800000
zmm8[0] = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_30)
float var_4e4 = zmm8[0]
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_5 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_4a0 = r11_5
char var_170
char var_16e
char var_16d
char var_16c
char arg_10
char arg_18

if (var_170 != 0 || result.b != 0 || var_16e != result.b || var_16d != result.b
        || var_16c != result.b)
    arg_10 = 1
    
    if (result.b != 0)
        arg_18 = 1
    else
        arg_18 = result.b
else
    arg_10 = result.b
    arg_18 = result.b

int32_t var_4e8 = 0

if (*(arg2 + 0x40) s> 0)
    uint64_t rax_33 = zx.q(arg_20.b)
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    float zmm13[0x4] = zx.o(0)
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4] = arg_10.d
    int32_t var_50c
    arg_20 = var_50c[0]
    int32_t var_4dc
    float var_518_1 = var_4dc[0]
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int32_t var_4b4
    float var_514_1 = var_4b4[0]
    result = rax_33 << 2
    uint64_t r8_2 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(rax_10) << 2
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float var_308_1 = arg_10.d[0]
    uint64_t r10_2 = zx.q(rax_6) << 2
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    float var_318_1 = arg_10.d[0]
    uint64_t result_1 = result
    uint64_t var_3f8_1 = r8_2
    uint64_t var_3f0_1 = r9_6
    uint64_t var_3e8_1 = r10_2
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    bool cond:7_1
    
    do
        float (* rdx_13)[0x4] = r12_1
        float (* rcx_16)[0x4] = r13_1
        r12_1 += result
        r13_1 += r8_2
        int32_t* rdx_14 = var_498
        float var_2e4_1 = (*rdx_13)[0]
        var_498 = rdx_14 + r10_2
        uint64_t rdx_16 = zx.q(*rdx_14)
        int64_t var_484_1 = (_mm_unpacklo_ps(*rbx_1, (*rcx_16)[0].q)).q
        
        if (rdx_16.d s< 0 || rdx_16.d s> r11_5)
            int32_t var_2f0_1 = 0
            int64_t var_3c4_1 = (_mm_unpacklo_ps(zmm2, zmm13[0].q)).q
            int32_t var_3bc_1 = 0
            rdx_16 = zx.q(0.o[0])
        
        uint32_t rbx_5 = (rdx_16 * 3).d
        int32_t rax_37 = (*(*rsi_2 + 0x68))(rsi_2, zx.q(rbx_5))
        int64_t r8_3 = *rsi_2
        int32_t rax_38 = (*(r8_3 + 0x68))(rsi_2, zx.q(rbx_5 + 1), r8_3)
        int64_t r8_4 = *rsi_2
        int32_t rax_39 = (*(r8_4 + 0x68))(rsi_2, zx.q(rbx_5 + 2), r8_4)
        uint32_t var_510
        int32_t var_508
        int32_t var_4e0
        int32_t var_4d8
        int32_t var_4b8
        int32_t var_4b0
        float zmm0[0x4]
        float zmm1[0x4]
        
        if (arg_10 != 0)
            void var_168
            int64_t* rax_41 = sub_142316040(&var_168, rcx_8, r15, var_4a8, rax_37)
            zmm7 = zx.o(*rax_41)
            var_508 = rax_41[1].d
            void var_15c
            int64_t* rax_43
            int512_t zmm6_1
            rax_43, zmm6_1 = sub_142316040(&var_15c, rcx_8, r15, var_4a8, rax_38)
            zmm6_1.o = zx.o(*rax_43)
            var_4d8 = rax_43[1].d
            void var_150
            int64_t* rax_46
            rax_46, zmm6 = sub_142316040(&var_150, rcx_8, r15, var_4a8, rax_39)
            zmm0 = zmm7
            var_510 = zmm7.d
            arg_20 = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            zmm1 = zx.o(*rax_46)
            int32_t rax_47 = rax_46[1].d
            var_518_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
            var_514_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
            var_4b0 = rax_47
            var_4e0 = zmm6.d
            var_4b8 = zmm1.d
        
        zmm12 = var_2e4_1
        zmm14 = var_484_1:4.d
        zmm11 = var_484_1.d
        int64_t var_4f8
        uint128_t zmm5_1
        
        if (arg_18 != 0)
            void var_144
            int64_t* rax_49 = sub_142316040(&var_144, rcx_8, r15, var_4a8, rax_37)
            zmm8 = zx.o(*rax_49)
            int32_t rax_50 = rax_49[1].d
            void var_138
            int64_t* rax_52
            int512_t zmm6_2
            rax_52, zmm6_2 = sub_142316040(&var_138, rcx_8, r15, var_4a8, rax_38)
            zmm6_2.o = zx.o(*rax_52)
            int32_t rax_53 = rax_52[1].d
            void var_12c
            int64_t* rax_55
            rax_55, zmm6 = sub_142316040(&var_12c, rcx_8, r15, var_4a8, rax_39)
            int32_t var_44c_1 = 0x3f800000
            var_4f8 = 0
            int32_t var_4f0_1 = 0
            zmm1 = zx.o(*rax_55)
            int32_t rax_56 = rax_55[1].d
            zmm10.d = zmm12.d f* _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
            zmm9.d = zmm12.d f* zmm1[0]
            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm11[0] = zmm11[0] f* rax_50
            zmm7.d = zmm12.d f* rax_56
            zmm14[0] = zmm14[0] * zmm0[0]
            zmm5_1.d = zmm14.d f* zmm6[0]
            zmm14[0] = zmm14[0] f* rax_53
            zmm0 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm11[0] = zmm11[0] * zmm0[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm11[0] = zmm11[0] * zmm8[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm5_1.d = zmm5_1.d f+ zmm11[0]
            zmm14[0] = zmm14[0] f+ zmm7.d
            zmm10.d = zmm10.d f+ zmm14[0]
            zmm9.d = zmm9.d f+ zmm5_1.d
            float var_458[0x4]
            var_458[0] = zmm9.d
            zmm2 = _mm_shuffle_ps(var_458, var_458, 0xe1)
            zmm2[0] = zmm10.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm14[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_458 = zmm2
            zmm15 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x180))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0x170))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0x160))
            zmm8 = var_4e4
            zmm15 = _mm_add_ps(_mm_add_ps(zmm15, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0x150))))
            var_318_1 = _mm_shuffle_ps(zmm15, zmm15, 0x55)[0]
            var_308_1 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)[0]
        
        float zmm3[0x4]
        
        if (var_170 != 0 || result_2 != 0)
            void* var_2c8
            float* rdx_26 = var_2c8
            zmm11[0] = zmm11[0] f* arg_20
            int32_t var_43c_1 = 0x3f800000
            zmm14[0] = zmm14[0] * var_518_1
            zmm3 = zmm12
            var_4f8 = 0
            zmm11[0] = zmm11[0] f* var_508
            int32_t var_4f0_2 = 0
            zmm14[0] = zmm14[0] f* var_4e0
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm6 = var_510
            zmm7 = var_4b8
            zmm10 = var_514_1
            zmm14[0] = zmm14[0] f* var_4d8
            zmm9 = var_4b0
            zmm11[0] = zmm11[0] * zmm6[0]
            zmm3[0] = zmm3[0] f* zmm7.d
            zmm11[0] = zmm11[0] + zmm14[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm5_1.d = zmm12.d f* zmm10.d
            zmm12.d = zmm12.d f* zmm9.d
            zmm5_1.d = zmm5_1.d f+ zmm14[0]
            zmm14[0] = zmm14[0] + zmm3[0]
            zmm11[0] = zmm11[0] f+ zmm12.d
            float var_448[0x4]
            var_448[0] = zmm14[0]
            zmm2 = _mm_shuffle_ps(var_448, var_448, 0xe1)
            zmm2[0] = zmm5_1.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm11[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_448 = zmm2
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))
            int32_t var_2d4
            var_2c8 = &rdx_26[sx.q(var_2d4)]
            zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm0), _mm_add_ps(zmm1, zmm2))
            *rdx_26 = zmm3[0]
            void* var_2b0
            float* rdx_27 = var_2b0
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            int32_t var_2bc
            var_2b0 = &rdx_27[sx.q(var_2bc)]
            *rdx_27 = zmm0[0]
            void* var_298
            float* rdx_28 = var_298
            int32_t var_2a4
            var_298 = &rdx_28[sx.q(var_2a4)]
            *rdx_28 = zmm1[0]
            
            if (result_2 != 0)
                void* var_280
                float* rdx_29 = var_280
                zmm3[0] = zmm3[0] - zmm15[0]
                zmm0[0] = zmm0[0] - var_318_1
                zmm1[0] = zmm1[0] - var_308_1
                zmm3[0] = zmm3[0] * zmm8[0]
                int32_t var_28c
                var_280 = &rdx_29[sx.q(var_28c)]
                zmm0[0] = zmm0[0] * zmm8[0]
                *rdx_29 = zmm3[0]
                void* var_268
                float* rdx_30 = var_268
                zmm1[0] = zmm1[0] * zmm8[0]
                int32_t var_274
                var_268 = &rdx_30[sx.q(var_274)]
                *rdx_30 = zmm0[0]
                void* var_250
                float* rdx_31 = var_250
                int32_t var_25c
                var_250 = &rdx_31[sx.q(var_25c)]
                *rdx_31 = zmm1[0]
        else
            zmm9 = var_4b0
            zmm10 = var_514_1
            zmm7 = var_4b8
            zmm6 = var_510
        
        zmm11 = arg_20
        zmm12 = var_508
        float zmm4_1[0x4]
        
        if (var_16e != 0)
            zmm2 = var_518_1
            zmm4_1 = zmm6
            zmm6 = var_4e0
            zmm4_1[0] = zmm4_1[0] f- zmm7.d
            zmm6[0] = zmm6[0] f- zmm7.d
            zmm2[0] = zmm2[0] f- zmm10.d
            zmm7.d = var_4d8.d f- zmm9.d
            zmm11[0] = zmm11[0] f- zmm10.d
            zmm1 = zmm12
            zmm1[0] = zmm1[0] f- zmm9.d
            zmm8 = zmm2
            zmm2[0] = zmm2[0] * zmm4_1[0]
            zmm0 = zmm7
            zmm7.d = zmm7.d f* zmm4_1[0]
            zmm0[0] = zmm0[0] * zmm11[0]
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm8[0] = zmm8[0] - zmm0[0]
            zmm6[0] = zmm6[0] * zmm11[0]
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm6[0] = zmm6[0] - zmm2[0]
            zmm7.d = zmm7.d f- zmm6[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm3 = zmm7
            zmm3[0] = zmm3[0] f* zmm7.d
            zmm3[0] = zmm3[0] + zmm8[0]
            zmm3[0] = zmm3[0] + zmm6[0]
            
            if (not(zmm3[0] == 1f))
                if (zmm3[0] >= 9.99999994e-09f)
                    zmm4_1 = 0x3f000000
                    zmm0 = zmm3
                    zmm3 = zmm0
                    zmm5_1 = _mm_rsqrt_ss(zmm0.d, zmm3[0])
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0 = zmm5_1
                    zmm0[0] = zmm0[0] f* zmm5_1.d
                    zmm3[0] = zmm3[0] * zmm0[0]
                    zmm0 = zmm5_1
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm0[0] = zmm0[0] * zmm2[0]
                    zmm5_1.d = zmm5_1.d f+ zmm0[0]
                    zmm1 = zmm5_1
                    zmm0 = zmm5_1
                    zmm1[0] = zmm1[0] f* zmm5_1.d
                    zmm3[0] = zmm3[0] * zmm1[0]
                    zmm4_1[0] = 0.5f - zmm3[0]
                    zmm0[0] = zmm0[0] * zmm4_1[0]
                    zmm5_1.d = zmm5_1.d f+ zmm0[0]
                    zmm8[0] = zmm8[0] f* zmm5_1.d
                    zmm7.d = zmm7.d f* zmm5_1.d
                    zmm6[0] = zmm6[0] f* zmm5_1.d
                else
                    zmm8 = data_143dbb1f8
                    zmm7 = data_143dbb1fc
                    zmm6 = data_143dbb200
            
            void* var_238
            float* rdx_32 = var_238
            zmm3 = zx.o(0)
            int64_t var_478_1 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
            float var_470_1 = zmm6[0]
            int32_t var_42c_1 = 0
            float var_438[0x4]
            var_438[0] = zmm8[0]
            var_4f8 = 0
            zmm2 = _mm_shuffle_ps(var_438, var_438, 0xe1)
            zmm2[0] = zmm7.d
            int32_t var_4f0_3 = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm6[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_438 = zmm2
            zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
            zmm8 = _mm_add_ps(zmm8, zmm0)
            int32_t var_244
            var_238 = &rdx_32[sx.q(var_244)]
            zmm1 =
                _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0)))
            zmm2 = 0x3f000000
            zmm8 = _mm_add_ps(zmm8, zmm1)
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm1 = zmm7
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm1[0] = zmm1[0] + zmm8[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm1[0] = zmm1[0] + zmm6[0]
            zmm3[0] = zmm1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm3[0] = zmm3[0] * zmm4_1[0]
            zmm2[0] = 0.5f - zmm3[0]
            zmm4_1[0] = zmm4_1[0] * zmm2[0]
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm3[0] = zmm3[0] * zmm4_1[0]
            zmm5_1.d = 0.5f - zmm3[0]
            zmm4_1[0] = zmm4_1[0] f* zmm5_1.d
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm8[0] = zmm8[0] * zmm4_1[0]
            zmm7.d = zmm7.d f* zmm4_1[0]
            zmm6[0] = zmm6[0] * zmm4_1[0]
            var_478_1.d = zmm8[0]
            var_478_1:4.d = zmm7.d
            float var_470_2 = zmm6[0]
            *rdx_32 = zmm8[0]
            void* var_220
            int32_t* rdx_33 = var_220
            int32_t var_22c
            var_220 = &rdx_33[sx.q(var_22c)]
            *rdx_33 = zmm7.d
            void* var_208
            float* rdx_34 = var_208
            int32_t var_214
            var_208 = &rdx_34[sx.q(var_214)]
            *rdx_34 = zmm6[0]
        
        char rbx_7 = var_16c
        
        if (var_16d != 0 || rbx_7 != 0)
            int64_t rdx_35 = r15[0x13]
            uint64_t rcx_37 = zx.q(r15[0x15].d)
            zmm7.d = zmm10.d f- zmm11[0]
            zmm8 = zmm9
            zmm8[0] = zmm8[0] f- zmm12.d
            zmm6 = var_4b8
            zmm10.d = var_518_1.d f- zmm11[0]
            zmm11 = var_4d8
            zmm11[0] = zmm11[0] f- zmm12.d
            zmm12 = data_142d3f660
            zmm6[0] = zmm6[0] f- var_510
            zmm9.d = var_4e0.d f- var_510
            int64_t rax_68 = zx.q(rax_37) * rcx_37
            int32_t var_38c_1 = 0
            int32_t var_37c_1 = 0
            int32_t var_36c_1 = 0
            int64_t var_350_1 = 0
            zmm4_1 = *(rdx_35 + (rax_68 << 3))
            zmm5_1 = *(rdx_35 + (rax_68 << 3) + 4)
            int64_t rax_70 = zx.q(rax_38) * rcx_37
            float var_338_1 = zmm4_1[0]
            int32_t var_334_1 = zmm5_1.d
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0x3f800000
            zmm2 = *(rdx_35 + (rax_70 << 3))
            zmm3 = *(rdx_35 + (rax_70 << 3) + 4)
            zmm2[0] = zmm2[0] - zmm4_1[0]
            zmm3[0] = zmm3[0] f- zmm5_1.d
            int64_t rax_72 = zx.q(rax_39) * rcx_37
            float var_358 = zmm2[0]
            float var_354_1 = zmm3[0]
            zmm0 = *(rdx_35 + (rax_72 << 3))
            zmm1 = *(rdx_35 + (rax_72 << 3) + 4)
            zmm0[0] = zmm0[0] - zmm4_1[0]
            zmm1[0] = zmm1[0] f- zmm5_1.d
            float var_348_1 = zmm0[0]
            float var_328_1[0x4] = zmm12
            float var_344_1 = zmm1[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_73)[0x4]
            rax_73, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_358, &var_118)
            float var_388[0x4]
            var_388[0] = zmm6[0]
            float var_398[0x4]
            var_398[0] = zmm9.d
            zmm2 = *rax_73
            float zmm5_2[0x4] = _mm_shuffle_ps(var_388, var_388, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7.d
            zmm7 = zmm0
            var_4f8.o = zmm0
            float zmm4_2[0x4] = _mm_shuffle_ps(var_398, var_398, 0xe1)
            zmm4_2[0] = zmm10.d
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm8[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm7 = _mm_mul_ps(zmm7, zmm5_2)
            var_388 = zmm5_2
            var_398 = zmm4_2
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            float var_378[0x4]
            var_378[0] = var_510[0]
            zmm3 = _mm_shuffle_ps(var_378, var_378, 0xe1)
            zmm3[0] = arg_20[0]
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = var_508[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_378 = zmm3
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_73[1]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            var_4f8.o = zmm7
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_73[2]
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_73[3]
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
                int64_t var_4c8_1 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_4c0_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm1[0] = zmm1[0] + zmm8[0]
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm3 = zx.o(0)
                    zmm3[0] = zmm1[0]
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * zmm14[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm14[0] = zmm14[0] - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm14[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm14[0] = zmm14[0] - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm14[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1f0
                float* rdx_37 = var_1f0
                zmm3 = zx.o(0)
                int32_t var_41c_1 = 0
                float var_428[0x4]
                var_428[0] = zmm6[0]
                int64_t var_4c8_2 = 0
                zmm2 = _mm_shuffle_ps(var_428, var_428, 0xe1)
                zmm2[0] = zmm7.d
                int32_t var_4c0_2 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_428 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
                int32_t var_1fc
                var_1f0 = &rdx_37[sx.q(var_1fc)]
                zmm8 = _mm_add_ps(_mm_add_ps(zmm8, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))))
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm1 = zmm7
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm8[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm1[0] = zmm1[0] + zmm6[0]
                zmm3[0] = zmm1[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * zmm14[0]
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm14[0] = zmm14[0] - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm14[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm14[0] = zmm14[0] - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm14[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm7.d = zmm7.d f* zmm4_2[0]
                zmm8[0] = zmm8[0] * zmm4_2[0]
                zmm6[0] = zmm6[0] * zmm4_2[0]
                *rdx_37 = zmm8[0]
                void* var_1d8
                int32_t* rdx_38 = var_1d8
                int32_t var_1e4
                var_1d8 = &rdx_38[sx.q(var_1e4)]
                *rdx_38 = zmm7.d
                void* var_1c0
                float* rdx_39 = var_1c0
                zmm7 = var_4f8.o
                int32_t var_1cc
                var_1c0 = &rdx_39[sx.q(var_1cc)]
                *rdx_39 = zmm6[0]
                rbx_7 = var_16c
            
            if (rbx_7 != 0)
                zmm2 = data_142d4cc20
                int64_t var_4c8_3 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_4c0_3 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm1[0] = zmm1[0] + zmm8[0]
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm3 = zx.o(0)
                    zmm3[0] = zmm1[0]
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * zmm14[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm14[0] = zmm14[0] - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm14[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3[0] = zmm3[0] * zmm5_2[0]
                    zmm14[0] = zmm14[0] - zmm3[0]
                    zmm5_2[0] = zmm5_2[0] * zmm14[0]
                    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1a8
                float* rdx_40 = var_1a8
                zmm3 = zx.o(0)
                int32_t var_40c_1 = 0
                float var_418[0x4]
                var_418[0] = zmm6[0]
                int64_t var_4c8_4 = 0
                zmm2 = _mm_shuffle_ps(var_418, var_418, 0xe1)
                zmm2[0] = zmm7.d
                int32_t var_4c0_4 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_418 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
                int32_t var_1b4
                var_1a8 = &rdx_40[sx.q(var_1b4)]
                zmm8 = _mm_add_ps(_mm_add_ps(zmm8, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))))
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm8[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm1[0] = zmm1[0] + zmm6[0]
                zmm3[0] = zmm1[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * zmm14[0]
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm14[0] = zmm14[0] - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm14[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm3[0] = zmm3[0] * zmm4_2[0]
                zmm14[0] = zmm14[0] - zmm3[0]
                zmm4_2[0] = zmm4_2[0] * zmm14[0]
                zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
                zmm8[0] = zmm8[0] * zmm4_2[0]
                zmm7.d = zmm7.d f* zmm4_2[0]
                *rdx_40 = zmm8[0]
                void* var_190
                int32_t* rdx_41 = var_190
                zmm6[0] = zmm6[0] * zmm4_2[0]
                int32_t var_19c
                var_190 = &rdx_41[sx.q(var_19c)]
                *rdx_41 = zmm7.d
                void* var_178
                float* rdx_42 = var_178
                int32_t var_184
                var_178 = &rdx_42[sx.q(var_184)]
                *rdx_42 = zmm6[0]
        
        zmm8 = var_4e4
        cond:7_1 = var_4e8 + 1 s< *(arg2 + 0x40)
        zmm2 = 0x3f800000
        rbx_1 += r9_6
        result = result_1
        r9_6 = var_3f0_1
        r10_2 = var_3e8_1
        r11_5 = var_4a0
        var_4e8 += 1
        r8_2 = var_3f8_1
    while (cond:7_1)

return result
