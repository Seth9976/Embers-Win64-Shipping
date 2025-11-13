// 函数: sub_14071bcf0
// 地址: 0x14071bcf0
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
int32_t* rbx = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* r13_1

if ((not.b(rax_6) & 1) == 0)
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
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
int128_t* r12_1

if ((rax_10.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_2 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_11 = 0
        int64_t rdx_2 = 0
        
        do
            i_2 -= *(r8 + rdx_2)
            rax_11 += 1
            rdx_2 = rax_11 << 2
            r9_2 += 1
        while (i_2 s>= *(r8 + rdx_2))
    
    r12_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i_3 = rax_13 & 0x7fff
uint32_t arg_18 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
int128_t* r15_1

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
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_10 = rax_19
rax_19.b = not.b(rax_19.b)
int128_t* r14_1

if ((rax_19.b & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_20 = 0
        int64_t rdx_4 = 0
        
        do
            i_4 -= *(r8 + rdx_4)
            rax_20 += 1
            rdx_4 = rax_20 << 2
            r9_4 += 1
        while (i_4 s>= *(r8 + rdx_4))
    
    r14_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t var_3b8 = 0xffffffff
float (* var_3b0)[0x4] = nullptr
int32_t var_3a8 = 0
sub_140767bd0(&var_3b8, arg2)
void var_2c8
sub_140742680(&var_2c8, arg2)

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

void* rax_23 = *(rbx + 0x58)
void* var_540 = nullptr
void* rax_26

if (rax_23 != 0)
    rax_26 = *(**(rax_23 + 0x58) + (sx.q(rbx[0x1a]) << 3))
    var_540 = rax_26
    
    if (rbx[0x86].b != 0)
        void* rax_27 = sub_140d3c6e0(rbx)
        
        if (rax_27 != 0)
            void* rax_28 = sub_142591550()
            void* rcx_11 = *(rax_27 + 0x10)
            int64_t rdx_7 = sx.q(*(rax_28 + 0x38))
            
            if (rdx_7.d s<= *(rcx_11 + 0x38) && *(*(rcx_11 + 0x30) + (rdx_7 << 3)) == rax_28 + 0x30
                    && *(rax_27 + 0x430) != 0)
                sub_141f66050(rax_27, rbx[0x1a])
        
        rax_26 = var_540

int64_t* rsi_2

if (rax_23 == 0 || rax_26 == 0)
    rsi_2 = nullptr
else
    rsi_2 = *(rax_26 + 0x18)

void* rax_30 = *(rbx + 0x70)
int32_t rax_31 = rbx[0x1a]
int32_t rax_33 = (*(*rsi_2 + 0x58))(rsi_2)
float zmm9[0x4] = 0x3f800000
float zmm0[0x4] = 0x3f800000
int32_t var_504 = 0
zmm0[0] = 1f f/ rbx[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_33)
float var_494 = zmm0[0]
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_498 = result.d

if (*(arg2 + 0x40) s> 0)
    float (* r8_1)[0x4] = var_3b0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    int128_t zmm10 = zx.o(0)
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t rcx_17 = zx.q(arg_10.b) << 2
    uint64_t r9_6 = zx.q(arg_18.b) << 2
    uint64_t r10_2 = zx.q(arg_20.b) << 2
    uint64_t r11_5 = zx.q(rax_6) << 2
    int64_t rbx_2 = sx.q(var_3a8) << 2
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    int64_t rax_38 = sx.q(rax_31) * 0x38
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    uint64_t var_380_1 = rcx_17
    uint64_t var_368_1 = r9_6
    uint64_t var_370_1 = r10_2
    uint64_t var_378_1 = r11_5
    int64_t var_340_1 = rbx_2
    bool cond:5_1
    
    do
        int128_t* rdx_10 = r14_1
        int128_t* rax_39 = r12_1
        r14_1 += rcx_17
        r12_1 += r10_2
        int128_t* rcx_18 = r15_1
        r15_1 += r9_6
        uint64_t rdx_11 = zx.q(*r13_1)
        r13_1 += r11_5
        float (* rcx_19)[0x4] = r8_1 + rbx_2
        float var_2cc_1 = (*rdx_10)[0]
        int64_t var_404_1 = (_mm_unpacklo_ps(*rax_39, (*rcx_18).q)).q
        float var_510_1 = (*r8_1)[0]
        
        if (rdx_11.d s< 0 || rdx_11.d s> var_498)
            int32_t var_2f0_1 = 0
            int64_t var_354_1 = (_mm_unpacklo_ps(zmm9, zmm10.q)).q
            int32_t var_34c_1 = 0
            rdx_11 = zx.q(0.o[0])
        
        uint32_t rbx_3 = (rdx_11 * 3).d
        int32_t rax_42 = (*(*rsi_2 + 0x68))(rsi_2, zx.q(rbx_3))
        int64_t r8_2 = *rsi_2
        int32_t rax_43 = (*(r8_2 + 0x68))(rsi_2, zx.q(rbx_3 + 1), r8_2)
        int64_t r8_3 = *rsi_2
        zmm9 = var_2cc_1
        zmm11 = var_404_1:4.d
        zmm12 = var_404_1.d
        int64_t r11_6 = sx.q(rax_42) * 3
        int64_t r8_4 = sx.q((*(r8_3 + 0x68))(rsi_2, zx.q(rbx_3 + 2), r8_3))
        float zmm4_1[0x4] = zmm11
        int32_t var_490_1 = r8_4.d
        float zmm5_1[0x4] = zmm11
        int64_t r8_5 = r8_4 * 3
        int64_t rbx_4 = sx.q(*(rax_30 + 0x34))
        int64_t r10_3 = *(rax_30 + 0x80)
        int64_t r9_7 = sx.q(rax_43) * 3
        int64_t rdx_16 = *((rbx_4 << 4) + r10_3 + rax_38 + 8)
        int32_t rax_47 = *(rdx_16 + (r9_7 << 2) + 8)
        int32_t rcx_27 = *(rdx_16 + (r11_6 << 2) + 8)
        zmm6 = zx.o(*(rdx_16 + (r11_6 << 2)))
        zmm7 = zx.o(*(rdx_16 + (r9_7 << 2)))
        zmm8 = zx.o(*(rdx_16 + (r8_5 << 2)))
        int32_t rax_48 = *(rdx_16 + (r8_5 << 2) + 8)
        int64_t rcx_28 = *(((rbx_4 ^ 1) << 4) + r10_3 + rax_38 + 8)
        zmm0 = zx.o(*(rcx_28 + (r8_5 << 2)))
        float zmm2[0x4] = zx.o(*(rcx_28 + (r9_7 << 2)))
        float rax_50 = *(rcx_28 + (r11_6 << 2) + 8)
        uint128_t zmm1 = zx.o(*(rcx_28 + (r11_6 << 2)))
        int64_t var_418_1 = zmm0.q
        int64_t var_398_1 = zmm0.q
        zmm9[0] = zmm9[0] * zmm0[0]
        zmm0 = var_398_1:4.d
        int32_t rax_51 = *(rcx_28 + (r9_7 << 2) + 8)
        float var_558_1 = zmm0[0]
        zmm9[0] = zmm9[0] * zmm0[0]
        result = zx.q(*(rcx_28 + (r8_5 << 2) + 8))
        zmm0 = result.d
        float var_550_1 = zmm0[0]
        zmm9[0] = zmm9[0] * zmm0[0]
        zmm0 = zmm2.q:4.d
        arg_18 = zmm0[0]
        zmm4_1[0] = zmm4_1[0] * zmm0[0]
        zmm0 = rax_51
        arg_20 = zmm0[0]
        uint128_t zmm3
        zmm3.d = zmm11.d f* zmm0[0]
        uint64_t var_4a8_1 = zmm1.q
        int64_t var_428_1 = zmm2.q
        zmm5_1[0] = zmm5_1[0] * zmm2[0]
        zmm12[0] = zmm12[0] f* zmm1.d
        zmm12[0] = zmm12[0] * rax_50
        uint64_t var_4f0_1 = zmm1.q
        zmm1.d = zmm12.d f* var_4f0_1:4.d
        zmm5_1[0] = zmm5_1[0] + zmm12[0]
        zmm2 = rax_48
        zmm3.d = zmm3.d f+ zmm12[0]
        zmm0 = zmm6
        uint32_t var_3e4_1 = zmm7.d
        zmm4_1[0] = zmm4_1[0] f+ zmm1.d
        int32_t var_538_1 = zmm6.d
        zmm9[0] = zmm9[0] + zmm5_1[0]
        zmm6 = zmm7
        int32_t var_54c_1 = rax_47.d
        zmm9[0] = zmm9[0] f+ zmm3.d
        arg_10 = var_3e4_1.d
        uint32_t var_3d8_1 = zmm8.d
        zmm9[0] = zmm9[0] + zmm4_1[0]
        zmm1 = var_3d8_1
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        int32_t var_548_1 = zmm1.d
        float var_554_1 = zmm2[0]
        int64_t var_438_1 = zmm0.q
        int64_t var_488_1 = zmm6.q
        uint64_t var_4d8_1 = zmm7.q
        char var_160
        char var_15f
        
        if (var_160 != 0 || var_15f != 0)
            void* var_2b8
            float* rdx_17 = var_2b8
            zmm3.d = zmm11.d f* arg_10
            zmm12[0] = zmm12[0] f* var_538_1
            int32_t var_2c4
            var_2b8 = &rdx_17[sx.q(var_2c4)]
            zmm9[0] = zmm9[0] * zmm2[0]
            zmm9[0] = zmm9[0] f* zmm1.d
            zmm1 = zmm11
            zmm11.d = zmm11.d f* var_54c_1
            zmm3.d = zmm3.d f+ zmm12[0]
            zmm12[0] = zmm12[0] f* var_438_1.d
            zmm8 = rcx_27
            zmm1.d = zmm1.d f* zmm6[0]
            zmm9[0] = zmm9[0] f+ zmm3.d
            zmm9[0] = zmm9[0] f* zmm7.d
            zmm12[0] = zmm12[0] f+ zmm1.d
            zmm12[0] = zmm12[0] f* zmm8.d
            zmm9[0] = zmm9[0] - zmm9[0]
            zmm11.d = zmm11.d f+ zmm12[0]
            zmm9[0] = zmm9[0] + zmm12[0]
            zmm9[0] = zmm9[0] f+ zmm11.d
            zmm11 = var_510_1
            zmm9[0] = zmm9[0] f* zmm11.d
            zmm9[0] = zmm9[0] - zmm9[0]
            zmm9[0] = zmm9[0] + zmm9[0]
            zmm9[0] = zmm9[0] f* zmm11.d
            zmm9[0] = zmm9[0] - zmm9[0]
            *rdx_17 = zmm9[0]
            zmm1.d = zmm9.d f+ zmm9[0]
            void* var_2a0
            int32_t* rdx_18 = var_2a0
            zmm9[0] = zmm9[0] f* zmm11.d
            int32_t var_2ac
            var_2a0 = &rdx_18[sx.q(var_2ac)]
            zmm9[0] = zmm9[0] + zmm9[0]
            *rdx_18 = zmm1.d
            void* var_288
            float* rdx_19 = var_288
            int32_t result_1
            result = sx.q(result_1)
            var_288 = &rdx_19[result]
            *rdx_19 = zmm9[0]
            
            if (var_15f != 0)
                void* var_270
                float* rdx_20 = var_270
                zmm9[0] = zmm9[0] - zmm9[0]
                zmm1.d = zmm1.d f- zmm9[0]
                zmm3 = var_494
                zmm9[0] = zmm9[0] - zmm9[0]
                zmm9[0] = zmm9[0] f* zmm3.d
                int32_t var_27c
                var_270 = &rdx_20[sx.q(var_27c)]
                zmm1.d = zmm1.d f* zmm3.d
                *rdx_20 = zmm9[0]
                void* var_258
                int32_t* rdx_21 = var_258
                zmm9[0] = zmm9[0] f* zmm3.d
                int32_t var_264
                var_258 = &rdx_21[sx.q(var_264)]
                *rdx_21 = zmm1.d
                void* var_240
                float* rdx_22 = var_240
                int32_t result_2
                result = sx.q(result_2)
                var_240 = &rdx_22[result]
                *rdx_22 = zmm9[0]
            
            zmm1 = var_548_1
            zmm0 = zx.o(var_438_1)
        else
            zmm8 = rcx_27
        
        zmm15 = var_554_1
        char var_15e
        
        if (var_15e == 0)
            zmm9 = 0x3f800000
        else
            zmm5_1 = var_538_1
            zmm6 = arg_10
            zmm5_1[0] = zmm5_1[0] f- zmm1.d
            zmm2 = zx.o(var_488_1)
            zmm6[0] = zmm6[0] f- zmm1.d
            zmm2[0] = zmm2[0] f- zmm7.d
            zmm0[0] = zmm0[0] f- zmm7.d
            zmm1.d = var_54c_1.d f- zmm15[0]
            zmm3.d = zmm8.d f- zmm15[0]
            zmm5_1[0] = zmm5_1[0] * zmm2[0]
            zmm8.d = zmm5_1.d f* zmm1.d
            zmm0[0] = zmm0[0] f* zmm1.d
            zmm7.d = zmm3.d f* zmm2[0]
            zmm3.d = zmm3.d f* zmm6[0]
            zmm7.d = zmm7.d f- zmm0[0]
            zmm6[0] = zmm6[0] * zmm0[0]
            zmm8.d = zmm8.d f- zmm3.d
            zmm6[0] = zmm6[0] - zmm5_1[0]
            zmm2 = zmm7
            zmm2[0] = zmm2[0] f* zmm7.d
            zmm0 = zmm8
            zmm0[0] = zmm0[0] f* zmm8.d
            zmm1.d = zmm6.d f* zmm6[0]
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] f+ zmm1.d
            float var_52c_1
            float var_524_1
            
            if (not(zmm2[0] != 1f))
                var_52c_1 = zmm7.d
                int32_t var_528_1 = zmm8.d
                var_524_1 = zmm6[0]
            else if (zmm2[0] >= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm3 = zmm2
                zmm5_1 = _mm_rsqrt_ss(zmm2[0], zmm3.d)
                zmm2 = 0x3f000000
                zmm3.d = zmm3.d f* 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm1.d = zmm3.d f* zmm5_1[0]
                zmm2[0] = 0.5f f- zmm1.d
                zmm5_1[0] = zmm5_1[0] * zmm2[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm1.d = zmm5_1.d f* zmm5_1[0]
                zmm3.d = zmm3.d f* zmm1.d
                zmm4_1[0] = 0.5f f- zmm3.d
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                float var_554_2 = zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] f* zmm7.d
                zmm1.d = zmm5_1.d f* zmm8.d
                zmm5_1[0] = zmm5_1[0] * zmm6[0]
                var_52c_1 = zmm5_1[0]
                int32_t var_528_3 = zmm1.d
                var_524_1 = zmm5_1[0]
            else
                var_52c_1 = data_143dbb1f8[0]
                float var_528_2 = data_143dbb1fc[0]
                var_524_1 = data_143dbb200[0]
            
            zmm1.d = arg_20.d f- var_550_1
            zmm5_1 = zx.o(var_4a8_1)
            zmm14 = zx.o(var_418_1)
            zmm5_1[0] = zmm5_1[0] - zmm14[0]
            zmm3.d = rax_50.d f- var_550_1
            zmm6 = zx.o(var_428_1)
            zmm2 = arg_18
            zmm6[0] = zmm6[0] - zmm14[0]
            zmm2[0] = zmm2[0] - var_558_1
            zmm4_1 = var_4f0_1:4.d
            zmm4_1[0] = zmm4_1[0] - var_558_1
            zmm7.d = zmm3.d f* zmm2[0]
            float var_4c0_1 = var_524_1
            zmm5_1[0] = zmm5_1[0] * zmm2[0]
            int64_t var_4c8 = var_52c_1.q
            zmm0 = zmm1
            zmm8.d = zmm5_1.d f* zmm1.d
            zmm0[0] = zmm0[0] * zmm4_1[0]
            zmm3.d = zmm3.d f* zmm6[0]
            zmm7.d = zmm7.d f- zmm0[0]
            zmm6[0] = zmm6[0] * zmm4_1[0]
            zmm8.d = zmm8.d f- zmm3.d
            zmm6[0] = zmm6[0] - zmm5_1[0]
            zmm0 = zmm7
            zmm0[0] = zmm0[0] f* zmm7.d
            zmm2 = zmm8
            zmm2[0] = zmm2[0] f* zmm8.d
            zmm1.d = zmm6.d f* zmm6[0]
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] f+ zmm1.d
            float var_520
            int32_t var_51c_2
            
            if (not(zmm2[0] != 1f))
                float var_518_1 = zmm6[0]
                var_51c_2 = zmm8.d
                var_520 = zmm7.d
            else if (zmm2[0] >= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm3.d = zmm2[0]
                zmm2 = 0x3f000000
                zmm5_1 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm1.d = zmm3.d f* zmm5_1[0]
                zmm2[0] = 0.5f f- zmm1.d
                zmm5_1[0] = zmm5_1[0] * zmm2[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm1.d = zmm5_1.d f* zmm5_1[0]
                zmm3.d = zmm3.d f* zmm1.d
                zmm4_1[0] = 0.5f f- zmm3.d
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                float var_554_3 = zmm5_1[0]
                zmm7.d = zmm7.d f* zmm5_1[0]
                zmm8.d = zmm8.d f* zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm6[0]
                float var_518_3 = zmm5_1[0]
                var_51c_2 = zmm8.d
                var_520 = zmm7.d
            else
                var_520 = data_143dbb1f8[0]
                float var_51c_1 = data_143dbb1fc[0]
                float var_518_2 = data_143dbb200[0]
            int32_t var_568_1 = 0x3f800000
            int32_t var_148
            int32_t* rax_57
            rax_57, r9_7, zmm9, zmm10 = sub_140ae34d0(&var_148, &var_520, &var_4c8, r9_7.d)
            void* var_228
            float* rdx_24 = var_228
            zmm7 = zx.o(var_4d8_1)
            zmm6 = zx.o(var_488_1)
            var_4c8 = *rax_57
            zmm1 = var_4c8:4.d
            zmm2 = rax_57[2]
            int32_t var_234
            var_228 = &rdx_24[sx.q(var_234)]
            *rdx_24 = var_4c8.d[0]
            void* var_210
            int32_t* rdx_25 = var_210
            int32_t var_21c
            var_210 = &rdx_25[sx.q(var_21c)]
            *rdx_25 = zmm1.d
            void* var_1f8
            float* rdx_26 = var_1f8
            int32_t result_3
            result = sx.q(result_3)
            var_1f8 = &rdx_26[result]
            *rdx_26 = zmm2[0]
        
        char var_15c
        char rbx_8 = var_15c
        char var_15d
        
        if (var_15d != 0 || rbx_8 != 0)
            zmm10.d = arg_10.d f- var_538_1
            zmm8 = zx.o(var_438_1)
            int64_t rdx_27 = *(var_540 + 0x98)
            zmm6[0] = zmm6[0] f- zmm8.d
            uint64_t rcx_39 = zx.q(*(var_540 + 0xa8))
            zmm7.d = zmm7.d f- zmm8.d
            zmm12 = var_548_1
            zmm12[0] = zmm12[0] f- var_538_1
            zmm15[0] = zmm15[0] f- rcx_27
            int64_t rax_63 = zx.q(rax_42) * rcx_39
            arg_10 = zmm10.d
            zmm10.d = var_54c_1.d f- rcx_27
            int64_t var_488_2 = zmm6.q
            int32_t var_46c_1 = 0
            int32_t var_45c_1 = 0
            int32_t var_44c_1 = 0
            zmm4_1 = *(rdx_27 + (rax_63 << 3))
            zmm5_1 = *(rdx_27 + (rax_63 << 3) + 4)
            int64_t rax_65 = zx.q(rax_43) * rcx_39
            float var_318_1 = zmm4_1[0]
            float var_314_1 = zmm5_1[0]
            float var_308_1[0x4] = data_142d3f660
            int64_t var_330_1 = 0
            int64_t var_320_1 = 0
            int64_t var_310_1 = 0x3f800000
            zmm2 = *(rdx_27 + (rax_65 << 3))
            zmm3 = *(rdx_27 + (rax_65 << 3) + 4)
            zmm2[0] = zmm2[0] - zmm4_1[0]
            zmm3.d = zmm3.d f- zmm5_1[0]
            int64_t rax_67 = zx.q(var_490_1) * rcx_39
            float var_338 = zmm2[0]
            int32_t var_334_1 = zmm3.d
            zmm0 = *(rdx_27 + (rax_67 << 3))
            zmm1 = *(rdx_27 + (rax_67 << 3) + 4)
            zmm0[0] = zmm0[0] - zmm4_1[0]
            zmm1.d = zmm1.d f- zmm5_1[0]
            float var_328_1 = zmm0[0]
            int32_t var_324_1 = zmm1.d
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_68)[0x4]
            float zmm6_1[0x4]
            float zmm7_1[0x4]
            float zmm8_1
            int32_t zmm10_1
            float zmm12_1[0x4]
            float zmm14_1
            float zmm15_1[0x4]
            rax_68, zmm6_1, zmm7_1, zmm8_1, zmm10_1, zmm12_1, zmm14_1, zmm15_1 =
                sub_140631b10(&var_338, &var_118)
            uint128_t zmm5_2
            zmm5_2.d = zmm12_1[0]
            float zmm2_1[0x4] = *rax_68
            float var_478[0x4]
            var_478[0] = arg_10.d
            _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_478, var_478, 0xe1)
            zmm5_2.d = zmm7_1[0]
            zmm4_2[0] = var_488_2.d
            _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2.d = zmm15_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm10_1
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            float zmm13_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float zmm0_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm13_1 = _mm_mul_ps(zmm13_1, zmm5_2)
            uint128_t var_468_1 = zmm5_2
            uint128_t zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm13_1 = _mm_add_ps(zmm13_1, zmm0_1)
            float var_458[0x4]
            var_458[0] = var_538_1[0]
            float zmm3_1[0x4] = _mm_shuffle_ps(var_458, var_458, 0xe1)
            zmm10_1 = var_4f0_1:4.d
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            zmm3_1[0] = zmm8_1
            zmm2_1 = _mm_mul_ps(zmm2_1, zmm6_1)
            int32_t var_46c_2 = 0
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1[0] = rcx_27[0]
            int32_t var_45c_2 = 0
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            float var_458_1[0x4] = zmm3_1
            int32_t var_44c_2 = 0
            zmm13_1 = _mm_add_ps(_mm_add_ps(zmm13_1, _mm_mul_ps(zmm1_1, zmm3_1)), zmm2_1)
            zmm2_1 = rax_68[1]
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm15_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            var_488_2.o = zmm13_1
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm15_1, zmm5_2), zmm0_1), zmm1_1), zmm2_1)
            zmm2_1 = rax_68[2]
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm12_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm12_1 = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm12_1, zmm5_2), zmm0_1), zmm1_1), zmm2_1)
            zmm2_1 = rax_68[3]
            zmm7_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm4_2)
            zmm7_1 = _mm_mul_ps(zmm7_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm3_1)
            zmm7_1 = _mm_add_ps(zmm7_1, zmm0_1)
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            zmm0_1 = zx.o(var_4a8_1)
            zmm0_1[0]
            zmm2_1 = _mm_mul_ps(zmm2_1, zmm6_1)
            var_3b8.o = zmm12_1
            zmm7_1 = _mm_add_ps(zmm7_1, zmm1_1)
            zmm1_1.d = var_428_1.d f- zmm0_1[0]
            zmm0_1 = arg_18
            zmm0_1[0] = zmm0_1[0] f- zmm10_1
            zmm7_1 = _mm_add_ps(zmm7_1, zmm2_1)
            uint64_t var_428_2 = zmm1_1.q
            arg_18 = zmm0_1[0]
            zmm0_1 = arg_20
            zmm0_1[0] = zmm0_1[0] - rax_50
            var_418_1.o = zmm7_1
            zmm7_1 = var_558_1
            zmm7_1[0] = zmm7_1[0] f- zmm10_1
            arg_20 = zmm0_1[0]
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_338, &var_118)
            zmm2 = *result
            uint128_t zmm5_3
            zmm5_3.d = zmm14[0]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_2[0] = var_428_2.d
            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            _mm_shuffle_ps(zmm5_3, zmm5_3, 0xe1)
            zmm5_3.d = zmm7.d
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = arg_18.d
            _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3.d = zmm8.d
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            zmm3 = _mm_mul_ps(zmm3, zmm5_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = arg_20.d
            uint128_t var_468 = zmm5_3
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            var_478 = zmm4_3
            var_4d8_1.o = _mm_add_ps(zmm3, zmm0)
            zmm3.d = zx.o(var_4a8_1)[0]
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = zmm10.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = rax_50[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_458 = zmm3
            zmm0 = _mm_add_ps(_mm_add_ps(var_4d8_1.o, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x10)
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            var_4d8_1.o = zmm0
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm7 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm7, zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x20)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            uint128_t var_158_1 = zmm7
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm7 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm7, zmm0), _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x30)
            var_438_1.o = zmm7
            zmm14 = var_418_1.o
            zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm10 = zx.o(0)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_mul_ps(zmm7, zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm6)
            var_428_2.o = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
            
            if (var_15d == 0)
                zmm12 = 0x322bcc77
            else
                zmm2 = data_142d4cc00
                int64_t var_4a8_2 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm12)
                int32_t var_4a0_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm6 = _mm_mul_ps(zmm6, zmm14)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm13)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm6[0]
                zmm0 = zmm8
                zmm0[0] = zmm0[0] f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0[0]
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm6 = zx.o(0)
                    zmm7 = zx.o(0)
                    zmm8 = zx.o(0)
                else
                    zmm4_3 = 0x3f000000
                    zmm3.d = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0 = zmm5_3
                    zmm0[0] = zmm0[0] f* zmm5_3.d
                    zmm1.d = zmm3.d f* zmm0[0]
                    zmm0 = zmm5_3
                    zmm2[0] = 0.5f f- zmm1.d
                    zmm0[0] = zmm0[0] * zmm2[0]
                    zmm5_3.d = zmm5_3.d f+ zmm0[0]
                    zmm0 = zmm5_3
                    zmm1.d = zmm5_3.d f* zmm5_3.d
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_3[0] = 0.5f f- zmm3.d
                    zmm0[0] = zmm0[0] * zmm4_3[0]
                    zmm5_3.d = zmm5_3.d f+ zmm0[0]
                    arg_10 = zmm5_3.d
                    zmm6[0] = zmm6[0] f* zmm5_3.d
                    zmm7.d = zmm7.d f* zmm5_3.d
                    zmm8.d = zmm8.d f* zmm5_3.d
                
                zmm2 = data_142d4cc00
                zmm0 = _mm_unpacklo_ps(zmm6, zmm7.q)
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_428_2.o)
                int64_t var_4a8_3 = 0
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_158_1)
                int32_t var_4a0_2 = 0
                int64_t var_500 = zmm0.q
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_438_1.o)
                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_4d8_1.o)
                int32_t var_4f8_1 = zmm8.d
                zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0 = zmm3
                zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm0[0] = zmm0[0] f* zmm3.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                zmm3.d = zmm3.d f* zmm3.d
                zmm1.d = zmm1.d f+ zmm0[0]
                zmm1.d = zmm1.d f+ zmm3.d
                
                if (not(zmm1.d f<= 9.99999994e-09f))
                    zmm3.d = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm1.d = zmm3.d f* zmm4_3[0]
                    zmm2[0] = 0.5f f- zmm1.d
                    zmm4_3[0] = zmm4_3[0] * zmm2[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    zmm1.d = zmm4_3.d f* zmm4_3[0]
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm5_3.d = 0.5f f- zmm3.d
                    zmm4_3[0] = zmm4_3[0] f* zmm5_3.d
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                
                float var_568_2 = zmm9[0]
                int32_t var_13c
                int32_t* rax_70
                rax_70, r9_7, zmm9, zmm10, zmm12, zmm14 =
                    sub_140ae34d0(&var_13c, &var_500, &var_500, r9_7.d)
                void* var_1e0
                float* rdx_31 = var_1e0
                zmm13 = var_488_2.o
                var_500 = *rax_70
                zmm1 = var_500:4.d
                zmm2 = rax_70[2]
                int32_t var_1ec
                var_1e0 = &rdx_31[sx.q(var_1ec)]
                *rdx_31 = var_500.d[0]
                void* var_1c8
                int32_t* rdx_32 = var_1c8
                int32_t var_1d4
                var_1c8 = &rdx_32[sx.q(var_1d4)]
                *rdx_32 = zmm1.d
                void* var_1b0
                float* rdx_33 = var_1b0
                int32_t result_4
                result = sx.q(result_4)
                var_1b0 = &rdx_33[result]
                *rdx_33 = zmm2[0]
                rbx_8 = var_15c
            
            if (rbx_8 != 0)
                zmm2 = data_142d4cc20
                int64_t var_4d8_2 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm15)
                int32_t var_4d0_1 = 0
                zmm6 = _mm_mul_ps(zmm6, zmm14)
                zmm14 = var_3b8.o
                zmm0 = _mm_mul_ps(zmm0, zmm14)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm13)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm6[0]
                zmm0 = zmm8
                zmm0[0] = zmm0[0] f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0[0]
                
                if (zmm1.d f<= zmm12[0])
                    zmm6 = zx.o(0)
                    zmm7 = zx.o(0)
                    zmm8 = zx.o(0)
                else
                    zmm4_3 = 0x3f000000
                    zmm3.d = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0 = zmm5_3
                    zmm0[0] = zmm0[0] f* zmm5_3.d
                    zmm1.d = zmm3.d f* zmm0[0]
                    zmm0 = zmm5_3
                    zmm2[0] = 0.5f f- zmm1.d
                    zmm0[0] = zmm0[0] * zmm2[0]
                    zmm5_3.d = zmm5_3.d f+ zmm0[0]
                    zmm0 = zmm5_3
                    zmm1.d = zmm5_3.d f* zmm5_3.d
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_3[0] = 0.5f f- zmm3.d
                    zmm0[0] = zmm0[0] * zmm4_3[0]
                    zmm5_3.d = zmm5_3.d f+ zmm0[0]
                    arg_10 = zmm5_3.d
                    zmm6[0] = zmm6[0] f* zmm5_3.d
                    zmm7.d = zmm7.d f* zmm5_3.d
                    zmm8.d = zmm8.d f* zmm5_3.d
                
                zmm2 = data_142d4cc20
                int64_t var_4b8 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_418_1.o)
                int64_t var_4d8_3 = 0
                zmm0 = _mm_mul_ps(zmm0, zmm14)
                int32_t var_4d0_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                int32_t var_4b0_1 = zmm8.d
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_488_2.o)))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm6[0]
                zmm0 = zmm8
                zmm0[0] = zmm0[0] f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0[0]
                
                if (zmm1.d f<= zmm12[0])
                    zmm6 = zx.o(0)
                    zmm7 = zx.o(0)
                    zmm8 = zx.o(0)
                else
                    zmm4_3 = 0x3f000000
                    zmm3.d = zmm1[0]
                    zmm2 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0 = zmm5_3
                    zmm0[0] = zmm0[0] f* zmm5_3.d
                    zmm1.d = zmm3.d f* zmm0[0]
                    zmm0 = zmm5_3
                    zmm2[0] = 0.5f f- zmm1.d
                    zmm0[0] = zmm0[0] * zmm2[0]
                    zmm5_3.d = zmm5_3.d f+ zmm0[0]
                    zmm0 = zmm5_3
                    zmm1.d = zmm5_3.d f* zmm5_3.d
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_3[0] = 0.5f f- zmm3.d
                    zmm0[0] = zmm0[0] * zmm4_3[0]
                    zmm5_3.d = zmm5_3.d f+ zmm0[0]
                    arg_10 = zmm5_3.d
                    zmm6[0] = zmm6[0] f* zmm5_3.d
                    zmm7.d = zmm7.d f* zmm5_3.d
                    zmm8.d = zmm8.d f* zmm5_3.d
                
                float var_3c8 = zmm6[0]
                int32_t var_3c4_1 = zmm7.d
                int32_t var_3c0_1 = zmm8.d
                float var_568_3 = zmm9[0]
                int32_t var_130[0x6]
                int32_t* rax_75
                rax_75, zmm9, zmm10 = sub_140ae34d0(&var_130, &var_3c8, &var_4b8, r9_7.d)
                float* var_198
                float* rdx_35 = var_198
                var_4b8 = *rax_75
                zmm1 = var_4b8:4.d
                zmm2 = rax_75[2]
                int32_t var_1a4
                var_198 = &rdx_35[sx.q(var_1a4)]
                *rdx_35 = var_4b8.d[0]
                void* var_180
                int32_t* rdx_36 = var_180
                int32_t var_18c
                var_180 = &rdx_36[sx.q(var_18c)]
                *rdx_36 = zmm1.d
                float* var_168
                float* rdx_37 = var_168
                int32_t result_5
                result = sx.q(result_5)
                var_168 = &rdx_37[result]
                *rdx_37 = zmm2[0]
        
        rcx_17 = var_380_1
        cond:5_1 = var_504 + 1 s< *(arg2 + 0x40)
        r9_6 = var_368_1
        r10_2 = var_370_1
        r11_5 = var_378_1
        rbx_2 = var_340_1
        var_504 += 1
        r8_1 = rcx_19
    while (cond:5_1)

return result
