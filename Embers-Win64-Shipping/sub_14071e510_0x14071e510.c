// 函数: sub_14071e510
// 地址: 0x14071e510
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
int32_t* rbx = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t arg_18 = rax_6
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
void* var_480 = rdx_4
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_10 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
void* rdx_9

if ((rax_10.b & 1) == 0)
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
void* var_488 = rdx_9
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
uint8_t rdi_1 = (rcx_5 u>> 0xf).b
int32_t i_4 = rcx_5 & 0x7fff
void* var_490 = rdx_14
void* rdx_19

if ((not.b(rdi_1) & 1) == 0)
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

void* var_498 = rdx_19
uint32_t var_408 = 0xffffffff
float (* var_400)[0x4] = nullptr
int32_t var_3f8 = 0
sub_140767bd0(&var_408, arg2)
void var_2b8
sub_140742680(&var_2b8, arg2)

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

void* rax_22 = *(rbx + 0x58)
void* r15 = nullptr

if (rax_22 != 0)
    r15 = *(**(rax_22 + 0x58) + (sx.q(rbx[0x1a]) << 3))
    
    if (rbx[0x86].b != 0)
        void* rax_25 = sub_140d3c6e0(rbx)
        
        if (rax_25 != 0)
            void* rax_26 = sub_142591550()
            void* rcx_11 = *(rax_25 + 0x10)
            int64_t rdx_24 = sx.q(*(rax_26 + 0x38))
            
            if (rdx_24.d s<= *(rcx_11 + 0x38)
                    && *(*(rcx_11 + 0x30) + (rdx_24 << 3)) == rax_26 + 0x30
                    && *(rax_25 + 0x430) != 0)
                sub_141f66050(rax_25, rbx[0x1a])

int64_t* rcx_14

if (rax_22 == 0 || r15 == 0)
    rcx_14 = nullptr
else
    rcx_14 = *(r15 + 0x18)

void* rax_28 = *(rbx + 0x70)
int32_t rax_29 = rbx[0x1a]
int32_t rax_31 = (*(*rcx_14 + 0x58))(rcx_14)
float zmm9[0x4] = 0x3f800000
float zmm0[0x4] = 0x3f800000
int32_t var_518 = 0
zmm0[0] = 1f f/ rbx[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_31)
float var_4b4 = zmm0[0]
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_4b8 = result.d

if (*(arg2 + 0x40) s> 0)
    uint64_t r12_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    float (* r8_1)[0x4] = var_400
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4] = zx.o(0)
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t r10_2 = zx.q(arg_10.b) << 2
    uint64_t r11_5 = zx.q(arg_18.b) << 2
    int64_t rbx_2 = sx.q(var_3f8) << 2
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    uint64_t rdx_28 = zx.q(rdi_1) << 2
    uint64_t r9_5 = zx.q(rsi_1) << 2
    int64_t rcx_16 = sx.q(rax_29) * 0x38
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    uint64_t var_380_1 = rdx_28
    uint64_t var_388_1 = r9_5
    uint64_t var_368_1 = r10_2
    uint64_t var_398_1 = r11_5
    int64_t var_390_1 = rbx_2
    bool cond:1_1
    
    do
        int128_t* rcx_17 = var_498
        int32_t* rdx_29 = var_480
        var_498 = rcx_17 + rdx_28
        int128_t* rcx_19 = var_490
        float var_2bc_1 = (*rcx_17)[0]
        var_490 = rcx_19 + r9_5
        int128_t* rcx_21 = var_488
        var_488 = rcx_21 + r10_2
        zmm0 = _mm_unpacklo_ps(*rcx_21, (*rcx_19).q)
        var_480 = rdx_29 + r11_5
        uint64_t rdx_31 = zx.q(*rdx_29)
        void* rcx_24 = r8_1 + rbx_2
        int64_t var_434_1 = zmm0.q
        arg_18 = (*r8_1)[0]
        
        if (rdx_31.d s< 0 || rdx_31.d s> var_4b8)
            int32_t var_2e0_1 = 0
            int64_t var_354_1 = (_mm_unpacklo_ps(zmm9, zmm11[0].q)).q
            int32_t var_34c_1 = 0
            rdx_31 = zx.q(0.o[0])
        
        uint32_t rbx_3 = (rdx_31 * 3).d
        int32_t rax_41 = (*(*rcx_14 + 0x68))(rcx_14, zx.q(rbx_3))
        int64_t r8_2 = *rcx_14
        uint64_t rsi_2 = zx.q(rax_41)
        int32_t rax_42 = (*(r8_2 + 0x68))(rcx_14, zx.q(rbx_3 + 1), r8_2)
        int64_t r8_3 = *rcx_14
        zmm14 = var_2bc_1
        zmm15 = var_434_1:4.d
        int64_t r8_4 = sx.q((*(r8_3 + 0x68))(rcx_14, zx.q(rbx_3 + 2), r8_3))
        float zmm3[0x4] = zmm15
        int64_t r8_5 = r8_4 * 3
        int64_t r11_6 = sx.q(*(rax_28 + 0x34))
        int64_t rbx_4 = *(rax_28 + 0x80)
        int64_t rdx_35 = *((r11_6 << 4) + rbx_4 + rcx_16 + 8)
        zmm7 = zx.o(*(rdx_35 + (r8_5 << 2)))
        int64_t r10_3 = sx.q(rsi_2.d) * 3
        int64_t rcx_32 = *(((r11_6 ^ 1) << 4) + rbx_4 + rcx_16 + 8)
        int32_t rax_45 = *(rdx_35 + (r10_3 << 2) + 8)
        zmm9 = zx.o(*(rdx_35 + (r10_3 << 2)))
        zmm0 = zx.o(*(rcx_32 + (r8_5 << 2)))
        uint128_t zmm4_1 = zx.o(*(rcx_32 + (r10_3 << 2)))
        int32_t var_3e8_1 = zmm0.d
        int64_t r9_6 = sx.q(rax_42) * 3
        uint128_t zmm2 = zx.o(*(rcx_32 + (r9_6 << 2)))
        int32_t rax_47 = *(rdx_35 + (r9_6 << 2) + 8)
        zmm8 = zx.o(*(rdx_35 + (r9_6 << 2)))
        int32_t rax_48 = *(rdx_35 + (r8_5 << 2) + 8)
        int32_t rax_49 = *(rcx_32 + (r10_3 << 2) + 8)
        int32_t rax_50 = *(rcx_32 + (r9_6 << 2) + 8)
        result = zx.q(*(rcx_32 + (r8_5 << 2) + 8))
        uint128_t zmm1 = result.d
        int32_t var_560_1 = zmm1.d
        zmm14[0] = zmm14[0] f* zmm1.d
        zmm1 = zmm0
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        uint64_t var_3a8_1 = zmm1.q
        zmm14[0] = zmm14[0] f* zmm1.d
        zmm1 = var_3e8_1
        zmm14[0] = zmm14[0] f* zmm1.d
        int32_t var_564_1 = zmm1.d
        uint32_t var_3dc_1 = zmm2.d
        arg_10 = zmm14[0]
        zmm0 = rax_50
        float var_558_1 = zmm0[0]
        zmm3[0] = zmm3[0] * zmm0[0]
        zmm0 = zmm2
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        int32_t var_4c8_1 = zmm0.d
        zmm1.d = zmm15.d f* zmm0[0]
        zmm0 = var_3dc_1
        zmm10 = var_434_1.d
        zmm2.d = zmm15.d f* zmm0[0]
        float var_55c_1 = zmm0[0]
        zmm10[0] = zmm10[0] f* rax_49
        zmm0 = zmm4_1
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm10[0] = zmm10[0] * zmm0[0]
        int64_t var_428_1 = zmm0.q
        zmm10[0] = zmm10[0] + zmm3[0]
        zmm3 = rax_47
        uint32_t var_3d0_1 = zmm8.d
        zmm10[0] = zmm10[0] f+ zmm1.d
        zmm1 = rax_48
        uint32_t var_540_1 = zmm4_1.d
        zmm10[0] = zmm10[0] f* var_540_1
        zmm10[0] = zmm10[0] + zmm14[0]
        zmm6 = arg_10
        zmm10[0] = zmm10[0] + zmm14[0]
        zmm4_1 = var_3d0_1
        zmm2.d = zmm2.d f+ zmm10[0]
        int32_t var_534_1 = zmm9.d
        zmm0 = zmm9
        uint32_t var_3c4_1 = zmm7.d
        zmm9 = zmm8
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm8 = zmm7
        zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
        zmm7 = var_3c4_1
        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        zmm6[0] = zmm6[0] f+ zmm2.d
        int32_t arg_20
        arg_20.q = zmm8.q
        arg_10 = zmm3[0]
        int32_t var_568_1 = zmm4_1.d
        int32_t var_550_1 = zmm1.d
        int32_t var_554_1 = zmm7.d
        int64_t var_4a8_1 = zmm0.q
        int64_t var_4f8_1 = zmm9.q
        char var_150
        char var_14f
        
        if (var_150 != 0 || var_14f != 0)
            void* var_2a8
            float* rdx_36 = var_2a8
            zmm3 = zmm14
            zmm3[0] = zmm3[0] f* zmm8.d
            zmm2.d = zmm14.d f* zmm1.d
            zmm0 = zmm15
            zmm0[0] = zmm0[0] f* arg_10
            zmm1 = zmm15
            int32_t var_2b4
            var_2a8 = &rdx_36[sx.q(var_2b4)]
            zmm15.d = zmm15.d f* zmm4_1.d
            zmm10[0] = zmm10[0] f* var_534_1
            zmm4_1.d = zmm10.d f* rax_45
            zmm10[0] = zmm10[0] f+ zmm15.d
            zmm14[0] = zmm14[0] f* zmm7.d
            zmm4_1.d = zmm4_1.d f+ zmm0[0]
            zmm10[0] = zmm10[0] f* var_4a8_1.d
            zmm7 = var_554_1
            zmm10[0] = zmm10[0] + zmm14[0]
            zmm14 = arg_18
            zmm4_1.d = zmm4_1.d f+ zmm2.d
            zmm1.d = zmm1.d f* zmm9[0]
            zmm10[0] = zmm10[0] - zmm6[0]
            zmm10[0] = zmm10[0] f+ zmm1.d
            zmm1 = var_550_1
            zmm4_1.d = zmm4_1.d f- zmm10[0]
            zmm10[0] = zmm10[0] * zmm14[0]
            zmm10[0] = zmm10[0] + zmm3[0]
            zmm3 = arg_10
            zmm4_1.d = zmm4_1.d f* zmm14[0]
            zmm10[0] = zmm10[0] + zmm6[0]
            zmm10[0] = zmm10[0] - zmm10[0]
            zmm4_1.d = zmm4_1.d f+ zmm10[0]
            *rdx_36 = zmm10[0]
            void* var_290
            float* rdx_37 = var_290
            zmm10[0] = zmm10[0] * zmm14[0]
            int32_t var_29c
            var_290 = &rdx_37[sx.q(var_29c)]
            zmm10[0] = zmm10[0] + zmm10[0]
            *rdx_37 = zmm10[0]
            void* var_278
            int32_t* rdx_38 = var_278
            int32_t result_1
            result = sx.q(result_1)
            var_278 = &rdx_38[result]
            *rdx_38 = zmm4_1.d
            
            if (var_14f != 0)
                void* var_260
                float* rdx_39 = var_260
                zmm10[0] = zmm10[0] - zmm6[0]
                zmm10[0] = zmm10[0] - zmm10[0]
                zmm0 = var_4b4
                zmm4_1.d = zmm4_1.d f- zmm10[0]
                zmm10[0] = zmm10[0] * zmm0[0]
                int32_t var_26c
                var_260 = &rdx_39[sx.q(var_26c)]
                zmm10[0] = zmm10[0] * zmm0[0]
                *rdx_39 = zmm10[0]
                void* var_248
                float* rdx_40 = var_248
                zmm4_1.d = zmm4_1.d f* zmm0[0]
                int32_t var_254
                var_248 = &rdx_40[sx.q(var_254)]
                *rdx_40 = zmm10[0]
                void* var_230
                int32_t* rdx_41 = var_230
                int32_t result_2
                result = sx.q(result_2)
                var_230 = &rdx_41[result]
                *rdx_41 = zmm4_1.d
            
            zmm0 = zx.o(var_4a8_1)
        
        char var_14e
        float zmm5_1[0x4]
        
        if (var_14e == 0)
            zmm9 = 0x3f800000
        else
            zmm3[0] = zmm3[0] f- zmm1.d
            zmm5_1 = rax_45
            zmm2.d = var_534_1.d f- zmm7.d
            zmm12 = data_143dbb200
            zmm5_1[0] = zmm5_1[0] f- zmm1.d
            zmm13 = data_143dbb1fc
            zmm1.d = var_568_1.d f- zmm7.d
            zmm15 = data_143dbb1f8
            zmm4_1.d = zmm0.d f- zmm8.d
            zmm9[0] = zmm9[0] f- zmm8.d
            zmm8.d = zmm3.d f* zmm2.d
            zmm3[0] = zmm3[0] f* zmm4_1.d
            zmm7.d = zmm4_1.d f* zmm1.d
            zmm9[0] = zmm9[0] f* zmm2.d
            zmm1.d = zmm1.d f* zmm5_1[0]
            zmm7.d = zmm7.d f- zmm9[0]
            zmm9[0] = zmm9[0] * zmm5_1[0]
            zmm8.d = zmm8.d f- zmm1.d
            zmm9[0] = zmm9[0] - zmm3[0]
            zmm1.d = zmm7.d f* zmm7.d
            zmm2.d = zmm8.d f* zmm8.d
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm2.d = zmm2.d f+ zmm9[0]
            zmm2.d = zmm2.d f+ zmm1.d
            float var_54c_1
            float var_544_1
            
            if (not(zmm2.d f!= 1f))
                var_54c_1 = zmm9[0]
                int32_t var_548_1 = zmm8.d
                var_544_1 = zmm7.d
            else if (zmm2.d f>= 9.99999994e-09f)
                zmm0 = zmm2
                zmm5_1 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
                zmm0[0] = zmm0[0] * 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm2.d = zmm0.d f* zmm5_1[0]
                zmm1.d = 0.5f f- zmm2.d
                zmm5_1[0] = zmm5_1[0] f* zmm1.d
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm0[0] = zmm0[0] * zmm5_1[0]
                zmm4_1.d = 0.5f - zmm0[0]
                zmm5_1[0] = zmm5_1[0] f* zmm4_1.d
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                arg_18 = zmm5_1[0]
                zmm1.d = zmm5_1.d f* zmm7.d
                zmm5_1[0] = zmm5_1[0] f* zmm8.d
                zmm5_1[0] = zmm5_1[0] * zmm9[0]
                float var_548_3 = zmm5_1[0]
                var_544_1 = zmm1.d
                var_54c_1 = zmm5_1[0]
            else
                var_54c_1 = zmm15.d
                float var_548_2 = zmm13[0]
                var_544_1 = zmm12[0]
            
            zmm6 = var_4c8_1
            zmm2.d = var_540_1.d f- var_564_1
            zmm1.d = var_55c_1.d f- var_564_1
            zmm5_1 = rax_49
            zmm3 = var_558_1
            zmm5_1[0] = zmm5_1[0] f- var_560_1
            zmm3[0] = zmm3[0] f- var_560_1
            int64_t var_4d8 = var_54c_1.q
            zmm0 = zx.o(var_3a8_1)
            zmm4_1.d = var_428_1.d f- zmm0[0]
            float var_4d0_1 = var_544_1
            zmm6[0] = zmm6[0] - zmm0[0]
            zmm8.d = zmm3.d f* zmm2.d
            zmm3[0] = zmm3[0] f* zmm4_1.d
            zmm7.d = zmm4_1.d f* zmm1.d
            zmm6[0] = zmm6[0] f* zmm2.d
            zmm6[0] = zmm6[0] * zmm5_1[0]
            zmm7.d = zmm7.d f- zmm6[0]
            zmm5_1[0] = zmm5_1[0] f* zmm1.d
            zmm6[0] = zmm6[0] - zmm3[0]
            zmm8.d = zmm8.d f- zmm5_1[0]
            zmm1.d = zmm7.d f* zmm7.d
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm2.d = zmm8.d f* zmm8.d
            zmm2.d = zmm2.d f+ zmm6[0]
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (zmm2.d f== 1f)
                goto label_14071f0f0
            
            float var_528
            
            if (zmm2.d f>= 9.99999994e-09f)
                zmm0 = zmm2
                zmm5_1 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
                zmm0[0] = zmm0[0] * 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm2.d = zmm0.d f* zmm5_1[0]
                zmm1.d = 0.5f f- zmm2.d
                zmm5_1[0] = zmm5_1[0] f* zmm1.d
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm0[0] = zmm0[0] * zmm5_1[0]
                zmm4_1.d = 0.5f - zmm0[0]
                zmm5_1[0] = zmm5_1[0] f* zmm4_1.d
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                arg_18 = zmm5_1[0]
                zmm7.d = zmm7.d f* zmm5_1[0]
                zmm8.d = zmm8.d f* zmm5_1[0]
                zmm6[0] = zmm6[0] * zmm5_1[0]
            label_14071f0f0:
                int32_t var_520_2 = zmm7.d
                int32_t var_524_2 = zmm8.d
                var_528 = zmm6[0]
            else
                var_528 = zmm15.d
                float var_524_1 = zmm13[0]
                float var_520_1 = zmm12[0]
            
            int32_t var_588_1 = 0x3f800000
            int32_t var_148
            int32_t* rax_56
            rax_56, r9_6, zmm9 = sub_140ae34d0(&var_148, &var_528, &var_4d8, r9_6.d)
            void* var_218
            float* rdx_43 = var_218
            zmm8 = zx.o(arg_20.q)
            var_4d8 = *rax_56
            zmm1 = var_4d8:4.d
            zmm2 = rax_56[2]
            int32_t var_224
            var_218 = &rdx_43[sx.q(var_224)]
            *rdx_43 = var_4d8.d[0]
            void* var_200
            int32_t* rdx_44 = var_200
            int32_t var_20c
            var_200 = &rdx_44[sx.q(var_20c)]
            *rdx_44 = zmm1.d
            void* var_1e8
            int32_t* rdx_45 = var_1e8
            int32_t result_3
            result = sx.q(result_3)
            var_1e8 = &rdx_45[result]
            *rdx_45 = zmm2.d
        
        char var_14d
        char var_14c
        
        if (var_14d != 0 || var_14c != 0)
            int16_t* rsi_4 = rsi_2 * (zx.q(*(r15 + 0xa8)) << 2) + *(r15 + 0x98)
            uint32_t rbx_5 = zx.d(rsi_4[1])
            int32_t rdi_6 = (rbx_5 & 0xffff8000) << 0x10
            int32_t var_570_1
            
            if ((0x7c00 & rbx_5.w) == 0)
                int32_t rbx_6 = rbx_5 & 0x3ff
                
                if (rbx_6 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_6))
                    zmm0, r9_6 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_46 = 0xa - int.d(zmm0[0])
                    var_570_1 = (rbx_6 << (rdx_46.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_46) << 0x17 & 0x7f800000) | rdi_6
                else
                    var_570_1 = rdi_6
            else if ((rbx_5.w & 0x7c00) != 0x7c00)
                var_570_1 = ((rbx_5 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_5 & 0x3ff) << 0xd | rdi_6
            else
                var_570_1 = rdi_6 | 0x477fe000
            
            uint32_t rbx_13 = zx.d(*rsi_4)
            int32_t rdi_10 = (rbx_13 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rbx_13.w) == 0)
                int32_t rbx_14 = rbx_13 & 0x3ff
                
                if (rbx_14 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_14))
                    zmm0, r9_6 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_47 = 0xa - int.d(zmm0[0])
                    arg_20 = (rbx_14 << (rdx_47.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_47) << 0x17 & 0x7f800000) | rdi_10
                else
                    arg_20 = rdi_10
            else if ((rbx_13.w & 0x7c00) != 0x7c00)
                arg_20 = ((rbx_13 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_13 & 0x3ff) << 0xd | rdi_10
            else
                arg_20 = rdi_10 | 0x477fe000
            
            int16_t* rsi_7 = zx.q(rax_42) * (zx.q(*(r15 + 0xa8)) << 2) + *(r15 + 0x98)
            uint32_t rbx_21 = zx.d(rsi_7[1])
            int32_t rdi_14 = (rbx_21 & 0xffff8000) << 0x10
            int32_t var_578_2
            
            if ((0x7c00 & rbx_21.w) == 0)
                int32_t rbx_22 = rbx_21 & 0x3ff
                
                if (rbx_22 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_22))
                    zmm0, r9_6 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_48 = 0xa - int.d(zmm0[0])
                    var_578_2 = (rbx_22 << (rdx_48.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_48) << 0x17 & 0x7f800000) | rdi_14
                else
                    var_578_2 = rdi_14
            else if ((rbx_21.w & 0x7c00) != 0x7c00)
                var_578_2 =
                    ((rbx_21 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_21 & 0x3ff) << 0xd | rdi_14
            else
                var_578_2 = rdi_14 | 0x477fe000
            
            uint32_t rbx_29 = zx.d(*rsi_7)
            int32_t rdi_18 = (rbx_29 & 0xffff8000) << 0x10
            int32_t var_56c_1
            
            if ((0x7c00 & rbx_29.w) == 0)
                int32_t rbx_30 = rbx_29 & 0x3ff
                
                if (rbx_30 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_30))
                    zmm0, r9_6 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_49 = 0xa - int.d(zmm0[0])
                    var_56c_1 = (rbx_30 << (rdx_49.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_49) << 0x17 & 0x7f800000) | rdi_18
                else
                    var_56c_1 = rdi_18
            else if ((rbx_29.w & 0x7c00) != 0x7c00)
                var_56c_1 =
                    ((rbx_29 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_29 & 0x3ff) << 0xd | rdi_18
            else
                var_56c_1 = rdi_18 | 0x477fe000
            
            int16_t* rsi_10 = zx.q(r8_4.d) * (zx.q(*(r15 + 0xa8)) << 2) + *(r15 + 0x98)
            uint32_t rbx_37 = zx.d(rsi_10[1])
            int32_t rdi_22 = (rbx_37 & 0xffff8000) << 0x10
            int32_t var_574_2
            
            if ((0x7c00 & rbx_37.w) == 0)
                int32_t rbx_38 = rbx_37 & 0x3ff
                
                if (rbx_38 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_38))
                    zmm0, r9_6 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_50 = 0xa - int.d(zmm0[0])
                    var_574_2 = (rbx_38 << (rdx_50.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_50) << 0x17 & 0x7f800000) | rdi_22
                else
                    var_574_2 = rdi_22
            else if ((rbx_37.w & 0x7c00) != 0x7c00)
                var_574_2 =
                    ((rbx_37 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_37 & 0x3ff) << 0xd | rdi_22
            else
                var_574_2 = rdi_22 | 0x477fe000
            
            uint32_t rbx_45 = zx.d(*rsi_10)
            int32_t rdi_26 = (rbx_45 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rbx_45.w) == 0)
                int32_t rbx_46 = rbx_45 & 0x3ff
                
                if (rbx_46 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_46))
                    zmm0, r9_6 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_51 = 0xa - int.d(zmm0[0])
                    arg_18 = (rbx_46 << (rdx_51.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_51) << 0x17 & 0x7f800000) | rdi_26
                else
                    arg_18 = rdi_26
            else if ((rbx_45.w & 0x7c00) != 0x7c00)
                arg_18 = ((rbx_45 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_45 & 0x3ff) << 0xd | rdi_26
            else
                arg_18 = rdi_26 | 0x477fe000
            
            zmm2.d = var_568_1.d f- var_534_1
            zmm1.d = arg_10.d f- rax_45
            zmm4_1 = var_570_1
            zmm5_1 = arg_20
            zmm0 = var_578_2
            zmm3 = arg_18
            zmm0[0] = zmm0[0] f- zmm4_1.d
            zmm6 = data_142d3f660
            zmm3[0] = zmm3[0] - zmm5_1[0]
            zmm7 = zx.o(var_4a8_1)
            zmm12 = var_554_1
            zmm8.d = zmm8.d f- zmm7.d
            zmm10 = zx.o(var_4f8_1)
            zmm12[0] = zmm12[0] f- var_534_1
            zmm15.d = var_550_1.d f- rax_45
            int32_t var_568_2 = zmm2.d
            zmm10[0] = zmm10[0] f- zmm7.d
            arg_10 = zmm1.d
            zmm2.d = var_574_2.d f- zmm4_1.d
            zmm1.d = var_56c_1.d f- zmm5_1[0]
            float var_334_1 = zmm0[0]
            float var_328_1 = zmm3[0]
            float var_318_1 = zmm5_1[0]
            int32_t var_324_1 = zmm2.d
            int32_t var_314_1 = zmm4_1.d
            int32_t var_338 = zmm1.d
            int32_t var_46c_1 = 0
            int32_t var_45c_1 = 0
            int32_t var_44c_1 = 0
            int64_t var_330_1 = 0
            int64_t var_320_1 = 0
            int64_t var_310_1 = 0x3f800000
            float var_308_1[0x4] = zmm6
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_156)[0x4]
            float zmm6_1[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            float zmm10_1
            int32_t zmm12_1
            uint32_t zmm15_1[0x4]
            rax_156, zmm6_1, zmm7_1, zmm8_1, zmm10_1, zmm12_1, zmm15_1 =
                sub_140631b10(&var_338, &var_118)
            float var_468[0x4]
            var_468[0] = zmm12_1
            uint32_t zmm2_1[0x4] = *rax_156
            float var_478[0x4]
            var_478[0] = var_568_2[0]
            float zmm5_2[0x4] = _mm_shuffle_ps(var_468, var_468, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_478, var_478, 0xe1)
            zmm5_2[0] = zmm8_1[0]
            zmm4_2[0] = zmm10_1
            uint32_t zmm0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm15_1[0]
            zmm4_2[0] = arg_10[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            uint32_t zmm13_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), zmm5_2)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm13_1 = _mm_add_ps(zmm13_1, zmm0_1)
            float var_458[0x4]
            var_458[0] = var_534_1[0]
            float zmm3_1[0x4] = _mm_shuffle_ps(var_458, var_458, 0xe1)
            zmm3_1[0] = zmm7_1[0]
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1[0] = rax_45[0]
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            int32_t var_46c_2 = 0
            int32_t var_45c_2 = 0
            int32_t var_44c_2 = 0
            _mm_add_ps(_mm_add_ps(zmm13_1, _mm_mul_ps(zmm1_1, zmm3_1)), 
                _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1))
            zmm2_1 = rax_156[1]
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm15_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm15_1, zmm5_2), zmm0_1), zmm1_1), zmm2_1)
            zmm2_1 = rax_156[2]
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm7_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm7_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_1, zmm5_2), zmm0_1), zmm1_1), 
                zmm2_1)
            zmm2_1 = rax_156[3]
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm8_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_1)
            zmm8_1 = _mm_mul_ps(zmm8_1, zmm5_2)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
            zmm8_1 = _mm_add_ps(zmm8_1, zmm0_1)
            zmm0_1 = var_564_1
            zmm0_1[0] = zmm0_1[0] f- var_540_1
            zmm8_1 = _mm_add_ps(zmm8_1, zmm1_1)
            zmm1_1 = var_560_1
            zmm1_1[0] = zmm1_1[0] f- rax_49
            uint32_t var_564_2 = zmm0_1[0]
            zmm0_1 = zx.o(var_428_1)
            zmm0_1[0]
            zmm0_1[0]
            zmm0_1 = var_558_1
            zmm0_1[0] = zmm0_1[0] f- rax_49
            float var_560_2 = zmm1_1[0]
            zmm8_1 = _mm_add_ps(zmm8_1, zmm2_1)
            zmm1_1 = var_55c_1
            zmm1_1[0] = zmm1_1[0] f- var_540_1
            uint32_t var_558_2 = zmm0_1[0]
            var_4a8_1.o = zmm8_1
            float var_55c_2 = zmm1_1[0]
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_338, &var_118)
            zmm5_2[0] = var_564_2[0]
            zmm2 = *result
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_3[0] = zmm10[0]
            zmm4_2[0] = var_55c_2[0]
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = zmm12[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_560_2[0]
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_3[0] = var_558_2[0]
            zmm1 = _mm_mul_ps(zmm1, zmm5_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_468 = zmm5_3
            var_478 = zmm4_3
            zmm1 = _mm_add_ps(zmm1, _mm_mul_ps(zmm0, zmm4_3))
            zmm3_1[0] = var_540_1[0]
            zmm3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            zmm3[0] = zx.o(var_428_1)[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = rax_49[0]
            var_4f8_1.o = zmm1
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_458 = zmm3
            zmm0 = _mm_add_ps(_mm_add_ps(var_4f8_1.o, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x10)
            zmm10 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            var_4f8_1.o = zmm0
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4_3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm10, zmm0), _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x20)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4_3)
            var_408.o = zmm10
            zmm10 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm10, zmm0), _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x30)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4_3)
            var_428_1.o = zmm10
            zmm10 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_3), zmm0)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
            var_3a8_1.o = _mm_add_ps(_mm_add_ps(zmm10, zmm1), zmm2)
            zmm10 = 0x322bcc77
            
            if (var_14d != 0)
                zmm2 = data_142d4cc00
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int64_t var_4c8_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                int32_t var_4c0_1 = 0
                zmm6 = _mm_mul_ps(zmm6, zmm8)
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
                    zmm6 = zmm11
                    zmm7 = zmm11
                    zmm8 = zmm11
                else
                    zmm3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3[0] = zmm1[0]
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm1.d = zmm3.d f* zmm5_3[0]
                    zmm2.d = 0.5f f- zmm1.d
                    zmm5_3[0] = zmm5_3[0] f* zmm2.d
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3[0] = zmm3[0] f* zmm1.d
                    zmm4_3[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    arg_10 = zmm5_3[0]
                    zmm6[0] = zmm6[0] * zmm5_3[0]
                    zmm7.d = zmm7.d f* zmm5_3[0]
                    zmm8.d = zmm8.d f* zmm5_3[0]
                
                zmm2 = data_142d4cc00
                zmm0 = _mm_unpacklo_ps(zmm6, zmm7.q)
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_3a8_1.o)
                int64_t var_4c8_3 = 0
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_408.o)
                int32_t var_4c0_2 = 0
                int64_t var_510 = zmm0.q
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_428_1.o)
                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_4f8_1.o)
                int32_t var_508_1 = zmm8.d
                zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0 = zmm3
                zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm0[0] = zmm0[0] * zmm3[0]
                zmm1.d = zmm1.d f* zmm1.d
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                zmm3[0] = zmm3[0] * zmm3[0]
                zmm1.d = zmm1.d f+ zmm0[0]
                zmm1.d = zmm1.d f+ zmm3[0]
                
                if (not(zmm1.d f<= 9.99999994e-09f))
                    zmm3 = zx.o(0)
                    zmm5_3 = 0x3f000000
                    zmm3[0] = zmm1[0]
                    zmm4_3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm1.d = zmm3.d f* zmm4_3[0]
                    zmm2.d = 0.5f f- zmm1.d
                    zmm4_3[0] = zmm4_3[0] f* zmm2.d
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    zmm1.d = zmm4_3.d f* zmm4_3[0]
                    zmm3[0] = zmm3[0] f* zmm1.d
                    zmm5_3[0] = 0.5f - zmm3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                
                float var_588_2 = zmm9[0]
                int32_t var_13c
                int32_t* rax_158
                rax_158, r9_6, zmm9, zmm10, zmm13, zmm14 =
                    sub_140ae34d0(&var_13c, &var_510, &var_510, r9_6.d)
                void* var_1d0
                float* rdx_55 = var_1d0
                zmm7 = zmm7_1
                zmm8 = var_4a8_1.o
                var_510 = *rax_158
                zmm1 = var_510:4.d
                zmm2 = rax_158[2]
                int32_t var_1dc
                var_1d0 = &rdx_55[sx.q(var_1dc)]
                *rdx_55 = var_510.d[0]
                void* var_1b8
                int32_t* rdx_56 = var_1b8
                int32_t var_1c4
                var_1b8 = &rdx_56[sx.q(var_1c4)]
                *rdx_56 = zmm1.d
                void* var_1a0
                int32_t* rdx_57 = var_1a0
                int32_t result_4
                result = sx.q(result_4)
                var_1a0 = &rdx_57[result]
                *rdx_57 = zmm2.d
            
            if (var_14c != 0)
                zmm2 = data_142d4cc20
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int64_t var_4f8_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                int32_t var_4f0_1 = 0
                zmm6 = _mm_mul_ps(zmm6, zmm8)
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
                
                if (zmm1.d f<= zmm10[0])
                    zmm6 = zmm11
                    zmm7 = zmm11
                    zmm8 = zmm11
                else
                    zmm3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3[0] = zmm1[0]
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm1.d = zmm3.d f* zmm5_3[0]
                    zmm2.d = 0.5f f- zmm1.d
                    zmm5_3[0] = zmm5_3[0] f* zmm2.d
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3[0] = zmm3[0] f* zmm1.d
                    zmm4_3[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    arg_10 = zmm5_3[0]
                    zmm6[0] = zmm6[0] * zmm5_3[0]
                    zmm7.d = zmm7.d f* zmm5_3[0]
                    zmm8.d = zmm8.d f* zmm5_3[0]
                
                zmm2 = data_142d4cc20
                int64_t var_4e8 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm7_1)
                int64_t var_4f8_3 = 0
                zmm6 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_4a8_1.o)
                int32_t var_4f0_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                int32_t var_4e0_1 = zmm8.d
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm13)))
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm6[0]
                zmm0 = zmm8
                zmm0[0] = zmm0[0] f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0[0]
                
                if (zmm1.d f<= zmm10[0])
                    zmm6 = zmm11
                    zmm7 = zmm11
                    zmm8 = zmm11
                else
                    zmm3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3[0] = zmm1[0]
                    zmm5_3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm1.d = zmm3.d f* zmm5_3[0]
                    zmm2.d = 0.5f f- zmm1.d
                    zmm5_3[0] = zmm5_3[0] f* zmm2.d
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3[0] = zmm3[0] f* zmm1.d
                    zmm4_3[0] = 0.5f - zmm3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    arg_10 = zmm5_3[0]
                    zmm6[0] = zmm6[0] * zmm5_3[0]
                    zmm7.d = zmm7.d f* zmm5_3[0]
                    zmm8.d = zmm8.d f* zmm5_3[0]
                
                float var_3b8 = zmm6[0]
                int32_t var_3b4_1 = zmm7.d
                int32_t var_3b0_1 = zmm8.d
                float var_588_3 = zmm9[0]
                int32_t var_130[0x6]
                int32_t* rax_163
                rax_163, zmm9 = sub_140ae34d0(&var_130, &var_3b8, &var_4e8, r9_6.d)
                float* var_188
                float* rdx_59 = var_188
                var_4e8 = *rax_163
                zmm1 = var_4e8:4.d
                zmm2 = rax_163[2]
                int32_t var_194
                var_188 = &rdx_59[sx.q(var_194)]
                *rdx_59 = var_4e8.d[0]
                int32_t* var_170
                int32_t* rdx_60 = var_170
                int32_t var_17c
                var_170 = &rdx_60[sx.q(var_17c)]
                *rdx_60 = zmm1.d
                int32_t* var_158
                int32_t* rdx_61 = var_158
                int32_t result_5
                result = sx.q(result_5)
                var_158 = &rdx_61[result]
                *rdx_61 = zmm2.d
        
        rdx_28 = var_380_1
        cond:1_1 = var_518 + 1 s< *(arg2 + 0x40)
        r9_5 = var_388_1
        r10_2 = var_368_1
        r11_5 = var_398_1
        rbx_2 = var_390_1
        var_518 += 1
        r8_1 = rcx_24
    while (cond:1_1)

return result
