// 函数: sub_140721960
// 地址: 0x140721960
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
float (* rbx_1)[0x4]

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
float (* r12_1)[0x4]

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

uint32_t var_3e8 = 0xffffffff
float (* var_3e0)[0x4] = nullptr
int32_t var_3d8 = 0
sub_140767bd0(&var_3e8, arg2)
void var_2f8
sub_140742680(&var_2f8, arg2)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

void* rax_23 = *(rsi + 0x58)
void* rax_26

if (rax_23 != 0)
    rax_26 = *(**(rax_23 + 0x58) + (sx.q(rsi[0x1a]) << 3))
    
    if (rsi[0x86].b != 0)
        void* rax_27 = sub_140d3c6e0(rsi)
        
        if (rax_27 != 0)
            void* rax_28 = sub_142591550()
            void* rcx_11 = *(rax_27 + 0x10)
            int64_t rdx_7 = sx.q(*(rax_28 + 0x38))
            
            if (rdx_7.d s<= *(rcx_11 + 0x38) && *(*(rcx_11 + 0x30) + (rdx_7 << 3)) == rax_28 + 0x30
                    && *(rax_27 + 0x430) != 0)
                sub_141f66050(rax_27, rsi[0x1a])

int64_t* r15_2

if (rax_23 == 0 || rax_26 == 0)
    r15_2 = nullptr
else
    r15_2 = *(rax_26 + 0x18)

void* rax_30 = *(rsi + 0x70)
int32_t rax_31 = rsi[0x1a]
int32_t rax_33 = (*(*r15_2 + 0x58))(r15_2)
float zmm9[0x4] = 0x3f800000
float zmm0[0x4] = 0x3f800000
int32_t var_4dc = 0
zmm0[0] = 1f f/ rsi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_33)
void* var_530
var_530.d = zmm0[0]
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_4a8 = result.d

if (*(arg2 + 0x40) s> 0)
    float (* r8_1)[0x4] = var_3e0
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    float zmm10[0x4] = zx.o(0)
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t rcx_17 = zx.q(arg_10.b) << 2
    uint64_t r9_6 = zx.q(arg_18.b) << 2
    uint64_t r10_2 = zx.q(arg_20.b) << 2
    uint64_t r11_5 = zx.q(rax_6) << 2
    int64_t rsi_2 = sx.q(var_3d8) << 2
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    int64_t rdx_10 = sx.q(rax_31) * 0x38
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    uint64_t var_378_1 = rcx_17
    uint64_t var_360_1 = r9_6
    uint64_t var_368_1 = r10_2
    uint64_t var_370_1 = r11_5
    int64_t var_338_1 = rsi_2
    bool cond:4_1
    
    do
        float (* rdx_11)[0x4] = r12_1
        r12_1 += rcx_17
        float (* rcx_18)[0x4] = r13_1
        r13_1 += r9_6
        uint64_t rdx_12 = zx.q(*rdi_1)
        float (* rcx_19)[0x4] = rsi_2 + r8_1
        float var_304_1 = (*rdx_11)[0]
        int64_t var_424_1 = (_mm_unpacklo_ps(*rbx_1, (*rcx_18)[0].q)).q
        float var_4e0_1 = (*r8_1)[0]
        
        if (rdx_12.d s< 0 || rdx_12.d s> var_4a8)
            int32_t var_310_1 = 0
            int64_t var_344_1 = (_mm_unpacklo_ps(zmm9, zmm10[0].q)).q
            int32_t var_33c_1 = 0
            rdx_12 = zx.q(0.o[0])
        
        uint32_t rbx_5 = (rdx_12 * 3).d
        int32_t rax_41 = (*(*r15_2 + 0x68))(r15_2, zx.q(rbx_5))
        int64_t r8_2 = *r15_2
        int32_t rax_42 = (*(r8_2 + 0x68))(r15_2, zx.q(rbx_5 + 1), r8_2)
        int64_t r8_3 = *r15_2
        zmm9 = var_304_1
        int64_t r11_6 = sx.q(rax_41) * 3
        zmm11 = var_424_1:4.d
        int64_t r9_7 = sx.q(rax_42) * 3
        zmm12 = var_424_1.d
        int64_t r8_5 = sx.q((*(r8_3 + 0x68))(r15_2, zx.q(rbx_5 + 2), r8_3)) * 3
        int64_t rbx_6 = sx.q(*(rax_30 + 0x34))
        int64_t r10_3 = *(rax_30 + 0x80)
        int64_t rdx_16 = *((rbx_6 << 4) + rdx_10 + r10_3 + 8)
        int32_t rcx_26 = *(rdx_16 + (r11_6 << 2) + 8)
        int32_t rax_45 = *(rdx_16 + (r9_7 << 2) + 8)
        zmm6 = zx.o(*(rdx_16 + (r11_6 << 2)))
        zmm7 = zx.o(*(rdx_16 + (r9_7 << 2)))
        zmm8 = zx.o(*(rdx_16 + (r8_5 << 2)))
        int32_t rax_46 = *(rdx_16 + (r8_5 << 2) + 8)
        int64_t rcx_27 = *(((rbx_6 ^ 1) << 4) + rdx_10 + r10_3 + 8)
        zmm0 = zx.o(*(rcx_27 + (r8_5 << 2)))
        float zmm2[0x4] = zx.o(*(rcx_27 + (r9_7 << 2)))
        float zmm1[0x4] = zx.o(*(rcx_27 + (r11_6 << 2)))
        int32_t rax_47 = *(rcx_27 + (r11_6 << 2) + 8)
        int64_t var_408_1 = zmm0.q
        int64_t var_3c8_1 = zmm0.q
        zmm9[0] = zmm9[0] * zmm0[0]
        zmm0 = var_3c8_1:4.d
        int32_t rax_48 = *(rcx_27 + (r9_7 << 2) + 8)
        uint32_t var_53c_1 = zmm0[0]
        zmm9[0] = zmm9[0] * zmm0[0]
        result = zx.q(*(rcx_27 + (r8_5 << 2) + 8))
        int64_t var_3bc_1 = zmm2.q
        int64_t var_438_1 = zmm2.q
        zmm11[0] = zmm11[0] * zmm2[0]
        zmm0 = result.d
        arg_20 = zmm0[0]
        zmm9[0] = zmm9[0] * zmm0[0]
        zmm0 = var_3bc_1:4.d
        float var_544_1 = zmm0[0]
        zmm11[0] = zmm11[0] * zmm0[0]
        zmm0 = rax_48
        int64_t var_418_1 = zmm1.q
        int64_t var_4f8_1 = zmm1.q
        zmm12[0] = zmm12[0] * zmm1[0]
        float var_540_1 = zmm0[0]
        zmm11[0] = zmm11[0] * zmm0[0]
        zmm11[0] = zmm11[0] + zmm12[0]
        zmm12[0] = zmm12[0] f* var_4f8_1:4.d
        zmm12[0] = zmm12[0] f* rax_47
        zmm2 = rax_46
        zmm11[0] = zmm11[0] + zmm12[0]
        zmm9[0] = zmm9[0] + zmm11[0]
        zmm11[0] = zmm11[0] + zmm12[0]
        uint32_t var_3b0_1 = zmm7.d
        zmm0 = zmm6
        uint32_t var_4ec_1 = zmm6.d
        arg_10 = rax_45[0]
        zmm1 = zmm8.d
        zmm9[0] = zmm9[0] + zmm11[0]
        zmm9[0] = zmm9[0] + zmm11[0]
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        float zmm3[0x4] = var_3b0_1
        zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        arg_18 = zmm3[0]
        float var_548_1 = zmm2[0]
        float var_538_1 = zmm1[0]
        int64_t var_498_1 = zmm0.q
        uint64_t var_488_1 = zmm6.q
        uint64_t var_528_1 = zmm7.q
        char var_190
        char var_18f
        
        if (var_190 != 0 || var_18f != 0)
            void* var_2e8
            float* rdx_17 = var_2e8
            zmm12[0] = zmm12[0] f* var_4ec_1
            zmm9[0] = zmm9[0] * zmm1[0]
            int32_t var_2f4
            var_2e8 = &rdx_17[sx.q(var_2f4)]
            zmm9[0] = zmm9[0] * zmm2[0]
            zmm12[0] = zmm12[0] f* var_498_1.d
            zmm8 = rcx_26
            zmm11[0] = zmm11[0] * zmm3[0]
            zmm11[0] = zmm11[0] f* arg_10
            zmm11[0] = zmm11[0] + zmm12[0]
            zmm9[0] = zmm9[0] f* zmm7.d
            zmm11[0] = zmm11[0] f* zmm6.d
            zmm12[0] = zmm12[0] f* zmm8.d
            zmm9[0] = zmm9[0] + zmm11[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            zmm9[0] = zmm9[0] - zmm9[0]
            zmm9[0] = zmm9[0] + zmm11[0]
            zmm9[0] = zmm9[0] + zmm11[0]
            zmm11 = var_4e0_1
            zmm9[0] = zmm9[0] * zmm11[0]
            zmm9[0] = zmm9[0] - zmm9[0]
            zmm9[0] = zmm9[0] - zmm9[0]
            zmm9[0] = zmm9[0] + zmm9[0]
            zmm9[0] = zmm9[0] * zmm11[0]
            *rdx_17 = zmm9[0]
            void* var_2d0
            float* rdx_18 = var_2d0
            zmm9[0] = zmm9[0] + zmm9[0]
            zmm9[0] = zmm9[0] * zmm11[0]
            int32_t var_2dc
            var_2d0 = &rdx_18[sx.q(var_2dc)]
            zmm9[0] = zmm9[0] + zmm9[0]
            *rdx_18 = zmm9[0]
            void* var_2b8
            float* rdx_19 = var_2b8
            int32_t result_1
            result = sx.q(result_1)
            var_2b8 = &rdx_19[result]
            *rdx_19 = zmm9[0]
            
            if (var_18f != 0)
                void* var_2a0
                float* rdx_20 = var_2a0
                zmm9[0] = zmm9[0] - zmm9[0]
                zmm9[0] = zmm9[0] - zmm9[0]
                zmm2 = var_530.d
                zmm9[0] = zmm9[0] - zmm9[0]
                zmm9[0] = zmm9[0] * zmm2[0]
                int32_t var_2ac
                var_2a0 = &rdx_20[sx.q(var_2ac)]
                zmm9[0] = zmm9[0] * zmm2[0]
                *rdx_20 = zmm9[0]
                void* var_288
                float* rdx_21 = var_288
                zmm9[0] = zmm9[0] * zmm2[0]
                int32_t var_294
                var_288 = &rdx_21[sx.q(var_294)]
                *rdx_21 = zmm9[0]
                void* var_270
                float* rdx_22 = var_270
                int32_t result_2
                result = sx.q(result_2)
                var_270 = &rdx_22[result]
                *rdx_22 = zmm9[0]
            
            zmm1 = var_538_1
            zmm0 = zx.o(var_498_1)
        else
            zmm8 = rcx_26
        
        zmm15 = var_548_1
        char var_18e
        
        if (var_18e == 0)
            zmm9 = 0x3f800000
        else
            float zmm5_1[0x4] = var_4ec_1
            zmm5_1[0] = zmm5_1[0] - zmm1[0]
            zmm2 = zx.o(var_488_1)
            zmm6.d = arg_18.d f- zmm1[0]
            zmm1 = arg_10
            zmm2[0] = zmm2[0] f- zmm7.d
            zmm0[0] = zmm0[0] f- zmm7.d
            zmm1[0] = zmm1[0] - zmm15[0]
            zmm3 = zmm8
            zmm3[0] = zmm3[0] - zmm15[0]
            zmm5_1[0] = zmm5_1[0] * zmm2[0]
            zmm8.d = zmm5_1.d f* zmm1[0]
            zmm0[0] = zmm0[0] * zmm1[0]
            zmm7.d = zmm3.d f* zmm2[0]
            zmm3[0] = zmm3[0] f* zmm6.d
            zmm7.d = zmm7.d f- zmm0[0]
            zmm6.d = zmm6.d f* zmm0[0]
            zmm8.d = zmm8.d f- zmm3[0]
            zmm6.d = zmm6.d f- zmm5_1[0]
            zmm2 = zmm7
            zmm2[0] = zmm2[0] f* zmm7.d
            zmm0 = zmm8
            zmm0[0] = zmm0[0] f* zmm8.d
            zmm1 = zmm6
            zmm1[0] = zmm1[0] f* zmm6.d
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] + zmm1[0]
            float var_518_1
            float var_510_1
            float zmm4_1[0x4]
            
            if (not(zmm2[0] != 1f))
                var_518_1 = zmm7.d
                int32_t var_514_1 = zmm8.d
                var_510_1 = zmm6.d
            else if (zmm2[0] >= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm3 = zmm2
                zmm5_1 = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                zmm2 = 0x3f000000
                zmm3[0] = zmm3[0] * 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3[0] = zmm3[0] * zmm5_1[0]
                zmm2[0] = 0.5f - zmm3[0]
                zmm5_1[0] = zmm5_1[0] * zmm2[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3[0] = zmm3[0] * zmm5_1[0]
                zmm4_1[0] = 0.5f - zmm3[0]
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                float var_548_2 = zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] f* zmm7.d
                zmm5_1[0] = zmm5_1[0] f* zmm8.d
                zmm5_1[0] = zmm5_1[0] f* zmm6.d
                var_518_1 = zmm5_1[0]
                float var_514_3 = zmm5_1[0]
                var_510_1 = zmm5_1[0]
            else
                var_518_1 = data_143dbb1f8[0]
                float var_514_2 = data_143dbb1fc[0]
                var_510_1 = data_143dbb200[0]
            
            zmm5_1 = zx.o(var_418_1)
            zmm14 = zx.o(var_408_1)
            zmm4_1 = var_4f8_1:4.d
            zmm5_1[0] = zmm5_1[0] - zmm14[0]
            zmm3 = rax_47
            zmm4_1[0] = zmm4_1[0] f- var_53c_1
            zmm3[0] = zmm3[0] f- arg_20
            zmm2 = var_544_1
            zmm6.d = var_438_1.d f- zmm14[0]
            zmm2[0] = zmm2[0] f- var_53c_1
            zmm1 = var_540_1
            zmm1[0] = zmm1[0] f- arg_20
            zmm7.d = zmm3.d f* zmm2[0]
            float var_4c0_1 = var_510_1
            zmm5_1[0] = zmm5_1[0] * zmm2[0]
            int64_t var_4c8 = var_518_1.q
            zmm4_1[0] = zmm4_1[0] * zmm1[0]
            zmm8.d = zmm5_1.d f* zmm1[0]
            zmm7.d = zmm7.d f- zmm4_1[0]
            zmm3[0] = zmm3[0] f* zmm6.d
            zmm6.d = zmm6.d f* zmm4_1[0]
            zmm8.d = zmm8.d f- zmm3[0]
            zmm2 = zmm7
            zmm6.d = zmm6.d f- zmm5_1[0]
            zmm2[0] = zmm2[0] f* zmm7.d
            zmm0 = zmm8
            zmm0[0] = zmm0[0] f* zmm8.d
            zmm1 = zmm6
            zmm1[0] = zmm1[0] f* zmm6.d
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] + zmm1[0]
            
            if (zmm2[0] == 1f)
                goto label_1407224ef
            
            float var_508
            
            if (zmm2[0] >= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm3 = zmm2
                zmm5_1 = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                zmm2 = 0x3f000000
                zmm3[0] = zmm3[0] * 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3[0] = zmm3[0] * zmm5_1[0]
                zmm2[0] = 0.5f - zmm3[0]
                zmm5_1[0] = zmm5_1[0] * zmm2[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3[0] = zmm3[0] * zmm5_1[0]
                zmm4_1[0] = 0.5f - zmm3[0]
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                float var_548_3 = zmm5_1[0]
                zmm7.d = zmm7.d f* zmm5_1[0]
                zmm8.d = zmm8.d f* zmm5_1[0]
                zmm6.d = zmm6.d f* zmm5_1[0]
            label_1407224ef:
                int32_t var_500_2 = zmm6.d
                int32_t var_504_2 = zmm8.d
                var_508 = zmm7.d
            else
                var_508 = data_143dbb1f8[0]
                float var_504_1 = data_143dbb1fc[0]
                float var_500_1 = data_143dbb200[0]
            
            int32_t var_558_1 = 0x3f800000
            int32_t var_148
            int32_t* rax_54
            rax_54, r9_7, zmm9, zmm10 = sub_140ae34d0(&var_148, &var_508, &var_4c8, r9_7.d)
            void* var_258
            float* rdx_24 = var_258
            zmm7 = zx.o(var_528_1)
            zmm6 = zx.o(var_488_1)
            var_4c8 = *rax_54
            zmm1 = var_4c8:4.d
            zmm2 = rax_54[2]
            int32_t var_264
            var_258 = &rdx_24[sx.q(var_264)]
            *rdx_24 = var_4c8.d[0]
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
            zmm1[0] = zmm1[0] f- rcx_26
            zmm2 = arg_18
            zmm8 = zx.o(var_498_1)
            zmm2[0] = zmm2[0] f- var_4ec_1
            zmm12 = var_538_1
            zmm6.d = zmm6.d f- zmm8.d
            zmm12[0] = zmm12[0] f- var_4ec_1
            zmm15[0] = zmm15[0] f- rcx_26
            arg_10 = zmm1[0]
            zmm7.d = zmm7.d f- zmm8.d
            int128_t var_188
            __builtin_memset(&var_188, 0, 0x20)
            uint64_t var_488_2 = zmm6.q
            data_142d3f660
            arg_18 = zmm2[0]
            int32_t var_46c_1 = 0
            int32_t var_45c_1 = 0
            int32_t var_44c_1 = 0
            int128_t var_168
            __builtin_memcpy(&var_168, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_58)[0x4]
            float zmm6_1[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            uint32_t zmm12_1
            float zmm14_1
            float zmm15_1[0x4]
            rax_58, zmm6_1, zmm7_1, zmm8_1, zmm12_1, zmm14_1, zmm15_1 =
                sub_140631b10(&var_188, &var_118)
            float var_468[0x4]
            var_468[0] = zmm12_1
            uint32_t zmm2_1[0x4] = *rax_58
            uint32_t zmm0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            float var_478[0x4]
            var_478[0] = arg_18
            uint32_t zmm13_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_478, var_478, 0xe1)
            zmm4_2[0] = zx.o(var_488_2)[0]
            float zmm5_2[0x4] = _mm_shuffle_ps(var_468, var_468, 0xe1)
            zmm5_2[0] = zmm7_1[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm4_2[0] = arg_10[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm5_2[0] = zmm15_1[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm13_1 = _mm_mul_ps(zmm13_1, zmm5_2)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm13_1 = _mm_add_ps(zmm13_1, zmm0_1)
            float var_458[0x4]
            var_458[0] = var_4ec_1[0]
            float zmm3_1[0x4] = _mm_shuffle_ps(var_458, var_458, 0xe1)
            zmm3_1[0] = zmm8_1[0]
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1[0] = rcx_26[0]
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            zmm13_1 = _mm_add_ps(_mm_add_ps(zmm13_1, _mm_mul_ps(zmm1_1, zmm3_1)), zmm2_1)
            zmm2_1 = rax_58[1]
            zmm15_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            var_498_1.o = zmm13_1
            zmm15_1 = _mm_add_ps(_mm_mul_ps(zmm15_1, zmm5_2), _mm_mul_ps(zmm0_1, zmm4_2))
            int32_t var_46c_2 = 0
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm3_1)
            int32_t var_45c_2 = 0
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            int32_t var_44c_2 = 0
            _mm_add_ps(_mm_add_ps(zmm15_1, zmm1_1), zmm2_1)
            zmm2_1 = rax_58[2]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm7_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm7_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_1, zmm5_2), zmm0_1), zmm1_1), 
                zmm2_1)
            zmm2_1 = rax_58[3]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm8_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm8_1 = _mm_mul_ps(zmm8_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            zmm8_1 = _mm_add_ps(zmm8_1, zmm0_1)
            zmm2_1 = _mm_mul_ps(zmm2_1, zmm6_1)
            zmm0_1 = arg_20
            zmm0_1[0] = zmm0_1[0] f- rax_47
            var_488_2.o = zmm7_1
            zmm8_1 = _mm_add_ps(zmm8_1, zmm1_1)
            zmm1_1 = zx.o(var_418_1)
            zmm1_1[0]
            arg_20 = zmm0_1[0]
            zmm0_1 = zx.o(var_438_1)
            zmm0_1[0] = zmm0_1[0] f- zmm1_1[0]
            zmm8_1 = _mm_add_ps(zmm8_1, zmm2_1)
            int64_t var_438_2 = zmm0_1.q
            zmm0_1 = var_544_1
            zmm0_1[0] = zmm0_1[0] f- var_4f8_1:4.d
            var_408_1.o = zmm8_1
            uint32_t var_544_2 = zmm0_1[0]
            zmm0_1 = var_540_1
            zmm0_1[0] = zmm0_1[0] f- rax_47
            uint32_t var_540_2 = zmm0_1[0]
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_188, &var_118)
            zmm5_2[0] = zmm14[0]
            zmm2 = *result
            zmm4_2[0] = zx.o(var_438_2)[0]
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_3[0] = zmm12[0]
            var_528_1.o = zmm0
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = arg_20[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_468 = zmm5_3
            zmm14 = _mm_mul_ps(var_528_1.o, zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = var_544_2[0]
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = var_540_2[0]
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_478 = zmm4_3
            zmm14 = _mm_add_ps(zmm14, _mm_mul_ps(zmm0, zmm4_3))
            zmm3_1[0] = zx.o(var_418_1)[0]
            zmm3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            zmm3[0] = var_4f8_1:4.d[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = rax_47[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_458 = zmm3
            zmm14 = _mm_add_ps(_mm_add_ps(zmm14, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x10)
            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm12 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm12, zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x20)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_3e8.o = zmm12
            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm12 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm12, zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x30)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_438_2.o = zmm12
            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            var_418_1.o = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm12, zmm0), zmm1), zmm2)
            zmm12 = 0x322bcc77
            
            if (var_18d != 0)
                zmm2 = data_142d4cc00
                int64_t var_528_2 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int32_t var_520_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm6 = _mm_mul_ps(zmm6, zmm8)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm13)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0 = zmm6
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm0 = zmm8
                zmm0[0] = zmm0[0] f* zmm8.d
                zmm1[0] = zmm1[0] + zmm0[0]
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3[0] = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3[0] = zmm3[0] * zmm5_3[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm2[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3[0] = zmm3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm0 = zmm5_3
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0[0] = zmm0[0] f* zmm6.d
                    zmm1[0] = zmm1[0] f* zmm7.d
                    zmm5_3[0] = zmm5_3[0] f* zmm8.d
                
                zmm2 = data_142d4cc00
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1[0].q)
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_418_1.o)
                int64_t var_528_3 = 0
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_3e8.o)
                int32_t var_520_2 = 0
                int64_t var_4d8 = zmm0.q
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_438_2.o)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm3 = _mm_add_ps(zmm3, zmm0)
                float var_4d0_1 = zmm5_3[0]
                zmm3 = _mm_add_ps(zmm3, _mm_add_ps(zmm1, zmm2))
                zmm0 = zmm3
                zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm0[0] = zmm0[0] * zmm3[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                zmm3[0] = zmm3[0] * zmm3[0]
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm1[0] = zmm1[0] + zmm3[0]
                
                if (not(zmm1[0] <= 9.99999994e-09f))
                    zmm3 = zx.o(0)
                    zmm5_3 = 0x3f000000
                    zmm3[0] = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3[0] = zmm3[0] * zmm4_3[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm2[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3[0] = zmm3[0] * zmm4_3[0]
                    zmm5_3[0] = 0.5f - zmm3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                
                float var_558_2 = zmm9[0]
                int32_t var_13c
                int32_t* rax_60
                rax_60, r9_7, zmm9, zmm10, zmm12 =
                    sub_140ae34d0(&var_13c, &var_4d8, &var_4d8, r9_7.d)
                void* var_210
                float* rdx_30 = var_210
                zmm13 = var_498_1.o
                zmm7 = var_488_2.o
                zmm8 = var_408_1.o
                var_4d8 = *rax_60
                zmm1 = var_4d8:4.d
                zmm2 = rax_60[2]
                int32_t var_21c
                var_210 = &rdx_30[sx.q(var_21c)]
                *rdx_30 = var_4d8.d[0]
                void* var_1f8
                float* rdx_31 = var_1f8
                int32_t var_204
                var_1f8 = &rdx_31[sx.q(var_204)]
                *rdx_31 = zmm1[0]
                void* var_1e0
                float* rdx_32 = var_1e0
                int32_t result_4
                result = sx.q(result_4)
                var_1e0 = &rdx_32[result]
                *rdx_32 = zmm2[0]
                rbx_10 = var_18c
            
            if (rbx_10 != 0)
                zmm2 = data_142d4cc20
                int64_t var_528_4 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int32_t var_520_3 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm6 = _mm_mul_ps(zmm6, zmm8)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm13)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0 = zmm6
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm0 = zmm8
                zmm0[0] = zmm0[0] f* zmm8.d
                zmm1[0] = zmm1[0] + zmm0[0]
                
                if (zmm1[0] <= zmm12[0])
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3[0] = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3[0] = zmm3[0] * zmm5_3[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm2[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3[0] = zmm3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm0 = zmm5_3
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0[0] = zmm0[0] f* zmm6.d
                    zmm1[0] = zmm1[0] f* zmm7.d
                    zmm5_3[0] = zmm5_3[0] f* zmm8.d
                
                zmm2 = data_142d4cc20
                int64_t var_4b8 = (_mm_unpacklo_ps(zmm0, zmm1[0].q)).q
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_488_2.o)
                int64_t var_528_5 = 0
                zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_408_1.o)
                int32_t var_520_4 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_498_1.o)
                zmm6 = _mm_add_ps(zmm6, zmm0)
                float var_4b0_1 = zmm5_3[0]
                zmm6 = _mm_add_ps(zmm6, _mm_add_ps(zmm1, zmm2))
                zmm0 = zmm6
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm0 = zmm8
                zmm0[0] = zmm0[0] f* zmm8.d
                zmm1[0] = zmm1[0] + zmm0[0]
                
                if (zmm1[0] <= zmm12[0])
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3[0] = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3[0] = zmm3[0] * zmm5_3[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm2[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3[0] = zmm3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm0 = zmm5_3
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0[0] = zmm0[0] f* zmm6.d
                    zmm1[0] = zmm1[0] f* zmm7.d
                    zmm5_3[0] = zmm5_3[0] f* zmm8.d
                
                float var_3f8 = zmm0[0]
                float var_3f4_1 = zmm1[0]
                float var_3f0_1 = zmm5_3[0]
                float var_558_3 = zmm9[0]
                int32_t var_130[0x6]
                int32_t* rax_65
                rax_65, zmm9, zmm10 = sub_140ae34d0(&var_130, &var_3f8, &var_4b8, r9_7.d)
                void* var_1c8
                float* rdx_34 = var_1c8
                var_4b8 = *rax_65
                zmm1 = var_4b8:4.d
                zmm2 = rax_65[2]
                int32_t var_1d4
                var_1c8 = &rdx_34[sx.q(var_1d4)]
                *rdx_34 = var_4b8.d[0]
                void* var_1b0
                float* rdx_35 = var_1b0
                int32_t var_1bc
                var_1b0 = &rdx_35[sx.q(var_1bc)]
                *rdx_35 = zmm1[0]
                float* var_198
                float* rdx_36 = var_198
                int32_t result_5
                result = sx.q(result_5)
                var_198 = &rdx_36[result]
                *rdx_36 = zmm2[0]
        
        rbx_1 += r10_2
        cond:4_1 = var_4dc + 1 s< *(arg2 + 0x40)
        rdi_1 += r11_5
        rcx_17 = var_378_1
        r9_6 = var_360_1
        r10_2 = var_368_1
        r11_5 = var_370_1
        rsi_2 = var_338_1
        var_4dc += 1
        r8_1 = rcx_19
    while (cond:4_1)

return result
