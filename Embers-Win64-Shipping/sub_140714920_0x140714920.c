// 函数: sub_140714920
// 地址: 0x140714920
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
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t arg_10 = rax_6
rax_6.b = not.b(rax_6.b)
void* rdx_4

if ((rax_6.b & 1) == 0)
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
void* var_4f0 = rdx_4
uint8_t r14_1 = (rax_9 u>> 0xf).b
*(arg2 + 0x10) = &rax[3]
int32_t i_2 = rax_9 & 0x7fff
void* rdx_9

if ((not.b(r14_1) & 1) == 0)
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
void* var_4f8 = rdx_9
uint8_t rsi_1 = (rax_13 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i_3 = rax_13 & 0x7fff
void* rdx_14

if ((not.b(rsi_1) & 1) == 0)
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
void* var_500 = rdx_14
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

void* var_508 = rdx_19
uint32_t var_5c8 = 0xffffffff
uint128_t* var_5c0 = nullptr
int32_t var_5b8 = 0
sub_140767bd0(&var_5c8, arg2)
void var_2b8
sub_140742680(&var_2b8, arg2)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

void* rax_22 = *(rdi + 0x58)
void* r13 = nullptr

if (rax_22 != 0)
    r13 = *(**(rax_22 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_25 = sub_140d3c6e0(rdi)
        
        if (rax_25 != 0)
            void* rax_26 = sub_142591550()
            void* rcx_11 = *(rax_25 + 0x10)
            int64_t rdx_24 = sx.q(*(rax_26 + 0x38))
            
            if (rdx_24.d s<= *(rcx_11 + 0x38)
                    && *(*(rcx_11 + 0x30) + (rdx_24 << 3)) == rax_26 + 0x30
                    && *(rax_25 + 0x430) != 0)
                sub_141f66050(rax_25, rdi[0x1a])

int64_t* rcx_14

if (rax_22 == 0 || r13 == 0)
    rcx_14 = nullptr
else
    rcx_14 = *(r13 + 0x18)

void* rax_28 = *(rdi + 0x70)
float rax_29 = rdi[0x1a]
int32_t rax_31 = (*(*rcx_14 + 0x58))(rcx_14)
uint128_t zmm15 = 0x3f800000
int32_t var_544 = 0
uint128_t zmm0
zmm0.d = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_31)
int32_t var_514 = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_518 = result.d

if (*(arg2 + 0x40) s> 0)
    uint64_t r12_2 = zx.q(data_14401b1a0)
    uint128_t* r8_1 = var_5c0
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    int64_t rbx_3 = sx.q(var_5b8) << 2
    uint64_t rdx_28 = zx.q(rbx_1) << 2
    uint64_t r11_5 = zx.q(arg_10.b) << 2
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    float zmm13[0x4] = zx.o(0)
    uint64_t r9_5 = zx.q(rsi_1) << 2
    uint64_t r10_2 = zx.q(r14_1) << 2
    int64_t rax_36 = sx.q(rax_29) * 0x38
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    uint64_t var_340_1 = rdx_28
    uint64_t var_348_1 = r9_5
    uint64_t var_350_1 = r10_2
    uint64_t var_358_1 = r11_5
    int64_t var_378_1 = rbx_3
    int32_t var_3dc_1 = 0x3f800000
    bool cond:3_1
    
    do
        uint128_t* rcx_16 = var_508
        int32_t* rdx_29 = var_4f0
        var_508 = rcx_16 + rdx_28
        float (* rcx_18)[0x4] = var_500
        int32_t var_2d0_1 = (*rcx_16).d
        var_500 = rcx_18 + r9_5
        uint128_t* rcx_20 = var_4f8
        var_4f8 = rcx_20 + r10_2
        zmm0 = _mm_unpacklo_ps(*rcx_20, (*rcx_18)[0].q)
        var_4f0 = rdx_29 + r11_5
        uint64_t rdx_31 = zx.q(*rdx_29)
        void* rcx_23 = rbx_3 + r8_1
        uint64_t var_494_1 = zmm0.q
        int32_t var_598_1 = (*r8_1).d
        
        if (rdx_31.d s< 0 || rdx_31.d s> var_518)
            int32_t var_2c4_1 = 0
            uint64_t var_334_1 = (_mm_unpacklo_ps(zmm15, zmm13[0].q)).q
            int32_t var_32c_1 = 0
            rdx_31 = zx.q(0.o.d)
        
        uint32_t rbx_4 = (rdx_31 * 3).d
        int32_t rax_42 = (*(*rcx_14 + 0x68))(rcx_14, zx.q(rbx_4))
        int64_t r8_2 = *rcx_14
        uint64_t rsi_2 = zx.q(rax_42)
        int64_t r14_3 = sx.q((*(r8_2 + 0x68))(rcx_14, zx.q(rbx_4 + 1), r8_2))
        int64_t r8_3 = *rcx_14
        zmm15 = var_2d0_1
        int64_t r9_6 = r14_3 * 3
        int64_t r8_4 = sx.q((*(r8_3 + 0x68))(rcx_14, zx.q(rbx_4 + 2), r8_3))
        zmm7 = zmm15
        int32_t var_510_1 = r8_4.d
        int64_t r8_5 = r8_4 * 3
        int64_t r11_6 = sx.q(*(rax_28 + 0x34))
        int64_t rbx_5 = *(rax_28 + 0x80)
        int64_t rdx_36 = *((r11_6 << 4) + rbx_5 + rax_36 + 8)
        zmm11 = zx.o(*(rdx_36 + (r9_6 << 2)))
        zmm10 = zx.o(*(rdx_36 + (r8_5 << 2)))
        int64_t r10_3 = sx.q(rsi_2.d) * 3
        int32_t rax_46 = *(rdx_36 + (r10_3 << 2) + 8)
        zmm12 = zx.o(*(rdx_36 + (r10_3 << 2)))
        int32_t rax_47 = *(rdx_36 + (r9_6 << 2) + 8)
        int32_t rax_48 = *(rdx_36 + (r8_5 << 2) + 8)
        int64_t rcx_31 = *(((r11_6 ^ 1) << 4) + rbx_5 + rax_36 + 8)
        zmm0 = zx.o(*(rcx_31 + (r8_5 << 2)))
        int32_t rax_50 = *(rcx_31 + (r10_3 << 2) + 8)
        float zmm2[0x4] = zx.o(*(rcx_31 + (r9_6 << 2)))
        zmm6 = zx.o(*(rcx_31 + (r10_3 << 2)))
        uint128_t zmm4_1 = zmm2
        int32_t rax_51 = *(rcx_31 + (r9_6 << 2) + 8)
        result = zx.q(*(rcx_31 + (r8_5 << 2) + 8))
        uint32_t var_454_1 = zmm0.d
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float zmm1[0x4] = result.d
        float var_5a0_1 = zmm1[0]
        zmm9.d = zmm15.d f* zmm1[0]
        zmm1 = zmm0
        zmm0 = var_454_1
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        int64_t var_418_1 = zmm1.q
        zmm7[0] = zmm7[0] * zmm1[0]
        zmm1 = rax_51
        float var_5a8_1 = zmm1[0]
        int32_t var_5a4_1 = zmm0.d
        zmm8.d = zmm15.d f* zmm0.d
        zmm0 = var_494_1:4.d
        int32_t arg_20 = zmm0.d
        uint128_t zmm3
        zmm3.d = zmm0.d f* zmm1[0]
        zmm1 = zmm0
        zmm1[0] = zmm1[0] f* zmm4_1.d
        uint64_t var_408_1 = zmm4_1.q
        int32_t var_448_1 = zmm2.d
        zmm2 = zmm0
        zmm0 = var_448_1
        zmm14 = var_494_1.d
        zmm2[0] = zmm2[0] f* zmm0.d
        int64_t var_528_1 = 0
        uint128_t zmm5_1
        zmm5_1.d = zmm14.d f* rax_50
        int32_t var_520_1 = 0
        int32_t var_59c_1 = zmm0.d
        zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm5_1.d = zmm5_1.d f+ zmm3.d
        zmm4_1.d = zmm14.d f* zmm0.d
        uint64_t var_4e0_1 = zmm0.q
        zmm4_1.d = zmm4_1.d f+ zmm1[0]
        uint32_t var_550_1 = zmm6.d
        zmm0.d = zmm14.d f* var_550_1
        zmm5_1.d = zmm5_1.d f+ zmm9.d
        uint32_t var_540_1 = zmm12.d
        uint32_t var_43c_1 = zmm11.d
        zmm2[0] = zmm2[0] f+ zmm0.d
        zmm4_1.d = zmm4_1.d f+ zmm7[0]
        zmm7 = zmm10
        zmm10 = zmm10.d
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        int32_t var_5d0_1 = zmm10.d
        zmm8.d = zmm8.d f+ zmm2[0]
        int64_t var_560_1 = zmm7.q
        zmm3.d = zmm8.d
        zmm8 = zmm12
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm12 = zmm11
        zmm11 = rax_48
        zmm3.d = zmm4_1.d
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3.d = zmm5_1.d
        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        zmm5_1 = var_43c_1
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        uint128_t var_3e8 = zmm3
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(rdi + 0x160))
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(rdi + 0x150))
        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(rdi + 0x180))
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        zmm1 = _mm_add_ps(zmm1, zmm0)
        zmm3 = __mulps_xmmps_memps(zmm3, *(rdi + 0x170))
        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        arg_10 = zmm5_1.d
        int32_t var_5d4_1 = zmm11.d
        uint64_t var_558_1 = zmm8.q
        uint64_t var_368_1 = zmm12.q
        zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm2), zmm1)
        zmm1 = rax_47
        float arg_18 = zmm1[0]
        var_528_1.o = zmm3
        char var_150
        char var_14f
        
        if (var_150 != 0 || var_14f != 0)
            zmm6 = arg_20
            zmm2 = zmm14
            void* var_2a8
            int32_t* rdx_37 = var_2a8
            zmm9 = rax_46
            zmm0.d = zmm6.d f* zmm1[0]
            zmm1 = zmm6
            int32_t var_3cc_1 = 0x3f800000
            zmm3.d = zmm15.d f* zmm11.d
            var_5c8.q = 0
            zmm1[0] = zmm1[0] f* zmm12.d
            var_5c0.d = 0
            zmm6.d = zmm6.d f* zmm5_1.d
            zmm5_1 = zmm14
            zmm14.d = zmm14.d f* var_540_1
            zmm2[0] = zmm2[0] f* zmm8.d
            zmm5_1.d = zmm5_1.d f* zmm9.d
            zmm14.d = zmm14.d f+ zmm6.d
            zmm6 = var_598_1
            zmm2[0] = zmm2[0] + zmm1[0]
            zmm4_1.d = zmm15.d f* zmm7[0]
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm15.d = zmm15.d f* zmm10.d
            zmm2[0] = zmm2[0] f+ zmm4_1.d
            zmm4_1 = var_528_1:4.d
            zmm14.d = zmm14.d f+ zmm15.d
            zmm5_1.d = zmm5_1.d f+ zmm3.d
            zmm3.d = zmm14.d
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = zmm2[0]
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = zmm5_1.d
            zmm5_1 = var_528_1.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_3d8 = zmm3
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(rdi + 0xe0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(rdi + 0xd0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(rdi + 0x100))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            int32_t var_2b4
            var_2a8 = &rdx_37[sx.q(var_2b4)]
            zmm3 = _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(rdi + 0xf0)), 
                zmm2)
            zmm2 = var_520_1
            zmm3 = _mm_add_ps(zmm3, zmm1)
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm0.d = zmm0.d f- zmm2[0]
            zmm3.d = zmm3.d f- zmm5_1.d
            zmm1[0] = zmm1[0] f- zmm4_1.d
            zmm0.d = zmm0.d f* zmm6.d
            zmm3.d = zmm3.d f* zmm6.d
            zmm1[0] = zmm1[0] f* zmm6.d
            zmm0.d = zmm0.d f+ zmm2[0]
            zmm3.d = zmm3.d f+ zmm5_1.d
            zmm1[0] = zmm1[0] f+ zmm4_1.d
            *rdx_37 = zmm3.d
            void* var_290
            float* rdx_38 = var_290
            int32_t var_29c
            var_290 = &rdx_38[sx.q(var_29c)]
            *rdx_38 = zmm1[0]
            void* var_278
            int32_t* rdx_39 = var_278
            int32_t result_1
            result = sx.q(result_1)
            var_278 = &rdx_39[result]
            *rdx_39 = zmm0.d
            
            if (var_14f != 0)
                void* var_260
                int32_t* rdx_40 = var_260
                zmm0.d = zmm0.d f- zmm2[0]
                zmm3.d = zmm3.d f- zmm5_1.d
                zmm2 = var_514
                zmm1[0] = zmm1[0] f- zmm4_1.d
                zmm0.d = zmm0.d f* zmm2[0]
                int32_t var_26c
                var_260 = &rdx_40[sx.q(var_26c)]
                zmm3.d = zmm3.d f* zmm2[0]
                zmm1[0] = zmm1[0] * zmm2[0]
                *rdx_40 = zmm3.d
                void* var_248
                float* rdx_41 = var_248
                int32_t var_254
                var_248 = &rdx_41[sx.q(var_254)]
                *rdx_41 = zmm1[0]
                void* var_230
                int32_t* rdx_42 = var_230
                int32_t result_2
                result = sx.q(result_2)
                var_230 = &rdx_42[result]
                *rdx_42 = zmm0.d
            
            zmm1 = arg_18
            zmm5_1 = arg_10
        else
            zmm9 = rax_46
        
        char var_14e
        
        if (var_14e == 0)
            zmm15 = 0x3f800000
        else
            zmm15 = 0x3f800000
            zmm3.d = zmm8.d f- zmm7[0]
            zmm8.d = var_540_1.d f- zmm10.d
            zmm2 = zmm1
            zmm6 = zmm12
            zmm2[0] = zmm2[0] f- zmm11.d
            zmm12 = data_143dbb1f8
            zmm6.d = zmm6.d f- zmm7[0]
            zmm1 = zmm5_1
            zmm4_1.d = zmm9.d f- zmm11.d
            zmm11 = data_143dbb1fc
            zmm1[0] = zmm1[0] f- zmm10.d
            zmm10 = data_143dbb200
            zmm0 = zmm8
            zmm8.d = zmm8.d f* zmm2[0]
            zmm0.d = zmm0.d f* zmm6.d
            zmm2[0] = zmm2[0] f* zmm3.d
            zmm9.d = zmm1.d f* zmm3.d
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm9.d = zmm9.d f- zmm0.d
            zmm6.d = zmm6.d f* zmm4_1.d
            zmm8.d = zmm8.d f- zmm1[0]
            zmm6.d = zmm6.d f- zmm2[0]
            zmm1 = zmm9
            zmm1[0] = zmm1[0] f* zmm9.d
            zmm0.d = zmm8.d f* zmm8.d
            zmm3.d = zmm6.d f* zmm6.d
            zmm3.d = zmm3.d f+ zmm0.d
            zmm3.d = zmm3.d f+ zmm1[0]
            int32_t var_458_1
            
            if (not(zmm3.d f!= 1f))
                var_458_1 = zmm9.d
            else if (zmm3.d f>= 9.99999994e-09f)
                zmm1 = 0x3f000000
                zmm3.d = zmm3.d
                zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm2 = zmm3
                zmm2[0] = zmm2[0] f* zmm0.d
                zmm1[0] = 0.5f - zmm2[0]
                zmm0.d = zmm5_1.d f* zmm1[0]
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm0.d
                zmm4_1.d = 0.5f f- zmm3.d
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                arg_20 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm9.d
                zmm1[0] = zmm1[0] f* zmm8.d
                var_458_1 = zmm0.d
                zmm9 = zmm0
                zmm6.d = zmm6.d f* zmm5_1.d
                zmm8 = zmm1
            else
                var_458_1 = zmm10.d
                zmm6 = zmm12
                zmm8 = zmm11
                zmm9 = zmm10
            
            uint64_t var_570 = (_mm_unpacklo_ps(zmm6, zmm8.q)).q
            int32_t var_568_1 = var_458_1
            int32_t var_3bc_1 = 0
            float var_3c8[0x4]
            var_3c8[0] = zmm6.d
            var_5c8.q = 0
            zmm7 = _mm_shuffle_ps(var_3c8, var_3c8, 0xe1)
            zmm7[0] = zmm8.d
            var_5c0.d = 0
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc6)
            zmm7[0] = zmm9.d
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            var_3c8 = zmm7
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0x55), *(rdi + 0xe0))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xff), *(rdi + 0x100))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0), *(rdi + 0xd0))
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), *(rdi + 0xf0))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm2), zmm1)
            zmm1 = 0x3f000000
            zmm0.d = zmm7.d f* zmm7[0]
            zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm2 = zmm6
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm2[0] = zmm2[0] f* zmm6.d
            zmm2[0] = zmm2[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm2[0] = zmm2[0] f+ zmm0.d
            zmm3.d = zmm2.d
            zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm2 = zmm3
            zmm2[0] = zmm2[0] f* zmm0.d
            zmm1[0] = 0.5f - zmm2[0]
            zmm2 = var_5a8_1
            zmm0.d = zmm4_1.d f* zmm1[0]
            zmm1 = 0x3f000000
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm3.d = zmm3.d f* zmm0.d
            zmm1[0] = 0.5f f- zmm3.d
            zmm0.d = zmm4_1.d f* zmm1[0]
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm0 = zx.o(var_418_1)
            zmm3.d = var_4e0_1.d f- zmm0.d
            zmm6.d = zmm6.d f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            zmm7[0] = zmm7[0] f* zmm4_1.d
            var_570:4.d = zmm6.d
            zmm6.d = var_550_1.d f- var_5a4_1
            arg_20 = zmm4_1.d
            zmm4_1.d = rax_50.d f- var_5a0_1
            var_570.d = zmm7[0]
            int32_t var_568_2 = zmm5_1.d
            zmm1 = var_59c_1
            zmm1[0] = zmm1[0] f- var_5a4_1
            zmm2[0] = zmm2[0] - var_5a0_1
            zmm5_1.d = var_408_1.d.d f- zmm0.d
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm9.d = zmm1.d f* zmm3.d
            zmm0.d = zmm6.d f* zmm5_1.d
            zmm6.d = zmm6.d f* zmm2[0]
            zmm2[0] = zmm2[0] f* zmm3.d
            zmm9.d = zmm9.d f- zmm0.d
            zmm6.d = zmm6.d f- zmm1[0]
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            zmm1 = zmm9
            zmm5_1.d = zmm5_1.d f- zmm2[0]
            zmm1[0] = zmm1[0] f* zmm9.d
            zmm3.d = zmm6.d f* zmm6.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm3.d = zmm3.d f+ zmm0.d
            zmm3.d = zmm3.d f+ zmm1[0]
            
            if (not(zmm3.d f== 1f))
                if (zmm3.d f>= 9.99999994e-09f)
                    zmm1 = 0x3f000000
                    zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm4_1.d f* zmm4_1.d
                    zmm2 = zmm3
                    zmm2[0] = zmm2[0] f* zmm0.d
                    zmm1[0] = 0.5f - zmm2[0]
                    zmm0.d = zmm4_1.d f* zmm1[0]
                    zmm1 = 0x3f000000
                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                    zmm0.d = zmm4_1.d f* zmm4_1.d
                    zmm3.d = zmm3.d f* zmm0.d
                    zmm1[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm4_1.d f* zmm1[0]
                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                    arg_20 = zmm4_1.d
                    zmm1 = zmm4_1
                    zmm0.d = zmm4_1.d f* zmm9.d
                    zmm1[0] = zmm1[0] f* zmm6.d
                    zmm9 = zmm0
                    zmm5_1.d = zmm5_1.d f* zmm4_1.d
                    zmm6 = zmm1
                else
                    zmm5_1 = zmm12
                    zmm6 = zmm11
                    zmm9 = zmm10
            
            int32_t var_3ac_1 = 0
            float var_3b8[0x4]
            var_3b8[0] = zmm5_1.d
            int32_t var_5e8_1 = 0x3f800000
            zmm7 = _mm_shuffle_ps(var_3b8, var_3b8, 0xe1)
            zmm7[0] = zmm6.d
            var_5c8.q = 0
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc6)
            zmm7[0] = zmm9.d
            var_5c0.d = 0
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            var_3b8 = zmm7
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0x55), *(rdi + 0x160))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0), *(rdi + 0x150))
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xff), *(rdi + 0x180))
            zmm1 = _mm_add_ps(zmm1, zmm0)
            zmm7 = _mm_add_ps(
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), *(rdi + 0x170)), 
                    zmm2), 
                zmm1)
            zmm0.d = zmm7.d f* zmm7[0]
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm1 = zmm6
            zmm1[0] = zmm1[0] f* zmm6.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1[0] = zmm1[0] f+ zmm0.d
            zmm0 = zmm1
            zmm1 = 0x3f000000
            zmm3.d = zmm0.d
            zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm2 = zmm3
            zmm2[0] = zmm2[0] f* zmm0.d
            zmm1[0] = 0.5f - zmm2[0]
            zmm0.d = zmm4_1.d f* zmm1[0]
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm3.d = zmm3.d f* zmm0.d
            zmm8.d = 0.5f f- zmm3.d
            zmm0.d = zmm4_1.d f* zmm8.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            zmm6.d = zmm6.d f* zmm4_1.d
            zmm7[0] = zmm7[0] f* zmm4_1.d
            int32_t var_47c_1 = zmm6.d
            int32_t var_478_1 = zmm5_1.d
            float var_480 = zmm7[0]
            arg_20 = zmm4_1.d
            int32_t var_148
            int32_t* rax_57
            rax_57, r9_6, zmm13 = sub_140ae34d0(&var_148, &var_480, &var_570, r9_6.d)
            void* var_218
            int32_t* rdx_44 = var_218
            var_570 = *rax_57
            zmm1 = var_570:4.d
            zmm2 = rax_57[2]
            zmm7 = zx.o(var_560_1)
            zmm8 = zx.o(var_558_1)
            zmm12 = zx.o(var_368_1)
            zmm10 = var_5d0_1
            zmm11 = var_5d4_1
            int32_t var_224
            var_218 = &rdx_44[sx.q(var_224)]
            *rdx_44 = var_570.d.d
            void* var_200
            float* rdx_45 = var_200
            int32_t var_20c
            var_200 = &rdx_45[sx.q(var_20c)]
            *rdx_45 = zmm1[0]
            void* var_1e8
            float* rdx_46 = var_1e8
            int32_t result_3
            result = sx.q(result_3)
            var_1e8 = &rdx_46[result]
            *rdx_46 = zmm2[0]
        
        char var_14d
        char var_14c
        
        if (var_14d != 0 || var_14c != 0)
            int16_t* r14_6 = rsi_2 * (zx.q(*(r13 + 0xa8)) << 2) + *(r13 + 0x98)
            uint32_t rbx_6 = zx.d(r14_6[1])
            int32_t rsi_5 = (rbx_6 & 0xffff8000) << 0x10
            TEB* gsbase
            
            if ((0x7c00 & rbx_6.w) == 0)
                int32_t rbx_7 = rbx_6 & 0x3ff
                
                if (rbx_7 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_7))
                    zmm0, r9_6 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_560_1.d = (rbx_7 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_5
                else
                    var_560_1.d = rsi_5
            else if ((rbx_6.w & 0x7c00) != 0x7c00)
                var_560_1.d =
                    ((rbx_6 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_6 & 0x3ff) << 0xd | rsi_5
            else
                var_560_1.d = rsi_5 | 0x477fe000
            
            uint32_t rbx_14 = zx.d(*r14_6)
            int32_t rsi_9 = (rbx_14 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rbx_14.w) == 0)
                int32_t rbx_15 = rbx_14 & 0x3ff
                
                if (rbx_15 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_15))
                    zmm0, r9_6 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_558_1.d = (rbx_15 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_9
                else
                    var_558_1.d = rsi_9
            else if ((rbx_14.w & 0x7c00) != 0x7c00)
                var_558_1.d =
                    ((rbx_14 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_14 & 0x3ff) << 0xd | rsi_9
            else
                var_558_1.d = rsi_9 | 0x477fe000
            
            int16_t* r14_9 = zx.q(r14_3.d) * (zx.q(*(r13 + 0xa8)) << 2) + *(r13 + 0x98)
            uint32_t rbx_22 = zx.d(r14_9[1])
            int32_t rsi_13 = (rbx_22 & 0xffff8000) << 0x10
            int32_t var_5d0_2
            
            if ((0x7c00 & rbx_22.w) == 0)
                int32_t rbx_23 = rbx_22 & 0x3ff
                
                if (rbx_23 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_23))
                    zmm0, r9_6 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_5d0_2 = (rbx_23 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_13
                else
                    var_5d0_2 = rsi_13
            else if ((rbx_22.w & 0x7c00) != 0x7c00)
                var_5d0_2 =
                    ((rbx_22 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_22 & 0x3ff) << 0xd | rsi_13
            else
                var_5d0_2 = rsi_13 | 0x477fe000
            
            uint32_t rbx_30 = zx.d(*r14_9)
            int32_t rsi_17 = (rbx_30 & 0xffff8000) << 0x10
            int32_t var_5d4_2
            
            if ((0x7c00 & rbx_30.w) == 0)
                int32_t rbx_31 = rbx_30 & 0x3ff
                
                if (rbx_31 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_31))
                    zmm0, r9_6 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_5d4_2 = (rbx_31 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_17
                else
                    var_5d4_2 = rsi_17
            else if ((rbx_30.w & 0x7c00) != 0x7c00)
                var_5d4_2 =
                    ((rbx_30 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_30 & 0x3ff) << 0xd | rsi_17
            else
                var_5d4_2 = rsi_17 | 0x477fe000
            
            int16_t* r14_12 = zx.q(var_510_1) * (zx.q(*(r13 + 0xa8)) << 2) + *(r13 + 0x98)
            uint32_t rbx_38 = zx.d(r14_12[1])
            int32_t rsi_21 = (rbx_38 & 0xffff8000) << 0x10
            int32_t var_5d8_2
            
            if ((0x7c00 & rbx_38.w) == 0)
                int32_t rbx_39 = rbx_38 & 0x3ff
                
                if (rbx_39 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_39))
                    zmm0, r9_6 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_5d8_2 = (rbx_39 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_21
                else
                    var_5d8_2 = rsi_21
            else if ((rbx_38.w & 0x7c00) != 0x7c00)
                var_5d8_2 =
                    ((rbx_38 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_38 & 0x3ff) << 0xd | rsi_21
            else
                var_5d8_2 = rsi_21 | 0x477fe000
            
            uint32_t rbx_46 = zx.d(*r14_12)
            int32_t rsi_25 = (rbx_46 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rbx_46.w) == 0)
                int32_t rbx_47 = rbx_46 & 0x3ff
                
                if (rbx_47 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12_2 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_47))
                    zmm0, r9_6 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    arg_20 = (rbx_47 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_25
                else
                    arg_20 = rsi_25
            else if ((rbx_46.w & 0x7c00) != 0x7c00)
                arg_20 = ((rbx_46 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_46 & 0x3ff) << 0xd | rsi_25
            else
                arg_20 = rsi_25 | 0x477fe000
            
            zmm1 = arg_10
            zmm1[0] = zmm1[0] f- var_540_1
            zmm4_1 = var_560_1.d
            zmm7[0] = zmm7[0] f- zmm8.d
            zmm5_1 = var_558_1.d
            zmm12.d = zmm12.d f- zmm8.d
            zmm14 = rax_46
            zmm0.d = arg_18.d f- zmm14.d
            zmm2 = var_5d8_2
            zmm3.d = arg_20.d f- zmm5_1.d
            zmm6 = data_142d3f660
            zmm2[0] = zmm2[0] f- zmm4_1.d
            zmm10.d = zmm10.d f- var_540_1
            arg_10 = zmm1[0]
            zmm11.d = zmm11.d f- zmm14.d
            zmm1 = var_5d4_2
            arg_18 = zmm0.d
            zmm1[0] = zmm1[0] f- zmm5_1.d
            zmm0.d = var_5d0_2.d f- zmm4_1.d
            int32_t var_308_1 = zmm3.d
            float var_304_1 = zmm2[0]
            int32_t var_2f8_1 = zmm5_1.d
            float var_318 = zmm1[0]
            int32_t var_2f4_1 = zmm4_1.d
            int32_t var_314_1 = zmm0.d
            int32_t var_4cc_1 = 0
            int32_t var_4bc_1 = 0
            int32_t var_4ac_1 = 0
            int64_t var_310_1 = 0
            int64_t var_300_1 = 0
            int64_t var_2f0_1 = 0x3f800000
            uint128_t var_2e8_1 = zmm6
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_163)[0x4]
            float zmm6_1[0x4]
            float zmm7_1
            int32_t zmm8_1
            float zmm10_1[0x4]
            float zmm11_1[0x4]
            float zmm12_1[0x4]
            float zmm14_1
            rax_163, zmm6_1, zmm7_1, zmm8_1, zmm10_1, zmm11_1, zmm12_1, zmm14_1 =
                sub_140631b10(&var_318, &var_118)
            float var_4c8[0x4]
            var_4c8[0] = zmm10_1[0]
            uint32_t zmm2_1[0x4] = *rax_163
            float var_4d8[0x4]
            var_4d8[0] = arg_10[0]
            float zmm9_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float zmm5_2[0x4] = _mm_shuffle_ps(var_4c8, var_4c8, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_4d8, var_4d8, 0xe1)
            zmm5_2[0] = zmm7_1
            uint128_t zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm4_2[0] = zmm12_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm11_1[0]
            zmm4_2[0] = arg_18[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm9_1 = _mm_mul_ps(zmm9_1, zmm5_2)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm9_1 = _mm_add_ps(zmm9_1, zmm0_1)
            float var_4b8[0x4]
            var_4b8[0] = var_540_1.d
            float zmm3_1[0x4] = _mm_shuffle_ps(var_4b8, var_4b8, 0xe1)
            zmm3_1[0] = zmm8_1
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1[0] = zmm14_1
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            float var_4b8_1[0x4] = zmm3_1
            _mm_add_ps(_mm_add_ps(zmm9_1, _mm_mul_ps(zmm1_1, zmm3_1)), zmm2_1)
            zmm2_1 = rax_163[1]
            zmm10_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            int32_t var_4cc_2 = 0
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            int32_t var_4bc_2 = 0
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            int32_t var_4ac_2 = 0
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10_1, zmm5_2), zmm0_1), zmm1_1), zmm2_1)
            zmm2_1 = rax_163[2]
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm11_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11_1, zmm5_2), zmm0_1), zmm1_1), zmm2_1)
            zmm2_1 = rax_163[3]
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm12_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm12_1 = _mm_mul_ps(zmm12_1, zmm5_2)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm12_1 = _mm_add_ps(zmm12_1, zmm0_1)
            zmm0_1.d = var_5a4_1.d f- var_550_1
            zmm12_1 = _mm_add_ps(zmm12_1, zmm1_1)
            zmm1_1 = var_5a0_1
            zmm1_1[0] = zmm1_1[0] f- rax_50
            int32_t var_5a4_2 = zmm0_1.d
            zmm0_1.d = var_5a8_1.d f- rax_50
            float var_5a0_2 = zmm1_1[0]
            _mm_add_ps(zmm12_1, zmm2_1)
            zmm1_1 = var_59c_1
            zmm1_1[0] = zmm1_1[0] f- var_550_1
            int32_t var_5a8_2 = zmm0_1.d
            float var_59c_2 = zmm1_1[0]
            result, zmm6, zmm7, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_318, &var_118)
            zmm5_2[0] = var_5a4_2.d
            zmm2 = *result
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_3[0] = zmm7[0]
            zmm8 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_5a0_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_4c8 = zmm5_3
            zmm4_2[0] = var_59c_2[0]
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = zmm14.d
            zmm8 = _mm_mul_ps(zmm8, zmm5_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = var_5a8_2[0]
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_4d8 = zmm4_3
            zmm8 = _mm_add_ps(zmm8, _mm_mul_ps(zmm0, zmm4_3))
            zmm3.d = var_550_1.d
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = var_4e0_1.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = rax_50.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_4b8 = zmm3
            zmm8 = _mm_add_ps(_mm_add_ps(zmm8, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x10)
            zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm7 = _mm_mul_ps(zmm7, zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm6)
            var_418_1.o = zmm8
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
            zmm2 = *(result + 0x20)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_408_1.o = zmm7
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm6)
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
            zmm2 = *(result + 0x30)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_368_1.o = zmm7
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm6)
            zmm14 = 0x322bcc77
            var_528_1.o = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
            
            if (var_14d != 0)
                zmm2 = data_142d4cc00
                var_5c8.q = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                var_5c0.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6 = _mm_mul_ps(zmm6, zmm12)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm4_3 = 0x3f000000
                    zmm2 = 0x3f000000
                    zmm3.d = zmm7.d
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm2[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3.d = zmm3.d f* zmm5_3[0]
                    zmm4_3[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm6.d = zmm6.d f* zmm5_3[0]
                    zmm7[0] = zmm7[0] * zmm5_3[0]
                    zmm8.d = zmm8.d f* zmm5_3[0]
                
                float var_58c_1 = zmm7[0]
                float var_590 = zmm6.d
                int32_t var_588_1 = zmm8.d
                int32_t var_39c_1 = 0
                float var_3a8[0x4]
                var_3a8[0] = zmm6.d
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(var_3a8, var_3a8, 0xe1)
                zmm2[0] = zmm7[0]
                var_5c0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm8.d
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3a8 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
                var_5c0.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0)))
                zmm2 = 0x3f000000
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm1 = zmm6
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm3.d = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2[0]
                zmm2 = data_142d4cc00
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3.d = zmm3.d f* zmm4_3[0]
                zmm0.d = 0.5f f- zmm3.d
                zmm4_3[0] = zmm4_3[0] f* zmm0.d
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_368_1.o)
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                zmm7[0] = zmm7[0] * zmm4_3[0]
                float var_588_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_528_1.o)
                zmm6.d = zmm6.d f* zmm4_3[0]
                var_590 = zmm7[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3[0]
                int32_t var_58c_2 = zmm6.d
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_408_1.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_418_1.o)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm1 = zmm6
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm5_3 = zmm13
                    zmm6 = zmm13
                    zmm7 = zmm13
                else
                    zmm3.d = zmm1.d
                    zmm2 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm4_3.d f* zmm4_3[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm2[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3.d = zmm3.d f* zmm4_3[0]
                    zmm0.d = 0.5f f- zmm3.d
                    zmm4_3[0] = zmm4_3[0] f* zmm0.d
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm6.d = zmm6.d f* zmm4_3[0]
                    zmm7[0] = zmm7[0] * zmm4_3[0]
                
                int32_t var_3ec_1 = 0
                float var_3f8[0x4]
                var_3f8[0] = zmm5_3[0]
                int32_t var_5e8_2 = zmm15.d
                zmm2 = _mm_shuffle_ps(var_3f8, var_3f8, 0xe1)
                zmm2[0] = zmm6.d
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm7[0]
                var_5c0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_3f8 = zmm2
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0x160))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0x170))
                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0x150))
                zmm3 = _mm_add_ps(zmm3, zmm0)
                zmm1 = _mm_add_ps(zmm1, zmm2)
                zmm2 = 0x3f000000
                zmm3 = _mm_add_ps(zmm3, zmm1)
                zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm0.d = zmm3.d f* zmm3.d
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                zmm3.d = zmm3.d f* zmm3.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm1[0] = zmm1[0] f+ zmm3.d
                zmm3.d = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3.d = zmm3.d f* zmm4_3[0]
                zmm8.d = 0.5f f- zmm3.d
                zmm0.d = zmm4_3.d f* zmm8.d
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                arg_10 = zmm4_3[0]
                int32_t var_13c
                int32_t* rax_164
                rax_164, r9_6, zmm9, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_13c, &var_590, &var_590, r9_6.d)
                void* var_1d0
                int32_t* rdx_56 = var_1d0
                var_590.q = *rax_164
                zmm2 = rax_164[2]
                int32_t var_1dc
                var_1d0 = &rdx_56[sx.q(var_1dc)]
                *rdx_56 = var_590.d
                void* var_1b8
                float* rdx_57 = var_1b8
                int32_t var_1c4
                var_1b8 = &rdx_57[sx.q(var_1c4)]
                *rdx_57 = var_58c_2[0]
                void* var_1a0
                float* rdx_58 = var_1a0
                int32_t result_4
                result = sx.q(result_4)
                var_1a0 = &rdx_58[result]
                *rdx_58 = zmm2[0]
            
            if (var_14c != 0)
                zmm2 = data_142d4cc20
                var_5c8.q = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                var_5c0.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6 = _mm_mul_ps(zmm6, zmm12)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] f<= zmm14.d)
                    zmm0 = zmm13
                    zmm1 = zmm13
                    zmm5_3 = zmm13
                else
                    zmm4_3 = 0x3f000000
                    zmm2 = 0x3f000000
                    zmm3.d = zmm7.d
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm2[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3.d = zmm3.d f* zmm5_3[0]
                    zmm4_3[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6.d
                    zmm1[0] = zmm1[0] * zmm7[0]
                    zmm5_3[0] = zmm5_3[0] f* zmm8.d
                
                float var_580 = zmm0.d
                float var_57c_1 = zmm1[0]
                float var_578_1 = zmm5_3[0]
                int32_t var_38c_1 = 0
                float var_398[0x4]
                var_398[0] = zmm0.d
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(var_398, var_398, 0xe1)
                zmm2[0] = zmm1[0]
                var_5c0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm5_3[0]
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_398 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
                var_5c0.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0)))
                zmm2 = 0x3f000000
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm1 = zmm6
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm3.d = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2[0]
                zmm2 = data_142d4cc20
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3.d = zmm3.d f* zmm4_3[0]
                zmm0.d = 0.5f f- zmm3.d
                zmm4_3[0] = zmm4_3[0] f* zmm0.d
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                arg_10 = zmm4_3[0]
                zmm0.d = zmm4_3.d f* zmm6.d
                zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                int32_t var_57c_2 = zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm7[0]
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm5_3 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_mul_ps(zmm0, zmm11)
                var_580 = zmm4_3[0]
                float var_578_2 = zmm4_3[0]
                zmm5_3 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm5_3, zmm12), zmm0), 
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm10), 
                        _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm1 = zmm6
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                
                if (zmm1[0] f<= zmm14.d)
                    zmm0 = zmm13
                    zmm1 = zmm13
                    zmm4_3 = zmm13
                else
                    zmm3.d = zmm1.d
                    zmm2 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm4_3.d f* zmm4_3[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm2[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3.d = zmm3.d f* zmm4_3[0]
                    zmm0.d = 0.5f f- zmm3.d
                    zmm4_3[0] = zmm4_3[0] f* zmm0.d
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm1[0] = zmm1[0] f* zmm6.d
                    zmm4_3[0] = zmm4_3[0] * zmm7[0]
                
                int32_t var_37c_1 = 0
                float var_388[0x4]
                var_388[0] = zmm0.d
                int32_t var_5e8_3 = zmm15.d
                zmm2 = _mm_shuffle_ps(var_388, var_388, 0xe1)
                zmm2[0] = zmm1[0]
                var_5c8.q = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2[0] = zmm4_3[0]
                var_5c0.d = 0
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                var_388 = zmm2
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x180))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0x160))
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1 = _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0x150)))
                zmm2 = 0x3f000000
                zmm7 = _mm_add_ps(zmm7, zmm1)
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm1 = zmm6
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm3.d = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm2[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3.d = zmm3.d f* zmm4_3[0]
                zmm8.d = 0.5f f- zmm3.d
                zmm0.d = zmm4_3.d f* zmm8.d
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm7[0] = zmm7[0] * zmm4_3[0]
                zmm6.d = zmm6.d f* zmm4_3[0]
                zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                float var_470 = zmm7[0]
                int32_t var_46c_1 = zmm6.d
                float var_468_1 = zmm5_3[0]
                arg_10 = zmm4_3[0]
                int32_t var_130[0x6]
                int32_t* rax_168
                rax_168, zmm13 = sub_140ae34d0(&var_130, &var_470, &var_580, r9_6.d)
                void* var_188
                int32_t* rdx_60 = var_188
                var_580.q = *rax_168
                zmm2 = rax_168[2]
                int32_t var_194
                var_188 = &rdx_60[sx.q(var_194)]
                *rdx_60 = var_580.d
                void* var_170
                float* rdx_61 = var_170
                int32_t var_17c
                var_170 = &rdx_61[sx.q(var_17c)]
                *rdx_61 = var_57c_2[0]
                void* var_158
                float* rdx_62 = var_158
                int32_t result_5
                result = sx.q(result_5)
                var_158 = &rdx_62[result]
                *rdx_62 = zmm2[0]
        
        rdx_28 = var_340_1
        cond:3_1 = var_544 + 1 s< *(arg2 + 0x40)
        r9_5 = var_348_1
        r10_2 = var_350_1
        r11_5 = var_358_1
        rbx_3 = var_378_1
        var_544 += 1
        r8_1 = rcx_23
    while (cond:3_1)

return result
