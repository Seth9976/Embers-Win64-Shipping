// 函数: sub_1406fdde0
// 地址: 0x1406fdde0
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
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rbx_1

if ((not.b(rax_6) & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    rbx_1 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
uint128_t* r13_1

if ((rax_10.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i_3 = rax_13 & 0x7fff
uint32_t arg_18 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
float (* r12_1)[0x4]

if ((rax_14.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
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
    
    r12_1 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint32_t rax_19 = rcx_5 u>> 0xf
int32_t i_4 = rcx_5 & 0x7fff
uint32_t arg_10 = rax_19
rax_19.b = not.b(rax_19.b)
uint128_t* r15_1

if ((rax_19.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
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
    
    r15_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t var_628 = 0xffffffff
uint128_t* var_620 = nullptr
int32_t var_618 = 0
sub_140767bd0(&var_628, arg2)
void var_2f8
sub_140742680(&var_2f8, arg2)
void* rax_22 = sub_140d3c6e0(rdi)
void* var_5d0 = rax_22
void* rax_23
int64_t rax_24
void* rdx_7

if (rax_22 != 0)
    rax_23 = sub_142591550()
    rdx_7 = *(rax_22 + 0x10)
    rax_24 = sx.q(*(rax_23 + 0x38))

if (rax_22 == 0 || rax_24.d s> *(rdx_7 + 0x38)
        || *(*(rdx_7 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
    var_5d0 = nullptr

void* rax_26 = *(rdi + 0x58)
int64_t* var_548 = nullptr
void* var_5f8 = nullptr
int64_t* r14_1

if (rax_26 != 0)
    r14_1 = *(**(rax_26 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    var_548 = r14_1
    
    if (rdi[0x86].b != 0)
        void* rax_29 = sub_140d3c6e0(rdi)
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
            rax_32 = &r14_1[0x27]
        else
            rax_32 = sub_141f66050(rax_29, rdi[0x1a])
        
        var_5f8 = rax_32

int64_t* rcx_15

if (rax_26 == 0 || r14_1 == 0)
    rcx_15 = nullptr
else
    rcx_15 = r14_1[3]

void* r14_2 = *(rdi + 0x70)
int32_t rax_34 = (*(*rcx_15 + 0x58))(rcx_15)
uint128_t zmm10 = 0x3f800000
int32_t var_588 = 0
uint128_t zmm0
zmm0.d = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_34)
int32_t var_554 = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_558 = result.d

if (*(arg2 + 0x40) s> 0)
    uint128_t* r8_3 = var_620
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    int128_t zmm12 = zx.o(0)
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
    uint64_t var_398_1 = r9_6
    uint64_t var_3a8_1 = r10_2
    uint64_t var_3a0_1 = r11_5
    int32_t var_41c_1 = 0x3f800000
    bool cond:4_1
    
    do
        uint128_t* rdx_11 = r15_1
        float (* rcx_19)[0x4] = r12_1
        r15_1 += result
        r12_1 += r9_6
        uint128_t* rax_39 = r13_1
        r13_1 += r10_2
        uint64_t rdx_12 = zx.q(*rbx_1)
        int32_t var_310_1 = (*rdx_11).d
        uint64_t var_4e4_1 = (_mm_unpacklo_ps(*rax_39, (*rcx_19)[0].q)).q
        zmm0 = *r8_3
        int32_t var_638_1 = zmm0.d
        
        if (rdx_12.d s< 0 || rdx_12.d s> var_558)
            int32_t var_304_1 = 0
            uint64_t var_374_1 = (_mm_unpacklo_ps(zmm10, zmm12.q)).q
            int32_t var_36c_1 = 0
            zmm0 = 0.o
            rdx_12 = zx.q(zmm0.d)
        
        uint32_t rbx_5 = (rdx_12 * 3).d
        int32_t rax_42 = (*(*rcx_15 + 0x68))(zmm0, zx.q(rbx_5))
        int64_t r8_4 = *rcx_15
        int32_t rax_44 = (*(r8_4 + 0x68))(rcx_15, zx.q(rbx_5 + 1), r8_4)
        int64_t r8_5 = *rcx_15
        int32_t rax_46 = (*(r8_5 + 0x68))(rcx_15, zx.q(rbx_5 + 2), r8_5)
        int64_t var_134
        int64_t* rax_48 = sub_1423162c0(&var_134, var_5d0, rax_42, var_548, var_5f8, 
            ((sx.q(*(r14_2 + 0x34)) + 4) << 4) + r14_2)
        zmm11 = zx.o(*rax_48)
        int32_t rax_49 = rax_48[1].d
        int64_t var_188
        int64_t* rax_55 = sub_1423162c0(&var_188, var_5d0, rax_44, var_548, var_5f8, 
            ((sx.q(*(r14_2 + 0x34)) + 4) << 4) + r14_2)
        zmm10 = zx.o(*rax_55)
        int32_t rax_56 = rax_55[1].d
        int64_t var_17c
        int64_t* rax_62
        int512_t zmm9_1
        rax_62, zmm9_1 = sub_1423162c0(&var_17c, var_5d0, rax_46, var_548, var_5f8, 
            ((sx.q(*(r14_2 + 0x34)) + 4) << 4) + r14_2)
        zmm9_1.o = zx.o(*rax_62)
        int32_t rax_63 = rax_62[1].d
        int64_t var_170
        int64_t* rax_70 = sub_1423162c0(&var_170, var_5d0, rax_42, var_548, var_5f8, 
            (((sx.q(*(r14_2 + 0x34)) ^ 1) + 4) << 4) + r14_2)
        int64_t zmm0_1 = *rax_70
        int32_t rax_71 = rax_70[1].d
        int64_t var_164
        int64_t* rax_78 = sub_1423162c0(&var_164, var_5d0, rax_44, var_548, var_5f8, 
            (((sx.q(*(r14_2 + 0x34)) ^ 1) + 4) << 4) + r14_2)
        zmm15 = zx.o(*rax_78)
        int32_t rax_79 = rax_78[1].d
        uint64_t var_4d8_1 = zmm15.q
        int64_t var_158
        int64_t* rax_86
        int32_t r9_13
        float zmm9_2[0x4]
        rax_86, r9_13, zmm9_2 = sub_1423162c0(&var_158, var_5d0, rax_46, var_548, var_5f8, 
            (((sx.q(*(r14_2 + 0x34)) ^ 1) + 4) << 4) + r14_2)
        zmm14 = var_310_1
        zmm13 = var_4e4_1:4.d
        uint64_t var_4b8_1 = zmm15.q
        float zmm3_1[0x4] = zmm13
        zmm0 = zx.o(*rax_86)
        int32_t rax_87 = rax_86[1].d
        uint128_t zmm8_1
        zmm8_1.d = zmm14.d f* zmm0.d
        uint64_t var_4f8_2 = zmm0.q
        zmm0 = zmm0.q:4.d
        zmm14[0] = zmm14[0] f* zmm0.d
        int64_t var_578_1 = 0
        arg_18 = zmm0.d
        zmm0 = rax_87
        zmm14[0] = zmm14[0] f* zmm0.d
        int32_t var_570_1 = 0
        arg_20 = zmm0.d
        zmm0 = var_4b8_1:4.d
        uint128_t zmm4_1
        zmm4_1.d = zmm13.d f* zmm0.d
        int32_t var_608_1 = zmm0.d
        zmm0 = rax_79
        zmm3_1[0] = zmm3_1[0] f* zmm0.d
        int32_t var_604_1 = zmm0.d
        zmm0 = zx.o(zmm0_1)
        uint64_t var_598_1 = zmm0.q
        uint128_t zmm5_1
        zmm5_1.d = zmm13.d f* zmm15.d
        zmm15 = var_4e4_1.d
        float zmm1[0x4] = zmm15
        zmm1[0] = zmm1[0] f* var_598_1:4.d
        uint128_t zmm2_1
        zmm2_1.d = zmm15.d f* zmm0.d
        zmm0.d = zmm15.d f* rax_71
        zmm4_1.d = zmm4_1.d f+ zmm1[0]
        zmm5_1.d = zmm5_1.d f+ zmm2_1.d
        zmm3_1[0] = zmm3_1[0] f+ zmm0.d
        zmm14[0] = zmm14[0] f+ zmm4_1.d
        zmm8_1.d = zmm8_1.d f+ zmm5_1.d
        zmm14[0] = zmm14[0] + zmm3_1[0]
        float var_428[0x4]
        var_428[0] = zmm8_1.d
        zmm3_1 = _mm_shuffle_ps(var_428, var_428, 0xe1)
        zmm3_1[0] = zmm14[0]
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
        zmm3_1[0] = zmm14[0]
        zmm8_1 = zmm11
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        float zmm7_1[0x4] = zmm9_2
        var_428 = zmm3_1
        zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), *(rdi + 0x170))
        float zmm6_1[0x4] = zmm10
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(rdi + 0x150))
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(rdi + 0x180))
        zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(rdi + 0x160))
        zmm2_1 = _mm_add_ps(zmm2_1, zmm0)
        uint32_t var_5a8_1 = zmm11.d
        zmm11 = rax_56
        zmm0 = rax_63
        zmm1 = _mm_add_ps(zmm1, zmm3_1)
        uint32_t var_4a8_1 = zmm10.d
        zmm9_2 = zmm9_2.d
        zmm8_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55)
        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
        zmm2_1 = _mm_add_ps(zmm2_1, zmm1)
        zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
        zmm1 = var_4a8_1
        int32_t var_600_1 = zmm11.d
        arg_10 = zmm1[0]
        int32_t var_5d4_1 = zmm0.d
        var_578_1.o = zmm2_1
        float var_550_1 = zmm9_2[0]
        uint64_t var_3c8_1 = zmm8_1.q
        int64_t var_560_1 = zmm6_1.q
        int64_t var_438_1 = zmm7_1.q
        char var_190
        char var_18f
        
        if (var_190 != 0 || var_18f != 0)
            void* var_2e8
            float* rdx_22 = var_2e8
            zmm10 = rax_49
            zmm2_1.d = zmm13.d f* zmm1[0]
            zmm3_1 = zmm13
            int32_t var_40c_1 = 0x3f800000
            zmm14[0] = zmm14[0] f* zmm0.d
            var_628.q = 0
            zmm3_1[0] = zmm3_1[0] * zmm6_1[0]
            zmm1 = zmm15
            var_620.d = 0
            zmm1[0] = zmm1[0] f* zmm8_1.d
            zmm0.d = zmm15.d f* var_5a8_1
            zmm3_1[0] = zmm3_1[0] + zmm1[0]
            zmm4_1.d = zmm14.d f* zmm9_2[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm13.d = zmm13.d f* zmm11.d
            zmm11 = var_638_1
            zmm5_1.d = zmm14.d f* zmm7_1[0]
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            zmm15.d = zmm15.d f* zmm10.d
            zmm5_1.d = zmm5_1.d f+ zmm3_1[0]
            zmm13.d = zmm13.d f+ zmm15.d
            zmm2_1.d = zmm4_1.d
            zmm4_1 = var_578_1:4.d
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm5_1.d
            zmm5_1 = var_570_1
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm14[0] = zmm14[0] f+ zmm13.d
            zmm2_1.d = zmm14[0]
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_418 = zmm2_1
            zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(rdi + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(rdi + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(rdi + 0xe0))
            zmm3_1 = _mm_add_ps(zmm3_1, zmm0)
            int32_t var_2f4
            var_2e8 = &rdx_22[sx.q(var_2f4)]
            zmm1 = _mm_add_ps(zmm1, 
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(rdi + 0xd0)))
            zmm2_1 = var_578_1.d
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
            zmm1 = zmm3_1
            zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm1[0] = zmm1[0] f- zmm2_1.d
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            zmm0.d = zmm0.d f- zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f- zmm5_1.d
            zmm1[0] = zmm1[0] f* zmm11.d
            zmm0.d = zmm0.d f* zmm11.d
            zmm1[0] = zmm1[0] f+ zmm2_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm11.d
            zmm0.d = zmm0.d f+ zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f+ zmm5_1.d
            *rdx_22 = zmm1[0]
            void* var_2d0
            int32_t* rdx_23 = var_2d0
            int32_t var_2dc
            var_2d0 = &rdx_23[sx.q(var_2dc)]
            *rdx_23 = zmm0.d
            void* var_2b8
            float* rdx_24 = var_2b8
            int32_t var_2c4
            var_2b8 = &rdx_24[sx.q(var_2c4)]
            *rdx_24 = zmm3_1[0]
            
            if (var_18f != 0)
                void* var_2a0
                float* rdx_25 = var_2a0
                zmm1[0] = zmm1[0] f- zmm2_1.d
                zmm0.d = zmm0.d f- zmm4_1.d
                zmm2_1 = var_554
                zmm3_1[0] = zmm3_1[0] f- zmm5_1.d
                zmm1[0] = zmm1[0] f* zmm2_1.d
                int32_t var_2ac
                var_2a0 = &rdx_25[sx.q(var_2ac)]
                zmm0.d = zmm0.d f* zmm2_1.d
                *rdx_25 = zmm1[0]
                void* var_288
                int32_t* rdx_26 = var_288
                zmm3_1[0] = zmm3_1[0] f* zmm2_1.d
                int32_t var_294
                var_288 = &rdx_26[sx.q(var_294)]
                *rdx_26 = zmm0.d
                void* var_270
                float* rdx_27 = var_270
                int32_t var_27c
                var_270 = &rdx_27[sx.q(var_27c)]
                *rdx_27 = zmm3_1[0]
            
            zmm1 = arg_10
            zmm0 = var_5d4_1
        else
            zmm10 = rax_49
        
        void* var_648_6
        char var_18e
        
        if (var_18e == 0)
            zmm10 = 0x3f800000
        else
            zmm3_1 = zx.o(var_560_1)
            zmm6_1 = zmm8_1
            zmm6_1[0] = zmm6_1[0] - zmm7_1[0]
            zmm14 = data_143dbb200
            zmm3_1[0] = zmm3_1[0] - zmm7_1[0]
            zmm15 = data_143dbb1fc
            zmm5_1.d = var_5a8_1.d f- zmm9_2[0]
            zmm4_1 = zmm1
            zmm1 = var_600_1
            zmm4_1.d = zmm4_1.d f- zmm9_2[0]
            zmm1[0] = zmm1[0] f- zmm0.d
            zmm7_1 = zmm3_1
            zmm2_1.d = zmm10.d f- zmm0.d
            zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
            zmm0.d = zmm6_1.d f* zmm1[0]
            zmm7_1[0] = zmm7_1[0] f* zmm2_1.d
            zmm8_1.d = zmm5_1.d f* zmm1[0]
            zmm7_1[0] = zmm7_1[0] f- zmm0.d
            zmm5_1.d = zmm5_1.d f* zmm3_1[0]
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm6_1[0] = zmm6_1[0] f- zmm5_1.d
            zmm2_1.d = zmm7_1.d f* zmm7_1[0]
            zmm8_1.d = zmm8_1.d f- zmm0.d
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm0.d = zmm8_1.d f* zmm8_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm6_1[0]
            float var_480_1
            
            if (not(zmm2_1.d f!= 1f))
                var_480_1 = zmm6_1[0]
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm3_1 = zx.o(0)
                zmm3_1[0] = zmm2_1.d
                zmm5_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm3_1[0] = zmm3_1[0] f* zmm0.d
                zmm2_1.d = 0.5f - zmm3_1[0]
                zmm0.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1.d
                zmm3_1[0] = zmm3_1[0] * zmm1[0]
                zmm4_1.d = 0.5f - zmm3_1[0]
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                int32_t var_638_2 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm7_1[0]
                zmm5_1.d = zmm5_1.d f* zmm6_1[0]
                zmm1[0] = zmm1[0] f* zmm8_1.d
                zmm7_1 = zmm0
                var_480_1 = zmm5_1.d
                zmm6_1 = zmm5_1
                zmm8_1 = zmm1
            else
                zmm7_1 = data_143dbb1f8
                zmm6_1 = zmm14
                var_480_1 = zmm6_1[0]
                zmm8_1 = zmm15
            
            zmm3_1 = zx.o(0)
            uint64_t var_5b8 = (_mm_unpacklo_ps(zmm7_1, zmm8_1.q)).q
            float var_5b0_1 = var_480_1
            int32_t var_3fc_1 = 0
            zmm2_1.d = zmm7_1[0]
            var_628.q = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm8_1.d
            var_620.d = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm2_1.d = zmm6_1[0]
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_408 = zmm2_1
            zmm7_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(rdi + 0x100))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(rdi + 0xf0))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(rdi + 0xe0))
            zmm7_1 = _mm_add_ps(_mm_add_ps(zmm7_1, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(rdi + 0xd0))))
            zmm0.d = zmm7_1.d f* zmm7_1[0]
            zmm6_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
            zmm5_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm6_1[0] = zmm6_1[0] f+ zmm0.d
            zmm3_1[0] = zmm6_1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm0.d
            zmm2_1.d = 0.5f - zmm3_1[0]
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm2_1.d = rax_71.d f- arg_20
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1 = zmm4_1
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm3_1[0] = zmm3_1[0] * zmm1[0]
            zmm1 = zmm4_1
            zmm0.d = 0.5f - zmm3_1[0]
            zmm3_1 = var_598_1:4.d
            zmm3_1[0] = zmm3_1[0] f- arg_18
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm0 = zx.o(var_4f8_2)
            zmm4_1.d = zmm4_1.d f+ zmm1[0]
            zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
            zmm7_1[0] = zmm7_1[0] f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            int32_t var_638_3 = zmm4_1.d
            var_5b8:4.d = zmm6_1[0]
            zmm4_1.d = zmm0_1.d f- zmm0.d
            zmm6_1 = zx.o(var_4d8_1)
            var_5b8.d = zmm7_1[0]
            int32_t var_5b0_2 = zmm5_1.d
            zmm6_1[0] = zmm6_1[0] f- zmm0.d
            zmm5_1.d = var_604_1.d f- arg_20
            zmm1 = var_608_1
            zmm7_1 = zmm2_1
            zmm1[0] = zmm1[0] f- arg_18
            zmm2_1.d = zmm2_1.d f* zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm3_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm1[0]
            zmm0.d = zmm5_1.d f* zmm3_1[0]
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            zmm4_1.d = zmm4_1.d f* zmm1[0]
            zmm7_1[0] = zmm7_1[0] f- zmm0.d
            zmm5_1.d = zmm5_1.d f- zmm2_1.d
            zmm6_1[0] = zmm6_1[0] f- zmm4_1.d
            zmm0.d = zmm7_1.d f* zmm7_1[0]
            zmm2_1.d = zmm5_1.d f* zmm5_1.d
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm6_1[0]
            
            if (not(zmm2_1.d f== 1f))
                if (zmm2_1.d f>= 9.99999994e-09f)
                    zmm3_1 = zmm2_1
                    zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1[0])
                    zmm3_1[0] = zmm3_1[0] * 0.5f
                    zmm0.d = zmm4_1.d f* zmm4_1.d
                    zmm3_1[0] = zmm3_1[0] f* zmm0.d
                    zmm2_1.d = 0.5f - zmm3_1[0]
                    zmm0.d = zmm4_1.d f* zmm2_1.d
                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                    zmm1 = zmm4_1
                    zmm1[0] = zmm1[0] f* zmm4_1.d
                    zmm3_1[0] = zmm3_1[0] * zmm1[0]
                    zmm1 = zmm4_1
                    zmm0.d = 0.5f - zmm3_1[0]
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_1.d = zmm4_1.d f+ zmm1[0]
                    int32_t var_638_4 = zmm4_1.d
                    zmm7_1[0] = zmm7_1[0] f* zmm4_1.d
                    zmm5_1.d = zmm5_1.d f* zmm4_1.d
                    zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
                else
                    zmm7_1 = data_143dbb1f8
                    zmm5_1 = zmm15
                    zmm6_1 = zmm14
            
            zmm3_1 = zx.o(0)
            int32_t var_3ac_1 = 0
            zmm2_1.d = zmm7_1[0]
            var_648_6.d = 0x3f800000
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
            zmm2_1.d = zmm5_1.d
            var_628.q = 0
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
            zmm2_1.d = zmm6_1[0]
            var_620.d = 0
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            uint128_t var_3b8 = zmm2_1
            zmm7_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), *(rdi + 0x180))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), *(rdi + 0x170))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), *(rdi + 0x160))
            zmm7_1 = _mm_add_ps(_mm_add_ps(zmm7_1, zmm0), 
                _mm_add_ps(zmm1, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), *(rdi + 0x150))))
            zmm0.d = zmm7_1.d f* zmm7_1[0]
            zmm5_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
            zmm6_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] f+ zmm0.d
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm6_1[0] = zmm6_1[0] f+ zmm0.d
            zmm3_1[0] = zmm6_1[0]
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm0.d
            zmm2_1.d = 0.5f - zmm3_1[0]
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm1 = zmm4_1
            zmm1[0] = zmm1[0] f* zmm4_1.d
            zmm3_1[0] = zmm3_1[0] * zmm1[0]
            zmm8_1.d = 0.5f - zmm3_1[0]
            zmm0.d = zmm4_1.d f* zmm8_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm7_1[0] = zmm7_1[0] f* zmm4_1.d
            zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm4_1.d
            float var_478 = zmm7_1[0]
            float var_474_1 = zmm6_1[0]
            int32_t var_470_1 = zmm5_1.d
            int32_t var_638_5 = zmm4_1.d
            int32_t var_14c
            int32_t* rax_95
            rax_95, r9_13, zmm10, zmm12 = sub_140ae34d0(&var_14c, &var_478, &var_5b8, r9_13)
            void* var_258
            int32_t* rdx_29 = var_258
            var_5b8 = *rax_95
            zmm1 = var_5b8:4.d
            zmm2_1 = rax_95[2]
            int32_t var_264
            var_258 = &rdx_29[sx.q(var_264)]
            zmm7_1 = zx.o(var_438_1)
            zmm8_1 = zx.o(var_3c8_1)
            zmm6_1 = zx.o(var_560_1)
            zmm9_2 = var_550_1
            *rdx_29 = var_5b8.d.d
            void* var_240
            float* rdx_30 = var_240
            int32_t var_24c
            var_240 = &rdx_30[sx.q(var_24c)]
            *rdx_30 = zmm1[0]
            void* var_228
            int32_t* rdx_31 = var_228
            int32_t var_234
            var_228 = &rdx_31[sx.q(var_234)]
            *rdx_31 = zmm2_1.d
        
        char var_18c
        char rbx_7 = var_18c
        char var_18d
        
        if (var_18d != 0 || rbx_7 != 0)
            zmm6_1[0] = zmm6_1[0] f- zmm8_1.d
            zmm7_1[0] = zmm7_1[0] f- zmm8_1.d
            zmm12.d = arg_10.d f- var_5a8_1
            zmm14 = var_5d4_1
            int64_t rdx_32 = var_548[0x13]
            uint64_t rcx_45 = zx.q(var_548[0x15].d)
            zmm9_2[0] = zmm9_2[0] f- var_5a8_1
            zmm14[0] = zmm14[0] f- rax_49
            int64_t rax_102 = zx.q(rax_42) * rcx_45
            arg_10 = zmm12.d
            zmm12.d = var_600_1.d f- rax_49
            int64_t var_560_2 = zmm6_1.q
            int32_t var_52c_1 = 0
            int32_t var_51c_1 = 0
            int32_t var_50c_1 = 0
            zmm4_1 = *(rdx_32 + (rax_102 << 3))
            zmm5_1 = *(rdx_32 + (rax_102 << 3) + 4)
            int64_t rax_104 = zx.q(rax_44) * rcx_45
            int32_t var_338_1 = zmm4_1.d
            int32_t var_334_1 = zmm5_1.d
            float var_328_1[0x4] = data_142d3f660
            int64_t var_350_1 = 0
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0x3f800000
            zmm3_1 = *(rdx_32 + (rax_104 << 3) + 4)
            zmm2_1.d = (*(rdx_32 + (rax_104 << 3))).d f- zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f- zmm5_1.d
            int64_t rax_106 = zx.q(rax_46) * rcx_45
            int32_t var_358 = zmm2_1.d
            float var_354_1 = zmm3_1[0]
            zmm1 = *(rdx_32 + (rax_106 << 3) + 4)
            zmm0.d = (*(rdx_32 + (rax_106 << 3))).d f- zmm4_1.d
            zmm1[0] = zmm1[0] f- zmm5_1.d
            int32_t var_348_1 = zmm0.d
            float var_344_1 = zmm1[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_107)[0x4]
            float zmm6_2[0x4]
            float zmm7_2[0x4]
            float zmm8_2[0x4]
            float zmm9_3
            float zmm12_1
            float zmm14_1[0x4]
            rax_107, zmm6_2, zmm7_2, zmm8_2, zmm9_3, zmm12_1, zmm14_1 =
                sub_140631b10(&var_358, &var_118)
            float var_528[0x4]
            var_528[0] = zmm9_3
            float zmm2_2[0x4] = *rax_107
            float var_538[0x4]
            var_538[0] = arg_10.d
            float zmm5_2[0x4] = _mm_shuffle_ps(var_528, var_528, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_538, var_538, 0xe1)
            zmm5_2[0] = zmm7_2[0]
            zmm4_2[0] = var_560_2.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm14_1[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm12_1
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            float zmm15_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            uint128_t zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm15_1 = _mm_mul_ps(zmm15_1, zmm5_2)
            uint128_t zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm15_1 = _mm_add_ps(zmm15_1, zmm0_2)
            float var_518[0x4]
            var_518[0] = var_5a8_1.d
            float zmm3_2[0x4] = _mm_shuffle_ps(var_518, var_518, 0xe1)
            zmm3_2[0] = zmm8_2[0]
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            int32_t var_52c_2 = 0
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = rax_49.d
            int32_t var_51c_2 = 0
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            float var_518_1[0x4] = zmm3_2
            int32_t var_50c_2 = 0
            _mm_add_ps(_mm_add_ps(zmm15_1, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_2)
            zmm2_2 = rax_107[1]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm14_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm14_1, zmm5_2), zmm0_2), zmm1_1), zmm2_2)
            zmm2_2 = rax_107[2]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm7_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa), zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            zmm7_2 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_2, zmm5_2), zmm0_2), zmm1_1), 
                zmm2_2)
            zmm2_2 = rax_107[3]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm8_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x55), zmm5_2)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa), zmm3_2)
            zmm8_2 = _mm_add_ps(zmm8_2, zmm0_2)
            zmm0_2.d = arg_18.d f- var_598_1:4.d
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_2)
            var_438_1.o = zmm7_2
            arg_18 = zmm0_2.d
            zmm0_2.d = arg_20.d f- rax_71
            arg_20 = zmm0_2.d
            zmm0_2.d = var_4d8_1.d f- zmm0_1.d
            var_3c8_1.o = _mm_add_ps(_mm_add_ps(zmm8_2, zmm1_1), zmm2_2)
            uint64_t var_4d8_2 = zmm0_2.q
            zmm0_2.d = var_608_1.d f- var_598_1:4.d
            int32_t var_608_2 = zmm0_2.d
            zmm0_2.d = var_604_1.d f- rax_71
            int32_t var_604_2 = zmm0_2.d
            uint32_t (* rax_108)[0x4]
            float zmm6_3[0x4]
            float zmm7_3[0x4]
            float zmm8_3[0x4]
            float zmm9_4[0x4]
            rax_108, zmm6_3, zmm7_3, zmm8_3, zmm9_4, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_358, &var_118)
            float zmm2_3[0x4] = *rax_108
            zmm5_2[0] = zmm9_4[0]
            zmm4_2[0] = zx.o(var_4d8_2)[0]
            uint128_t zmm3_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_3[0] = arg_18.d
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = var_608_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = arg_20.d
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = var_604_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            zmm3_3 = _mm_mul_ps(zmm3_3, zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_528 = zmm5_3
            var_538 = zmm4_3
            var_578_1.o = _mm_add_ps(zmm3_3, _mm_mul_ps(zmm0, zmm4_3))
            zmm3_3.d = zmm12.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
            zmm3_3.d = var_598_1:4.d.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3.d = rax_71.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_518 = zmm3_3
            zmm0 = _mm_add_ps(_mm_add_ps(var_578_1.o, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = rax_108[1]
            zmm9_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            var_578_1.o = zmm0
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm9_4 = _mm_add_ps(zmm9_4, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_3)
            zmm9_4 = _mm_add_ps(_mm_add_ps(zmm9_4, zmm1), zmm2_3)
            zmm2_3 = rax_108[2]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_4f8_2.o = zmm9_4
            zmm9_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm9_4 = _mm_add_ps(zmm9_4, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_3)
            var_4d8_2.o = _mm_add_ps(_mm_add_ps(zmm9_4, zmm1), zmm2_3)
            zmm12 = zx.o(0)
            zmm2_3 = rax_108[3]
            zmm9_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm9_4 = _mm_add_ps(zmm9_4, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_3)
            int64_t var_4c8_1
            var_4c8_1.o = _mm_add_ps(_mm_add_ps(zmm9_4, zmm1), zmm2_3)
            zmm9_4 = 0x322bcc77
            
            if (var_18d != 0)
                zmm2_3 = data_142d4cc00
                var_628.q = 0
                zmm6_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7_3)
                var_620.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm14)
                zmm6_3 = _mm_mul_ps(zmm6_3, zmm8_3)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_3 = _mm_add_ps(_mm_add_ps(zmm6_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_3.d f* zmm6_3[0]
                zmm7_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                zmm8_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                zmm7_3[0] = zmm7_3[0] * zmm7_3[0]
                zmm7_3[0] = zmm7_3[0] f+ zmm0.d
                zmm0.d = zmm8_3.d f* zmm8_3[0]
                zmm7_3[0] = zmm7_3[0] f+ zmm0.d
                
                if (zmm7_3[0] <= 9.99999994e-09f)
                    zmm6_3 = zx.o(0)
                    zmm7_3 = zx.o(0)
                    zmm8_3 = zx.o(0)
                else
                    zmm4_3 = zmm13
                    zmm3_3.d = zmm7_3.d
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm4_3[0]
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_3[0] = zmm4_3[0] - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm5_3[0]
                    zmm4_3[0] = zmm4_3[0] f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm6_3[0] = zmm6_3[0] * zmm5_3[0]
                    zmm7_3[0] = zmm7_3[0] * zmm5_3[0]
                    zmm8_3[0] = zmm8_3[0] * zmm5_3[0]
                
                float var_5ec_1 = zmm7_3[0]
                float var_5f0 = zmm6_3[0]
                float var_5e8_1 = zmm8_3[0]
                int32_t var_3ec_1 = 0
                float var_3f8[0x4]
                var_3f8[0] = zmm6_3[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3f8, var_3f8, 0xe1)
                zmm2_3[0] = zmm7_3[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm8_3[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3f8 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x100))
                var_620.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0xe0))
                zmm8_3 = zmm13
                zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0xd0))))
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm8_3[0] = zmm8_3[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm2_3 = data_142d4cc00
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3.d = zmm3_3.d f* zmm4_3[0]
                zmm0.d = zmm8_3.d f- zmm3_3.d
                zmm4_3[0] = zmm4_3[0] f* zmm0.d
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_578_1.o)
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                zmm7_3[0] = zmm7_3[0] * zmm4_3[0]
                float var_5e8_2 = zmm5_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_4f8_2.o)
                zmm6_3[0] = zmm6_3[0] * zmm4_3[0]
                var_5f0 = zmm7_3[0]
                zmm5_3 = _mm_add_ps(zmm5_3, zmm0)
                arg_10 = zmm4_3[0]
                float var_5ec_2 = zmm6_3[0]
                zmm5_3 = _mm_add_ps(zmm5_3, 
                    _mm_add_ps(
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_4c8_1.o), 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_4d8_2.o)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                
                if (zmm6_3[0] <= 9.99999994e-09f)
                    zmm5_3 = zx.o(0)
                    zmm6_3 = zx.o(0)
                    zmm7_3 = zx.o(0)
                else
                    zmm3_3.d = zmm6_3.d
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                    zmm0.d = zmm4_3.d f* zmm4_3[0]
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm8_3[0] = zmm8_3[0] - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm8_3[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm4_3[0]
                    zmm0.d = zmm8_3.d f- zmm3_3.d
                    zmm4_3[0] = zmm4_3[0] f* zmm0.d
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm6_3[0] = zmm6_3[0] * zmm4_3[0]
                    zmm7_3[0] = zmm7_3[0] * zmm4_3[0]
                
                int32_t var_43c_1 = 0
                float var_448[0x4]
                var_448[0] = zmm5_3[0]
                var_648_6.d = zmm10.d
                zmm2_3 = _mm_shuffle_ps(var_448, var_448, 0xe1)
                zmm2_3[0] = zmm6_3[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm7_3[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_448 = zmm2_3
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x180))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0x160))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0x170))
                zmm2_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0x150))
                zmm3_3 = _mm_add_ps(_mm_add_ps(zmm3_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0.d = zmm3_3.d f* zmm3_3.d
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3.d = zmm3_3.d f* zmm3_3.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm1[0] = zmm1[0] f+ zmm3_3.d
                zmm3_3.d = zmm1[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm8_3[0] = zmm8_3[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3.d = zmm3_3.d f* zmm4_3[0]
                zmm8_3[0] = zmm8_3[0] f- zmm3_3.d
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                arg_10 = zmm4_3[0]
                int32_t var_140
                int32_t* rax_109
                rax_109, r9_13, zmm9_4, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_140, &var_5f0, &var_5f0, r9_13)
                void* var_210
                int32_t* rdx_36 = var_210
                var_5f0.q = *rax_109
                zmm2_3 = rax_109[2]
                int32_t var_21c
                var_210 = &rdx_36[sx.q(var_21c)]
                *rdx_36 = var_5f0.d
                void* var_1f8
                float* rdx_37 = var_1f8
                int32_t var_204
                var_1f8 = &rdx_37[sx.q(var_204)]
                *rdx_37 = var_5ec_2[0]
                void* var_1e0
                float* rdx_38 = var_1e0
                zmm7_3 = var_438_1.o
                zmm8_3 = var_3c8_1.o
                int32_t var_1ec
                var_1e0 = &rdx_38[sx.q(var_1ec)]
                *rdx_38 = zmm2_3[0]
                rbx_7 = var_18c
            
            if (rbx_7 != 0)
                zmm2_3 = data_142d4cc20
                var_628.q = 0
                zmm6_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7_3)
                var_620.d = 0
                zmm1 = _mm_mul_ps(zmm1, zmm14)
                zmm6_3 = _mm_mul_ps(zmm6_3, zmm8_3)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_3 = _mm_add_ps(_mm_add_ps(zmm6_3, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_3.d f* zmm6_3[0]
                zmm7_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                zmm8_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                zmm7_3[0] = zmm7_3[0] * zmm7_3[0]
                zmm7_3[0] = zmm7_3[0] f+ zmm0.d
                zmm0.d = zmm8_3.d f* zmm8_3[0]
                zmm7_3[0] = zmm7_3[0] f+ zmm0.d
                
                if (zmm7_3[0] <= zmm9_4[0])
                    zmm0 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm5_3 = zx.o(0)
                else
                    zmm4_3 = zmm13
                    zmm3_3.d = zmm7_3.d
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm4_3[0]
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm4_3[0] = zmm4_3[0] - zmm1[0]
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm5_3[0]
                    zmm4_3[0] = zmm4_3[0] f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6_3[0]
                    zmm1[0] = zmm1[0] * zmm7_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8_3[0]
                
                float var_5c8 = zmm0.d
                float var_5c4_1 = zmm1[0]
                float var_5c0_1 = zmm5_3[0]
                int32_t var_3dc_1 = 0
                float var_3e8[0x4]
                var_3e8[0] = zmm0.d
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(var_3e8, var_3e8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm5_3[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3e8 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x100))
                var_620.d = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0xf0))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0xe0))
                zmm8_3 = zmm13
                zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0xd0))))
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm8_3[0] = zmm8_3[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm2_3 = data_142d4cc20
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3.d = zmm3_3.d f* zmm4_3[0]
                zmm0.d = zmm8_3.d f- zmm3_3.d
                zmm4_3[0] = zmm4_3[0] f* zmm0.d
                zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                arg_10 = zmm4_3[0]
                zmm0.d = zmm4_3.d f* zmm6_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                int32_t var_5c4_2 = zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm7_3[0]
                zmm5_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_3c8_1.o)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                var_5c8 = zmm4_3[0]
                float var_5c0_2 = zmm4_3[0]
                zmm0 = __mulps_xmmps_memps(zmm0, var_438_1.o)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm14)
                zmm5_3 = _mm_add_ps(_mm_add_ps(zmm5_3, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)))
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                zmm7_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                
                if (zmm6_3[0] <= zmm9_4[0])
                    zmm0 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm4_3 = zx.o(0)
                else
                    zmm3_3.d = zmm6_3.d
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                    zmm0.d = zmm4_3.d f* zmm4_3[0]
                    zmm1 = zmm3_3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm8_3[0] = zmm8_3[0] - zmm1[0]
                    zmm0.d = zmm4_3.d f* zmm8_3[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm4_3[0]
                    zmm0.d = zmm8_3.d f- zmm3_3.d
                    zmm4_3[0] = zmm4_3[0] f* zmm0.d
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                    zmm1 = zmm4_3
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm1[0] = zmm1[0] * zmm6_3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm7_3[0]
                
                int32_t var_3cc_1 = 0
                float var_3d8[0x4]
                var_3d8[0] = zmm0.d
                var_648_6.d = zmm10.d
                zmm2_3 = _mm_shuffle_ps(var_3d8, var_3d8, 0xe1)
                zmm2_3[0] = zmm1[0]
                var_628.q = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                zmm2_3[0] = zmm4_3[0]
                var_620.d = 0
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                var_3d8 = zmm2_3
                zmm7_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), *(rdi + 0x180))
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), *(rdi + 0x170))
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), *(rdi + 0x160))
                zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm0), 
                    _mm_add_ps(zmm1, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), *(rdi + 0x150))))
                zmm0.d = zmm7_3.d f* zmm7_3[0]
                zmm5_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa)
                zmm6_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
                zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm0.d = zmm5_3.d f* zmm5_3[0]
                zmm6_3[0] = zmm6_3[0] f+ zmm0.d
                zmm3_3.d = zmm6_3[0]
                zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                zmm3_3.d = zmm3_3.d f* zmm8_3[0]
                zmm0.d = zmm4_3.d f* zmm4_3[0]
                zmm1 = zmm3_3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm8_3[0] = zmm8_3[0] - zmm1[0]
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                zmm3_3.d = zmm3_3.d f* zmm4_3[0]
                zmm8_3[0] = zmm8_3[0] f- zmm3_3.d
                zmm0.d = zmm4_3.d f* zmm8_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                arg_10 = zmm4_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm7_3[0]
                zmm0.d = zmm4_3.d f* zmm6_3[0]
                zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                float var_468 = zmm4_3[0]
                int32_t var_464_1 = zmm0.d
                float var_460_1 = zmm4_3[0]
                int32_t var_128[0x4]
                int32_t* rax_114
                rax_114, zmm10, zmm12 = sub_140ae34d0(&var_128, &var_468, &var_5c8, r9_13)
                void* var_1c8
                int32_t* rdx_40 = var_1c8
                var_5c8.q = *rax_114
                int32_t rax_115 = rax_114[2]
                int32_t var_1d4
                var_1c8 = &rdx_40[sx.q(var_1d4)]
                *rdx_40 = var_5c8.d
                void* var_1b0
                float* rdx_41 = var_1b0
                int32_t var_1bc
                var_1b0 = &rdx_41[sx.q(var_1bc)]
                *rdx_41 = var_5c4_2[0]
                void* var_198
                int32_t* rdx_42 = var_198
                int32_t var_1a4
                var_198 = &rdx_42[sx.q(var_1a4)]
                *rdx_42 = rax_115
        
        rbx_1 += r11_5
        cond:4_1 = var_588 + 1 s< *(arg2 + 0x40)
        result = result_1
        r9_6 = var_398_1
        r10_2 = var_3a8_1
        r11_5 = var_3a0_1
        var_588 += 1
        r8_3 += sx.q(var_618) << 2
    while (cond:4_1)

return result
