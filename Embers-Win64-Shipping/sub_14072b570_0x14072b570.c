// 函数: sub_14072b570
// 地址: 0x14072b570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int64_t* rsi = nullptr
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
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rdi_1

if ((not.b(rax_6) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int64_t rdx_1 = 0
        
        do
            i_1 -= *(r8 + rdx_1)
            rax_7 += 1
            rdx_1 = rax_7 << 2
            r9_1 += 1
        while (i_1 s>= *(r8 + rdx_1))
    
    rdi_1 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
uint128_t* rbx_1

if ((rax_10.b & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
        int64_t rdx_3 = 0
        
        do
            i_3 -= *(r8 + rdx_3)
            rax_15 += 1
            rdx_3 = rax_15 << 2
            r9_3 += 1
        while (i_3 s>= *(r8 + rdx_3))
    
    r13_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_10 = rax_19
rax_19.b = not.b(rax_19.b)
uint128_t* r12_1

if ((rax_19.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
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
    
    r12_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t var_608 = 0xffffffff
uint128_t* var_600 = nullptr
int32_t var_5f8 = 0
sub_140767bd0(&var_608, arg2)
void var_338
sub_140742680(&var_338, arg2)

if (sub_140d3c6e0(r14) != 0)
    sub_142591550()

void* rax_23 = *(r14 + 0x58)
int64_t* var_5a8 = nullptr
void* var_5a0 = nullptr

if (rax_23 != 0)
    rsi = *(**(rax_23 + 0x58) + (sx.q(r14[0x1a]) << 3))
    var_5a8 = rsi
    
    if (r14[0x86].b != 0)
        void* rax_26 = sub_140d3c6e0(r14)
        void* rax_28
        void* rcx_11
        int64_t rdx_7
        
        if (rax_26 != 0)
            rax_28 = sub_142591550() + 0x30
            rcx_11 = *(rax_26 + 0x10)
            rdx_7 = sx.q(*(rax_28 + 8))
        
        void* rax_29
        
        if (rax_26 == 0 || rdx_7.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_7 << 3)) != rax_28 || *(rax_26 + 0x430) == 0)
            rax_29 = &rsi[0x27]
        else
            rax_29 = sub_141f66050(rax_26, r14[0x1a])
        
        var_5a0 = rax_29
    
    if (rsi != 0)
        rsi = rsi[3]

int64_t* var_540 = rsi
int32_t rax_31 = (*(*rsi + 0x58))(rsi)
uint128_t zmm11 = 0x3f800000
int32_t var_570 = 0
uint128_t zmm0
zmm0.d = 1f f/ r14[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_31)
int32_t var_550 = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_544 = result.d

if (*(arg2 + 0x40) s> 0)
    uint128_t* r8_2 = var_600
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    float zmm12[0x4] = zx.o(0)
    result = zx.q(arg_10.b) << 2
    uint64_t r9_6 = zx.q(arg_18.b) << 2
    uint64_t r10_2 = zx.q(arg_20.b) << 2
    uint64_t r11_5 = zx.q(rax_6) << 2
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    uint64_t result_1 = result
    uint64_t var_388_1 = r9_6
    uint64_t var_368_1 = r10_2
    uint64_t var_380_1 = r11_5
    int32_t var_40c_1 = 0x3f800000
    bool cond:3_1
    
    do
        uint128_t* rdx_10 = r12_1
        float (* rcx_18)[0x4] = r13_1
        r12_1 += result
        r13_1 += r9_6
        uint64_t rdx_11 = zx.q(*rdi_1)
        int32_t var_350_1 = (*rdx_10).d
        uint64_t var_4d4_1 = (_mm_unpacklo_ps(*rbx_1, (*rcx_18)[0].q)).q
        int32_t var_618_1 = (*r8_2).d
        
        if (rdx_11.d s< 0 || rdx_11.d s> var_544)
            int32_t var_344_1 = 0
            uint64_t var_374_1 = (_mm_unpacklo_ps(zmm11, zmm12[0].q)).q
            int32_t var_36c_1 = 0
            rdx_11 = zx.q(0.o.d)
        
        uint32_t rbx_5 = (rdx_11 * 3).d
        int32_t rax_39 = (*(*rsi + 0x68))(rsi, zx.q(rbx_5))
        int64_t r8_3 = *rsi
        int32_t rax_40 = (*(r8_3 + 0x68))(rsi, zx.q(rbx_5 + 1), r8_3)
        int64_t r8_4 = *var_540
        int32_t rax_41 = (*(r8_4 + 0x68))(var_540, zx.q(rbx_5 + 2), r8_4)
        void var_134
        int64_t* rax_42 = sub_142316040(&var_134, rax_23, var_5a8, var_5a0, rax_39)
        int32_t rcx_25 = rax_42[1].d
        zmm11 = zx.o(*rax_42)
        void var_188
        int64_t* rax_43 = sub_142316040(&var_188, rax_23, var_5a8, var_5a0, rax_40)
        zmm10 = zx.o(*rax_43)
        int32_t rax_44 = rax_43[1].d
        void var_17c
        int64_t* rax_45 = sub_142316040(&var_17c, rax_23, var_5a8, var_5a0, rax_41)
        zmm9 = zx.o(*rax_45)
        int32_t rax_46 = rax_45[1].d
        void var_170
        int64_t* rax_47 = sub_142316040(&var_170, rax_23, var_5a8, var_5a0, rax_39)
        int64_t zmm0_1 = *rax_47
        int32_t rax_48 = rax_47[1].d
        void var_164
        int64_t* rax_49 = sub_142316040(&var_164, rax_23, var_5a8, var_5a0, rax_40)
        zmm13 = zx.o(*rax_49)
        int32_t rax_50 = rax_49[1].d
        uint64_t var_4f8_1 = zmm13.q
        void var_158
        int64_t* rax_51
        int32_t r9_13
        rax_51, r9_13 = sub_142316040(&var_158, rax_23, var_5a8, var_5a0, rax_41)
        zmm14 = var_350_1
        zmm0 = zx.o(*rax_51)
        int32_t rax_52 = rax_51[1].d
        uint64_t var_4c8_2 = zmm0.q
        uint64_t var_468_1 = zmm0.q
        zmm14[0] = zmm14[0] f* zmm0.d
        zmm0 = var_468_1:4.d
        arg_20 = zmm0.d
        uint128_t zmm3_1 = zmm13
        zmm15 = var_4d4_1.d
        zmm14[0] = zmm14[0] f* zmm0.d
        int64_t var_568_1 = 0
        zmm0 = rax_52
        float zmm1[0x4] = zmm15
        zmm14[0] = zmm14[0] f* zmm0.d
        int32_t var_560_1 = 0
        int32_t var_5e8_1 = zmm0.d
        zmm0 = zmm13.q:4.d
        zmm13 = var_4d4_1:4.d
        uint128_t zmm5_1 = zmm0
        zmm3_1.d = zmm3_1.d f* zmm13.d
        int32_t var_5e4_1 = zmm0.d
        zmm0 = rax_50
        uint128_t zmm4_1 = zmm0
        int32_t var_5e0_1 = zmm0.d
        zmm0 = zx.o(zmm0_1)
        uint128_t zmm2_1
        zmm2_1.d = zmm15.d f* zmm0.d
        uint64_t var_590_1 = zmm0.q
        zmm1[0] = zmm1[0] f* var_590_1:4.d
        zmm0.d = zmm15.d f* rax_48
        zmm2_1.d = zmm2_1.d f+ zmm3_1.d
        zmm5_1.d = zmm5_1.d f* zmm13.d
        zmm14[0] = zmm14[0] f+ zmm2_1.d
        zmm4_1.d = zmm4_1.d f* zmm13.d
        zmm5_1.d = zmm5_1.d f+ zmm1[0]
        uint32_t var_4b8_1 = zmm10.d
        uint32_t var_4a8_1 = zmm9.d
        zmm4_1.d = zmm4_1.d f+ zmm0.d
        uint32_t var_580_1 = zmm11.d
        zmm3_1.d = zmm14[0]
        zmm8 = zmm11
        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
        zmm14[0] = zmm14[0] f+ zmm5_1.d
        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        int64_t var_438_1 = zmm8.q
        zmm14[0] = zmm14[0] f+ zmm4_1.d
        zmm3_1.d = zmm14[0]
        float zmm6_1[0x4] = zmm10
        zmm10 = rax_46
        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
        zmm3_1.d = zmm14[0]
        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        zmm7 = zmm9
        zmm9 = var_4a8_1
        zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(r14 + 0x180))
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(r14 + 0x160))
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), *(r14 + 0x170))
        uint128_t var_418 = zmm3_1
        zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(r14 + 0x150))
        zmm2_1 = _mm_add_ps(zmm2_1, zmm0)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm0 = var_4b8_1
        arg_10 = zmm0.d
        int32_t var_548_1 = zmm10.d
        int32_t var_54c_1 = zmm9.d
        int64_t var_558_1 = zmm6_1.q
        int64_t var_428_1 = zmm7.q
        zmm2_1 = _mm_add_ps(zmm2_1, _mm_add_ps(zmm1, zmm3_1))
        zmm1 = rax_44
        arg_18 = zmm1[0]
        var_568_1.o = zmm2_1
        char var_1d0
        char var_1cf
        
        if (var_1d0 != 0 || var_1cf != 0)
            void* var_328
            float* rdx_21 = var_328
            zmm3_1 = zmm13
            zmm11 = rcx_25
            zmm2_1.d = zmm13.d f* zmm0.d
            int32_t var_3fc_1 = 0x3f800000
            zmm13.d = zmm13.d f* zmm1[0]
            var_608.q = 0
            zmm3_1.d = zmm3_1.d f* zmm6_1[0]
            var_600.d = 0
            zmm0.d = zmm15.d f* var_580_1
            zmm1 = zmm15
            zmm1[0] = zmm1[0] * zmm8[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm4_1.d = zmm14.d f* zmm9.d
            zmm3_1.d = zmm3_1.d f+ zmm1[0]
            zmm5_1.d = zmm14.d f* zmm7[0]
            zmm15.d = zmm15.d f* zmm11.d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            zmm14[0] = zmm14[0] f* zmm10.d
            zmm5_1.d = zmm5_1.d f+ zmm3_1.d
            zmm13.d = zmm13.d f+ zmm15.d
            zmm2_1.d = zmm4_1.d
            zmm4_1 = var_568_1:4.d
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm5_1.d
            zmm5_1 = var_560_1
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm14[0] = zmm14[0] f+ zmm13.d
            zmm13 = var_618_1
            zmm2_1.d = zmm14[0]
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_408 = zmm2_1
            zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(r14 + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(r14 + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(r14 + 0xe0))
            zmm3_1 = _mm_add_ps(zmm3_1, zmm0)
            int32_t var_334
            var_328 = &rdx_21[sx.q(var_334)]
            zmm1 = _mm_add_ps(zmm1, 
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(r14 + 0xd0)))
            zmm2_1 = var_568_1.d
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
            zmm1 = zmm3_1
            zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm1[0] = zmm1[0] f- zmm2_1.d
            zmm0.d = zmm0.d f- zmm4_1.d
            zmm3_1.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d f- zmm5_1.d
            zmm1[0] = zmm1[0] f* zmm13.d
            zmm0.d = zmm0.d f* zmm13.d
            zmm1[0] = zmm1[0] f+ zmm2_1.d
            zmm3_1.d = zmm3_1.d f* zmm13.d
            zmm0.d = zmm0.d f+ zmm4_1.d
            zmm3_1.d = zmm3_1.d f+ zmm5_1.d
            *rdx_21 = zmm1[0]
            void* var_310
            int32_t* rdx_22 = var_310
            int32_t var_31c
            var_310 = &rdx_22[sx.q(var_31c)]
            *rdx_22 = zmm0.d
            void* var_2f8
            int32_t* rdx_23 = var_2f8
            int32_t var_304
            var_2f8 = &rdx_23[sx.q(var_304)]
            *rdx_23 = zmm3_1.d
            
            if (var_1cf != 0)
                void* var_2e0
                float* rdx_24 = var_2e0
                zmm1[0] = zmm1[0] f- zmm2_1.d
                zmm0.d = zmm0.d f- zmm4_1.d
                zmm2_1 = var_550
                zmm3_1.d = zmm3_1.d f- zmm5_1.d
                zmm1[0] = zmm1[0] f* zmm2_1.d
                int32_t var_2ec
                var_2e0 = &rdx_24[sx.q(var_2ec)]
                zmm0.d = zmm0.d f* zmm2_1.d
                *rdx_24 = zmm1[0]
                void* var_2c8
                int32_t* rdx_25 = var_2c8
                zmm3_1.d = zmm3_1.d f* zmm2_1.d
                int32_t var_2d4
                var_2c8 = &rdx_25[sx.q(var_2d4)]
                *rdx_25 = zmm0.d
                void* var_2b0
                int32_t* rdx_26 = var_2b0
                int32_t var_2bc
                var_2b0 = &rdx_26[sx.q(var_2bc)]
                *rdx_26 = zmm3_1.d
            
            zmm0 = arg_10
        else
            zmm11 = rcx_25
        
        char var_1ce
        
        if (var_1ce == 0)
            zmm11 = 0x3f800000
        else
            zmm1 = arg_18
            zmm3_1.d = var_558_1.d f- zmm7[0]
            zmm1[0] = zmm1[0] f- zmm10.d
            zmm15 = data_143dbb200
            zmm5_1.d = var_580_1.d f- zmm9.d
            zmm4_1.d = zmm0.d f- zmm9.d
            zmm6_1 = zmm8
            zmm2_1 = zmm11
            zmm11 = 0x3f800000
            zmm6_1[0] = zmm6_1[0] - zmm7[0]
            zmm2_1.d = zmm2_1.d f- zmm10.d
            zmm7 = zmm3_1
            zmm8 = zmm5_1
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm5_1.d = zmm5_1.d f* zmm3_1.d
            zmm0.d = zmm6_1.d f* zmm1[0]
            zmm7[0] = zmm7[0] f* zmm2_1.d
            zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm6_1[0] = zmm6_1[0] f- zmm5_1.d
            zmm8[0] = zmm8[0] f- zmm0.d
            zmm2_1.d = zmm7.d f* zmm7[0]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm0.d = zmm8.d f* zmm8[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm6_1[0]
            float var_490_1
            
            if (not(zmm2_1.d f!= 1f))
                var_490_1 = zmm6_1[0]
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm3_1.d = zmm2_1.d
                zmm5_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
                zmm3_1.d = zmm3_1.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1 = zmm3_1
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2_1.d = 0.5f - zmm1[0]
                zmm0.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1.d
                zmm3_1.d = zmm3_1.d f* zmm1[0]
                zmm4_1.d = 0.5f f- zmm3_1.d
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                int32_t var_618_2 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm7[0]
                zmm5_1.d = zmm5_1.d f* zmm6_1[0]
                zmm1[0] = zmm1[0] * zmm8[0]
                zmm7 = zmm0
                var_490_1 = zmm5_1.d
                zmm6_1 = zmm5_1
                zmm8 = zmm1
            else
                zmm7 = data_143dbb1f8
                zmm6_1 = zmm15
                zmm8 = data_143dbb1fc
                var_490_1 = zmm6_1[0]
            
            uint64_t var_5b8 = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
            float var_5b0_1 = var_490_1
            int32_t var_3ec_1 = 0
            zmm2_1.d = zmm7[0]
            var_608.q = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm8[0]
            var_600.d = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm2_1.d = zmm6_1[0]
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_3f8 = zmm2_1
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(r14 + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(r14 + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(r14 + 0xe0))
            zmm8 = 0x3f000000
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(r14 + 0xd0))))
            zmm0.d = zmm7.d f* zmm7[0]
            zmm6_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm6_1[0] = zmm6_1[0] f+ zmm0.d
            zmm3_1.d = zmm6_1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm1 = zmm3_1
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm2_1.d = 0.5f - zmm1[0]
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm2_1.d = rax_48.d f- var_5e8_1
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1 = zmm4_1
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1[0]
            zmm1 = zmm4_1
            zmm0.d = 0.5f f- zmm3_1.d
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm0 = zx.o(var_4c8_2)
            zmm4_1.d = zmm4_1.d f+ zmm1[0]
            zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            zmm7[0] = zmm7[0] f* zmm4_1.d
            var_5b8:4.d = zmm6_1[0]
            zmm6_1 = var_590_1:4.d
            zmm6_1[0] = zmm6_1[0] f- arg_20
            int32_t var_5b0_2 = zmm5_1.d
            int32_t var_618_3 = zmm4_1.d
            zmm5_1.d = zmm0_1.d f- zmm0.d
            var_5b8.d = zmm7[0]
            zmm4_1.d = var_4f8_1.d f- zmm0.d
            zmm3_1.d = var_5e4_1.d f- arg_20
            zmm1 = var_5e0_1
            zmm1[0] = zmm1[0] f- var_5e8_1
            zmm9 = zmm5_1
            zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
            zmm7 = zmm3_1
            zmm5_1.d = zmm5_1.d f* zmm3_1.d
            zmm0.d = zmm6_1.d f* zmm1[0]
            zmm7[0] = zmm7[0] f* zmm2_1.d
            zmm6_1[0] = zmm6_1[0] f- zmm5_1.d
            zmm9.d = zmm9.d f* zmm1[0]
            zmm7[0] = zmm7[0] f- zmm0.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm9.d = zmm9.d f- zmm0.d
            zmm2_1.d = zmm7.d f* zmm7[0]
            zmm0.d = zmm9.d f* zmm9.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm6_1[0]
            
            if (not(zmm2_1.d f== 1f))
                if (zmm2_1.d f>= 9.99999994e-09f)
                    zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                    zmm3_1.d = zmm2_1.d f* 0.5f
                    zmm0.d = zmm4_1.d f* zmm4_1.d
                    zmm1 = zmm3_1
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2_1.d = 0.5f - zmm1[0]
                    zmm0.d = zmm4_1.d f* zmm2_1.d
                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                    zmm1 = zmm4_1
                    zmm1[0] = zmm1[0] f* zmm4_1.d
                    zmm3_1.d = zmm3_1.d f* zmm1[0]
                    zmm1 = zmm4_1
                    zmm0.d = 0.5f f- zmm3_1.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_1.d = zmm4_1.d f+ zmm1[0]
                    int32_t var_618_4 = zmm4_1.d
                    zmm7[0] = zmm7[0] f* zmm4_1.d
                    zmm9.d = zmm9.d f* zmm4_1.d
                    zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
                else
                    zmm7 = data_143dbb1f8
                    zmm6_1 = zmm15
                    zmm9 = data_143dbb1fc
            
            int32_t var_3ac_1 = 0
            zmm2_1.d = zmm7[0]
            int32_t var_628_7 = 0x3f800000
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm9.d
            var_608.q = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm2_1.d = zmm6_1[0]
            var_600.d = 0
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_3b8 = zmm2_1
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(r14 + 0x170))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(r14 + 0x180))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(r14 + 0x160))
            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(r14 + 0x150))))
            zmm0.d = zmm7.d f* zmm7[0]
            zmm5_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm6_1[0] = zmm6_1[0] f+ zmm0.d
            zmm3_1.d = zmm6_1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm1 = zmm3_1
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm2_1.d = 0.5f - zmm1[0]
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1 = zmm4_1
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1[0]
            zmm8[0] = 0.5f f- zmm3_1.d
            zmm0.d = zmm4_1.d f* zmm8[0]
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1 = zmm4_1
            int32_t var_618_5 = zmm4_1.d
            zmm1[0] = zmm1[0] * zmm7[0]
            zmm0.d = zmm4_1.d f* zmm6_1[0]
            zmm4_1.d = zmm4_1.d f* zmm5_1.d
            float var_488 = zmm1[0]
            int32_t var_484_1 = zmm0.d
            int32_t var_480_1 = zmm4_1.d
            int32_t var_14c
            int32_t* rax_60
            rax_60, r9_13, zmm12 = sub_140ae34d0(&var_14c, &var_488, &var_5b8, r9_13)
            void* var_298
            int32_t* rdx_28 = var_298
            var_5b8 = *rax_60
            zmm1 = var_5b8:4.d
            zmm2_1 = rax_60[2]
            zmm7 = zx.o(var_428_1)
            zmm8 = zx.o(var_438_1)
            zmm6_1 = zx.o(var_558_1)
            zmm9 = var_54c_1
            zmm10 = var_548_1
            int32_t var_2a4
            var_298 = &rdx_28[sx.q(var_2a4)]
            *rdx_28 = var_5b8.d.d
            void* var_280
            float* rdx_29 = var_280
            int32_t var_28c
            var_280 = &rdx_29[sx.q(var_28c)]
            *rdx_29 = zmm1[0]
            void* var_268
            int32_t* rdx_30 = var_268
            int32_t var_274
            var_268 = &rdx_30[sx.q(var_274)]
            *rdx_30 = zmm2_1.d
        
        char var_1cc
        char rbx_7 = var_1cc
        char var_1cd
        
        if (var_1cd != 0 || rbx_7 != 0)
            zmm1 = arg_18
            zmm6_1[0] = zmm6_1[0] - zmm8[0]
            zmm1[0] = zmm1[0] f- rcx_25
            zmm2_1.d = arg_10.d f- var_580_1
            zmm9.d = zmm9.d f- var_580_1
            zmm10.d = zmm10.d f- rcx_25
            arg_18 = zmm1[0]
            int64_t var_558_2 = zmm6_1.q
            data_142d3f660
            zmm7[0] = zmm7[0] - zmm8[0]
            int128_t var_1c8
            __builtin_memset(&var_1c8, 0, 0x20)
            int32_t var_52c_1 = 0
            int32_t var_51c_1 = 0
            int32_t var_50c_1 = 0
            int128_t var_1a8
            __builtin_memcpy(&var_1a8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_65)[0x4]
            float zmm6_2[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            float zmm9_1
            uint32_t zmm10_1[0x4]
            rax_65, zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_140631b10(&var_1c8, &var_118)
            float var_528[0x4]
            var_528[0] = zmm9_1
            uint32_t zmm2_2[0x4] = *rax_65
            float var_538[0x4]
            var_538[0] = zmm2_1.d.d
            uint32_t zmm0_2[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            uint32_t zmm15_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float zmm5_2[0x4] = _mm_shuffle_ps(var_528, var_528, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_538, var_538, 0xe1)
            zmm5_2[0] = zmm7_1[0]
            zmm4_2[0] = var_558_2.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm5_2[0] = zmm10_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm15_1 = _mm_mul_ps(zmm15_1, zmm5_2)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm4_2[0] = arg_18.d
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            uint128_t zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm4_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            zmm15_1 = _mm_add_ps(zmm15_1, zmm0_2)
            float var_538_1[0x4] = zmm4_2
            float var_518[0x4]
            var_518[0] = var_580_1[0]
            float zmm3_2[0x4] = _mm_shuffle_ps(var_518, var_518, 0xe1)
            zmm3_2[0] = zmm8_1[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = rcx_25[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            float var_518_1[0x4] = zmm3_2
            _mm_add_ps(_mm_add_ps(zmm15_1, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_2)
            zmm2_2 = rax_65[1]
            zmm10_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm10_1 = _mm_mul_ps(zmm10_1, zmm5_2)
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm4_2)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa), zmm3_2)
            int32_t var_52c_2 = 0
            int32_t var_51c_2 = 0
            int32_t var_50c_2 = 0
            _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm10_1, zmm0_2), zmm1_1), 
                _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2))
            zmm2_2 = rax_65[2]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm7_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            zmm7_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_1, zmm5_2), zmm0_2), zmm1_1), 
                zmm2_2)
            zmm2_2 = rax_65[3]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm8_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm8_1 = _mm_mul_ps(zmm8_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
            zmm8_1 = _mm_add_ps(zmm8_1, zmm0_2)
            zmm2_2 = _mm_mul_ps(zmm2_2, zmm6_2)
            zmm0_2 = arg_20
            zmm0_2[0] = zmm0_2[0] f- var_590_1:4.d
            var_428_1.o = zmm7_1
            zmm8_1 = _mm_add_ps(zmm8_1, zmm1_1)
            arg_20 = zmm0_2[0]
            zmm0_2 = var_5e8_1
            zmm0_2[0] = zmm0_2[0] f- rax_48
            zmm8_1 = _mm_add_ps(zmm8_1, zmm2_2)
            uint32_t var_5e8_2 = zmm0_2[0]
            zmm0_2 = zx.o(var_4f8_1)
            zmm0_2[0] = zmm0_2[0] f- zmm0_1.d
            var_438_1.o = zmm8_1
            int64_t var_4f8_2 = zmm0_2.q
            zmm0_2 = var_5e4_1
            zmm0_2[0] = zmm0_2[0] f- var_590_1:4.d
            uint32_t var_5e4_2 = zmm0_2[0]
            zmm0_2 = var_5e0_1
            zmm0_2[0] = zmm0_2[0] f- rax_48
            uint32_t var_5e0_2 = zmm0_2[0]
            uint32_t (* rax_66)[0x4]
            float zmm6_3[0x4]
            rax_66, zmm6_3, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_1c8, &var_118)
            zmm5_2[0] = zmm9.d
            float zmm2_3[0x4] = *rax_66
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            uint128_t zmm4_3
            zmm4_3.d = var_4f8_2.d
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm5_3[0] = arg_20[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_5e8_2.d
            var_568_1.o = zmm0
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_528 = zmm5_3
            zmm9 = _mm_mul_ps(zmm0, zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xe1)
            zmm4_3.d = var_5e4_2.d
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3.d = var_5e0_2[0]
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_538 = zmm4_3
            zmm9 = _mm_add_ps(zmm9, _mm_mul_ps(zmm0, zmm4_3))
            uint128_t zmm3_3
            zmm3_3.d = zmm0_1.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
            zmm3_3.d = var_590_1:4.d.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3.d = rax_48.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_518 = zmm3_3
            zmm9 = _mm_add_ps(_mm_add_ps(zmm9, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = rax_66[1]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_568_1.o = zmm9
            zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9, zmm0), zmm1), zmm2_3)
            zmm2_3 = rax_66[2]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_4f8_2.o = zmm9
            zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9, zmm0), zmm1), zmm2_3)
            zmm2_3 = rax_66[3]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            int64_t var_4e8_1
            var_4e8_1.o = zmm9
            zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            var_4c8_2.o = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9, zmm0), zmm1), zmm2_3)
            zmm9 = 0x322bcc77
            
            if (var_1cd != 0)
                zmm2_3 = data_142d4cc00
                var_608.q = 0
                zmm6_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                var_600.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6_3 = _mm_mul_ps(zmm6_3, zmm8)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_3 = _mm_add_ps(_mm_add_ps(zmm6_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_3.d f* zmm6_3[0]
                zmm7 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] <= 9.99999994e-09f)
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm5_3 = zmm12
                else
                    zmm4_3 = zmm14
                    zmm3_3.d = zmm7.d
                    zmm2_3 = zmm4_3
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm4_3.d
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2_3[0] = zmm2_3[0] - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm5_3[0]
                    zmm4_3.d = zmm4_3.d f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6_3[0]
                    zmm1[0] = zmm1[0] * zmm7[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8[0]
                
                float var_5d8 = zmm0.d
                float var_5d4_1 = zmm1[0]
                float var_5d0_1 = zmm5_3[0]
                int32_t var_3dc_1 = 0
                float var_3e8[0x4]
                var_3e8[0] = zmm0.d
                var_608.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_600.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm5_3[0]
                var_608.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3e8 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(r14 + 0x100))
                var_600.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(r14 + 0xe0))
                zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(r14 + 0xd0))))
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm14[0]
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm14[0] = zmm14[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm14[0]
                zmm2_3 = data_142d4cc00
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1[0]
                zmm1 = zmm4_3
                zmm0.d = zmm14.d f- zmm3_3.d
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_4e8_1.o)
                zmm4_3.d = zmm4_3.d f+ zmm1[0]
                zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                zmm7[0] = zmm7[0] f* zmm4_3.d
                float var_5d0_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_4c8_2.o)
                zmm6_3[0] = zmm6_3[0] f* zmm4_3.d
                var_5d8 = zmm7[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3.d
                float var_5d4_2 = zmm6_3[0]
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_4f8_2.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_568_1.o)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                
                if (zmm6_3[0] <= 9.99999994e-09f)
                    zmm5_3 = zmm12
                    zmm6_3 = zmm12
                    zmm7 = zmm12
                else
                    zmm3_3.d = zmm6_3.d
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm14[0]
                    zmm0.d = zmm4_3.d f* zmm4_3.d
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm14[0] = zmm14[0] - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm14[0]
                    zmm4_3.d = zmm4_3.d f+ zmm0.d
                    zmm1 = zmm4_3
                    zmm1[0] = zmm1[0] f* zmm4_3.d
                    zmm3_3.d = zmm3_3.d f* zmm1[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm14.d f- zmm3_3.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_3.d = zmm4_3.d f+ zmm1[0]
                    arg_10 = zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                    zmm6_3[0] = zmm6_3[0] f* zmm4_3.d
                    zmm7[0] = zmm7[0] f* zmm4_3.d
                
                int32_t var_43c_1 = 0
                float var_448[0x4]
                var_448[0] = zmm5_3[0]
                int32_t var_628_8 = zmm11.d
                zmm2_3 = _mm_shuffle_ps(var_448, var_448, 0xe1)
                zmm2_3[0] = zmm6_3[0]
                var_608.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm7[0]
                var_600.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_448 = zmm2_3
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(r14 + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(r14 + 0x160))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(r14 + 0x170))
                zmm2_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(r14 + 0x150))
                zmm3_3 = _mm_add_ps(_mm_add_ps(zmm3_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0.d = zmm3_3.d f* zmm3_3.d
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3.d = zmm3_3.d f* zmm3_3.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm1[0] = zmm1[0] f+ zmm3_3.d
                zmm3_3.d = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm14[0]
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm14[0] = zmm14[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm14[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1[0]
                zmm14[0] = zmm14[0] f- zmm3_3.d
                zmm0.d = zmm4_3.d f* zmm14[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                arg_10 = zmm4_3.d
                int32_t var_140
                int32_t* rax_67
                rax_67, r9_13, zmm9, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_140, &var_5d8, &var_5d8, r9_13)
                void* var_250
                int32_t* rdx_34 = var_250
                var_5d8.q = *rax_67
                zmm2_3 = rax_67[2]
                int32_t var_25c
                var_250 = &rdx_34[sx.q(var_25c)]
                *rdx_34 = var_5d8.d
                void* var_238
                float* rdx_35 = var_238
                int32_t var_244
                var_238 = &rdx_35[sx.q(var_244)]
                *rdx_35 = var_5d4_2[0]
                void* var_220
                float* rdx_36 = var_220
                zmm7 = var_428_1.o
                zmm8 = var_438_1.o
                int32_t var_22c
                var_220 = &rdx_36[sx.q(var_22c)]
                *rdx_36 = zmm2_3[0]
                rbx_7 = var_1cc
            
            if (rbx_7 != 0)
                zmm2_3 = data_142d4cc20
                var_608.q = 0
                zmm6_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                var_600.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6_3 = _mm_mul_ps(zmm6_3, zmm8)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_3 = _mm_add_ps(_mm_add_ps(zmm6_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_3.d f* zmm6_3[0]
                zmm7 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm7[0] = zmm7[0] f+ zmm0.d
                
                if (zmm7[0] f<= zmm9.d)
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm5_3 = zmm12
                else
                    zmm4_3 = zmm14
                    zmm3_3.d = zmm7.d
                    zmm2_3 = zmm4_3
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm4_3.d
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2_3[0] = zmm2_3[0] - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm5_3[0]
                    zmm4_3.d = zmm4_3.d f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6_3[0]
                    zmm1[0] = zmm1[0] * zmm7[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8[0]
                
                float var_5c8 = zmm0.d
                float var_5c4_1 = zmm1[0]
                float var_5c0_1 = zmm5_3[0]
                int32_t var_3cc_1 = 0
                float var_3d8[0x4]
                var_3d8[0] = zmm0.d
                var_608.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3d8, var_3d8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_600.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm5_3[0]
                var_608.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3d8 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(r14 + 0x100))
                var_600.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(r14 + 0xe0))
                zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(r14 + 0xd0))))
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm14[0]
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm14[0] = zmm14[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm14[0]
                zmm2_3 = data_142d4cc20
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1[0]
                zmm1 = zmm4_3
                zmm0.d = zmm14.d f- zmm3_3.d
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm4_3.d = zmm4_3.d f+ zmm1[0]
                arg_10 = zmm4_3.d
                zmm0.d = zmm4_3.d f* zmm6_3[0]
                zmm1 = zmm4_3
                zmm4_3.d = zmm4_3.d f* zmm5_3[0]
                int32_t var_5c4_2 = zmm0.d
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_438_1.o)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                var_5c8 = zmm1[0]
                int32_t var_5c0_2 = zmm4_3.d
                zmm0 = __mulps_xmmps_memps(zmm0, var_428_1.o)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm10)
                zmm5_3 = _mm_add_ps(_mm_add_ps(zmm5_3, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                
                if (zmm6_3[0] f<= zmm9.d)
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm4_3 = zmm12
                else
                    zmm3_3.d = zmm6_3.d
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm14[0]
                    zmm0.d = zmm4_3.d f* zmm4_3.d
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm14[0] = zmm14[0] - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm14[0]
                    zmm4_3.d = zmm4_3.d f+ zmm0.d
                    zmm1 = zmm4_3
                    zmm1[0] = zmm1[0] f* zmm4_3.d
                    zmm3_3.d = zmm3_3.d f* zmm1[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm14.d f- zmm3_3.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_3.d = zmm4_3.d f+ zmm1[0]
                    arg_10 = zmm4_3.d
                    zmm1 = zmm4_3
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm1[0] = zmm1[0] * zmm6_3[0]
                    zmm4_3.d = zmm4_3.d f* zmm7[0]
                
                int32_t var_3bc_1 = 0
                float var_3c8[0x4]
                var_3c8[0] = zmm0.d
                int32_t var_628_9 = zmm11.d
                zmm2_3 = _mm_shuffle_ps(var_3c8, var_3c8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_608.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm4_3.d
                var_600.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3c8 = zmm2_3
                zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(r14 + 0x170))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(r14 + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(r14 + 0x160))
                zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(r14 + 0x150))))
                zmm0.d = zmm7.d f* zmm7[0]
                zmm5_3 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm14[0]
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm14[0] = zmm14[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm14[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                zmm1[0] = zmm1[0] f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1[0]
                zmm14[0] = zmm14[0] f- zmm3_3.d
                zmm0.d = zmm4_3.d f* zmm14[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1 = zmm4_3
                arg_10 = zmm4_3.d
                zmm1[0] = zmm1[0] * zmm7[0]
                zmm0.d = zmm4_3.d f* zmm6_3[0]
                zmm4_3.d = zmm4_3.d f* zmm5_3[0]
                float var_478 = zmm1[0]
                int32_t var_474_1 = zmm0.d
                int32_t var_470_1 = zmm4_3.d
                int32_t var_128[0x4]
                int32_t* rax_72
                rax_72, zmm12 = sub_140ae34d0(&var_128, &var_478, &var_5c8, r9_13)
                void* var_208
                int32_t* rdx_38 = var_208
                var_5c8.q = *rax_72
                int32_t rax_73 = rax_72[2]
                int32_t var_214
                var_208 = &rdx_38[sx.q(var_214)]
                *rdx_38 = var_5c8.d
                void* var_1f0
                float* rdx_39 = var_1f0
                int32_t var_1fc
                var_1f0 = &rdx_39[sx.q(var_1fc)]
                *rdx_39 = var_5c4_2[0]
                void* var_1d8
                int32_t* rdx_40 = var_1d8
                int32_t var_1e4
                var_1d8 = &rdx_40[sx.q(var_1e4)]
                *rdx_40 = rax_73
        
        rbx_1 += r10_2
        cond:3_1 = var_570 + 1 s< *(arg2 + 0x40)
        rdi_1 += r11_5
        rsi = var_540
        result = result_1
        r9_6 = var_388_1
        r10_2 = var_368_1
        r11_5 = var_380_1
        var_570 += 1
        r8_2 += sx.q(var_5f8) << 2
    while (cond:3_1)

return result
