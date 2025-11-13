// 函数: sub_140729a00
// 地址: 0x140729a00
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
void* var_4b8 = rdx_14
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

void* var_4c0 = rdx_19
void var_2d8
sub_140742680(&var_2d8, arg2)

if (sub_140d3c6e0(r15) != 0)
    sub_142591550()

void* rcx_8 = *(r15 + 0x58)
int64_t* r14 = nullptr
void* var_4d0 = nullptr

if (rcx_8 != 0)
    r14 = *(**(rcx_8 + 0x58) + (sx.q(r15[0x1a]) << 3))
    
    if (r15[0x86].b != 0)
        void* rax_24 = sub_140d3c6e0(r15)
        void* rax_25
        void* rcx_11
        int64_t rdx_23
        
        if (rax_24 != 0)
            rax_25 = sub_142591550()
            rcx_11 = *(rax_24 + 0x10)
            rdx_23 = sx.q(*(rax_25 + 0x38))
        
        void* rax_27
        
        if (rax_24 == 0 || rdx_23.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_23 << 3)) != rax_25 + 0x30 || *(rax_24 + 0x430) == 0)
            rax_27 = &r14[0x27]
        else
            rax_27 = sub_141f66050(rax_24, r15[0x1a])
        
        var_4d0 = rax_27

int64_t* rcx_14

if (rcx_8 == 0 || r14 == 0)
    rcx_14 = nullptr
else
    rcx_14 = r14[3]

int32_t rax_29 = (*(*rcx_14 + 0x58))(rcx_14)
float zmm2[0x4] = 0x3f800000
float zmm9[0x4] = 0x3f800000
zmm9[0] = 1f f/ r15[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_29)
float var_4fc = zmm9[0]
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

int32_t var_500 = 0

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm10 = 0x3f000000
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4] = arg_10
    int32_t var_50c
    float arg_20 = var_50c[0]
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4] = zx.o(0)
    int32_t var_4dc
    float var_528_1 = var_4dc[0]
    uint64_t rdx_27 = zx.q(rbx_1) << 2
    uint64_t r8_2 = zx.q(rdi_1) << 2
    uint64_t r9_5 = zx.q(rsi_1) << 2
    float var_308_1 = arg_10[0]
    uint64_t r10_2 = zx.q(r12_1.b) << 2
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float var_318_1 = arg_10[0]
    int32_t var_4ec
    float var_518_1 = var_4ec[0]
    uint64_t var_408_1 = rdx_27
    uint64_t var_3f8_1 = r8_2
    uint64_t var_3a8_1 = r9_5
    uint64_t var_400_1 = r10_2
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    bool cond:6_1
    
    do
        float (* rcx_16)[0x4] = var_4c0
        int32_t* rdx_28 = var_4a8
        var_4c0 = rcx_16 + rdx_27
        float (* rcx_18)[0x4] = var_4b8
        float var_2e4_1 = (*rcx_16)[0]
        var_4b8 = rcx_18 + r8_2
        float (* rcx_20)[0x4] = var_4b0
        var_4b0 = rcx_20 + r9_5
        var_4a8 = rdx_28 + r10_2
        uint64_t rdx_30 = zx.q(*rdx_28)
        int64_t var_494_1 = (_mm_unpacklo_ps(*rcx_20, (*rcx_18)[0].q)).q
        
        if (rdx_30.d s< 0 || rdx_30.d s> r11_5)
            int32_t var_2f0_1 = 0
            int64_t var_3b4_1 = (_mm_unpacklo_ps(zmm2, zmm15[0].q)).q
            int32_t var_3ac_1 = 0
            rdx_30 = zx.q(0.o[0])
        
        uint32_t rbx_2 = (rdx_30 * 3).d
        int32_t rax_37 = (*(*rcx_14 + 0x68))(rcx_14, zx.q(rbx_2))
        int64_t r8_3 = *rcx_14
        uint64_t rdi_2 = zx.q(rax_37)
        int32_t rax_38 = (*(r8_3 + 0x68))(rcx_14, zx.q(rbx_2 + 1), r8_3)
        int64_t r8_4 = *rcx_14
        result = (*(r8_4 + 0x68))(rcx_14, zx.q(rbx_2 + 2), r8_4)
        int32_t rbx_3 = result.d
        int32_t var_540_1 = result.d
        int32_t var_510
        int32_t var_508
        int32_t var_4f0
        int32_t var_4e8
        int32_t var_4e0
        int32_t var_4d8
        float zmm1[0x4]
        float zmm7[0x4]
        
        if (arg_10.b != 0)
            void var_168
            int64_t* rax_39 = sub_142316040(&var_168, rcx_8, r14, var_4d0, rdi_2.d)
            zmm7 = zx.o(*rax_39)
            var_508 = rax_39[1].d
            void var_15c
            int64_t* rax_40
            int512_t zmm6_1
            rax_40, zmm6_1 = sub_142316040(&var_15c, rcx_8, r14, var_4d0, rax_38)
            zmm6_1.o = zx.o(*rax_40)
            var_4d8 = rax_40[1].d
            void var_150
            int64_t* rax_42
            rax_42, zmm6 = sub_142316040(&var_150, rcx_8, r14, var_4d0, rbx_3)
            var_510 = zmm7.d
            arg_20 = _mm_shuffle_ps(zmm7, zmm7, 0x55)[0]
            zmm1 = zx.o(*rax_42)
            result = zx.q(rax_42[1].d)
            var_528_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
            var_518_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
            var_4e8 = result.d
            var_4e0 = zmm6.d
            var_4f0 = zmm1.d
        
        zmm11 = var_2e4_1
        zmm12 = var_494_1:4.d
        zmm14 = var_494_1.d
        float zmm0[0x4]
        
        if (arg_18 != 0)
            void var_144
            int64_t* rax_43 = sub_142316040(&var_144, rcx_8, r14, var_4d0, rdi_2.d)
            zmm10 = zx.o(*rax_43)
            int32_t rax_44 = rax_43[1].d
            void var_138
            int64_t* rax_45
            int512_t zmm6_2
            rax_45, zmm6_2 = sub_142316040(&var_138, rcx_8, r14, var_4d0, rax_38)
            zmm6_2.o = zx.o(*rax_45)
            int32_t rax_46 = rax_45[1].d
            void var_12c
            int64_t* rax_47
            rax_47, zmm6 = sub_142316040(&var_12c, rcx_8, r14, var_4d0, rbx_3)
            int32_t var_43c_1 = 0x3f800000
            zmm14[0] = zmm14[0] f* zmm10.d
            int64_t var_538_1 = 0
            zmm1 = zx.o(*rax_47)
            result = zx.q(rax_47[1].d)
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm11[0] = zmm11[0] * zmm0[0]
            zmm12[0] = zmm12[0] f* rax_46
            int32_t var_530_1 = 0
            zmm11[0] = zmm11[0] * zmm1[0]
            zmm11[0] = zmm11[0] f* result.d
            zmm12[0] = zmm12[0] * zmm6[0]
            zmm14[0] = zmm14[0] f* rax_44
            zmm14[0] = zmm14[0] + zmm12[0]
            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm12[0] = zmm12[0] * zmm0[0]
            zmm0 = zmm10
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm14[0] = zmm14[0] + zmm12[0]
            zmm14[0] = zmm14[0] * zmm0[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm14[0] = zmm14[0] + zmm12[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            float var_448[0x4]
            var_448[0] = zmm14[0]
            zmm13 = _mm_shuffle_ps(var_448, var_448, 0xe1)
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm13[0] = zmm14[0]
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xc6)
            zmm13[0] = zmm14[0]
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
            var_448 = zmm13
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm13, zmm13, 0x55), *(r15 + 0x160))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm13, zmm13, 0), *(r15 + 0x150))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm13, zmm13, 0xff), *(r15 + 0x180))
            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm10 = 0x3f000000
            zmm13 = _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(zmm13, *(r15 + 0x170)), zmm2), zmm1)
            zmm9 = var_4fc
            var_308_1 = _mm_shuffle_ps(zmm13, zmm13, 0x55)[0]
            var_318_1 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)[0]
        
        float zmm3[0x4]
        
        if (var_170 != 0 || result_6 != 0)
            void* var_2c8
            float* rdx_40 = var_2c8
            zmm12[0] = zmm12[0] f* var_4d8
            zmm12[0] = zmm12[0] * var_528_1
            int32_t var_42c_1 = 0x3f800000
            zmm7 = var_510
            zmm14[0] = zmm14[0] * arg_20
            int64_t var_538_2 = 0
            zmm12[0] = zmm12[0] f* var_4e0
            int32_t var_530_2 = 0
            zmm11[0] = zmm11[0] f* var_4f0
            zmm14[0] = zmm14[0] + zmm12[0]
            zmm6 = var_4e8
            zmm14[0] = zmm14[0] f* var_508
            zmm8 = var_518_1
            zmm11[0] = zmm11[0] * zmm6[0]
            zmm14[0] = zmm14[0] + zmm12[0]
            zmm14[0] = zmm14[0] * zmm7[0]
            zmm11[0] = zmm11[0] * zmm8[0]
            zmm12[0] = zmm12[0] + zmm14[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            float var_438[0x4]
            var_438[0] = zmm11[0]
            zmm3 = _mm_shuffle_ps(var_438, var_438, 0xe1)
            zmm3[0] = zmm14[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = zmm14[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_438 = zmm3
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r15 + 0xe0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r15 + 0xd0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r15 + 0x100))
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm1 = _mm_add_ps(zmm1, zmm0)
            int32_t var_2d4
            var_2c8 = &rdx_40[sx.q(var_2d4)]
            zmm3 = _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(zmm3, *(r15 + 0xf0)), zmm2), zmm1)
            *rdx_40 = zmm3[0]
            void* var_2b0
            float* rdx_41 = var_2b0
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            int32_t var_2bc
            var_2b0 = &rdx_41[sx.q(var_2bc)]
            *rdx_41 = zmm1[0]
            void* var_298
            float* rdx_42 = var_298
            int32_t result_1
            result = sx.q(result_1)
            var_298 = &rdx_42[result]
            *rdx_42 = zmm2[0]
            
            if (result_6 != 0)
                void* var_280
                float* rdx_43 = var_280
                zmm3[0] = zmm3[0] - zmm13[0]
                zmm1[0] = zmm1[0] - var_308_1
                zmm2[0] = zmm2[0] - var_318_1
                zmm9[0] = zmm9[0] * zmm3[0]
                int32_t var_28c
                var_280 = &rdx_43[sx.q(var_28c)]
                zmm1[0] = zmm1[0] * zmm9[0]
                *rdx_43 = zmm9[0]
                void* var_268
                float* rdx_44 = var_268
                zmm2[0] = zmm2[0] * zmm9[0]
                int32_t var_274
                var_268 = &rdx_44[sx.q(var_274)]
                *rdx_44 = zmm1[0]
                void* var_250
                float* rdx_45 = var_250
                int32_t result_2
                result = sx.q(result_2)
                var_250 = &rdx_45[result]
                *rdx_45 = zmm2[0]
        else
            zmm6 = var_4e8
            zmm8 = var_518_1
            zmm7 = var_510
        
        zmm12 = var_508
        zmm14 = arg_20
        zmm11 = var_4f0
        float zmm4_1[0x4]
        float zmm5_1[0x4]
        
        if (var_16e != 0)
            zmm1 = var_4e0
            zmm9 = zmm7
            zmm7 = var_528_1
            zmm9[0] = zmm9[0] - zmm11[0]
            zmm2 = var_4d8
            zmm7[0] = zmm7[0] - zmm8[0]
            zmm2[0] = zmm2[0] - zmm6[0]
            zmm14[0] = zmm14[0] - zmm8[0]
            zmm12[0] = zmm12[0] - zmm6[0]
            zmm1[0] = zmm1[0] - zmm11[0]
            zmm9[0] = zmm9[0] * zmm7[0]
            zmm9[0] = zmm9[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm14[0]
            zmm6 = zmm1
            zmm6[0] = zmm6[0] * zmm14[0]
            zmm1[0] = zmm1[0] * zmm12[0]
            zmm6[0] = zmm6[0] - zmm9[0]
            zmm7[0] = zmm7[0] * zmm12[0]
            zmm9[0] = zmm9[0] - zmm1[0]
            zmm7[0] = zmm7[0] - zmm2[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm7[0] = zmm7[0] + zmm9[0]
            zmm7[0] = zmm7[0] + zmm6[0]
            
            if (not(zmm7[0] == 1f))
                if (zmm7[0] >= 9.99999994e-09f)
                    zmm4_1 = zx.o(0)
                    zmm4_1[0] = zmm10[0]
                    zmm5_1 = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                    zmm7[0] = zmm7[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm7[0] = zmm7[0] * zmm5_1[0]
                    zmm4_1[0] = zmm4_1[0] - zmm7[0]
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm7[0] = zmm7[0] * zmm5_1[0]
                    zmm4_1[0] = zmm4_1[0] - zmm7[0]
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    float var_544_1 = zmm5_1[0]
                    zmm6[0] = zmm6[0] * zmm5_1[0]
                    zmm9[0] = zmm9[0] * zmm5_1[0]
                    zmm7[0] = zmm7[0] * zmm5_1[0]
                else
                    zmm7 = data_143dbb1f8
                    zmm9 = data_143dbb1fc
                    zmm6 = data_143dbb200
            
            void* var_238
            float* rdx_46 = var_238
            zmm3 = zx.o(0)
            int64_t var_488_1 = (_mm_unpacklo_ps(zmm7, zmm9[0].q)).q
            zmm4_1 = zx.o(0)
            float var_480_1 = zmm6[0]
            int32_t var_41c_1 = 0
            float var_428[0x4]
            var_428[0] = zmm7[0]
            int64_t var_538_3 = 0
            zmm8 = _mm_shuffle_ps(var_428, var_428, 0xe1)
            zmm8[0] = zmm9[0]
            int32_t var_530_3 = 0
            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xc6)
            zmm8[0] = zmm6[0]
            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            var_428 = zmm8
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0x55), *(r15 + 0xe0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xff), *(r15 + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), *(r15 + 0xd0))
            zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xaa), *(r15 + 0xf0))
            int32_t var_244
            var_238 = &rdx_46[sx.q(var_244)]
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
            var_488_1.d = zmm8[0]
            float var_480_2 = zmm6[0]
            var_488_1:4.d = zmm7[0]
            *rdx_46 = zmm8[0]
            void* var_220
            float* rdx_47 = var_220
            float var_544_2 = zmm5_1[0]
            int32_t var_22c
            var_220 = &rdx_47[sx.q(var_22c)]
            *rdx_47 = zmm7[0]
            void* var_208
            float* rdx_48 = var_208
            int32_t result_3
            result = sx.q(result_3)
            var_208 = &rdx_48[result]
            *rdx_48 = zmm6[0]
        
        if (var_16d != 0 || var_16c != 0)
            uint64_t r12_4 = zx.q(data_14401b1a0)
            int16_t* rsi_6 = rdi_2 * (zx.q(r14[0x15].d) << 2) + r14[0x13]
            uint32_t rbx_4 = zx.d(rsi_6[1])
            int32_t rdi_5 = (rbx_4 & 0xffff8000) << 0x10
            int32_t var_51c_1
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
                    int32_t rdx_49 = 0xa - int.d(zmm0[0])
                    var_51c_1 = (rbx_5 << (rdx_49.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_49) << 0x17 & 0x7f800000) | rdi_5
                else
                    var_51c_1 = rdi_5
            else if ((rbx_4.w & 0x7c00) != 0x7c00)
                var_51c_1 = ((rbx_4 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_4 & 0x3ff) << 0xd | rdi_5
            else
                var_51c_1 = rdi_5 | 0x477fe000
            
            uint32_t rbx_12 = zx.d(*rsi_6)
            int32_t rdi_9 = (rbx_12 & 0xffff8000) << 0x10
            int32_t var_520_1
            
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
                    int32_t rdx_50 = 0xa - int.d(zmm0[0])
                    var_520_1 = (rbx_13 << (rdx_50.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_50) << 0x17 & 0x7f800000) | rdi_9
                else
                    var_520_1 = rdi_9
            else if ((rbx_12.w & 0x7c00) != 0x7c00)
                var_520_1 =
                    ((rbx_12 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_12 & 0x3ff) << 0xd | rdi_9
            else
                var_520_1 = rdi_9 | 0x477fe000
            
            int16_t* rsi_9 = zx.q(rax_38) * (zx.q(r14[0x15].d) << 2) + r14[0x13]
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
                    int32_t rdx_51 = 0xa - int.d(zmm0[0])
                    var_548_2 = (rbx_21 << (rdx_51.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_51) << 0x17 & 0x7f800000) | rdi_13
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
                    int32_t rdx_52 = 0xa - int.d(zmm0[0])
                    var_544_3 = (rbx_29 << (rdx_52.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_52) << 0x17 & 0x7f800000) | rdi_17
                else
                    var_544_3 = rdi_17
            else if ((rbx_28.w & 0x7c00) != 0x7c00)
                var_544_3 =
                    ((rbx_28 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_28 & 0x3ff) << 0xd | rdi_17
            else
                var_544_3 = rdi_17 | 0x477fe000
            
            int16_t* rsi_12 = zx.q(var_540_1) * (zx.q(r14[0x15].d) << 2) + r14[0x13]
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
                    int32_t rdx_53 = 0xa - int.d(zmm0[0])
                    var_540_2 = (rbx_37 << (rdx_53.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_53) << 0x17 & 0x7f800000) | rdi_21
                else
                    var_540_2 = rdi_21
            else if ((rbx_36.w & 0x7c00) != 0x7c00)
                var_540_2 =
                    ((rbx_36 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_36 & 0x3ff) << 0xd | rdi_21
            else
                var_540_2 = rdi_21 | 0x477fe000
            
            uint32_t rbx_44 = zx.d(*rsi_12)
            int32_t rdi_25 = (rbx_44 & 0xffff8000) << 0x10
            int32_t var_524_1
            
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
                    int32_t rdx_54 = 0xa - int.d(zmm0[0])
                    var_524_1 = (rbx_45 << (rdx_54.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_54) << 0x17 & 0x7f800000) | rdi_25
                else
                    var_524_1 = rdi_25
            else if ((rbx_44.w & 0x7c00) != 0x7c00)
                var_524_1 =
                    ((rbx_44 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_44 & 0x3ff) << 0xd | rdi_25
            else
                var_524_1 = rdi_25 | 0x477fe000
            
            zmm4_1 = var_51c_1
            zmm5_1 = var_520_1
            zmm0 = var_548_2
            zmm6 = zmm11
            zmm3 = var_524_1
            zmm0[0] = zmm0[0] - zmm4_1[0]
            zmm2 = var_540_2
            zmm3[0] = zmm3[0] - zmm5_1[0]
            zmm1 = var_544_3
            zmm2[0] = zmm2[0] - zmm4_1[0]
            zmm8 = var_4e8
            zmm1[0] = zmm1[0] - zmm5_1[0]
            zmm11 = var_4d8
            zmm8[0] = zmm8[0] - zmm12[0]
            zmm7 = var_518_1
            zmm11[0] = zmm11[0] - zmm12[0]
            zmm12 = data_142d3f660
            zmm7[0] = zmm7[0] - zmm14[0]
            zmm9 = var_4e0
            zmm6[0] = zmm6[0] f- var_510
            zmm9[0] = zmm9[0] f- var_510
            float var_354_1 = zmm0[0]
            zmm10.d = var_528_1.d f- zmm14[0]
            float var_358 = zmm1[0]
            float var_328_1[0x4] = zmm12
            float var_348_1 = zmm3[0]
            float var_344_1 = zmm2[0]
            float var_338_1 = zmm5_1[0]
            float var_334_1 = zmm4_1[0]
            int32_t var_38c_1 = 0
            int32_t var_37c_1 = 0
            int32_t var_36c_1 = 0
            int64_t var_350_1 = 0
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0x3f800000
            uint32_t var_118[0x4][0x4]
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
                sub_140631b10(&var_358, &var_118)
            float var_388[0x4]
            var_388[0] = zmm6[0]
            float var_398[0x4]
            var_398[0] = zmm9[0]
            zmm2 = *result
            float zmm5_2[0x4] = _mm_shuffle_ps(var_388, var_388, 0xe1)
            zmm14 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7[0]
            float zmm4_2[0x4] = _mm_shuffle_ps(var_398, var_398, 0xe1)
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
            zmm14 = _mm_mul_ps(zmm14, zmm5_2)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            var_388 = zmm5_2
            var_398 = zmm4_2
            zmm14 = _mm_add_ps(zmm14, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm12)
            float var_378[0x4]
            var_378[0] = var_510[0]
            zmm3 = _mm_shuffle_ps(var_378, var_378, 0xe1)
            zmm3[0] = arg_20[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = var_508[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_378 = zmm3
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
            
            if (var_16d != 0)
                zmm2 = data_142d4cc00
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int64_t var_538_4 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                int32_t var_530_4 = 0
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6 = zmm15
                    zmm7 = zmm15
                    zmm8 = zmm15
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
                float* rdx_56 = var_1f0
                zmm3 = zx.o(0)
                int32_t var_40c_1 = 0
                float var_418[0x4]
                var_418[0] = zmm6[0]
                int64_t var_538_5 = 0
                zmm2 = _mm_shuffle_ps(var_418, var_418, 0xe1)
                zmm2[0] = zmm7[0]
                int32_t var_530_5 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_418 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r15 + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r15 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r15 + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_1fc
                var_1f0 = &rdx_56[sx.q(var_1fc)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r15 + 0xd0)))
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
                *rdx_56 = zmm8[0]
                void* var_1d8
                float* rdx_57 = var_1d8
                zmm6[0] = zmm6[0] * zmm4_2[0]
                float var_548_4 = zmm4_2[0]
                int32_t var_1e4
                var_1d8 = &rdx_57[sx.q(var_1e4)]
                *rdx_57 = zmm7[0]
                void* var_1c0
                float* rdx_58 = var_1c0
                int32_t result_4
                result = sx.q(result_4)
                var_1c0 = &rdx_58[result]
                *rdx_58 = zmm6[0]
            
            if (var_16c == 0)
                zmm10 = 0x3f000000
            else
                zmm2 = data_142d4cc20
                int64_t var_538_6 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_530_6 = 0
                zmm10 = 0x3f000000
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6 = zmm15
                    zmm7 = zmm15
                    zmm8 = zmm15
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
                float* rdx_59 = var_1a8
                zmm3 = zx.o(0)
                int32_t var_44c_1 = 0
                float var_458[0x4]
                var_458[0] = zmm6[0]
                int64_t var_538_7 = 0
                zmm2 = _mm_shuffle_ps(var_458, var_458, 0xe1)
                zmm2[0] = zmm7[0]
                int32_t var_530_7 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_458 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r15 + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r15 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r15 + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_1b4
                var_1a8 = &rdx_59[sx.q(var_1b4)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r15 + 0xd0)))
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
                *rdx_59 = zmm8[0]
                void* var_190
                float* rdx_60 = var_190
                zmm6[0] = zmm6[0] * zmm4_2[0]
                float var_548_6 = zmm4_2[0]
                int32_t var_19c
                var_190 = &rdx_60[sx.q(var_19c)]
                *rdx_60 = zmm7[0]
                void* var_178
                float* rdx_61 = var_178
                int32_t result_5
                result = sx.q(result_5)
                var_178 = &rdx_61[result]
                *rdx_61 = zmm6[0]
        
        zmm9 = var_4fc
        cond:6_1 = var_500 + 1 s< *(arg2 + 0x40)
        zmm2 = 0x3f800000
        rdx_27 = var_408_1
        r9_5 = var_3a8_1
        r10_2 = var_400_1
        r11_5 = var_4c8
        var_500 += 1
        r8_2 = var_3f8_1
    while (cond:6_1)

return result
