// 函数: sub_140723050
// 地址: 0x140723050
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
uint32_t var_464 = rax_6
rax_6.b = not.b(rax_6.b)
*(arg2 + 0x10) = &rax[2]
int32_t* rsi_1

if ((rax_6.b & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    rsi_1 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t var_460 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
float (* rdi_1)[0x4]

if ((rax_10.b & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
uint32_t arg_20 = rax_19
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

void var_2c8
sub_140742680(&var_2c8, arg2)

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

void* rax_23 = *(rbx + 0x58)
void* rax_26

if (rax_23 != 0)
    rax_26 = *(**(rax_23 + 0x58) + (sx.q(rbx[0x1a]) << 3))
    
    if (rbx[0x86].b != 0)
        void* rax_27 = sub_140d3c6e0(rbx)
        
        if (rax_27 != 0)
            void* rax_28 = sub_142591550()
            void* rcx_10 = *(rax_27 + 0x10)
            int64_t rdx_6 = sx.q(*(rax_28 + 0x38))
            
            if (rdx_6.d s<= *(rcx_10 + 0x38) && *(*(rcx_10 + 0x30) + (rdx_6 << 3)) == rax_28 + 0x30
                    && *(rax_27 + 0x430) != 0)
                sub_141f66050(rax_27, rbx[0x1a])

int64_t* r15_2

if (rax_23 == 0 || rax_26 == 0)
    r15_2 = nullptr
else
    r15_2 = *(rax_26 + 0x18)

void* rax_30 = *(rbx + 0x70)
int32_t rbx_1 = (*(rbx + 0x68)).d
float zmm2[0x4] = 0x3f800000
float zmm0[0x4] = 0x3f800000
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*r15_2 + 0x58))(r15_2))
zmm0[0] = 1f f/ rbx[0x64]
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_7 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_434 = r11_7
float var_438 = zmm0[0]
char var_160
char var_15e
char var_15d
char var_15c
void* arg_10
int32_t* arg_18

if (var_160 != 0 || result.b != 0 || var_15e != result.b || var_15d != result.b
        || var_15c != result.b)
    arg_10.b = 1
    
    if (result.b != 0)
        arg_18.b = 1
    else
        arg_18.b = result.b
else
    arg_10.b = result.b
    arg_18.b = result.b

int32_t var_450 = 0

if (*(arg2 + 0x40) s> 0)
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11 = arg_10.d
    uint128_t zmm12 = arg_10.d
    float zmm13[0x4] = zx.o(0)
    uint128_t zmm14 = arg_10.d
    float zmm15[0x4] = arg_10.d
    result = zx.q(arg_20.b) << 2
    uint64_t r8_2 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(var_460.b) << 2
    int64_t var_440_1 = (arg_10.d).q
    uint64_t r10_2 = zx.q(var_464.b) << 2
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint64_t result_1 = result
    uint64_t var_3d8_1 = r8_2
    uint64_t var_3d0_1 = r9_6
    uint64_t var_3c8_1 = r10_2
    int64_t var_408_1 = zmm12.q
    int64_t var_410_1 = zmm11.q
    int64_t var_448_1 = (arg_10.d).q
    bool cond:6_1
    
    do
        float (* rdx_9)[0x4] = r12_1
        float (* rcx_15)[0x4] = r13_1
        r12_1 += result
        r13_1 += r8_2
        uint64_t rdx_10 = zx.q(*rsi_1)
        float var_2d0_1 = (*rdx_9)[0]
        int64_t var_424_1 = (_mm_unpacklo_ps(*rdi_1, (*rcx_15)[0].q)).q
        
        if (rdx_10.d s< 0 || rdx_10.d s> r11_7)
            int32_t var_2f0_1 = 0
            int64_t var_364_1 = (_mm_unpacklo_ps(zmm2, zmm13[0].q)).q
            int32_t var_35c_1 = 0
            rdx_10 = zx.q(0.o[0])
        
        uint32_t rsi_5 = (rdx_10 * 3).d
        int32_t rax_38 = (*(*r15_2 + 0x68))(r15_2, zx.q(rsi_5))
        int64_t r8_3 = *r15_2
        int64_t rdi_5 = sx.q(rax_38)
        int32_t rax_39 = (*(r8_3 + 0x68))(r15_2, zx.q(rsi_5 + 1), r8_3)
        int64_t r8_4 = *r15_2
        int64_t r11_8 = sx.q((*(r8_4 + 0x68))(r15_2, zx.q(rsi_5 + 2), r8_4))
        int64_t r10_3
        
        if (arg_10.b == 0)
            r10_3 = zx.q(rax_39)
        else
            r10_3 = sx.q(rax_39)
            int64_t rdx_15 =
                *((sx.q(*(rax_30 + 0x34)) << 4) + sx.q(rbx_1) * 0x38 + *(rax_30 + 0x80) + 8)
            int64_t rcx_21 = rdi_5 * 3
            zmm6 = zx.o(*(rdx_15 + (rcx_21 << 2)))
            zmm15 = zmm6
            int64_t rcx_22 = r10_3 * 3
            arg_20 = (*(rdx_15 + (rcx_21 << 2) + 8))[0]
            var_448_1 = zmm6.q
            zmm6 = zx.o(*(rdx_15 + (rcx_22 << 2)))
            int64_t rcx_23 = r11_8 * 3
            zmm12 = zx.o(*(rdx_15 + (rcx_23 << 2)))
            zmm11 = zmm6
            var_460 = (*(rdx_15 + (rcx_22 << 2) + 8))[0]
            zmm0 = *(rdx_15 + (rcx_23 << 2) + 8)
            zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
            var_464 = zmm0[0]
            zmm14 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            var_440_1 = zmm6.q
            var_410_1 = zmm11.q
            var_408_1 = zmm12.q
        
        zmm8 = var_2d0_1
        zmm10 = var_424_1:4.d
        zmm9 = var_424_1.d
        float var_458
        float var_454
        float zmm1[0x4]
        float zmm3[0x4]
        float zmm4_1
        uint128_t zmm5_1
        float var_45c
        
        if (arg_18.b == 0)
            zmm6 = var_45c
        else
            zmm3 = zmm10
            int32_t var_45c_1 = zmm9.d
            int64_t r8_8 =
                *(((sx.q(*(rax_30 + 0x34)) ^ 1) << 4) + sx.q(rbx_1) * 0x38 + *(rax_30 + 0x80) + 8)
            int64_t rax_46 = rdi_5 * 3
            zmm6 = zx.o(*(r8_8 + (rax_46 << 2)))
            int32_t rax_47 = *(r8_8 + (rax_46 << 2) + 8)
            int64_t rcx_25 = sx.q(r10_3.d) * 3
            zmm2 = zx.o(*(r8_8 + (rcx_25 << 2)))
            float rax_49 = *(r8_8 + (rcx_25 << 2) + 8)
            int64_t rcx_26 = r11_8 * 3
            zmm1 = zx.o(*(r8_8 + (rcx_26 << 2)))
            zmm8[0] = zmm8[0] * zmm1[0]
            int32_t rax_50 = *(r8_8 + (rcx_26 << 2) + 8)
            float var_458_1 = zmm8[0]
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm1 = zmm9
            zmm1[0] = zmm1[0] f* rax_47
            zmm8[0] = zmm8[0] * zmm0[0]
            zmm8[0] = zmm8[0] f* rax_50
            zmm4_1 = zmm10.d * rax_49 + zmm1[0]
            zmm5_1.d = zmm10.d f* zmm2[0]
            float var_454_1 = zmm8[0]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm2 = zmm9
            zmm3[0] = zmm3[0] * zmm0[0]
            zmm0 = zmm6
            zmm2[0] = zmm2[0] * zmm6[0]
            zmm6 = zmm9
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm6[0] = zmm6[0] * zmm0[0]
            zmm0 = var_458_1
            zmm5_1.d = zmm5_1.d f+ zmm2[0]
            zmm6[0] = zmm6[0] + zmm3[0]
            zmm0[0] = zmm0[0] f+ zmm5_1.d
            zmm6[0] = zmm6[0] + zmm8[0]
            var_458 = zmm0[0]
            zmm0 = var_454_1
            zmm0[0] = zmm0[0] + zmm4_1
            var_45c = zmm6[0]
            var_454 = zmm0[0]
        
        if (var_160 != 0 || result_2 != 0)
            void* var_2b8
            float* rdx_20 = var_2b8
            zmm0 = zmm9
            zmm7 = zx.o(var_440_1)
            zmm5_1 = zmm9
            zmm0[0] = zmm0[0] f* var_448_1.d
            zmm9.d = zmm9.d f* arg_20
            int32_t var_2c4
            var_2b8 = &rdx_20[sx.q(var_2c4)]
            zmm8[0] = zmm8[0] f* var_464
            zmm4_1 = zmm10.d * zmm7[0]
            zmm1 = zmm10
            zmm10.d = zmm10.d f* var_460
            zmm5_1.d = zmm5_1.d f* zmm15[0]
            zmm4_1 = zmm4_1 + zmm0[0]
            zmm8[0] = zmm8[0] f* zmm12.d
            zmm9.d = zmm9.d f+ zmm10.d
            zmm1[0] = zmm1[0] f* zmm11.d
            zmm4_1 = zmm4_1 + zmm8[0]
            zmm8[0] = zmm8[0] f* zmm14.d
            zmm5_1.d = zmm5_1.d f+ zmm1[0]
            zmm8[0] = zmm8[0] f+ zmm9.d
            *rdx_20 = zmm4_1
            void* var_2a0
            int32_t* rdx_21 = var_2a0
            zmm5_1.d = zmm5_1.d f+ zmm8[0]
            int32_t var_2ac
            var_2a0 = &rdx_21[sx.q(var_2ac)]
            *rdx_21 = zmm5_1.d
            void* var_288
            float* rdx_22 = var_288
            int32_t var_294
            var_288 = &rdx_22[sx.q(var_294)]
            *rdx_22 = zmm8[0]
            
            if (result_2 != 0)
                void* var_270
                float* rdx_23 = var_270
                zmm5_1.d = zmm5_1.d f- zmm6[0]
                zmm0 = var_438
                zmm8[0] = zmm8[0] - var_454
                zmm5_1.d = zmm5_1.d f* zmm0[0]
                int32_t var_27c
                var_270 = &rdx_23[sx.q(var_27c)]
                zmm4_1 = (zmm4_1 - var_458) * zmm0[0]
                zmm8[0] = zmm8[0] * zmm0[0]
                *rdx_23 = zmm4_1
                int32_t* var_258
                int32_t* rdx_24 = var_258
                int32_t var_264
                var_258 = &rdx_24[sx.q(var_264)]
                *rdx_24 = zmm5_1.d
                void* var_240
                float* rdx_25 = var_240
                int32_t var_24c
                var_240 = &rdx_25[sx.q(var_24c)]
                *rdx_25 = zmm8[0]
        else
            zmm7 = zx.o(var_440_1)
        
        zmm10 = zx.o(var_448_1)
        zmm9 = var_464
        
        if (var_15e != 0)
            zmm1 = arg_20
            zmm6 = zmm7
            zmm7 = var_460
            zmm1[0] = zmm1[0] f- zmm9.d
            zmm7[0] = zmm7[0] f- zmm9.d
            zmm2 = zmm11
            zmm6[0] = zmm6[0] f- zmm12.d
            zmm15[0] = zmm15[0] f- zmm14.d
            zmm2[0] = zmm2[0] f- zmm14.d
            zmm4_1 = zmm10.d f- zmm12.d
            zmm7[0] = zmm7[0] * zmm15[0]
            zmm8 = zmm2
            zmm7[0] = zmm7[0] * zmm4_1
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm2[0] = zmm2[0] * zmm4_1
            zmm8[0] = zmm8[0] - zmm7[0]
            zmm6[0] = zmm6[0] * zmm15[0]
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm6[0] = zmm6[0] - zmm2[0]
            zmm7[0] = zmm7[0] - zmm6[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm7[0] = zmm7[0] + zmm8[0]
            zmm7[0] = zmm7[0] + zmm6[0]
            float var_3e0_1
            
            if (not(zmm7[0] != 1f))
                var_3e0_1 = zmm6[0]
            else if (zmm7[0] >= 9.99999994e-09f)
                zmm5_1 = _mm_rsqrt_ss(zmm7.d, zmm7[0])
                zmm2 = 0x3f000000
                zmm7[0] = zmm7[0] * 0.5f
                zmm0 = zmm5_1
                zmm0[0] = zmm0[0] f* zmm5_1.d
                zmm7[0] = zmm7[0] * zmm0[0]
                zmm0 = zmm5_1
                zmm2[0] = 0.5f - zmm7[0]
                zmm0[0] = zmm0[0] * zmm2[0]
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm1 = zmm5_1
                zmm0 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1.d
                zmm7[0] = zmm7[0] * zmm1[0]
                zmm0[0] = zmm0[0] * (0.5f - zmm7[0])
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm0 = zmm5_1
                int32_t var_468_2 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0[0] = zmm0[0] * zmm8[0]
                zmm5_1.d = zmm5_1.d f* zmm6[0]
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm8 = zmm0
                var_3e0_1 = zmm5_1.d
                zmm6 = zmm5_1
                zmm7 = zmm1
            else
                zmm6 = data_143dbb200
                zmm8 = data_143dbb1f8
                zmm7 = data_143dbb1fc
                var_3e0_1 = zmm6[0]
            
            void* var_228
            float* rdx_26 = var_228
            float var_2e0_1 = var_3e0_1
            int64_t var_2e8_1 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
            int32_t var_234
            var_228 = &rdx_26[sx.q(var_234)]
            *rdx_26 = zmm8[0]
            void* var_210
            float* rdx_27 = var_210
            int32_t var_21c
            var_210 = &rdx_27[sx.q(var_21c)]
            *rdx_27 = zmm7[0]
            void* var_1f8
            float* rdx_28 = var_1f8
            int32_t var_204
            var_1f8 = &rdx_28[sx.q(var_204)]
            *rdx_28 = zmm6[0]
        
        char rdi_7 = var_15c
        
        if (var_15d != 0 || rdi_7 != 0)
            zmm8 = zmm9
            int32_t var_32c_1 = 0
            zmm8[0] = zmm8[0] f- arg_20
            int32_t var_31c_1 = 0
            int128_t var_158
            __builtin_memset(&var_158, 0, 0x20)
            zmm9.d = var_440_1.d f- zmm10.d
            zmm6 = zmm12
            zmm6[0] = zmm6[0] f- zmm10.d
            zmm10 = zmm11
            int32_t var_30c_1 = 0
            zmm11.d = var_460.d f- arg_20
            int128_t var_138
            __builtin_memcpy(&var_138, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            zmm7 = zmm14
            zmm7[0] = zmm7[0] - zmm15[0]
            zmm10.d = zmm10.d f- zmm15[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_61)[0x4]
            rax_61, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_158, &var_118)
            float var_328[0x4]
            var_328[0] = zmm6[0]
            float var_338[0x4]
            var_338[0] = zmm9.d
            zmm2 = *rax_61
            float zmm5_2[0x4] = _mm_shuffle_ps(var_328, var_328, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7[0]
            float var_358_1[0x4] = zmm0
            zmm7 = zmm0
            float zmm4_2[0x4] = _mm_shuffle_ps(var_338, var_338, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm4_2[0] = zmm10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm8[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11.d
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm7 = _mm_mul_ps(zmm7, zmm5_2)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            var_328 = zmm5_2
            float var_318[0x4]
            var_318[0] = zx.o(var_448_1)[0]
            var_338 = zmm4_2
            zmm3 = _mm_shuffle_ps(var_318, var_318, 0xe1)
            zmm3[0] = zmm15[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = arg_20[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_318 = zmm3
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_61[1]
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm9 = _mm_mul_ps(zmm9, zmm5_2)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            float var_358_2[0x4] = zmm7
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm9 = _mm_add_ps(zmm9, zmm0)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm9 = _mm_add_ps(_mm_add_ps(zmm9, zmm1), zmm2)
            zmm2 = rax_61[2]
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_61[3]
            zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm11 = _mm_mul_ps(zmm11, zmm5_2)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm11 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm11, zmm0), zmm1), zmm2)
            
            if (var_15d != 0)
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
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm4_2 = 0x3f000000
                    zmm3 = zx.o(0)
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm7[0]
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
                    float var_468_3 = zmm5_2[0]
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1e0
                float* rdx_30 = var_1e0
                int32_t var_1ec
                var_1e0 = &rdx_30[sx.q(var_1ec)]
                *rdx_30 = zmm6[0]
                void* var_1c8
                float* rdx_31 = var_1c8
                int32_t var_1d4
                var_1c8 = &rdx_31[sx.q(var_1d4)]
                *rdx_31 = zmm7[0]
                void* var_1b0
                float* rdx_32 = var_1b0
                zmm7 = var_358_2
                int32_t var_1bc
                var_1b0 = &rdx_32[sx.q(var_1bc)]
                *rdx_32 = zmm8[0]
                rdi_7 = var_15c
            
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
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm4_2 = 0x3f000000
                    zmm3 = zx.o(0)
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm7[0]
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
                    float var_468_4 = zmm5_2[0]
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7[0] = zmm7[0] * zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_198
                float* rdx_33 = var_198
                int32_t var_1a4
                var_198 = &rdx_33[sx.q(var_1a4)]
                *rdx_33 = zmm6[0]
                void* var_180
                float* rdx_34 = var_180
                int32_t var_18c
                var_180 = &rdx_34[sx.q(var_18c)]
                *rdx_34 = zmm7[0]
                void* var_168
                float* rdx_35 = var_168
                int32_t var_174
                var_168 = &rdx_35[sx.q(var_174)]
                *rdx_35 = zmm8[0]
        
        zmm11 = zx.o(var_410_1)
        cond:6_1 = var_450 + 1 s< *(arg2 + 0x40)
        zmm12 = zx.o(var_408_1)
        zmm2 = 0x3f800000
        rdi_1 += r9_6
        rsi_1 += r10_2
        result = result_1
        r9_6 = var_3d0_1
        r10_2 = var_3c8_1
        r11_7 = var_434
        var_450 += 1
        r8_2 = var_3d8_1
    while (cond:6_1)

return result
