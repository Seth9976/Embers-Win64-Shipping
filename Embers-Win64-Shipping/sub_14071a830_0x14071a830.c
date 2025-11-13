// 函数: sub_14071a830
// 地址: 0x14071a830
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
int32_t* r14 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t var_4f4 = rax_6
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
void* var_490 = rdx_3
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t var_4f0 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
uint128_t* rsi_1

if ((rax_10.b & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
    
    rsi_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint8_t rax_14 = (rax_13 u>> 0xf).b
int32_t i_3 = rax_13 & 0x7fff
*(arg2 + 0x10) = &rax[4]
float (* rdi_1)[0x4]

if ((not.b(rax_14) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
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
    
    rdi_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_20 = rax_19
rax_19.b = not.b(rax_19.b)
uint128_t* r13_1

if ((rax_19.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

void var_2d8
sub_140742680(&var_2d8, arg2)

if (sub_140d3c6e0(r14) != 0)
    sub_142591550()

void* rax_23 = *(r14 + 0x58)
void* r12_1

if (rax_23 != 0)
    r12_1 = *(**(rax_23 + 0x58) + (sx.q(r14[0x1a]) << 3))
    
    if (r14[0x86].b != 0)
        void* rax_26 = sub_140d3c6e0(r14)
        
        if (rax_26 != 0)
            void* rax_27 = sub_142591550()
            void* rcx_10 = *(rax_26 + 0x10)
            int64_t rdx_10 = sx.q(*(rax_27 + 0x38))
            
            if (rdx_10.d s<= *(rcx_10 + 0x38)
                    && *(*(rcx_10 + 0x30) + (rdx_10 << 3)) == rax_27 + 0x30
                    && *(rax_26 + 0x430) != 0)
                sub_141f66050(rax_26, r14[0x1a])

int64_t* r12_2

if (rax_23 == 0 || r12_1 == 0)
    r12_2 = nullptr
else
    r12_2 = *(r12_1 + 0x18)

void* rax_29 = *(r14 + 0x70)
int32_t rbx_2 = (*(r14 + 0x68)).d
int32_t rax_31 = (*(*r12_2 + 0x58))(r12_2)
float zmm2[0x4] = 0x3f800000
uint128_t zmm0
zmm0.d = 1f f/ r14[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_31)
int32_t var_498 = zmm0.d
char result_2
uint64_t result = zx.q(result_2)
int32_t r11_5 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_494 = r11_5
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

int32_t var_4d8 = 0

if (*(arg2 + 0x40) s> 0)
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint128_t zmm10 = arg_10.d
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint128_t zmm12 = arg_10.d
    float zmm13[0x4] = zx.o(0)
    uint128_t zmm14 = arg_10.d
    int64_t var_488_1 = (arg_10.d).q
    uint128_t zmm15 = arg_10.d
    int32_t var_328_1 = arg_10.d.d
    int32_t var_318_1 = arg_10.d.d
    result = zx.q(arg_20.b) << 2
    uint64_t r8_2 = zx.q(rax_14) << 2
    uint64_t r9_6 = zx.q(var_4f0.b) << 2
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int64_t var_4b8_1 = (arg_10.d).q
    uint64_t r10_2 = zx.q(var_4f4.b) << 2
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int64_t var_4d0_1 = (arg_10.d).q
    uint64_t result_1 = result
    uint64_t var_3b0_1 = r8_2
    uint64_t var_3a8_1 = r9_6
    uint64_t var_3a0_1 = r10_2
    uint128_t var_308_1 = zmm10
    int64_t var_468_1 = zmm12.q
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    bool cond:6_1
    
    do
        uint128_t* rdx_13 = r13_1
        r13_1 += result
        int32_t* rdx_14 = var_490
        int32_t var_2e4_1 = (*rdx_13).d
        var_490 = rdx_14 + r10_2
        uint64_t rdx_16 = zx.q(*rdx_14)
        uint64_t var_4a4_1 = (_mm_unpacklo_ps(*rsi_1, (*rdi_1)[0].q)).q
        
        if (rdx_16.d s< 0 || rdx_16.d s> r11_5)
            int32_t var_2f0_1 = 0
            uint64_t var_394_1 = (_mm_unpacklo_ps(zmm2, zmm13[0].q)).q
            int32_t var_38c_1 = 0
            rdx_16 = zx.q(0.o.d)
        
        uint32_t rsi_5 = (rdx_16 * 3).d
        int32_t rax_38 = (*(*r12_2 + 0x68))(r12_2, zx.q(rsi_5))
        int64_t r8_3 = *r12_2
        int64_t rdi_5 = sx.q(rax_38)
        int32_t rax_39 = (*(r8_3 + 0x68))(r12_2, zx.q(rsi_5 + 1), r8_3)
        int64_t r8_4 = *r12_2
        int64_t r11_6 = sx.q((*(r8_4 + 0x68))(r12_2, zx.q(rsi_5 + 2), r8_4))
        int64_t r10_3
        
        if (arg_10 == 0)
            r10_3 = zx.q(rax_39)
        else
            r10_3 = sx.q(rax_39)
            int64_t rdx_21 =
                *((sx.q(*(rax_29 + 0x34)) << 4) + sx.q(rbx_2) * 0x38 + *(rax_29 + 0x80) + 8)
            int64_t rcx_22 = rdi_5 * 3
            zmm7 = zx.o(*(rdx_21 + (rcx_22 << 2)))
            zmm15 = zmm7
            int64_t rcx_23 = r10_3 * 3
            arg_20 = (*(rdx_21 + (rcx_22 << 2) + 8)).d
            var_4d0_1 = zmm7.q
            zmm7 = zx.o(*(rdx_21 + (rcx_23 << 2)))
            int64_t rcx_24 = r11_6 * 3
            zmm6 = zx.o(*(rdx_21 + (rcx_24 << 2)))
            var_4f0 = (*(rdx_21 + (rcx_23 << 2) + 8)).d
            zmm0 = *(rdx_21 + (rcx_24 << 2) + 8)
            zmm12 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            var_4f4 = zmm0.d
            zmm14 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            var_4b8_1 = zmm7.q
            var_468_1 = zmm12.q
            var_488_1 = zmm6.q
        
        uint128_t zmm3 = var_2e4_1
        zmm11 = var_4a4_1:4.d
        zmm8 = var_4a4_1.d
        int64_t var_4e8
        float zmm1[0x4]
        uint128_t zmm4_1
        uint128_t zmm5_1
        
        if (arg_18 != 0)
            zmm10 = zmm3
            zmm6 = zmm3
            zmm9 = zmm3
            int32_t var_43c_1 = 0x3f800000
            var_4e8 = 0
            int32_t var_4e0_1 = 0
            int64_t r8_8 =
                *(((sx.q(*(rax_29 + 0x34)) ^ 1) << 4) + sx.q(rbx_2) * 0x38 + *(rax_29 + 0x80) + 8)
            int64_t rax_46 = rdi_5 * 3
            zmm8 = zx.o(*(r8_8 + (rax_46 << 2)))
            int32_t rax_47 = *(r8_8 + (rax_46 << 2) + 8)
            int64_t rcx_26 = sx.q(r10_3.d) * 3
            zmm2 = zx.o(*(r8_8 + (rcx_26 << 2)))
            int64_t rcx_27 = r11_6 * 3
            zmm1 = zx.o(*(r8_8 + (rcx_27 << 2)))
            zmm3.d = zmm11.d f* zmm2[0]
            zmm0 = zmm1
            zmm7.d = zmm11.d f* *(r8_8 + (rcx_26 << 2) + 8)
            int32_t rax_50 = *(r8_8 + (rcx_27 << 2) + 8)
            zmm10.d = zmm10.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm0 = zmm2
            zmm2 = var_4a4_1.d
            zmm6.d = zmm6.d f* rax_50
            zmm9.d = zmm9.d f* zmm1[0]
            zmm4_1.d = zmm11.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm0 = zmm8
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm2[0] = zmm2[0] f* zmm0.d
            zmm5_1.d = zmm2.d f* zmm8[0]
            zmm8 = var_4a4_1.d
            zmm4_1.d = zmm4_1.d f+ zmm2[0]
            zmm8[0] = zmm8[0] f* rax_47
            zmm5_1.d = zmm5_1.d f+ zmm3.d
            zmm10.d = zmm10.d f+ zmm4_1.d
            zmm7.d = zmm7.d f+ zmm8[0]
            zmm5_1.d = zmm5_1.d f+ zmm9.d
            zmm7.d = zmm7.d f+ zmm6.d
            float var_448[0x4]
            var_448[0] = zmm5_1.d
            zmm2 = _mm_shuffle_ps(var_448, var_448, 0xe1)
            zmm2[0] = zmm10.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm7.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_448 = zmm2
            zmm10 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x180))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0x160))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0x170))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0x150))
            zmm10 = _mm_add_ps(_mm_add_ps(zmm10, zmm0), _mm_add_ps(zmm1, zmm2))
            var_308_1 = zmm10
            var_328_1 = _mm_shuffle_ps(zmm10, zmm10, 0x55).d
            zmm3 = var_2e4_1
            var_318_1 = _mm_shuffle_ps(zmm10, zmm10, 0xaa).d
        
        if (var_170 != 0 || result_2 != 0)
            void* var_2c8
            int32_t* rdx_26 = var_2c8
            zmm4_1 = zmm3
            zmm2 = var_4b8_1.d
            zmm1 = arg_20
            zmm9 = zx.o(var_488_1)
            zmm2[0] = zmm2[0] f* zmm11.d
            int32_t var_42c_1 = 0x3f800000
            zmm5_1.d = zmm14.d f* zmm3.d
            var_4e8 = 0
            zmm7.d = var_4f4.d f* zmm3.d
            int32_t var_4e0_2 = 0
            zmm3.d = var_4d0_1.d.d f* zmm8[0]
            zmm1[0] = zmm1[0] * zmm8[0]
            zmm3.d = zmm3.d f+ zmm2[0]
            zmm0.d = zmm8.d f* zmm15.d
            zmm6.d = zmm12.d f* zmm11.d
            zmm11.d = zmm11.d f* var_4f0
            zmm6.d = zmm6.d f+ zmm0.d
            zmm4_1.d = zmm4_1.d f* zmm9.d
            zmm11.d = zmm11.d f+ zmm1[0]
            zmm3.d = zmm3.d f+ zmm4_1.d
            zmm6.d = zmm6.d f+ zmm5_1.d
            zmm7.d = zmm7.d f+ zmm11.d
            float var_438[0x4]
            var_438[0] = zmm3.d
            zmm2 = _mm_shuffle_ps(var_438, var_438, 0xe1)
            zmm2[0] = zmm6.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm7.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_438 = zmm2
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0))
            int32_t var_2d4
            var_2c8 = &rdx_26[sx.q(var_2d4)]
            zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm0), _mm_add_ps(zmm1, zmm2))
            *rdx_26 = zmm3.d
            void* var_2b0
            int32_t* rdx_27 = var_2b0
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            int32_t var_2bc
            var_2b0 = &rdx_27[sx.q(var_2bc)]
            *rdx_27 = zmm0.d
            void* var_298
            float* rdx_28 = var_298
            int32_t var_2a4
            var_298 = &rdx_28[sx.q(var_2a4)]
            *rdx_28 = zmm1[0]
            
            if (result_2 != 0)
                void* var_280
                int32_t* rdx_29 = var_280
                zmm3.d = zmm3.d f- zmm10.d
                zmm2 = var_498
                zmm0.d = zmm0.d f- var_328_1
                zmm1[0] = zmm1[0] f- var_318_1
                zmm3.d = zmm3.d f* zmm2[0]
                int32_t var_28c
                var_280 = &rdx_29[sx.q(var_28c)]
                zmm0.d = zmm0.d f* zmm2[0]
                *rdx_29 = zmm3.d
                void* var_268
                int32_t* rdx_30 = var_268
                zmm1[0] = zmm1[0] * zmm2[0]
                int32_t var_274
                var_268 = &rdx_30[sx.q(var_274)]
                *rdx_30 = zmm0.d
                void* var_250
                float* rdx_31 = var_250
                int32_t var_25c
                var_250 = &rdx_31[sx.q(var_25c)]
                *rdx_31 = zmm1[0]
        else
            zmm9 = zx.o(var_488_1)
        
        zmm11 = zx.o(var_4d0_1)
        zmm10 = zx.o(var_4b8_1)
        
        if (var_16e != 0)
            zmm7.d = var_4f0.d f- var_4f4
            zmm1 = arg_20
            zmm6.d = zmm10.d f- zmm9.d
            zmm1[0] = zmm1[0] f- var_4f4
            zmm2 = zmm12
            zmm3.d = zmm15.d f- zmm14.d
            zmm2[0] = zmm2[0] f- zmm14.d
            zmm4_1.d = zmm11.d f- zmm9.d
            zmm0.d = zmm7.d f* zmm3.d
            zmm8 = zmm2
            zmm7.d = zmm7.d f* zmm4_1.d
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm2[0] = zmm2[0] f* zmm4_1.d
            zmm8[0] = zmm8[0] f- zmm0.d
            zmm0 = zmm6
            zmm6.d = zmm6.d f* zmm3.d
            zmm0.d = zmm0.d f* zmm1[0]
            zmm6.d = zmm6.d f- zmm2[0]
            zmm7.d = zmm7.d f- zmm0.d
            zmm0.d = zmm8.d f* zmm8[0]
            zmm1 = zmm6
            zmm1[0] = zmm1[0] f* zmm6.d
            zmm3.d = zmm7.d f* zmm7.d
            zmm3.d = zmm3.d f+ zmm0.d
            zmm3.d = zmm3.d f+ zmm1[0]
            
            if (not(zmm3.d f== 1f))
                if (zmm3.d f>= 9.99999994e-09f)
                    zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm2 = 0x3f000000
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_1.d f* zmm5_1.d
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm5_1.d f* zmm2[0]
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    zmm1 = zmm5_1
                    zmm1[0] = zmm1[0] f* zmm5_1.d
                    zmm3.d = zmm3.d f* zmm1[0]
                    zmm4_1.d = 0.5f f- zmm3.d
                    zmm0.d = zmm5_1.d f* zmm4_1.d
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    int32_t var_4f8_2 = zmm5_1.d
                    zmm8[0] = zmm8[0] f* zmm5_1.d
                    zmm7.d = zmm7.d f* zmm5_1.d
                    zmm6.d = zmm6.d f* zmm5_1.d
                else
                    zmm8 = data_143dbb1f8
                    zmm7 = data_143dbb1fc
                    zmm6 = data_143dbb200
            
            void* var_238
            float* rdx_32 = var_238
            uint64_t var_480_1 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
            int32_t var_478_1 = zmm6.d
            int32_t var_41c_1 = 0
            float var_428[0x4]
            var_428[0] = zmm8[0]
            var_4e8 = 0
            zmm2 = _mm_shuffle_ps(var_428, var_428, 0xe1)
            zmm2[0] = zmm7.d
            int32_t var_4e0_3 = 0
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm2[0] = zmm6.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_428 = zmm2
            zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
            zmm8 = _mm_add_ps(zmm8, zmm0)
            int32_t var_244
            var_238 = &rdx_32[sx.q(var_244)]
            zmm1 =
                _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
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
            zmm3.d = zmm1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm1 = zmm3
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm2[0] = 0.5f - zmm1[0]
            zmm0.d = zmm4_1.d f* zmm2[0]
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1 = zmm4_1
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm3.d = zmm3.d f* zmm1[0]
            zmm5_1.d = 0.5f f- zmm3.d
            zmm0.d = zmm4_1.d f* zmm5_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm8[0] = zmm8[0] f* zmm4_1.d
            zmm7.d = zmm7.d f* zmm4_1.d
            zmm6.d = zmm6.d f* zmm4_1.d
            var_480_1.d = zmm8[0]
            var_480_1:4.d = zmm7.d
            int32_t var_478_2 = zmm6.d
            *rdx_32 = zmm8[0]
            void* var_220
            int32_t* rdx_33 = var_220
            int32_t var_4f8_3 = zmm4_1.d
            int32_t var_22c
            var_220 = &rdx_33[sx.q(var_22c)]
            *rdx_33 = zmm7.d
            void* var_208
            int32_t* rdx_34 = var_208
            int32_t var_214
            var_208 = &rdx_34[sx.q(var_214)]
            *rdx_34 = zmm6.d
        
        char rdi_7 = var_16c
        
        if (var_16d != 0 || rdi_7 != 0)
            zmm8 = var_4f4
            zmm8[0] = zmm8[0] f- arg_20
            int32_t var_35c_1 = 0
            int32_t var_34c_1 = 0
            int32_t var_33c_1 = 0
            int128_t var_158
            __builtin_memset(&var_158, 0, 0x20)
            zmm6.d = zmm9.d f- zmm11.d
            zmm9.d = zmm10.d f- zmm11.d
            zmm11.d = var_4f0.d f- arg_20
            int128_t var_138
            __builtin_memcpy(&var_138, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            zmm7.d = zmm14.d f- zmm15.d
            zmm10.d = zmm12.d f- zmm15.d
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_61)[0x4]
            rax_61, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_158, &var_118)
            float var_358[0x4]
            var_358[0] = zmm6.d
            uint128_t zmm4_2
            zmm4_2.d = zmm9.d
            zmm2 = *rax_61
            float zmm5_2[0x4] = _mm_shuffle_ps(var_358, var_358, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7.d
            var_4e8.o = zmm0
            zmm7 = zmm0
            _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_2.d = zmm10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm5_2[0] = zmm8[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm7 = _mm_mul_ps(zmm7, zmm5_2)
            _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm4_2.d = zmm11.d
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm2 = _mm_mul_ps(zmm2, zmm12)
            var_358 = zmm5_2
            zmm7 = _mm_add_ps(zmm7, zmm0)
            uint128_t var_368 = zmm4_2
            zmm3.d = var_4d0_1.d
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = zmm15.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = arg_20.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_348 = zmm3
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = rax_61[1]
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm10 = _mm_mul_ps(zmm10, zmm5_2)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            var_4e8.o = zmm7
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm10 = _mm_add_ps(zmm10, zmm0)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(zmm10, zmm1), zmm2)
            zmm2 = rax_61[2]
            zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm11 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = rax_61[3]
            zmm8 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm8 = _mm_mul_ps(zmm8, zmm5_2)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm8 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm8, zmm0), zmm1), zmm2)
            float var_168_1[0x4] = zmm8
            
            if (var_16d != 0)
                zmm2 = data_142d4cc00
                int64_t var_4c8_1 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                int32_t var_4c0_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6 = _mm_mul_ps(zmm6, zmm8)
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
                    zmm0 = zmm13
                    zmm1 = zmm13
                    zmm5_2 = zmm13
                else
                    zmm3.d = zmm1.d
                    zmm2 = 0x3f000000
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm5_2.d f* zmm2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm5_2[0]
                    zmm4_2.d = 0.5f f- zmm3.d
                    zmm0.d = zmm5_2.d f* zmm4_2.d
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    float var_4f8_4 = zmm5_2[0]
                    zmm1 = zmm5_2
                    zmm0.d = zmm5_2.d f* zmm6.d
                    zmm1[0] = zmm1[0] f* zmm7.d
                    zmm5_2[0] = zmm5_2[0] * zmm8[0]
                
                void* var_1f0
                int32_t* rdx_36 = var_1f0
                int32_t var_40c_1 = 0
                float var_418[0x4]
                var_418[0] = zmm0.d
                int64_t var_4c8_2 = 0
                zmm2 = _mm_shuffle_ps(var_418, var_418, 0xe1)
                zmm2[0] = zmm1[0]
                int32_t var_4c0_2 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm5_2[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_418 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_1fc
                var_1f0 = &rdx_36[sx.q(var_1fc)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
                zmm2 = 0x3f000000
                zmm8 = _mm_add_ps(zmm8, zmm1)
                zmm0.d = zmm8.d f* zmm8[0]
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                zmm4_2 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm4_2.d f* zmm4_2.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm3.d = zmm1[0]
                zmm6 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm6.d f* zmm6.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm1[0]
                zmm0.d = zmm6.d f* zmm2[0]
                zmm6.d = zmm6.d f+ zmm0.d
                zmm1 = zmm6
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm5_2[0] = 0.5f f- zmm3.d
                zmm0.d = zmm6.d f* zmm5_2[0]
                zmm6.d = zmm6.d f+ zmm0.d
                int32_t var_4f8_5 = zmm6.d
                zmm1 = zmm6
                zmm0.d = zmm6.d f* zmm8[0]
                zmm1[0] = zmm1[0] f* zmm7.d
                *rdx_36 = zmm0.d
                void* var_1d8
                float* rdx_37 = var_1d8
                zmm6.d = zmm6.d f* zmm4_2.d
                int32_t var_1e4
                var_1d8 = &rdx_37[sx.q(var_1e4)]
                *rdx_37 = zmm1[0]
                void* var_1c0
                int32_t* rdx_38 = var_1c0
                int32_t var_1cc
                var_1c0 = &rdx_38[sx.q(var_1cc)]
                *rdx_38 = zmm6.d
                rdi_7 = var_16c
                zmm7 = var_4e8.o
                zmm8 = var_168_1
            
            if (rdi_7 != 0)
                zmm2 = data_142d4cc20
                int64_t var_4c8_3 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                int32_t var_4c0_3 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6 = _mm_mul_ps(zmm6, zmm8)
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
                    zmm3.d = zmm1.d
                    zmm2 = 0x3f000000
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm5_2.d f* zmm2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm5_2[0]
                    zmm4_2.d = 0.5f f- zmm3.d
                    zmm0.d = zmm5_2.d f* zmm4_2.d
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    float var_4f8_6 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1a8
                float* rdx_39 = var_1a8
                int32_t var_3fc_1 = 0
                float var_408[0x4]
                var_408[0] = zmm6.d
                int64_t var_4c8_4 = 0
                zmm2 = _mm_shuffle_ps(var_408, var_408, 0xe1)
                zmm2[0] = zmm7.d
                int32_t var_4c0_4 = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_408 = zmm2
                zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(r14 + 0x100))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(r14 + 0xe0))
                zmm8 = _mm_add_ps(zmm8, zmm0)
                int32_t var_1b4
                var_1a8 = &rdx_39[sx.q(var_1b4)]
                zmm5_2 = 0x3f000000
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(r14 + 0xd0)))
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
                zmm3.d = zmm1[0]
                zmm4_2 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm4_2.d f* zmm4_2.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm1[0]
                zmm0.d = zmm4_2.d f* zmm2[0]
                zmm4_2.d = zmm4_2.d f+ zmm0.d
                zmm1 = zmm4_2
                zmm1[0] = zmm1[0] f* zmm4_2.d
                zmm3.d = zmm3.d f* zmm1[0]
                zmm5_2[0] = 0.5f f- zmm3.d
                zmm0.d = zmm4_2.d f* zmm5_2[0]
                zmm4_2.d = zmm4_2.d f+ zmm0.d
                zmm8[0] = zmm8[0] f* zmm4_2.d
                zmm7.d = zmm7.d f* zmm4_2.d
                *rdx_39 = zmm8[0]
                void* var_190
                int32_t* rdx_40 = var_190
                zmm6.d = zmm6.d f* zmm4_2.d
                int32_t var_4f8_7 = zmm4_2.d
                int32_t var_19c
                var_190 = &rdx_40[sx.q(var_19c)]
                *rdx_40 = zmm7.d
                void* var_178
                int32_t* rdx_41 = var_178
                int32_t var_184
                var_178 = &rdx_41[sx.q(var_184)]
                *rdx_41 = zmm6.d
        
        zmm12 = zx.o(var_468_1)
        cond:6_1 = var_4d8 + 1 s< *(arg2 + 0x40)
        zmm10 = var_308_1
        zmm2 = 0x3f800000
        rdi_1 += r8_2
        rsi_1 += r9_6
        result = result_1
        r9_6 = var_3a8_1
        r10_2 = var_3a0_1
        r11_5 = var_494
        var_4d8 += 1
        r8_2 = var_3b0_1
    while (cond:6_1)

return result
