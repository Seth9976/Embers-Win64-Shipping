// 函数: sub_14070ebb0
// 地址: 0x14070ebb0
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
int32_t* result_3 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
uint64_t result_1 = result_3
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
*(arg2 + 0x10) = &rax[2]
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
uint128_t* r13_1

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

uint32_t var_448 = 0xffffffff
int128_t* var_440 = nullptr
int32_t var_438 = 0
sub_140767bd0(&var_448, arg2)
void var_338
sub_140742680(&var_338, arg2)
void* rax_22 = sub_140d3c6e0(result_3)
void* var_530 = rax_22
void* rax_23
int64_t rax_24
void* rdx_7

if (rax_22 != 0)
    rax_23 = sub_142591550()
    rdx_7 = *(rax_22 + 0x10)
    rax_24 = sx.q(*(rax_23 + 0x38))

if (rax_22 == 0 || rax_24.d s> *(rdx_7 + 0x38)
        || *(*(rdx_7 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
    var_530 = nullptr

void* rax_26 = *(result_3 + 0x58)
int64_t* var_590 = nullptr
void* var_5a0 = nullptr
int64_t* rsi_1

if (rax_26 != 0)
    rsi_1 = *(**(rax_26 + 0x58) + (sx.q(result_3[0x1a]) << 3))
    var_590 = rsi_1
    
    if (result_3[0x86].b != 0)
        void* rax_29 = sub_140d3c6e0(result_3)
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
            rax_32 = &rsi_1[0x27]
        else
            rax_32 = sub_141f66050(rax_29, result_3[0x1a])
        
        var_5a0 = rax_32

int64_t* rsi_2

if (rax_26 == 0 || rsi_1 == 0)
    rsi_2 = nullptr
else
    rsi_2 = rsi_1[3]

void* r15 = *(result_3 + 0x70)
int64_t* var_498 = rsi_2
float zmm13[0x4] = 0x3f800000
int32_t var_538 = 0
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*rsi_2 + 0x58))(rsi_2))
float zmm0[0x4] = 0x3f800000
bool cond:2 = *(arg2 + 0x40) s<= 0
uint64_t result = result_1
zmm0[0] = 1f f/ *(result + 0x190)
float var_4b4 = zmm0[0]

if (not(cond:2))
    int128_t* r8_3 = var_440
    float zmm10[0x4] = zx.o(0)
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    result = zx.q(arg_10.b) << 2
    uint64_t r9_6 = zx.q(arg_18.b) << 2
    uint64_t r10_2 = zx.q(arg_20.b) << 2
    uint64_t r11_5 = zx.q(rax_6) << 2
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    int128_t zmm15 = 0x322bcc77
    uint64_t result_2 = result
    uint64_t var_3b0_1 = r9_6
    uint64_t var_3c0_1 = r10_2
    uint64_t var_3c8_1 = r11_5
    bool cond:3_1
    
    do
        zmm14 = *r8_3
        float (* rdx_11)[0x4] = r12_1
        uint128_t* rcx_19 = r13_1
        r12_1 += result
        r13_1 += r9_6
        uint64_t rdx_12 = zx.q(*rdi_1)
        float var_360_1 = (*rdx_11)[0]
        int64_t var_424_1 = (_mm_unpacklo_ps(*rbx_1, (*rcx_19).q)).q
        
        if (rdx_12.d s< 0 || rdx_12.d s> (temp0 u>> 0x1f) - 1 + temp0)
            int32_t var_354_1 = 0
            int64_t var_394_1 = (_mm_unpacklo_ps(zmm13, zmm10[0].q)).q
            int32_t var_38c_1 = 0
            rdx_12 = zx.q(0.o[0])
        
        uint32_t rbx_5 = (rdx_12 * 3).d
        int32_t rax_43 = (*(*rsi_2 + 0x68))(rsi_2, zx.q(rbx_5))
        int64_t r8_4 = *rsi_2
        int32_t rax_44 = (*(r8_4 + 0x68))(rsi_2, zx.q(rbx_5 + 1), r8_4)
        int64_t r8_5 = *var_498
        int32_t rax_45 = (*(r8_5 + 0x68))(var_498, zx.q(rbx_5 + 2), r8_5)
        int64_t var_188
        int64_t* rax_47
        int512_t zmm8_1
        rax_47, zmm8_1 = sub_1423162c0(&var_188, var_530, rax_43, var_590, var_5a0, 
            ((sx.q(*(r15 + 0x34)) + 4) << 4) + r15)
        zmm8_1.o = zx.o(*rax_47)
        int32_t rax_48 = rax_47[1].d
        int64_t var_17c
        int64_t* rax_54
        int512_t zmm7_1
        rax_54, zmm7_1 = sub_1423162c0(&var_17c, var_530, rax_44, var_590, var_5a0, 
            ((sx.q(*(r15 + 0x34)) + 4) << 4) + r15)
        zmm7_1.o = zx.o(*rax_54)
        int32_t rax_55 = rax_54[1].d
        int64_t var_128[0x2]
        int64_t* rax_61
        int512_t zmm6_1
        rax_61, zmm6_1 = sub_1423162c0(&var_128, var_530, rax_45, var_590, var_5a0, 
            ((sx.q(*(r15 + 0x34)) + 4) << 4) + r15)
        zmm6_1.o = zx.o(*rax_61)
        int32_t rax_62 = rax_61[1].d
        int64_t var_170
        int64_t* rax_69 = sub_1423162c0(&var_170, var_530, rax_43, var_590, var_5a0, 
            (((sx.q(*(r15 + 0x34)) ^ 1) + 4) << 4) + r15)
        int64_t zmm0_1 = *rax_69
        int32_t rax_70 = rax_69[1].d
        int64_t var_164
        int64_t* rax_77 = sub_1423162c0(&var_164, var_530, rax_44, var_590, var_5a0, 
            (((sx.q(*(r15 + 0x34)) ^ 1) + 4) << 4) + r15)
        zmm12 = zx.o(*rax_77)
        int32_t rax_78 = rax_77[1].d
        uint64_t var_4e8_1 = zmm12.q
        int64_t var_158
        int64_t* rax_85
        int32_t r9_13
        float zmm6_2[0x4]
        uint128_t zmm7_2
        float zmm8_2[0x4]
        rax_85, r9_13, zmm6_2, zmm7_2, zmm8_2 = sub_1423162c0(&var_158, var_530, rax_45, var_590, 
            var_5a0, (((sx.q(*(r15 + 0x34)) ^ 1) + 4) << 4) + r15)
        float zmm9_1[0x4] = var_360_1
        zmm11 = var_424_1:4.d
        uint64_t var_3f8_1 = zmm12.q
        uint128_t zmm1 = zx.o(*rax_85)
        int32_t rax_86 = rax_85[1].d
        zmm9_1[0] = zmm9_1[0] f* zmm1.d
        uint64_t var_4c8_2 = zmm1.q
        zmm1 = zmm1.q:4.d
        float var_598_1 = zmm9_1[0]
        zmm9_1[0] = zmm9_1[0] f* zmm1.d
        int32_t var_5a4_1 = zmm1.d
        zmm1 = rax_86
        float var_594_1 = zmm9_1[0]
        zmm9_1[0] = zmm9_1[0] f* zmm1.d
        int32_t var_5b0_1 = zmm1.d
        uint128_t zmm3_1
        zmm3_1.d = zmm11.d f* zmm12.d
        zmm12 = var_424_1.d
        float var_5b4_1 = zmm9_1[0]
        zmm0 = var_3f8_1:4.d
        uint128_t zmm5_1
        zmm5_1.d = zmm11.d f* zmm0[0]
        float var_5ac_1 = zmm0[0]
        zmm0 = rax_78
        uint128_t zmm4_1
        zmm4_1.d = zmm11.d f* zmm0[0]
        float var_5a8_1 = zmm0[0]
        zmm0 = zx.o(zmm0_1)
        int64_t var_558_1 = zmm0.q
        zmm1.d = zmm12.d f* var_558_1:4.d
        uint128_t zmm2_1
        zmm2_1.d = zmm12.d f* zmm0[0]
        zmm0 = zmm12
        zmm0[0] = zmm0[0] f* rax_70
        zmm5_1.d = zmm5_1.d f+ zmm1.d
        zmm2_1.d = zmm2_1.d f+ zmm3_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0[0]
        zmm0 = var_598_1
        zmm1.d = var_594_1.d f+ zmm5_1.d
        zmm0[0] = zmm0[0] f+ zmm2_1.d
        int32_t var_594_2 = zmm1.d
        float var_598_2 = zmm0[0]
        zmm0 = var_5b4_1
        zmm0[0] = zmm0[0] f+ zmm4_1.d
        float var_5b4_2 = zmm0[0]
        arg_20 = rax_55.d
        zmm1 = zmm7_2
        int32_t var_568_1 = zmm8_2.d
        zmm4_1 = zmm7_2.d
        zmm7_2 = rax_62
        zmm3_1 = zmm6_2.d
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm0 = _mm_shuffle_ps(zmm8_2, zmm8_2, 0x55)
        zmm8_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
        uint64_t var_4d8 = zmm1.q
        arg_10 = zmm4_1.d
        arg_18 = zmm7_2.d
        int32_t var_5b8_1 = zmm3_1.d
        int64_t var_4a8_1 = zmm0.q
        int64_t var_578_1 = zmm8_2.q
        char var_1d0
        char var_1cf
        
        if (var_1d0 != 0 || var_1cf != 0)
            void* var_328
            float* rdx_22 = var_328
            zmm6_2 = var_594_2
            zmm2_1.d = zmm11.d f* arg_10
            zmm0 = zmm12
            zmm0[0] = zmm0[0] f* var_568_1
            int32_t var_334
            var_328 = &rdx_22[sx.q(var_334)]
            zmm4_1.d = zmm9_1.d f* zmm3_1.d
            zmm3_1 = zmm11
            zmm11.d = zmm11.d f* arg_20
            zmm2_1.d = zmm2_1.d f+ zmm0[0]
            zmm3_1.d = zmm3_1.d f* zmm1.d
            zmm1 = zmm12
            zmm12.d = zmm12.d f* rax_48
            zmm9_1[0] = zmm9_1[0] f* zmm7_2.d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            zmm11.d = zmm11.d f+ zmm12.d
            zmm1.d = zmm1.d f* var_4a8_1.d
            zmm7_2 = var_5b4_2
            zmm5_1.d = zmm9_1.d f* zmm8_2[0]
            zmm3_1.d = zmm3_1.d f+ zmm1.d
            zmm9_1[0] = zmm9_1[0] f+ zmm11.d
            zmm5_1.d = zmm5_1.d f+ zmm3_1.d
            zmm3_1 = var_598_2
            zmm4_1.d = zmm4_1.d f- zmm3_1.d
            zmm0 = zmm3_1
            zmm9_1[0] = zmm9_1[0] f- zmm7_2.d
            zmm5_1.d = zmm5_1.d f- zmm6_2[0]
            zmm4_1.d = zmm4_1.d f* zmm14.d
            zmm9_1[0] = zmm9_1[0] f* zmm14.d
            zmm0[0] = zmm0[0] f+ zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm14.d
            zmm4_1 = arg_10
            zmm2_1.d = zmm7_2.d f+ zmm9_1[0]
            zmm1.d = zmm6_2.d f+ zmm5_1.d
            *rdx_22 = zmm0[0]
            void* var_310
            int32_t* rdx_23 = var_310
            int32_t var_31c
            var_310 = &rdx_23[sx.q(var_31c)]
            *rdx_23 = zmm1.d
            void* var_2f8
            int32_t* rdx_24 = var_2f8
            int32_t var_304
            var_2f8 = &rdx_24[sx.q(var_304)]
            *rdx_24 = zmm2_1.d
            
            if (var_1cf != 0)
                void* var_2e0
                float* rdx_25 = var_2e0
                zmm0[0] = zmm0[0] f- zmm3_1.d
                zmm1.d = zmm1.d f- zmm6_2[0]
                zmm3_1 = var_4b4
                zmm2_1.d = zmm2_1.d f- zmm7_2.d
                zmm0[0] = zmm0[0] f* zmm3_1.d
                int32_t var_2ec
                var_2e0 = &rdx_25[sx.q(var_2ec)]
                zmm1.d = zmm1.d f* zmm3_1.d
                *rdx_25 = zmm0[0]
                void* var_2c8
                int32_t* rdx_26 = var_2c8
                zmm2_1.d = zmm2_1.d f* zmm3_1.d
                int32_t var_2d4
                var_2c8 = &rdx_26[sx.q(var_2d4)]
                *rdx_26 = zmm1.d
                void* var_2b0
                int32_t* rdx_27 = var_2b0
                int32_t var_2bc
                var_2b0 = &rdx_27[sx.q(var_2bc)]
                *rdx_27 = zmm2_1.d
            
            zmm7_2 = arg_18
            zmm3_1 = var_5b8_1
            zmm1 = zx.o(var_4d8)
            zmm0 = zx.o(var_4a8_1)
        
        void* var_5c8_6
        char var_1ce
        
        if (var_1ce != 0)
            zmm4_1.d = zmm4_1.d f- zmm3_1.d
            zmm5_1.d = var_568_1.d f- zmm3_1.d
            zmm12 = data_143dbb200
            zmm2_1.d = rax_48.d f- zmm7_2.d
            zmm6_2 = zmm0
            zmm6_2[0] = zmm6_2[0] - zmm8_2[0]
            zmm3_1.d = zmm1.d f- zmm8_2[0]
            zmm1.d = arg_20.d f- zmm7_2.d
            zmm8_2 = zmm5_1
            zmm6_2[0] = zmm6_2[0] f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm3_1.d
            zmm6_2[0] = zmm6_2[0] f* zmm1.d
            zmm7_2.d = zmm3_1.d f* zmm2_1.d
            zmm6_2[0] = zmm6_2[0] f- zmm5_1.d
            zmm8_2[0] = zmm8_2[0] f* zmm1.d
            zmm7_2.d = zmm7_2.d f- zmm6_2[0]
            zmm0 = zmm4_1
            zmm0[0] = zmm0[0] f* zmm2_1.d
            zmm1.d = zmm6_2.d f* zmm6_2[0]
            zmm8_2[0] = zmm8_2[0] - zmm0[0]
            zmm2_1.d = zmm7_2.d f* zmm7_2.d
            zmm8_2[0] = zmm8_2[0] * zmm8_2[0]
            zmm2_1.d = zmm2_1.d f+ zmm8_2[0]
            zmm2_1.d = zmm2_1.d f+ zmm1.d
            float var_588_1
            float var_580_1
            
            if (not(zmm2_1.d f!= zmm13[0]))
                var_588_1 = zmm7_2.d
                float var_584_1 = zmm8_2[0]
                var_580_1 = zmm6_2[0]
            else if (zmm2_1.d f>= zmm15.d)
                zmm3_1.d = zmm2_1[0]
                zmm5_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
                zmm3_1.d = zmm3_1.d f* 0.5f
                zmm0 = zmm5_1
                zmm0[0] = zmm0[0] f* zmm5_1.d
                zmm1.d = zmm3_1.d f* zmm0[0]
                zmm0 = zmm5_1
                zmm2_1.d = 0.5f f- zmm1.d
                zmm0[0] = zmm0[0] f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm0 = zmm5_1
                zmm1.d = zmm5_1.d f* zmm5_1.d
                zmm3_1.d = zmm3_1.d f* zmm1.d
                zmm4_1.d = 0.5f f- zmm3_1.d
                zmm0[0] = zmm0[0] f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm0 = zmm5_1
                int32_t var_5b4_3 = zmm5_1.d
                zmm0[0] = zmm0[0] f* zmm7_2.d
                zmm1.d = zmm5_1.d f* zmm8_2[0]
                zmm5_1.d = zmm5_1.d f* zmm6_2[0]
                var_588_1 = zmm0[0]
                int32_t var_584_3 = zmm1.d
                var_580_1 = zmm5_1.d
            else
                var_588_1 = data_143dbb1f8[0]
                float var_584_2 = data_143dbb1fc[0]
                var_580_1 = zmm12.d
            
            zmm6_2 = var_558_1:4.d
            zmm6_2[0] = zmm6_2[0] f- var_5a4_1
            zmm3_1.d = var_5ac_1.d f- var_5a4_1
            zmm2_1.d = rax_70.d f- var_5b0_1
            zmm1.d = var_5a8_1.d f- var_5b0_1
            zmm11 = zx.o(var_4c8_2)
            zmm5_1.d = zmm0_1.d f- zmm11.d
            zmm4_1.d = var_4e8_1.d f- zmm11.d
            int64_t var_4f8 = var_588_1.q
            zmm6_2[0] = zmm6_2[0] f* zmm1.d
            float var_4f0_1 = var_580_1
            zmm7_2.d = zmm3_1.d f* zmm2_1.d
            zmm8_2 = zmm5_1
            zmm8_2[0] = zmm8_2[0] f* zmm1.d
            zmm7_2.d = zmm7_2.d f- zmm6_2[0]
            zmm6_2[0] = zmm6_2[0] f* zmm4_1.d
            zmm0 = zmm4_1
            zmm5_1.d = zmm5_1.d f* zmm3_1.d
            zmm0[0] = zmm0[0] f* zmm2_1.d
            zmm6_2[0] = zmm6_2[0] f- zmm5_1.d
            zmm2_1.d = zmm7_2.d f* zmm7_2.d
            zmm8_2[0] = zmm8_2[0] - zmm0[0]
            zmm1.d = zmm6_2.d f* zmm6_2[0]
            zmm8_2[0] = zmm8_2[0] * zmm8_2[0]
            zmm2_1.d = zmm2_1.d f+ zmm8_2[0]
            zmm2_1.d = zmm2_1.d f+ zmm1.d
            float var_548
            
            if (not(zmm2_1.d f!= zmm13[0]))
                var_548 = zmm7_2.d
                float var_544_1 = zmm8_2[0]
                float var_540_1 = zmm6_2[0]
            else if (zmm2_1.d f>= zmm15.d)
                zmm0 = zmm2_1
                zmm3_1 = zmm0
                zmm5_1 = _mm_rsqrt_ss(zmm0.d, zmm3_1.d)
                zmm3_1.d = zmm3_1.d f* 0.5f
                zmm0 = zmm5_1
                zmm0[0] = zmm0[0] f* zmm5_1.d
                zmm1.d = zmm3_1.d f* zmm0[0]
                zmm0 = zmm5_1
                zmm2_1.d = 0.5f f- zmm1.d
                zmm0[0] = zmm0[0] f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm0 = zmm5_1
                zmm1.d = zmm5_1.d f* zmm5_1.d
                zmm3_1.d = zmm3_1.d f* zmm1.d
                zmm4_1.d = 0.5f f- zmm3_1.d
                zmm0[0] = zmm0[0] f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0[0]
                zmm0 = zmm5_1
                int32_t var_5b4_4 = zmm5_1.d
                zmm0[0] = zmm0[0] f* zmm7_2.d
                zmm1.d = zmm5_1.d f* zmm8_2[0]
                zmm5_1.d = zmm5_1.d f* zmm6_2[0]
                var_548 = zmm0[0]
                int32_t var_544_3 = zmm1.d
                int32_t var_540_3 = zmm5_1.d
            else
                var_548 = data_143dbb1f8[0]
                float var_544_2 = data_143dbb1fc[0]
                int32_t var_540_2 = zmm12.d
            
            var_5c8_6.d = zmm13[0]
            int32_t var_14c
            int32_t* rax_94
            rax_94, r9_13, zmm10, zmm13 = sub_140ae34d0(&var_14c, &var_548, &var_4f8, r9_13)
            void* var_298
            float* rdx_29 = var_298
            zmm8_2 = zx.o(var_578_1)
            var_4f8 = *rax_94
            int32_t rax_95 = rax_94[2]
            zmm1 = var_4f8:4.d
            int32_t var_2a4
            var_298 = &rdx_29[sx.q(var_2a4)]
            *rdx_29 = var_4f8.d[0]
            void* var_280
            int32_t* rdx_30 = var_280
            int32_t var_28c
            var_280 = &rdx_30[sx.q(var_28c)]
            *rdx_30 = zmm1.d
            void* var_268
            int32_t* rdx_31 = var_268
            int32_t var_274
            var_268 = &rdx_31[sx.q(var_274)]
            *rdx_31 = rax_95
        
        char var_1cc
        char rbx_7 = var_1cc
        char var_1cd
        
        if (var_1cd != 0 || rbx_7 != 0)
            zmm0 = arg_18
            zmm0[0] = zmm0[0] f- rax_48
            data_142d3f660
            zmm7_2 = zx.o(var_4a8_1)
            zmm8_2[0] = zmm8_2[0] f- zmm7_2.d
            zmm9_1 = zx.o(var_4d8)
            zmm12.d = var_5b8_1.d f- var_568_1
            arg_18 = zmm0[0]
            zmm9_1[0] = zmm9_1[0] f- zmm7_2.d
            zmm0 = arg_10
            zmm0[0] = zmm0[0] f- var_568_1
            int32_t var_47c_1 = 0
            int32_t var_46c_1 = 0
            int32_t var_45c_1 = 0
            arg_10 = zmm0[0]
            zmm0 = arg_20
            zmm0[0] = zmm0[0] f- rax_48
            arg_20 = zmm0[0]
            int128_t var_1c8
            __builtin_memset(&var_1c8, 0, 0x20)
            int128_t var_1a8
            __builtin_memcpy(&var_1a8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_99)[0x4]
            float zmm6_3[0x4]
            uint32_t zmm7_3[0x4]
            float zmm8_3[0x4]
            float zmm9_2[0x4]
            float zmm11_1
            float zmm12_1[0x4]
            rax_99, zmm6_3, zmm7_3, zmm8_3, zmm9_2, zmm11_1, zmm12_1 =
                sub_140631b10(&var_1c8, &var_118)
            float var_478[0x4]
            var_478[0] = zmm12_1[0]
            uint32_t zmm2_3[0x4] = *rax_99
            float var_488[0x4]
            var_488[0] = arg_10[0]
            var_448.o = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm12_1 = var_448.o
            float zmm5_2[0x4] = _mm_shuffle_ps(var_478, var_478, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_488, var_488, 0xe1)
            zmm5_2[0] = zmm8_3[0]
            zmm4_2[0] = zmm9_2[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm5_2[0] = arg_18[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            uint32_t zmm0_2[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm4_2[0] = arg_20[0]
            zmm12_1 = _mm_mul_ps(zmm12_1, zmm5_2)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm4_2)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm12_1 = _mm_add_ps(zmm12_1, zmm0_2)
            float var_468[0x4]
            var_468[0] = var_568_1[0]
            float zmm3_2[0x4] = _mm_shuffle_ps(var_468, var_468, 0xe1)
            zmm3_2[0] = zmm7_3[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = rax_48[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            _mm_add_ps(_mm_add_ps(zmm12_1, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_3)
            zmm2_3 = rax_99[1]
            zmm7_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_2)
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm4_2)
            int32_t var_47c_2 = 0
            int32_t var_46c_2 = 0
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), zmm3_2)
            int32_t var_45c_2 = 0
            zmm7_3 = _mm_add_ps(zmm7_3, zmm0_2)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm7_3 = _mm_add_ps(_mm_add_ps(zmm7_3, zmm1_1), zmm2_3)
            zmm2_3 = rax_99[2]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm8_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_3)
            zmm8_3 = _mm_mul_ps(zmm8_3, zmm5_2)
            var_448.o = zmm7_3
            zmm8_3 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm8_3, zmm0_2), zmm1_1), zmm2_3)
            zmm2_3 = rax_99[3]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm4_2)
            zmm9_2 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm9_2 = _mm_mul_ps(zmm9_2, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm9_2 = _mm_add_ps(zmm9_2, zmm0_2)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_3)
            zmm0_2 = var_5a4_1
            zmm0_2[0] = zmm0_2[0] f- var_558_1:4.d
            zmm9_2 = _mm_add_ps(zmm9_2, zmm1_1)
            zmm1_1 = zx.o(zmm0_1)
            zmm1_1[0]
            uint32_t var_5a4_2 = zmm0_2[0]
            zmm0_2 = var_5b0_1
            zmm0_2[0] = zmm0_2[0] f- rax_70
            zmm9_2 = _mm_add_ps(zmm9_2, zmm2_3)
            uint32_t var_5b0_2 = zmm0_2[0]
            zmm0_2 = zx.o(var_4e8_1)
            zmm0_2[0] = zmm0_2[0] f- zmm1_1[0]
            var_4a8_1.o = zmm9_2
            int64_t var_4e8_2 = zmm0_2.q
            zmm0_2 = var_5ac_1
            zmm0_2[0] = zmm0_2[0] f- var_558_1:4.d
            uint32_t var_5ac_2 = zmm0_2[0]
            zmm0_2 = var_5a8_1
            zmm0_2[0] = zmm0_2[0] f- rax_70
            uint32_t var_5a8_2 = zmm0_2[0]
            uint32_t (* rax_100)[0x4]
            float zmm6_4[0x4]
            float zmm7_4[0x4]
            float zmm8_4[0x4]
            float zmm9_3[0x4]
            rax_100, zmm6_4, zmm7_4, zmm8_4, zmm9_3, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_1c8, &var_118)
            zmm5_2[0] = zmm11.d
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            float zmm2_4[0x4] = *rax_100
            var_578_1.o = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            zmm5_3[0] = var_5a4_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_5b0_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_478 = zmm5_3
            zmm4_2[0] = var_4e8_2.d
            zmm0 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = var_5ac_2.d
            zmm11 = _mm_mul_ps(var_578_1.o, zmm5_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = var_5a8_2.d
            zmm1 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm6_4)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_488 = zmm4_3
            zmm11 = _mm_add_ps(zmm11, _mm_mul_ps(zmm0, zmm4_3))
            zmm3_2[0] = zx.o(zmm0_1)[0]
            float zmm3_3[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
            zmm3_3[0] = var_558_1:4.d[0]
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3[0] = rax_70[0]
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_468 = zmm3_3
            zmm11 = _mm_add_ps(_mm_add_ps(zmm11, _mm_mul_ps(zmm1, zmm3_3)), zmm2_4)
            zmm2_4 = rax_100[1]
            zmm1 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            var_4d8.o = _mm_add_ps(_mm_mul_ps(zmm1, zmm5_3), _mm_mul_ps(zmm0, zmm4_3))
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa), zmm3_3)
            zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm6_4)
            zmm0 = _mm_add_ps(_mm_add_ps(var_4d8.o, zmm1), zmm2_4)
            zmm2_4 = rax_100[2]
            var_4d8.o = zmm0
            var_4c8_2.o = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0x55), zmm5_3), 
                _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0), zmm4_3))
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa), zmm3_3)
            zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm6_4)
            zmm0 = _mm_add_ps(_mm_add_ps(var_4c8_2.o, zmm1), zmm2_4)
            zmm2_4 = rax_100[3]
            var_4c8_2.o = zmm0
            var_578_1.o = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0x55), zmm5_3), 
                _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0), zmm4_3))
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa), zmm3_3)
            zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm6_4)
            var_578_1.o = _mm_add_ps(_mm_add_ps(var_578_1.o, zmm1), zmm2_4)
            
            if (var_1cd != 0)
                zmm2_4 = data_142d4cc00
                int64_t var_518_2 = 0
                zmm6_4 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm8_4)
                int32_t var_510_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm7_4)
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm9_3)
                zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0), zmm12)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_4))
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm7_4 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8_4 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7_4.d f* zmm7_4[0]
                zmm1.d = zmm1.d f+ zmm6_4[0]
                zmm8_4[0] = zmm8_4[0] * zmm8_4[0]
                zmm1.d = zmm1.d f+ zmm8_4[0]
                
                if (zmm1.d f<= zmm15.d)
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm3_3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3_3[0] = zmm1[0]
                    zmm2_4 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm1.d = zmm3_3.d f* zmm5_3[0]
                    zmm2_4[0] = 0.5f f- zmm1.d
                    zmm5_3[0] = zmm5_3[0] * zmm2_4[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm1.d
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm0 = zmm5_3
                    arg_10 = zmm5_3[0]
                    zmm0[0] = zmm0[0] * zmm6_4[0]
                    zmm1.d = zmm5_3.d f* zmm7_4[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8_4[0]
                
                zmm2_4 = data_142d4cc00
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), var_578_1.o)
                int64_t var_518_3 = 0
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0x55), var_4d8.o)
                int32_t var_510_2 = 0
                int64_t var_528 = zmm0.q
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa), var_4c8_2.o)
                zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0), zmm11)
                zmm3_3 = _mm_add_ps(zmm3_3, zmm0)
                float var_520_1 = zmm5_3[0]
                zmm3_3 = _mm_add_ps(zmm3_3, _mm_add_ps(zmm1, zmm2_4))
                zmm0 = zmm3_3
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0[0] = zmm0[0] * zmm3_3[0]
                zmm1.d = zmm1.d f* zmm1.d
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3[0] = zmm3_3[0] * zmm3_3[0]
                zmm1.d = zmm1.d f+ zmm0[0]
                zmm1.d = zmm1.d f+ zmm3_3[0]
                
                if (not(zmm1.d f<= zmm15.d))
                    zmm3_3 = zx.o(0)
                    zmm5_3 = 0x3f000000
                    zmm3_3[0] = zmm1[0]
                    zmm2_4 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm1.d = zmm3_3.d f* zmm4_3[0]
                    zmm2_4[0] = 0.5f f- zmm1.d
                    zmm4_3[0] = zmm4_3[0] * zmm2_4[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    zmm1.d = zmm4_3.d f* zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm1.d
                    zmm5_3[0] = 0.5f - zmm3_3[0]
                    zmm4_3[0] = zmm4_3[0] * zmm5_3[0]
                    zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
                    arg_10 = zmm4_3[0]
                
                var_5c8_6.d = zmm13[0]
                int32_t var_140
                int32_t* rax_102
                rax_102, r9_13, zmm10, zmm12, zmm13, zmm14 =
                    sub_140ae34d0(&var_140, &var_528, &var_528, r9_13)
                void* var_250
                float* rdx_35 = var_250
                zmm7_4 = var_448.o
                zmm8_4 = zmm8_3
                zmm9_3 = var_4a8_1.o
                var_528 = *rax_102
                zmm1 = var_528:4.d
                zmm2_4 = rax_102[2]
                int32_t var_25c
                var_250 = &rdx_35[sx.q(var_25c)]
                *rdx_35 = var_528.d[0]
                void* var_238
                int32_t* rdx_36 = var_238
                int32_t var_244
                var_238 = &rdx_36[sx.q(var_244)]
                *rdx_36 = zmm1.d
                void* var_220
                float* rdx_37 = var_220
                int32_t var_22c
                var_220 = &rdx_37[sx.q(var_22c)]
                *rdx_37 = zmm2_4[0]
                rbx_7 = var_1cc
            
            if (rbx_7 != 0)
                zmm2_4 = data_142d4cc20
                int64_t var_578_2 = 0
                zmm6_4 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm8_4)
                int32_t var_570_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm7_4)
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm9_3)
                zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0), zmm12)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_4))
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm7_4 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8_4 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7_4.d f* zmm7_4[0]
                zmm1.d = zmm1.d f+ zmm6_4[0]
                zmm8_4[0] = zmm8_4[0] * zmm8_4[0]
                zmm1.d = zmm1.d f+ zmm8_4[0]
                
                if (zmm1.d f<= zmm15.d)
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm3_3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3_3[0] = zmm1[0]
                    zmm2_4 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm1.d = zmm3_3.d f* zmm5_3[0]
                    zmm2_4[0] = 0.5f f- zmm1.d
                    zmm5_3[0] = zmm5_3[0] * zmm2_4[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm1.d
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm0 = zmm5_3
                    arg_10 = zmm5_3[0]
                    zmm0[0] = zmm0[0] * zmm6_4[0]
                    zmm1.d = zmm5_3.d f* zmm7_4[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8_4[0]
                
                zmm2_4 = data_142d4cc20
                int64_t var_508 = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0x55), var_448.o)
                int64_t var_578_3 = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa), zmm8_3)
                int32_t var_570_2 = 0
                zmm6_4 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), var_4a8_1.o)
                zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0), zmm12)
                zmm6_4 = _mm_add_ps(zmm6_4, zmm0)
                float var_500_1 = zmm5_3[0]
                zmm6_4 = _mm_add_ps(zmm6_4, _mm_add_ps(zmm1, zmm2_4))
                zmm6_4[0] = zmm6_4[0] * zmm6_4[0]
                zmm7_4 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8_4 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7_4.d f* zmm7_4[0]
                zmm1.d = zmm1.d f+ zmm6_4[0]
                zmm8_4[0] = zmm8_4[0] * zmm8_4[0]
                zmm1.d = zmm1.d f+ zmm8_4[0]
                
                if (zmm1.d f<= zmm15.d)
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm3_3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3_3[0] = zmm1[0]
                    zmm2_4 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm1.d = zmm3_3.d f* zmm5_3[0]
                    zmm2_4[0] = 0.5f f- zmm1.d
                    zmm5_3[0] = zmm5_3[0] * zmm2_4[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm1.d
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                    zmm0 = zmm5_3
                    arg_10 = zmm5_3[0]
                    zmm0[0] = zmm0[0] * zmm6_4[0]
                    zmm1.d = zmm5_3.d f* zmm7_4[0]
                    zmm5_3[0] = zmm5_3[0] * zmm8_4[0]
                
                float var_3d8 = zmm0[0]
                int32_t var_3d4_1 = zmm1.d
                float var_3d0_1 = zmm5_3[0]
                var_5c8_6.d = zmm13[0]
                int32_t var_134
                int32_t* rax_108
                rax_108, zmm10, zmm13 = sub_140ae34d0(&var_134, &var_3d8, &var_508, r9_13)
                void* var_208
                float* rdx_39 = var_208
                var_508 = *rax_108
                int32_t rax_109 = rax_108[2]
                zmm1 = var_508:4.d
                int32_t var_214
                var_208 = &rdx_39[sx.q(var_214)]
                *rdx_39 = var_508.d[0]
                void* var_1f0
                int32_t* rdx_40 = var_1f0
                int32_t var_1fc
                var_1f0 = &rdx_40[sx.q(var_1fc)]
                *rdx_40 = zmm1.d
                void* var_1d8
                int32_t* rdx_41 = var_1d8
                int32_t var_1e4
                var_1d8 = &rdx_41[sx.q(var_1e4)]
                *rdx_41 = rax_109
        
        rbx_1 += r10_2
        cond:3_1 = var_538 + 1 s< *(arg2 + 0x40)
        rdi_1 += r11_5
        rsi_2 = var_498
        result = result_2
        r9_6 = var_3b0_1
        r10_2 = var_3c0_1
        r11_5 = var_3c8_1
        var_538 += 1
        r8_3 += sx.q(var_438) << 2
    while (cond:3_1)

return result
