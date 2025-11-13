// 函数: sub_140705630
// 地址: 0x140705630
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
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rsi_1

if ((not.b(rax_6) & 1) == 0)
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
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
uint128_t* rdi_1

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
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i_3 = rax_13 & 0x7fff
uint32_t arg_18 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
uint128_t* rbx_1

if ((rax_14.b & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
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
    
    rbx_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_10 = rax_19
rax_19.b = not.b(rax_19.b)
uint128_t* r13_1

if ((rax_19.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t var_618 = 0xffffffff
uint128_t* var_610 = nullptr
int32_t var_608 = 0
sub_140767bd0(&var_618, arg2)
void var_338
sub_140742680(&var_338, arg2)
void* rax_22 = sub_140d3c6e0(r14)
void* var_5a8 = rax_22
void* rax_23
int64_t rax_24
void* rdx_7

if (rax_22 != 0)
    rax_23 = sub_142591550()
    rdx_7 = *(rax_22 + 0x10)
    rax_24 = sx.q(*(rax_23 + 0x38))

if (rax_22 == 0 || rax_24.d s> *(rdx_7 + 0x38)
        || *(*(rdx_7 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
    var_5a8 = nullptr

void* rax_26 = *(r14 + 0x58)
int64_t* var_5b0 = nullptr
void* var_5e8 = nullptr
int64_t* r12_1

if (rax_26 != 0)
    r12_1 = *(**(rax_26 + 0x58) + (sx.q(r14[0x1a]) << 3))
    var_5b0 = r12_1
    
    if (r14[0x86].b != 0)
        void* rax_29 = sub_140d3c6e0(r14)
        void* rax_31
        void* rcx_12
        int64_t rdx_8
        
        if (rax_29 != 0)
            rax_31 = sub_142591550() + 0x30
            rcx_12 = *(rax_29 + 0x10)
            rdx_8 = sx.q(*(rax_31 + 8))
        
        void* rax_32
        
        if (rax_29 == 0 || rdx_8.d s> *(rcx_12 + 0x38)
                || *(*(rcx_12 + 0x30) + (rdx_8 << 3)) != rax_31 || *(rax_29 + 0x430) == 0)
            rax_32 = &r12_1[0x27]
        else
            rax_32 = sub_141f66050(rax_29, r14[0x1a])
        
        var_5e8 = rax_32

int64_t* rcx_15

if (rax_26 == 0 || r12_1 == 0)
    rcx_15 = nullptr
else
    rcx_15 = r12_1[3]

void* r12_2 = *(r14 + 0x70)
int32_t rax_34 = (*(*rcx_15 + 0x58))(rcx_15)
uint128_t zmm11 = 0x3f800000
int32_t var_580 = 0
uint128_t zmm0
zmm0.d = 1f f/ r14[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_34)
int32_t var_560 = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_554 = result.d

if (*(arg2 + 0x40) s> 0)
    uint128_t* r8_3 = var_610
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm12 = zx.o(0)
    result = zx.q(arg_10.b) << 2
    uint64_t r9_6 = zx.q(arg_18.b) << 2
    uint64_t r10_2 = zx.q(arg_20.b) << 2
    uint64_t r11_5 = zx.q(rax_6) << 2
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    uint64_t result_1 = result
    uint64_t var_360_1 = r9_6
    uint64_t var_388_1 = r10_2
    uint64_t var_368_1 = r11_5
    int32_t var_41c_1 = 0x3f800000
    bool cond:3_1
    
    do
        uint128_t* rdx_11 = r13_1
        r13_1 += result
        uint64_t rdx_12 = zx.q(*rsi_1)
        int32_t var_350_1 = (*rdx_11).d
        uint64_t var_4e4_1 = (_mm_unpacklo_ps(*rdi_1, (*rbx_1).q)).q
        int32_t var_628_1 = (*r8_3).d
        
        if (rdx_12.d s< 0 || rdx_12.d s> var_554)
            int32_t var_344_1 = 0
            uint64_t var_374_1 = (_mm_unpacklo_ps(zmm11, zmm12.q)).q
            int32_t var_36c_1 = 0
            rdx_12 = zx.q(0.o.d)
        
        uint32_t rbx_5 = (rdx_12 * 3).d
        int32_t rax_42 = (*(*rcx_15 + 0x68))(rcx_15, zx.q(rbx_5))
        int64_t r8_4 = *rcx_15
        int32_t rax_43 = (*(r8_4 + 0x68))(rcx_15, zx.q(rbx_5 + 1), r8_4)
        int64_t r8_5 = *rcx_15
        int32_t rax_44 = (*(r8_5 + 0x68))(rcx_15, zx.q(rbx_5 + 2), r8_5)
        int64_t var_134
        int64_t* rax_46 = sub_1423162c0(&var_134, var_5a8, rax_42, var_5b0, var_5e8, 
            ((sx.q(*(r12_2 + 0x34)) + 4) << 4) + r12_2)
        zmm11 = zx.o(*rax_46)
        int32_t rax_47 = rax_46[1].d
        int64_t var_188
        int64_t* rax_53 = sub_1423162c0(&var_188, var_5a8, rax_43, var_5b0, var_5e8, 
            ((sx.q(*(r12_2 + 0x34)) + 4) << 4) + r12_2)
        zmm10 = zx.o(*rax_53)
        int32_t rax_54 = rax_53[1].d
        int64_t var_17c
        int64_t* rax_60
        int512_t zmm9_1
        rax_60, zmm9_1 = sub_1423162c0(&var_17c, var_5a8, rax_44, var_5b0, var_5e8, 
            ((sx.q(*(r12_2 + 0x34)) + 4) << 4) + r12_2)
        zmm9_1.o = zx.o(*rax_60)
        int32_t rax_61 = rax_60[1].d
        int64_t var_170
        int64_t* rax_68 = sub_1423162c0(&var_170, var_5a8, rax_42, var_5b0, var_5e8, 
            (((sx.q(*(r12_2 + 0x34)) ^ 1) + 4) << 4) + r12_2)
        int64_t zmm0_1 = *rax_68
        int32_t rax_69 = rax_68[1].d
        int64_t var_164
        int64_t* rax_76 = sub_1423162c0(&var_164, var_5a8, rax_43, var_5b0, var_5e8, 
            (((sx.q(*(r12_2 + 0x34)) ^ 1) + 4) << 4) + r12_2)
        zmm15 = zx.o(*rax_76)
        int32_t rax_77 = rax_76[1].d
        uint64_t var_508_1 = zmm15.q
        int64_t var_158
        int64_t* rax_84
        int32_t r9_13
        uint128_t zmm9_2
        rax_84, r9_13, zmm9_2 = sub_1423162c0(&var_158, var_5a8, rax_44, var_5b0, var_5e8, 
            (((sx.q(*(r12_2 + 0x34)) ^ 1) + 4) << 4) + r12_2)
        zmm14 = var_350_1
        zmm13 = var_4e4_1:4.d
        float zmm3_1[0x4] = zmm13
        zmm0 = zx.o(*rax_84)
        uint128_t zmm6_1
        zmm6_1.d = zmm14.d f* zmm0.d
        uint64_t var_4d8_2 = zmm0.q
        zmm0 = zmm0.q:4.d
        uint128_t zmm7_1
        zmm7_1.d = zmm14.d f* zmm0.d
        int64_t var_578_1 = 0
        arg_20 = zmm0.d
        zmm0 = rax_84[1].d
        uint128_t zmm8_1
        zmm8_1.d = zmm14.d f* zmm0.d
        int32_t var_570_1 = 0
        int32_t var_5f8_1 = zmm0.d
        zmm0 = zmm15.q:4.d
        zmm3_1[0] = zmm3_1[0] f* zmm0.d
        int32_t var_5f4_1 = zmm0.d
        zmm0 = rax_77
        int32_t var_5f0_1 = zmm0.d
        uint128_t zmm2_1
        zmm2_1.d = zmm13.d f* zmm0.d
        zmm0 = zx.o(zmm0_1)
        uint64_t var_590_1 = zmm0.q
        uint128_t zmm4_1
        zmm4_1.d = zmm13.d f* zmm15.d
        zmm15 = var_4e4_1.d
        uint128_t zmm1
        zmm1.d = zmm15.d f* var_590_1:4.d
        uint128_t zmm5_1
        zmm5_1.d = zmm15.d f* zmm0.d
        zmm0.d = zmm15.d f* rax_69
        zmm1.d = zmm1.d f+ zmm3_1[0]
        zmm5_1.d = zmm5_1.d f+ zmm4_1.d
        zmm0.d = zmm0.d f+ zmm2_1.d
        zmm7_1.d = zmm7_1.d f+ zmm1.d
        zmm5_1.d = zmm5_1.d f+ zmm6_1.d
        zmm8_1.d = zmm8_1.d f+ zmm0.d
        float var_428[0x4]
        var_428[0] = zmm5_1.d
        zmm3_1 = _mm_shuffle_ps(var_428, var_428, 0xe1)
        zmm3_1[0] = zmm7_1.d
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
        zmm3_1[0] = zmm8_1.d
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(r14 + 0x180))
        zmm6_1 = zmm10
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(r14 + 0x160))
        zmm7_1 = zmm9_2
        var_428 = zmm3_1
        uint32_t var_4c8_1 = zmm10.d
        zmm10 = rax_61
        zmm2_1 = _mm_add_ps(zmm2_1, 
            __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), *(r14 + 0x170)))
        zmm0 = var_4c8_1
        zmm9_2 = zmm9_2.d
        zmm1 =
            _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(r14 + 0x150)))
        zmm8_1 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
        zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
        arg_10 = zmm0.d
        int32_t var_558_1 = zmm10.d
        zmm2_1 = _mm_add_ps(zmm2_1, zmm1)
        int32_t var_55c_1 = zmm9_2.d
        zmm1 = rax_54
        arg_18 = zmm1.d
        uint64_t var_448_1 = zmm8_1.q
        uint32_t var_5a0_1 = zmm11.d
        var_578_1.o = zmm2_1
        uint64_t var_568_1 = zmm6_1.q
        uint64_t var_438_1 = zmm7_1.q
        char var_1d0
        char var_1cf
        
        if (var_1d0 != 0 || var_1cf != 0)
            void* var_328
            int32_t* rdx_22 = var_328
            zmm3_1 = zmm13
            zmm11 = rax_47
            zmm2_1.d = zmm13.d f* zmm0.d
            int32_t var_40c_1 = 0x3f800000
            zmm13.d = zmm13.d f* zmm1.d
            var_618.q = 0
            zmm3_1[0] = zmm3_1[0] f* zmm6_1.d
            var_610.d = 0
            zmm0.d = zmm15.d f* var_5a0_1
            zmm1.d = zmm15.d f* zmm8_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm4_1.d = zmm14.d f* zmm9_2.d
            zmm3_1[0] = zmm3_1[0] f+ zmm1.d
            zmm5_1.d = zmm14.d f* zmm7_1.d
            zmm15.d = zmm15.d f* zmm11.d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            zmm14.d = zmm14.d f* zmm10.d
            zmm5_1.d = zmm5_1.d f+ zmm3_1[0]
            zmm13.d = zmm13.d f+ zmm15.d
            zmm2_1.d = zmm4_1.d
            zmm4_1 = var_578_1:4.d
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm5_1.d
            zmm5_1 = var_570_1
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm14.d = zmm14.d f+ zmm13.d
            zmm13 = var_628_1
            zmm2_1.d = zmm14.d
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_418 = zmm2_1
            zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(r14 + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(r14 + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(r14 + 0xe0))
            zmm3_1 = _mm_add_ps(zmm3_1, zmm0)
            int32_t var_334
            var_328 = &rdx_22[sx.q(var_334)]
            zmm1 = _mm_add_ps(zmm1, 
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(r14 + 0xd0)))
            zmm2_1 = var_578_1.d
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
            zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm1.d = zmm3_1.d f- zmm2_1.d
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            zmm0.d = zmm0.d f- zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f- zmm5_1.d
            zmm1.d = zmm1.d f* zmm13.d
            zmm0.d = zmm0.d f* zmm13.d
            zmm1.d = zmm1.d f+ zmm2_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm13.d
            zmm0.d = zmm0.d f+ zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f+ zmm5_1.d
            *rdx_22 = zmm1.d
            void* var_310
            int32_t* rdx_23 = var_310
            int32_t var_31c
            var_310 = &rdx_23[sx.q(var_31c)]
            *rdx_23 = zmm0.d
            void* var_2f8
            float* rdx_24 = var_2f8
            int32_t var_304
            var_2f8 = &rdx_24[sx.q(var_304)]
            *rdx_24 = zmm3_1[0]
            
            if (var_1cf != 0)
                void* var_2e0
                int32_t* rdx_25 = var_2e0
                zmm1.d = zmm1.d f- zmm2_1.d
                zmm0.d = zmm0.d f- zmm4_1.d
                zmm2_1 = var_560
                zmm3_1[0] = zmm3_1[0] f- zmm5_1.d
                zmm1.d = zmm1.d f* zmm2_1.d
                int32_t var_2ec
                var_2e0 = &rdx_25[sx.q(var_2ec)]
                zmm0.d = zmm0.d f* zmm2_1.d
                *rdx_25 = zmm1.d
                void* var_2c8
                int32_t* rdx_26 = var_2c8
                zmm3_1[0] = zmm3_1[0] f* zmm2_1.d
                int32_t var_2d4
                var_2c8 = &rdx_26[sx.q(var_2d4)]
                *rdx_26 = zmm0.d
                float* var_2b0
                float* rdx_27 = var_2b0
                int32_t var_2bc
                var_2b0 = &rdx_27[sx.q(var_2bc)]
                *rdx_27 = zmm3_1[0]
            
            zmm0 = arg_10
        else
            zmm11 = rax_47
        
        void* var_638_6
        char var_1ce
        
        if (var_1ce == 0)
            zmm11 = 0x3f800000
        else
            zmm3_1 = zx.o(var_568_1)
            zmm3_1[0] = zmm3_1[0] f- zmm7_1.d
            zmm1.d = arg_18.d f- zmm10.d
            zmm15 = data_143dbb200
            zmm5_1.d = var_5a0_1.d f- zmm9_2.d
            zmm4_1.d = zmm0.d f- zmm9_2.d
            zmm2_1 = zmm11
            zmm11 = 0x3f800000
            zmm6_1.d = zmm8_1.d f- zmm7_1.d
            zmm2_1.d = zmm2_1.d f- zmm10.d
            zmm8_1.d = zmm5_1.d f* zmm1.d
            zmm5_1.d = zmm5_1.d f* zmm3_1[0]
            zmm0.d = zmm6_1.d f* zmm1.d
            zmm7_1.d = zmm3_1.d f* zmm2_1.d
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm7_1.d = zmm7_1.d f- zmm0.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm6_1.d = zmm6_1.d f- zmm5_1.d
            zmm8_1.d = zmm8_1.d f- zmm0.d
            zmm2_1.d = zmm7_1.d f* zmm7_1.d
            zmm1.d = zmm6_1.d f* zmm6_1.d
            zmm0.d = zmm8_1.d f* zmm8_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1.d
            int32_t var_4a0_1
            
            if (not(zmm2_1.d f!= 1f))
                var_4a0_1 = zmm6_1.d
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm3_1 = zx.o(0)
                zmm3_1[0] = zmm2_1.d
                zmm5_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1.d = zmm3_1.d f* zmm0.d
                zmm2_1.d = 0.5f f- zmm1.d
                zmm0.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1.d = zmm5_1.d f* zmm5_1.d
                zmm3_1[0] = zmm3_1[0] f* zmm1.d
                zmm4_1.d = 0.5f - zmm3_1[0]
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                int32_t var_628_2 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm7_1.d
                zmm5_1.d = zmm5_1.d f* zmm6_1.d
                zmm1.d = zmm1.d f* zmm8_1.d
                zmm7_1 = zmm0
                var_4a0_1 = zmm5_1.d
                zmm6_1 = zmm5_1
                zmm8_1 = zmm1
            else
                zmm7_1 = data_143dbb1f8
                zmm6_1 = zmm15
                zmm8_1 = data_143dbb1fc
                var_4a0_1 = zmm6_1.d
            
            zmm3_1 = zx.o(0)
            uint64_t var_5c0 = (_mm_unpacklo_ps(zmm7_1, zmm8_1.q)).q
            int32_t var_5b8_1 = var_4a0_1
            int32_t var_3fc_1 = 0
            zmm2_1.d = zmm7_1.d
            var_618.q = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm8_1.d
            var_610.d = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm2_1.d = zmm6_1.d
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_408 = zmm2_1
            zmm7_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(r14 + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(r14 + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(r14 + 0xe0))
            zmm7_1 = _mm_add_ps(_mm_add_ps(zmm7_1, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(r14 + 0xd0))))
            zmm0.d = zmm7_1.d f* zmm7_1.d
            zmm6_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
            zmm5_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
            zmm1.d = zmm6_1.d f* zmm6_1.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm3_1[0] = zmm1.d
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm1.d = zmm3_1.d f* zmm0.d
            zmm2_1.d = 0.5f f- zmm1.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm2_1.d = rax_69.d f- var_5f8_1
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1.d = zmm4_1.d f* zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm1.d
            zmm0.d = 0.5f - zmm3_1[0]
            zmm1.d = zmm4_1.d f* zmm0.d
            zmm0 = zx.o(var_4d8_2)
            zmm4_1.d = zmm4_1.d f+ zmm1.d
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            zmm7_1.d = zmm7_1.d f* zmm4_1.d
            var_5c0:4.d = zmm6_1.d
            zmm6_1.d = var_590_1:4.d.d f- arg_20
            int32_t var_5b8_2 = zmm5_1.d
            int32_t var_628_3 = zmm4_1.d
            zmm5_1.d = zmm0_1.d f- zmm0.d
            var_5c0.d = zmm7_1.d
            zmm3_1 = var_5f4_1
            zmm4_1.d = var_508_1.d f- zmm0.d
            zmm3_1[0] = zmm3_1[0] f- arg_20
            zmm0 = zmm6_1
            zmm1.d = var_5f0_1.d f- var_5f8_1
            zmm9_2 = zmm5_1
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm3_1[0]
            zmm0.d = zmm0.d f* zmm1.d
            zmm7_1.d = zmm3_1.d f* zmm2_1.d
            zmm6_1.d = zmm6_1.d f- zmm5_1.d
            zmm9_2.d = zmm9_2.d f* zmm1.d
            zmm7_1.d = zmm7_1.d f- zmm0.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm1.d = zmm6_1.d f* zmm6_1.d
            zmm9_2.d = zmm9_2.d f- zmm0.d
            zmm2_1.d = zmm7_1.d f* zmm7_1.d
            zmm0.d = zmm9_2.d f* zmm9_2.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1.d
            
            if (not(zmm2_1.d f== 1f))
                if (zmm2_1.d f>= 9.99999994e-09f)
                    zmm3_1 = zmm2_1
                    zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1[0])
                    zmm3_1[0] = zmm3_1[0] * 0.5f
                    zmm0.d = zmm4_1.d f* zmm4_1.d
                    zmm1.d = zmm3_1.d f* zmm0.d
                    zmm2_1.d = 0.5f f- zmm1.d
                    zmm0.d = zmm4_1.d f* zmm2_1.d
                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                    zmm1.d = zmm4_1.d f* zmm4_1.d
                    zmm3_1[0] = zmm3_1[0] f* zmm1.d
                    zmm0.d = 0.5f - zmm3_1[0]
                    zmm1.d = zmm4_1.d f* zmm0.d
                    zmm4_1.d = zmm4_1.d f+ zmm1.d
                    int32_t var_628_4 = zmm4_1.d
                    zmm7_1.d = zmm7_1.d f* zmm4_1.d
                    zmm9_2.d = zmm9_2.d f* zmm4_1.d
                    zmm6_1.d = zmm6_1.d f* zmm4_1.d
                else
                    zmm7_1 = data_143dbb1f8
                    zmm6_1 = zmm15
                    zmm9_2 = data_143dbb1fc
            
            zmm3_1 = zx.o(0)
            int32_t var_3bc_1 = 0
            zmm2_1.d = zmm7_1.d
            var_638_6.d = 0x3f800000
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm9_2.d
            var_618.q = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm2_1.d = zmm6_1.d
            var_610.d = 0
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_3c8 = zmm2_1
            zmm7_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(r14 + 0x160))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(r14 + 0x150))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(r14 + 0x170))
            zmm7_1 = _mm_add_ps(_mm_add_ps(zmm7_1, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(r14 + 0x180))))
            zmm0.d = zmm7_1.d f* zmm7_1.d
            zmm5_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
            zmm6_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
            zmm1.d = zmm6_1.d f* zmm6_1.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm3_1[0] = zmm1.d
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm1.d = zmm3_1.d f* zmm0.d
            zmm2_1.d = 0.5f f- zmm1.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1.d = zmm4_1.d f* zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm1.d
            zmm8_1.d = 0.5f - zmm3_1[0]
            zmm0.d = zmm4_1.d f* zmm8_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            int32_t var_628_5 = zmm4_1.d
            zmm1.d = zmm4_1.d f* zmm7_1.d
            zmm0.d = zmm4_1.d f* zmm6_1.d
            zmm4_1.d = zmm4_1.d f* zmm5_1.d
            int32_t var_498 = zmm1.d
            int32_t var_494_1 = zmm0.d
            int32_t var_490_1 = zmm4_1.d
            int32_t var_14c
            int32_t* rax_93
            rax_93, r9_13, zmm12 = sub_140ae34d0(&var_14c, &var_498, &var_5c0, r9_13)
            void* var_298
            int32_t* rdx_29 = var_298
            var_5c0 = *rax_93
            zmm1 = var_5c0:4.d
            zmm2_1 = rax_93[2]
            zmm7_1 = zx.o(var_438_1)
            zmm8_1 = zx.o(var_448_1)
            zmm6_1 = zx.o(var_568_1)
            zmm9_2 = var_55c_1
            zmm10 = var_558_1
            int32_t var_2a4
            var_298 = &rdx_29[sx.q(var_2a4)]
            *rdx_29 = var_5c0.d.d
            void* var_280
            int32_t* rdx_30 = var_280
            int32_t var_28c
            var_280 = &rdx_30[sx.q(var_28c)]
            *rdx_30 = zmm1.d
            void* var_268
            int32_t* rdx_31 = var_268
            int32_t var_274
            var_268 = &rdx_31[sx.q(var_274)]
            *rdx_31 = zmm2_1.d
        
        char var_1cc
        char rbx_7 = var_1cc
        char var_1cd
        
        if (var_1cd != 0 || rbx_7 != 0)
            zmm6_1.d = zmm6_1.d f- zmm8_1.d
            zmm1.d = arg_18.d f- rax_47
            zmm2_1.d = arg_10.d f- var_5a0_1
            zmm9_2.d = zmm9_2.d f- var_5a0_1
            zmm10.d = zmm10.d f- rax_47
            uint64_t var_568_2 = zmm6_1.q
            data_142d3f660
            zmm7_1.d = zmm7_1.d f- zmm8_1.d
            int128_t var_1c8
            __builtin_memset(&var_1c8, 0, 0x20)
            int32_t var_53c_1 = 0
            int32_t var_52c_1 = 0
            int32_t var_51c_1 = 0
            int128_t var_1a8
            __builtin_memcpy(&var_1a8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_98)[0x4]
            float zmm6_2[0x4]
            float zmm7_2[0x4]
            float zmm8_2[0x4]
            float zmm9_3
            float zmm10_1[0x4]
            rax_98, zmm6_2, zmm7_2, zmm8_2, zmm9_3, zmm10_1 = sub_140631b10(&var_1c8, &var_118)
            float var_538[0x4]
            var_538[0] = zmm9_3
            float zmm2_2[0x4] = *rax_98
            uint128_t zmm4_2
            zmm4_2.d = zmm2_1.d[0]
            float zmm0_2[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            float zmm15_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float zmm5_2[0x4] = _mm_shuffle_ps(var_538, var_538, 0xe1)
            _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm5_2[0] = zmm7_2[0]
            zmm4_2.d = zx.o(var_568_2)[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm5_2[0] = zmm10_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm15_1 = _mm_mul_ps(zmm15_1, zmm5_2)
            _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm4_2.d = zmm1.d[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm4_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            zmm15_1 = _mm_add_ps(zmm15_1, zmm0_2)
            uint128_t var_548_1 = zmm4_2
            float var_528[0x4]
            var_528[0] = var_5a0_1[0]
            float zmm3_2[0x4] = _mm_shuffle_ps(var_528, var_528, 0xe1)
            zmm3_2[0] = zmm8_2[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = rax_47[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            float var_528_1[0x4] = zmm3_2
            _mm_add_ps(_mm_add_ps(zmm15_1, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_2)
            zmm2_2 = rax_98[1]
            zmm10_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm10_1 = _mm_mul_ps(zmm10_1, zmm5_2)
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm4_2)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa), zmm3_2)
            int32_t var_53c_2 = 0
            int32_t var_52c_2 = 0
            int32_t var_51c_2 = 0
            _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm10_1, zmm0_2), zmm1_1), 
                _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2))
            zmm2_2 = rax_98[2]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm7_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            zmm7_2 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_2, zmm5_2), zmm0_2), zmm1_1), 
                zmm2_2)
            zmm2_2 = rax_98[3]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm8_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm8_2 = _mm_mul_ps(zmm8_2, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
            zmm8_2 = _mm_add_ps(zmm8_2, zmm0_2)
            zmm2_2 = _mm_mul_ps(zmm2_2, zmm6_2)
            zmm0_2 = arg_20
            zmm0_2[0] = zmm0_2[0] f- var_590_1:4.d
            var_438_1.o = zmm7_2
            zmm8_2 = _mm_add_ps(zmm8_2, zmm1_1)
            zmm1_1 = zx.o(zmm0_1)
            zmm1_1[0]
            arg_20 = zmm0_2[0]
            zmm0_2 = var_5f8_1
            zmm0_2[0] = zmm0_2[0] f- rax_69
            zmm8_2 = _mm_add_ps(zmm8_2, zmm2_2)
            float var_5f8_2 = zmm0_2[0]
            zmm0_2 = zx.o(var_508_1)
            zmm0_2[0] = zmm0_2[0] - zmm1_1[0]
            var_448_1.o = zmm8_2
            int64_t var_508_2 = zmm0_2.q
            zmm0_2 = var_5f4_1
            zmm0_2[0] = zmm0_2[0] f- var_590_1:4.d
            float var_5f4_2 = zmm0_2[0]
            zmm0_2 = var_5f0_1
            zmm0_2[0] = zmm0_2[0] f- rax_69
            float var_5f0_2 = zmm0_2[0]
            uint32_t (* rax_99)[0x4]
            float zmm6_3[0x4]
            float zmm7_3[0x4]
            float zmm8_3[0x4]
            float zmm9_4[0x4]
            rax_99, zmm6_3, zmm7_3, zmm8_3, zmm9_4, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_1c8, &var_118)
            zmm5_2[0] = zmm9_4[0]
            float zmm2_3[0x4] = *rax_99
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            uint128_t zmm4_3
            zmm4_3.d = var_508_2.d
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm5_3[0] = arg_20.d
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_5f8_2[0]
            var_578_1.o = zmm0
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_538 = zmm5_3
            zmm9_4 = _mm_mul_ps(zmm0, zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xe1)
            zmm4_3.d = var_5f4_2.d
            _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3.d = var_5f0_2.d
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            uint128_t var_548 = zmm4_3
            zmm9_4 = _mm_add_ps(zmm9_4, _mm_mul_ps(zmm0, zmm4_3))
            uint128_t zmm3_3
            zmm3_3.d = zmm0_1.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
            zmm3_3.d = var_590_1:4.d.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3.d = rax_69.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_528 = zmm3_3
            zmm9_4 = _mm_add_ps(_mm_add_ps(zmm9_4, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = rax_99[1]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_578_1.o = zmm9_4
            zmm9_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm9_4 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9_4, zmm0), zmm1), zmm2_3)
            zmm2_3 = rax_99[2]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_508_2.o = zmm9_4
            zmm9_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm9_4 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9_4, zmm0), zmm1), zmm2_3)
            zmm2_3 = rax_99[3]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            int64_t var_4f8_1
            var_4f8_1.o = zmm9_4
            zmm9_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            var_4d8_2.o = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9_4, zmm0), zmm1), zmm2_3)
            zmm9_4 = 0x322bcc77
            
            if (var_1cd != 0)
                zmm2_3 = data_142d4cc00
                var_618.q = 0
                zmm6_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7_3)
                var_610.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6_3 = _mm_mul_ps(zmm6_3, zmm8_3)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_3 = _mm_add_ps(_mm_add_ps(zmm6_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_3.d f* zmm6_3[0]
                zmm7_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                zmm8_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                zmm1.d = zmm7_3.d f* zmm7_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8_3.d f* zmm8_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm5_3 = zmm12
                else
                    zmm3_3.d = zmm1.d
                    zmm2_3 = zmm14
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm14.d
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1.d = zmm3_3.d f* zmm0.d
                    zmm2_3[0] = zmm2_3[0] f- zmm1.d
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm1.d
                    zmm4_3.d = zmm14.d f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm0.d = zmm5_3.d f* zmm6_3[0]
                    zmm1.d = zmm5_3.d f* zmm7_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8_3[0]
                
                float var_5e0 = zmm0.d
                int32_t var_5dc_1 = zmm1.d
                float var_5d8_1 = zmm5_3[0]
                int32_t var_3ec_1 = 0
                float var_3f8[0x4]
                var_3f8[0] = zmm0.d
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3f8, var_3f8, 0xe1)
                zmm2_3[0] = zmm1.d
                var_610.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm5_3[0]
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3f8 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(r14 + 0x100))
                var_610.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(r14 + 0xe0))
                zmm8_3 = zmm14
                zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(r14 + 0xd0))))
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm1.d = zmm6_3.d f* zmm6_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm3_3.d = zmm1.d
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1.d = zmm3_3.d f* zmm0.d
                zmm8_3[0] = zmm8_3[0] f- zmm1.d
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm2_3 = data_142d4cc00
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1.d = zmm4_3.d f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1.d
                zmm0.d = zmm8_3.d f- zmm3_3.d
                zmm1.d = zmm4_3.d f* zmm0.d
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_4f8_1.o)
                zmm4_3.d = zmm4_3.d f+ zmm1.d
                zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                zmm7_3[0] = zmm7_3[0] f* zmm4_3.d
                float var_5d8_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_4d8_2.o)
                zmm6_3[0] = zmm6_3[0] f* zmm4_3.d
                var_5e0 = zmm7_3[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3.d
                float var_5dc_2 = zmm6_3[0]
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_508_2.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_578_1.o)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm1.d = zmm6_3.d f* zmm6_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm5_3 = zmm12
                    zmm6_3 = zmm12
                    zmm7_3 = zmm12
                else
                    zmm3_3.d = zmm1.d
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                    zmm0.d = zmm4_3.d f* zmm4_3.d
                    zmm1.d = zmm3_3.d f* zmm0.d
                    zmm8_3[0] = zmm8_3[0] f- zmm1.d
                    zmm0.d = zmm4_3.d f* zmm8_3[0]
                    zmm4_3.d = zmm4_3.d f+ zmm0.d
                    zmm1.d = zmm4_3.d f* zmm4_3.d
                    zmm3_3.d = zmm3_3.d f* zmm1.d
                    zmm0.d = zmm8_3.d f- zmm3_3.d
                    zmm1.d = zmm4_3.d f* zmm0.d
                    zmm4_3.d = zmm4_3.d f+ zmm1.d
                    arg_10 = zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f* zmm4_3.d
                    zmm6_3[0] = zmm6_3[0] f* zmm4_3.d
                    zmm7_3[0] = zmm7_3[0] f* zmm4_3.d
                
                int32_t var_44c_1 = 0
                float var_458[0x4]
                var_458[0] = zmm5_3[0]
                var_638_6.d = zmm11.d
                zmm2_3 = _mm_shuffle_ps(var_458, var_458, 0xe1)
                zmm2_3[0] = zmm6_3[0]
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm7_3[0]
                var_610.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_458 = zmm2_3
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(r14 + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(r14 + 0x160))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(r14 + 0x170))
                zmm2_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(r14 + 0x150))
                zmm3_3 = _mm_add_ps(_mm_add_ps(zmm3_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0.d = zmm3_3.d f* zmm3_3.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3.d = zmm3_3.d f* zmm3_3.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm1.d = zmm1.d f+ zmm3_3.d
                zmm3_3.d = zmm1.d
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1.d = zmm3_3.d f* zmm0.d
                zmm8_3[0] = zmm8_3[0] f- zmm1.d
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1.d = zmm4_3.d f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1.d
                zmm8_3[0] = zmm8_3[0] f- zmm3_3.d
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                arg_10 = zmm4_3.d
                int32_t var_140
                int32_t* rax_100
                rax_100, r9_13, zmm9_4, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_140, &var_5e0, &var_5e0, r9_13)
                void* var_250
                int32_t* rdx_35 = var_250
                var_5e0.q = *rax_100
                zmm2_3 = rax_100[2]
                int32_t var_25c
                var_250 = &rdx_35[sx.q(var_25c)]
                *rdx_35 = var_5e0.d
                void* var_238
                int32_t* rdx_36 = var_238
                int32_t var_244
                var_238 = &rdx_36[sx.q(var_244)]
                *rdx_36 = var_5dc_2.d
                void* var_220
                float* rdx_37 = var_220
                zmm7_3 = var_438_1.o
                zmm8_3 = var_448_1.o
                int32_t var_22c
                var_220 = &rdx_37[sx.q(var_22c)]
                *rdx_37 = zmm2_3[0]
                rbx_7 = var_1cc
            
            if (rbx_7 != 0)
                zmm2_3 = data_142d4cc20
                var_618.q = 0
                zmm6_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7_3)
                var_610.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                zmm6_3 = _mm_mul_ps(zmm6_3, zmm8_3)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_3 = _mm_add_ps(_mm_add_ps(zmm6_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_3.d f* zmm6_3[0]
                zmm7_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                zmm8_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                zmm1.d = zmm7_3.d f* zmm7_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8_3.d f* zmm8_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= zmm9_4[0])
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm5_3 = zmm12
                else
                    zmm3_3.d = zmm1.d
                    zmm2_3 = zmm14
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm14.d
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1.d = zmm3_3.d f* zmm0.d
                    zmm2_3[0] = zmm2_3[0] f- zmm1.d
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm1.d
                    zmm4_3.d = zmm14.d f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3.d
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm0.d = zmm5_3.d f* zmm6_3[0]
                    zmm1.d = zmm5_3.d f* zmm7_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8_3[0]
                
                int32_t var_5d0 = zmm0.d
                int32_t var_5cc_1 = zmm1.d
                float var_5c8_1 = zmm5_3[0]
                int32_t var_3dc_1 = 0
                float var_3e8[0x4]
                var_3e8[0] = zmm0.d
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
                zmm2_3[0] = zmm1.d
                var_610.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm5_3[0]
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3e8 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(r14 + 0x100))
                var_610.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(r14 + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(r14 + 0xe0))
                zmm8_3 = zmm14
                zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(r14 + 0xd0))))
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm1.d = zmm6_3.d f* zmm6_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm3_3.d = zmm1.d
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1.d = zmm3_3.d f* zmm0.d
                zmm8_3[0] = zmm8_3[0] f- zmm1.d
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm2_3 = data_142d4cc20
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1.d = zmm4_3.d f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1.d
                zmm0.d = zmm8_3.d f- zmm3_3.d
                zmm1.d = zmm4_3.d f* zmm0.d
                zmm4_3.d = zmm4_3.d f+ zmm1.d
                arg_10 = zmm4_3.d
                zmm0.d = zmm4_3.d f* zmm6_3[0]
                zmm1 = zmm4_3
                zmm4_3.d = zmm4_3.d f* zmm5_3[0]
                int32_t var_5cc_2 = zmm0.d
                zmm1.d = zmm1.d f* zmm7_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_448_1.o)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                var_5d0 = zmm1.d
                int32_t var_5c8_2 = zmm4_3.d
                zmm0 = __mulps_xmmps_memps(zmm0, var_438_1.o)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm10)
                zmm5_3 = _mm_add_ps(_mm_add_ps(zmm5_3, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm1.d = zmm6_3.d f* zmm6_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= zmm9_4[0])
                    zmm0 = zmm12
                    zmm1 = zmm12
                    zmm4_3 = zmm12
                else
                    zmm3_3.d = zmm1.d
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                    zmm0.d = zmm4_3.d f* zmm4_3.d
                    zmm1.d = zmm3_3.d f* zmm0.d
                    zmm8_3[0] = zmm8_3[0] f- zmm1.d
                    zmm0.d = zmm4_3.d f* zmm8_3[0]
                    zmm4_3.d = zmm4_3.d f+ zmm0.d
                    zmm1.d = zmm4_3.d f* zmm4_3.d
                    zmm3_3.d = zmm3_3.d f* zmm1.d
                    zmm0.d = zmm8_3.d f- zmm3_3.d
                    zmm1.d = zmm4_3.d f* zmm0.d
                    zmm4_3.d = zmm4_3.d f+ zmm1.d
                    arg_10 = zmm4_3.d
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm1.d = zmm4_3.d f* zmm6_3[0]
                    zmm4_3.d = zmm4_3.d f* zmm7_3[0]
                
                int32_t var_3cc_1 = 0
                float var_3d8[0x4]
                var_3d8[0] = zmm0.d
                var_638_6.d = zmm11.d
                zmm2_3 = _mm_shuffle_ps(var_3d8, var_3d8, 0xe1)
                zmm2_3[0] = zmm1.d
                var_618.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm4_3.d
                var_610.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3d8 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(r14 + 0x160))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(r14 + 0x150))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(r14 + 0x170))
                zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(r14 + 0x180))))
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm1.d = zmm6_3.d f* zmm6_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm3_3.d = zmm1.d
                zmm4_3 = _mm_rsqrt_ss(zmm3_3.d, zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                zmm0.d = zmm4_3.d f* zmm4_3.d
                zmm1.d = zmm3_3.d f* zmm0.d
                zmm8_3[0] = zmm8_3[0] f- zmm1.d
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                zmm1.d = zmm4_3.d f* zmm4_3.d
                zmm3_3.d = zmm3_3.d f* zmm1.d
                zmm8_3[0] = zmm8_3[0] f- zmm3_3.d
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3.d = zmm4_3.d f+ zmm0.d
                arg_10 = zmm4_3.d
                zmm1.d = zmm4_3.d f* zmm7_3[0]
                zmm0.d = zmm4_3.d f* zmm6_3[0]
                zmm4_3.d = zmm4_3.d f* zmm5_3[0]
                int32_t var_488 = zmm1.d
                int32_t var_484_1 = zmm0.d
                int32_t var_480_1 = zmm4_3.d
                int32_t var_128[0x4]
                int32_t* rax_105
                rax_105, zmm12 = sub_140ae34d0(&var_128, &var_488, &var_5d0, r9_13)
                void* var_208
                int32_t* rdx_39 = var_208
                var_5d0.q = *rax_105
                int32_t rax_106 = rax_105[2]
                int32_t var_214
                var_208 = &rdx_39[sx.q(var_214)]
                *rdx_39 = var_5d0.d
                void* var_1f0
                int32_t* rdx_40 = var_1f0
                int32_t var_1fc
                var_1f0 = &rdx_40[sx.q(var_1fc)]
                *rdx_40 = var_5cc_2.d
                void* var_1d8
                int32_t* rdx_41 = var_1d8
                int32_t var_1e4
                var_1d8 = &rdx_41[sx.q(var_1e4)]
                *rdx_41 = rax_106
        
        rbx_1 += r9_6
        cond:3_1 = var_580 + 1 s< *(arg2 + 0x40)
        rdi_1 += r10_2
        rsi_1 += r11_5
        result = result_1
        r9_6 = var_360_1
        r10_2 = var_388_1
        r11_5 = var_368_1
        var_580 += 1
        r8_3 += sx.q(var_608) << 2
    while (cond:3_1)

return result
