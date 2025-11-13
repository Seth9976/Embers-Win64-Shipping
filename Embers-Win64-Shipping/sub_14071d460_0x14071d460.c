// 函数: sub_14071d460
// 地址: 0x14071d460
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
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t var_478 = rax_6
rax_6.b = not.b(rax_6.b)
*(arg2 + 0x10) = &rax[2]
int32_t* rdi_1

if ((rax_6.b & 1) == 0)
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
uint8_t rax_10 = (rax_9 u>> 0xf).b
int32_t i_2 = rax_9 & 0x7fff
*(arg2 + 0x10) = &rax[3]
float (* r13_1)[0x4]

if ((not.b(rax_10) & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint8_t rax_14 = (rax_13 u>> 0xf).b
int32_t i_3 = rax_13 & 0x7fff
*(arg2 + 0x10) = &rax[4]
float (* r12_1)[0x4]

if ((not.b(rax_14) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
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
    
    r12_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_20 = rax_19
rax_19.b = not.b(rax_19.b)
float (* r15_1)[0x4]

if ((rax_19.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
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
    
    r15_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

void var_288
sub_140742680(&var_288, arg2)

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

void* rax_23 = *(rbx + 0x58)
void* var_458 = nullptr
void* rax_26

if (rax_23 != 0)
    rax_26 = *(**(rax_23 + 0x58) + (sx.q(rbx[0x1a]) << 3))
    var_458 = rax_26
    
    if (rbx[0x86].b != 0)
        void* rax_27 = sub_140d3c6e0(rbx)
        
        if (rax_27 != 0)
            void* rax_28 = sub_142591550()
            void* rcx_10 = *(rax_27 + 0x10)
            int64_t rdx_6 = sx.q(*(rax_28 + 0x38))
            
            if (rdx_6.d s<= *(rcx_10 + 0x38) && *(*(rcx_10 + 0x30) + (rdx_6 << 3)) == rax_28 + 0x30
                    && *(rax_27 + 0x430) != 0)
                sub_141f66050(rax_27, rbx[0x1a])
        
        rax_26 = var_458

int64_t* rsi_2

if (rax_23 == 0 || rax_26 == 0)
    rsi_2 = nullptr
else
    rsi_2 = *(rax_26 + 0x18)

void* rax_30 = *(rbx + 0x70)
int32_t rbx_1 = (*(rbx + 0x68)).d
float zmm2[0x4] = 0x3f800000
float zmm0[0x4] = 0x3f800000
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*rsi_2 + 0x58))(rsi_2))
zmm0[0] = 1f f/ rbx[0x64]
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_7 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_43c = r11_7
float var_440 = zmm0[0]
char var_120
char var_11e
char var_11d
char var_11c
int32_t* arg_10
char arg_18

if (var_120 != 0 || result.b != 0 || var_11e != result.b || var_11d != result.b
        || var_11c != result.b)
    arg_10.b = 1
    
    if (result.b != 0)
        arg_18 = 1
    else
        arg_18 = result.b
else
    arg_10.b = result.b
    arg_18 = result.b

int32_t var_450 = 0

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10 = arg_10.d
    uint128_t zmm11 = arg_10.d
    uint128_t zmm12 = arg_10.d
    uint128_t zmm13 = zx.o(0)
    uint128_t zmm14 = arg_10.d
    result = zx.q(arg_20.b) << 2
    uint64_t r8_2 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(rax_10) << 2
    uint128_t zmm15 = arg_10.d
    uint64_t r10_2 = zx.q(var_478.b) << 2
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    uint64_t result_1 = result
    uint64_t var_348_1 = r8_2
    uint64_t var_3d8_1 = r9_6
    uint64_t var_3d0_1 = r10_2
    int64_t var_410_1 = zmm10.q
    int64_t var_448_1 = (arg_10.d).q
    int64_t var_408_1 = zmm11.q
    int64_t var_438_1 = zmm12.q
    bool cond:6_1
    
    do
        float (* rdx_9)[0x4] = r15_1
        float (* rcx_15)[0x4] = r12_1
        r15_1 += result
        r12_1 += r8_2
        float (* rax_35)[0x4] = r13_1
        r13_1 += r9_6
        uint64_t rdx_10 = zx.q(*rdi_1)
        float var_290_1 = (*rdx_9)[0]
        int64_t var_424_1 = (_mm_unpacklo_ps(*rax_35, (*rcx_15)[0].q)).q
        
        if (rdx_10.d s< 0 || rdx_10.d s> r11_7)
            int32_t var_2b0_1 = 0
            int64_t var_364_1 = (_mm_unpacklo_ps(zmm2, zmm13.q)).q
            int32_t var_35c_1 = 0
            rdx_10 = zx.q(0.o[0])
        
        uint32_t rdi_5 = (rdx_10 * 3).d
        int32_t rax_38 = (*(*rsi_2 + 0x68))(rsi_2, zx.q(rdi_5))
        int64_t r8_3 = *rsi_2
        int32_t rax_39 = (*(r8_3 + 0x68))(rsi_2, zx.q(rdi_5 + 1), r8_3)
        int64_t r8_4 = *rsi_2
        int64_t r9_7 = sx.q(rax_38)
        int64_t rdi_6 = sx.q((*(r8_4 + 0x68))(rsi_2, zx.q(rdi_5 + 2), r8_4))
        float var_460
        int64_t r11_8
        
        if (arg_10.b == 0)
            r11_8 = zx.q(rax_39)
        else
            r11_8 = sx.q(rax_39)
            int64_t rdx_15 =
                *((sx.q(*(rax_30 + 0x34)) << 4) + sx.q(rbx_1) * 0x38 + *(rax_30 + 0x80) + 8)
            int64_t rcx_21 = r9_7 * 3
            zmm12 = zx.o(*(rdx_15 + (rcx_21 << 2)))
            int64_t rcx_22 = r11_8 * 3
            zmm6 = zx.o(*(rdx_15 + (rcx_22 << 2)))
            zmm10 = zmm6
            int64_t rcx_23 = rdi_6 * 3
            zmm11 = zx.o(*(rdx_15 + (rcx_23 << 2)))
            arg_20 = (*(rdx_15 + (rcx_21 << 2) + 8))[0]
            var_478 = (*(rdx_15 + (rcx_22 << 2) + 8))[0]
            zmm0 = *(rdx_15 + (rcx_23 << 2) + 8)
            zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
            var_460 = zmm0[0]
            zmm14 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
            var_438_1 = zmm12.q
            zmm15 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
            var_448_1 = zmm6.q
            var_410_1 = zmm10.q
            var_408_1 = zmm11.q
        
        zmm8 = var_290_1
        zmm9 = var_424_1:4.d
        zmm7 = var_424_1.d
        float var_46c
        float var_468
        float var_464
        float zmm1[0x4]
        uint128_t zmm3
        float zmm4_1
        uint128_t zmm5_1
        
        if (arg_18 != 0)
            zmm4_1 = zmm8[0]
            zmm6 = zmm9
            int64_t r8_8 =
                *(((sx.q(*(rax_30 + 0x34)) ^ 1) << 4) + sx.q(rbx_1) * 0x38 + *(rax_30 + 0x80) + 8)
            int64_t rax_46 = r9_7 * 3
            zmm3 = zx.o(*(r8_8 + (rax_46 << 2)))
            int32_t rax_47 = *(r8_8 + (rax_46 << 2) + 8)
            int64_t rcx_25 = sx.q(r11_8.d) * 3
            zmm2 = zx.o(*(r8_8 + (rcx_25 << 2)))
            float rax_49 = *(r8_8 + (rcx_25 << 2) + 8)
            int64_t rcx_26 = rdi_6 * 3
            zmm1 = zx.o(*(r8_8 + (rcx_26 << 2)))
            zmm8[0] = zmm8[0] * zmm1[0]
            int32_t rax_50 = *(r8_8 + (rcx_26 << 2) + 8)
            zmm6[0] = zmm6[0] * zmm2[0]
            float var_46c_1 = zmm8[0]
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm1 = zmm7
            zmm4_1 = zmm4_1 * zmm0[0]
            zmm8[0] = zmm8[0] f* rax_50
            float var_464_1 = zmm8[0]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm2 = zmm7
            zmm5_1.d = zmm9.d f* zmm0[0]
            zmm0 = zmm3
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm1[0] = zmm1[0] * zmm0[0]
            zmm0 = var_46c_1
            zmm2[0] = zmm2[0] f* zmm3.d
            zmm3.d = zmm7.d f* rax_47
            zmm5_1.d = zmm5_1.d f+ zmm1[0]
            zmm6[0] = zmm6[0] + zmm2[0]
            zmm3.d = zmm3.d f+ zmm9.d * rax_49
            zmm0[0] = zmm0[0] + zmm6[0]
            var_46c = zmm0[0]
            zmm0 = zmm4_1
            zmm0[0] = zmm0[0] f+ zmm5_1.d
            var_468 = zmm0[0]
            zmm0 = var_464_1
            zmm0[0] = zmm0[0] f+ zmm3.d
            var_464 = zmm0[0]
        
        if (var_120 != 0 || result_2 != 0)
            void* var_278
            float* rdx_20 = var_278
            zmm3 = zmm8
            zmm4_1 = zmm8[0]
            zmm6 = zmm7
            zmm2 = var_478
            zmm0 = zmm9
            zmm0[0] = zmm0[0] f* var_448_1.d
            zmm1 = zmm9
            zmm5_1.d = var_460.d f* zmm8[0]
            zmm8 = zmm7
            int32_t var_284
            var_278 = &rdx_20[sx.q(var_284)]
            zmm6[0] = zmm6[0] f* zmm12.d
            zmm8[0] = zmm8[0] f* zmm15.d
            zmm2[0] = zmm2[0] f* zmm9.d
            zmm6[0] = zmm6[0] + zmm0[0]
            zmm9 = arg_20
            zmm7.d = zmm7.d f* zmm9.d
            zmm3.d = zmm3.d f* zmm11.d
            zmm1[0] = zmm1[0] f* zmm10.d
            zmm7.d = zmm7.d f+ zmm2[0]
            zmm6[0] = zmm6[0] f+ zmm3.d
            zmm8[0] = zmm8[0] + zmm1[0]
            zmm7.d = zmm7.d f+ zmm5_1.d
            *rdx_20 = zmm6[0]
            void* var_260
            float* rdx_21 = var_260
            zmm8[0] = zmm8[0] + zmm4_1 f* zmm14.d
            int32_t var_26c
            var_260 = &rdx_21[sx.q(var_26c)]
            *rdx_21 = zmm8[0]
            void* var_248
            int32_t* rdx_22 = var_248
            int32_t var_254
            var_248 = &rdx_22[sx.q(var_254)]
            *rdx_22 = zmm7.d
            
            if (result_2 != 0)
                void* var_230
                float* rdx_23 = var_230
                zmm0 = var_440
                zmm6[0] = zmm6[0] - var_46c
                zmm8[0] = zmm8[0] - var_468
                zmm7.d = zmm7.d f- var_464
                int32_t var_23c
                var_230 = &rdx_23[sx.q(var_23c)]
                zmm6[0] = zmm6[0] * zmm0[0]
                zmm8[0] = zmm8[0] * zmm0[0]
                *rdx_23 = zmm6[0]
                void* var_218
                float* rdx_24 = var_218
                zmm7.d = zmm7.d f* zmm0[0]
                int32_t var_224
                var_218 = &rdx_24[sx.q(var_224)]
                *rdx_24 = zmm8[0]
                void* var_200
                int32_t* rdx_25 = var_200
                int32_t var_20c
                var_200 = &rdx_25[sx.q(var_20c)]
                *rdx_25 = zmm7.d
        else
            zmm9 = arg_20
        
        if (var_11e == 0)
            zmm9 = zx.o(var_448_1)
        else
            zmm1 = zmm9
            zmm7.d = var_478.d f- var_460
            zmm1[0] = zmm1[0] - var_460
            zmm9 = zx.o(var_448_1)
            zmm2 = zmm10
            zmm6 = zmm9
            zmm2[0] = zmm2[0] f- zmm14.d
            zmm6[0] = zmm6[0] f- zmm11.d
            zmm3.d = zmm15.d f- zmm14.d
            zmm0 = zmm7
            zmm4_1 = zmm12.d f- zmm11.d
            zmm8 = zmm2
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm0[0] = zmm0[0] f* zmm3.d
            zmm7.d = zmm7.d f* zmm4_1
            zmm8[0] = zmm8[0] - zmm0[0]
            zmm2[0] = zmm2[0] * zmm4_1
            zmm6[0] = zmm6[0] f* zmm3.d
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm6[0] = zmm6[0] - zmm2[0]
            zmm7.d = zmm7.d f- zmm6[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm3.d = zmm7.d f* zmm7.d
            zmm3.d = zmm3.d f+ zmm8[0]
            zmm3.d = zmm3.d f+ zmm6[0]
            float var_3e0_1
            
            if (not(zmm3.d f!= 1f))
                var_3e0_1 = zmm6[0]
            else if (zmm3.d f>= 9.99999994e-09f)
                zmm0 = zmm3
                zmm3 = zmm0
                zmm5_1 = _mm_rsqrt_ss(zmm0.d, zmm3.d)
                zmm2 = 0x3f000000
                zmm3.d = zmm3.d f* 0.5f
                zmm0 = zmm5_1
                zmm0[0] = zmm0[0] f* zmm5_1.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] * zmm0[0]
                zmm0 = zmm5_1
                zmm2[0] = 0.5f - zmm1[0]
                zmm0[0] = zmm0[0] * zmm2[0]
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm1 = zmm5_1
                zmm0 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm0[0] = zmm0[0] * (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm0 = zmm5_1
                int32_t var_474_2 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0[0] = zmm0[0] * zmm8[0]
                zmm5_1.d = zmm5_1.d f* zmm6[0]
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm8 = zmm0
                var_3e0_1 = zmm5_1.d
                zmm6 = zmm5_1
                zmm7 = zmm1
            else
                zmm6 = data_143dbb200
                zmm8 = data_143dbb1f8
                zmm7 = data_143dbb1fc
                var_3e0_1 = zmm6[0]
            
            void* var_1e8
            float* rdx_26 = var_1e8
            float var_2a0_1 = var_3e0_1
            int64_t var_2a8_1 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
            int32_t var_1f4
            var_1e8 = &rdx_26[sx.q(var_1f4)]
            *rdx_26 = zmm8[0]
            void* var_1d0
            int32_t* rdx_27 = var_1d0
            int32_t var_1dc
            var_1d0 = &rdx_27[sx.q(var_1dc)]
            *rdx_27 = zmm7.d
            void* var_1b8
            float* rdx_28 = var_1b8
            int32_t var_1c4
            var_1b8 = &rdx_28[sx.q(var_1c4)]
            *rdx_28 = zmm6[0]
        
        char rdi_7 = var_11c
        
        if (var_11d != 0 || rdi_7 != 0)
            zmm9.d = zmm9.d f- zmm12.d
            zmm8 = var_460
            zmm10.d = zmm10.d f- zmm15.d
            zmm8[0] = zmm8[0] f- arg_20
            zmm6 = zmm11
            int32_t var_32c_1 = 0
            int64_t rdx_29 = *(var_458 + 0x98)
            zmm6[0] = zmm6[0] f- zmm12.d
            uint64_t rcx_36 = zx.q(*(var_458 + 0xa8))
            zmm7.d = zmm14.d f- zmm15.d
            zmm12 = data_142d3f660
            zmm11.d = var_478.d f- arg_20
            int64_t rax_63 = zx.q(rax_38) * rcx_36
            int32_t var_31c_1 = 0
            int32_t var_30c_1 = 0
            int64_t var_2f0_1 = 0
            int64_t var_2e0_1 = 0
            zmm4_1 = *(rdx_29 + (rax_63 << 3))
            zmm5_1 = *(rdx_29 + (rax_63 << 3) + 4)
            int64_t rax_65 = zx.q(r11_8.d) * rcx_36
            float var_2d8_1 = zmm4_1
            int32_t var_2d4_1 = zmm5_1.d
            int64_t var_2d0_1 = 0x3f800000
            zmm2 = *(rdx_29 + (rax_65 << 3))
            zmm3 = *(rdx_29 + (rax_65 << 3) + 4)
            zmm2[0] = zmm2[0] - zmm4_1
            zmm3.d = zmm3.d f- zmm5_1.d
            int64_t rax_67 = zx.q(rdi_6.d) * rcx_36
            float var_2f8 = zmm2[0]
            int32_t var_2f4_1 = zmm3.d
            zmm0 = *(rdx_29 + (rax_67 << 3))
            zmm1 = *(rdx_29 + (rax_67 << 3) + 4)
            zmm0[0] = zmm0[0] - zmm4_1
            zmm1[0] = zmm1[0] f- zmm5_1.d
            float var_2e8_1 = zmm0[0]
            float var_2c8_1[0x4] = zmm12
            float var_2e4_1 = zmm1[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_68)[0x4]
            rax_68, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_2f8, &var_118)
            uint128_t zmm5_2
            zmm5_2.d = zmm6[0]
            float var_338[0x4]
            var_338[0] = zmm9.d
            zmm2 = *rax_68
            _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_2.d = zmm7.d
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm7 = zmm0
            float zmm4_2[0x4] = _mm_shuffle_ps(var_338, var_338, 0xe1)
            float var_358_1[0x4] = zmm0
            zmm4_2[0] = zmm10.d
            _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2.d = zmm8[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11.d
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm7 = _mm_mul_ps(zmm7, zmm5_2)
            uint128_t var_328 = zmm5_2
            var_338 = zmm4_2
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm3.d = zx.o(var_438_1)[0]
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = zmm15.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = arg_20[0]
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_318 = zmm3
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_68[1]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            uint128_t var_358_2 = zmm7
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_68[2]
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_68[3]
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
                int64_t var_3f8_1 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_3f0_1 = 0
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
                    zmm4_2 = 0x3f000000
                    zmm2 = 0x3f000000
                    zmm3.d = zmm1[0]
                    zmm5_2 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0 = zmm5_2
                    zmm0[0] = zmm0[0] f* zmm5_2.d
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] * zmm0[0]
                    zmm0 = zmm5_2
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0[0] = zmm0[0] * zmm2[0]
                    zmm5_2.d = zmm5_2.d f+ zmm0[0]
                    zmm1 = zmm5_2
                    zmm0 = zmm5_2
                    zmm1[0] = zmm1[0] f* zmm5_2.d
                    zmm3.d = zmm3.d f* zmm1[0]
                    zmm4_2[0] = 0.5f f- zmm3.d
                    zmm0[0] = zmm0[0] * zmm4_2[0]
                    zmm5_2.d = zmm5_2.d f+ zmm0[0]
                    int32_t var_45c_2 = zmm5_2.d
                    zmm6[0] = zmm6[0] f* zmm5_2.d
                    zmm7.d = zmm7.d f* zmm5_2.d
                    zmm8[0] = zmm8[0] f* zmm5_2.d
                
                void* var_1a0
                float* rdx_31 = var_1a0
                int32_t var_1ac
                var_1a0 = &rdx_31[sx.q(var_1ac)]
                *rdx_31 = zmm6[0]
                void* var_188
                int32_t* rdx_32 = var_188
                int32_t var_194
                var_188 = &rdx_32[sx.q(var_194)]
                *rdx_32 = zmm7.d
                void* var_170
                float* rdx_33 = var_170
                zmm7 = var_358_2
                int32_t var_17c
                var_170 = &rdx_33[sx.q(var_17c)]
                *rdx_33 = zmm8[0]
                rdi_7 = var_11c
            
            if (rdi_7 != 0)
                zmm2 = data_142d4cc20
                int64_t var_3f8_2 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_3f0_2 = 0
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
                    zmm4_2 = 0x3f000000
                    zmm2 = 0x3f000000
                    zmm3.d = zmm1[0]
                    zmm5_2 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0 = zmm5_2
                    zmm0[0] = zmm0[0] f* zmm5_2.d
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] * zmm0[0]
                    zmm0 = zmm5_2
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0[0] = zmm0[0] * zmm2[0]
                    zmm5_2.d = zmm5_2.d f+ zmm0[0]
                    zmm1 = zmm5_2
                    zmm0 = zmm5_2
                    zmm1[0] = zmm1[0] f* zmm5_2.d
                    zmm3.d = zmm3.d f* zmm1[0]
                    zmm4_2[0] = 0.5f f- zmm3.d
                    zmm0[0] = zmm0[0] * zmm4_2[0]
                    zmm5_2.d = zmm5_2.d f+ zmm0[0]
                    int32_t var_45c_3 = zmm5_2.d
                    zmm6[0] = zmm6[0] f* zmm5_2.d
                    zmm7.d = zmm7.d f* zmm5_2.d
                    zmm8[0] = zmm8[0] f* zmm5_2.d
                
                void* var_158
                float* rdx_34 = var_158
                int32_t var_164
                var_158 = &rdx_34[sx.q(var_164)]
                *rdx_34 = zmm6[0]
                void* var_140
                int32_t* rdx_35 = var_140
                int32_t var_14c
                var_140 = &rdx_35[sx.q(var_14c)]
                *rdx_35 = zmm7.d
                void* var_128
                float* rdx_36 = var_128
                int32_t var_134
                var_128 = &rdx_36[sx.q(var_134)]
                *rdx_36 = zmm8[0]
        
        zmm10 = zx.o(var_410_1)
        cond:6_1 = var_450 + 1 s< *(arg2 + 0x40)
        zmm11 = zx.o(var_408_1)
        zmm12 = zx.o(var_438_1)
        zmm2 = 0x3f800000
        rdi_1 += r10_2
        result = result_1
        r9_6 = var_3d8_1
        r10_2 = var_3d0_1
        r11_7 = var_43c
        var_450 += 1
        r8_2 = var_348_1
    while (cond:6_1)

return result
