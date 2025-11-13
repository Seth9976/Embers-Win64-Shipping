// 函数: sub_14072e930
// 地址: 0x14072e930
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
int32_t* result_3 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
uint64_t result_1 = result_3
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
*(arg2 + 0x10) = &rax[2]
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

uint32_t var_3d8 = 0xffffffff
uint128_t* var_3d0 = nullptr
int32_t var_3c8 = 0
sub_140767bd0(&var_3d8, arg2)
void var_2f8
sub_140742680(&var_2f8, arg2)

if (sub_140d3c6e0(result_3) != 0)
    sub_142591550()

void* rcx_9 = *(result_3 + 0x58)
void* var_4c8 = nullptr

if (rcx_9 != 0)
    rsi = *(**(rcx_9 + 0x58) + (sx.q(result_3[0x1a]) << 3))
    
    if (result_3[0x86].b != 0)
        void* rax_25 = sub_140d3c6e0(result_3)
        void* rax_27
        void* rcx_12
        int64_t rdx_7
        
        if (rax_25 != 0)
            rax_27 = sub_142591550() + 0x30
            rcx_12 = *(rax_25 + 0x10)
            rdx_7 = sx.q(*(rax_27 + 8))
        
        void* rax_28
        
        if (rax_25 == 0 || rdx_7.d s> *(rcx_12 + 0x38)
                || *(*(rcx_12 + 0x30) + (rdx_7 << 3)) != rax_27 || *(rax_25 + 0x430) == 0)
            rax_28 = &rsi[0x27]
        else
            rax_28 = sub_141f66050(rax_25, result_3[0x1a])
        
        var_4c8 = rax_28

int64_t* r14

if (rcx_9 == 0 || rsi == 0)
    r14 = nullptr
else
    r14 = rsi[3]

uint128_t zmm9 = 0x3f800000
int32_t var_520 = 0
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*r14 + 0x58))(r14))
uint64_t result = result_1
uint128_t zmm0
zmm0.d = 1f f/ *(result + 0x190)
int32_t var_4e4 = zmm0.d

if (*(arg2 + 0x40) s> 0)
    uint128_t* r8_2 = var_3d0
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint128_t zmm10 = zx.o(0)
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
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
    uint64_t result_2 = result
    uint64_t var_3a8_1 = r9_6
    uint64_t var_3b8_1 = r10_2
    uint64_t var_378_1 = r11_5
    bool cond:4_1
    
    do
        uint128_t* rdx_10 = r15_1
        float (* rcx_19)[0x4] = r12_1
        r15_1 += result
        r12_1 += r9_6
        uint128_t* rax_36 = r13_1
        r13_1 += r10_2
        uint64_t rdx_11 = zx.q(*rbx_1)
        int32_t var_320_1 = (*rdx_10).d
        uint64_t var_434_1 = (_mm_unpacklo_ps(*rax_36, (*rcx_19)[0].q)).q
        int32_t var_59c_1 = (*r8_2).d
        
        if (rdx_11.d s< 0 || rdx_11.d s> (temp0 u>> 0x1f) - 1 + temp0)
            int32_t var_314_1 = 0
            uint64_t var_384_1 = (_mm_unpacklo_ps(zmm9, zmm10.q)).q
            int32_t var_37c_1 = 0
            rdx_11 = zx.q(0.o.d)
        
        uint32_t rbx_5 = (rdx_11 * 3).d
        int32_t rax_39 = (*(*r14 + 0x68))(r14, zx.q(rbx_5))
        int64_t r8_3 = *r14
        int32_t rax_40 = (*(r8_3 + 0x68))(r14, zx.q(rbx_5 + 1), r8_3)
        int64_t r8_4 = *r14
        int32_t rax_41 = (*(r8_4 + 0x68))(r14, zx.q(rbx_5 + 2), r8_4)
        void var_188
        int64_t* rax_43 = sub_142316040(&var_188, rcx_9, rsi, var_4c8, rax_39)
        int32_t rcx_26 = rax_43[1].d
        zmm8 = zx.o(*rax_43)
        void var_134
        int64_t* rax_45 = sub_142316040(&var_134, rcx_9, rsi, var_4c8, rax_40)
        zmm7 = zx.o(*rax_45)
        int32_t rax_46 = rax_45[1].d
        void var_17c
        int64_t* rax_48
        int512_t zmm6_1
        rax_48, zmm6_1 = sub_142316040(&var_17c, rcx_9, rsi, var_4c8, rax_41)
        zmm6_1.o = zx.o(*rax_48)
        int32_t rax_49 = rax_48[1].d
        void var_170
        int64_t* rax_51 = sub_142316040(&var_170, rcx_9, rsi, var_4c8, rax_39)
        zmm12 = zx.o(*rax_51)
        int32_t rax_52 = rax_51[1].d
        uint64_t var_4b8 = zmm12.q
        void var_164
        int64_t* rax_54 = sub_142316040(&var_164, rcx_9, rsi, var_4c8, rax_40)
        zmm13 = zx.o(*rax_54)
        int32_t rax_55 = rax_54[1].d
        uint64_t var_458_1 = zmm13.q
        void var_158
        int64_t* rax_57
        int32_t r9_13
        uint128_t zmm6_2
        rax_57, r9_13, zmm6_2 = sub_142316040(&var_158, rcx_9, rsi, var_4c8, rax_41)
        zmm9 = var_320_1
        zmm0 = zx.o(*rax_57)
        uint64_t var_4a8_2 = zmm0.q
        zmm11 = var_434_1:4.d
        zmm14.d = zmm9.d f* zmm0.d
        zmm0 = zmm0.q:4.d
        zmm15.d = zmm9.d f* zmm0.d
        float var_598_1 = zmm0.d
        zmm0 = rax_57[1].d
        uint128_t zmm5_1
        zmm5_1.d = zmm9.d f* zmm0.d
        int32_t var_5a8_1 = zmm0.d
        uint64_t var_540_1 = zmm12.q
        uint32_t var_428_1 = zmm7.d
        zmm0 = zmm13.q:4.d
        uint128_t zmm3_1
        zmm3_1.d = zmm11.d f* zmm0.d
        int32_t var_5a4_1 = zmm0.d
        zmm0 = rax_55
        uint128_t zmm2_1
        zmm2_1.d = zmm11.d f* zmm0.d
        int32_t var_5a0_1 = zmm0.d
        uint128_t zmm4_1
        zmm4_1.d = zmm11.d f* zmm13.d
        zmm13 = var_434_1.d
        float zmm1[0x4] = zmm13
        int32_t var_550_1 = zmm8.d
        zmm1[0] = zmm1[0] f* var_540_1:4.d
        zmm0.d = zmm13.d f* zmm12.d
        zmm12.d = zmm13.d f* rax_52
        zmm1[0] = zmm1[0] f+ zmm3_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0.d
        int32_t var_3f8_1 = zmm6_2.d
        zmm0 = zmm8
        zmm8 = rax_49
        zmm12.d = zmm12.d f+ zmm2_1.d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm2_1 = var_428_1
        zmm15.d = zmm15.d f+ zmm1[0]
        arg_18 = rax_46[0]
        zmm14.d = zmm14.d f+ zmm4_1.d
        zmm1 = zmm7
        arg_10 = zmm2_1.d
        zmm7 = zmm6_2
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm6_2 = var_3f8_1
        zmm12.d = zmm12.d f+ zmm5_1.d
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        uint64_t var_578_1 = zmm7.q
        float var_588_1 = zmm8[0]
        arg_20 = zmm6_2.d
        uint64_t var_4d8_1 = zmm0.q
        int64_t var_448_1 = zmm1.q
        char var_190
        char var_18f
        
        if (var_190 != 0 || var_18f != 0)
            void* var_2e8
            int32_t* rdx_21 = var_2e8
            zmm4_1 = zmm9
            zmm2_1.d = zmm11.d f* arg_10
            zmm5_1 = zmm9
            zmm9.d = zmm9.d f* zmm8[0]
            zmm3_1 = zmm11
            zmm0.d = zmm13.d f* var_550_1
            int32_t var_2f4
            var_2e8 = &rdx_21[sx.q(var_2f4)]
            zmm11.d = zmm11.d f* arg_18
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm3_1.d = zmm3_1.d f* zmm1[0]
            zmm4_1.d = zmm4_1.d f* zmm6_2.d
            zmm1 = zmm13
            zmm13.d = zmm13.d f* rcx_26
            zmm1[0] = zmm1[0] * zx.o(var_4d8_1)[0]
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            zmm8 = var_588_1
            zmm11.d = zmm11.d f+ zmm13.d
            zmm5_1.d = zmm5_1.d f* zmm7.d
            zmm3_1.d = zmm3_1.d f+ zmm1[0]
            zmm1 = zmm15
            zmm4_1.d = zmm4_1.d f- zmm14.d
            zmm9.d = zmm9.d f+ zmm11.d
            zmm11 = var_59c_1
            zmm5_1.d = zmm5_1.d f+ zmm3_1.d
            zmm4_1.d = zmm4_1.d f* zmm11.d
            zmm9.d = zmm9.d f- zmm12.d
            zmm5_1.d = zmm5_1.d f- zmm15.d
            zmm0.d = zmm14.d f+ zmm4_1.d
            zmm9.d = zmm9.d f* zmm11.d
            zmm5_1.d = zmm5_1.d f* zmm11.d
            *rdx_21 = zmm0.d
            zmm2_1.d = zmm12.d f+ zmm9.d
            void* var_2d0
            float* rdx_22 = var_2d0
            zmm1[0] = zmm1[0] f+ zmm5_1.d
            int32_t var_2dc
            var_2d0 = &rdx_22[sx.q(var_2dc)]
            *rdx_22 = zmm1[0]
            void* var_2b8
            int32_t* rdx_23 = var_2b8
            int32_t var_2c4
            var_2b8 = &rdx_23[sx.q(var_2c4)]
            *rdx_23 = zmm2_1.d
            
            if (var_18f != 0)
                void* var_2a0
                int32_t* rdx_24 = var_2a0
                zmm0.d = zmm0.d f- zmm14.d
                zmm1[0] = zmm1[0] f- zmm15.d
                zmm3_1 = var_4e4
                zmm2_1.d = zmm2_1.d f- zmm12.d
                zmm0.d = zmm0.d f* zmm3_1.d
                int32_t var_2ac
                var_2a0 = &rdx_24[sx.q(var_2ac)]
                zmm1[0] = zmm1[0] f* zmm3_1.d
                *rdx_24 = zmm0.d
                void* var_288
                float* rdx_25 = var_288
                zmm2_1.d = zmm2_1.d f* zmm3_1.d
                int32_t var_294
                var_288 = &rdx_25[sx.q(var_294)]
                *rdx_25 = zmm1[0]
                void* var_270
                int32_t* rdx_26 = var_270
                int32_t var_27c
                var_270 = &rdx_26[sx.q(var_27c)]
                *rdx_26 = zmm2_1.d
            
            zmm2_1 = arg_10
            zmm1 = zx.o(var_448_1)
            zmm0 = zx.o(var_4d8_1)
        
        char var_18e
        
        if (var_18e == 0)
            zmm9 = 0x3f800000
        else
            zmm5_1.d = var_550_1.d f- zmm6_2.d
            zmm4_1.d = zmm2_1.d f- arg_20
            zmm3_1.d = rcx_26.d f- zmm8[0]
            zmm15 = data_143dbb200
            zmm6_2.d = zmm0.d f- zmm7.d
            zmm2_1 = zmm1
            zmm1 = arg_18
            zmm2_1.d = zmm2_1.d f- zmm7.d
            zmm1[0] = zmm1[0] - zmm8[0]
            zmm7 = zmm3_1
            zmm8 = zmm5_1
            zmm3_1.d = zmm3_1.d f* zmm4_1.d
            zmm0 = zmm6_2
            zmm6_2.d = zmm6_2.d f* zmm4_1.d
            zmm0.d = zmm0.d f* zmm1[0]
            zmm7.d = zmm7.d f* zmm2_1.d
            zmm5_1.d = zmm5_1.d f* zmm2_1.d
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm7.d = zmm7.d f- zmm0.d
            zmm6_2.d = zmm6_2.d f- zmm5_1.d
            zmm8[0] = zmm8[0] f- zmm3_1.d
            zmm2_1.d = zmm7.d f* zmm7.d
            zmm1 = zmm6_2
            zmm1[0] = zmm1[0] f* zmm6_2.d
            zmm0.d = zmm8.d f* zmm8[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1[0]
            int32_t var_568_1
            int32_t var_560_1
            
            if (not(zmm2_1.d f!= 1f))
                var_568_1 = zmm7.d
                float var_564_1 = zmm8[0]
                var_560_1 = zmm6_2.d
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                zmm3_1.d = zmm2_1.d f* 0.5f
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
                int32_t var_59c_2 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm7.d
                zmm1[0] = zmm1[0] * zmm8[0]
                zmm5_1.d = zmm5_1.d f* zmm6_2.d
                var_568_1 = zmm0.d
                float var_564_3 = zmm1[0]
                var_560_1 = zmm5_1.d
            else
                var_568_1 = data_143dbb1f8.d
                int32_t var_564_2 = data_143dbb1fc.d
                var_560_1 = zmm15.d
            
            zmm6_2.d = var_540_1:4.d.d f- var_598_1
            zmm3_1.d = var_5a4_1.d f- var_598_1
            zmm2_1.d = rax_52.d f- var_5a8_1
            zmm1 = var_5a0_1
            zmm1[0] = zmm1[0] f- var_5a8_1
            zmm14 = zx.o(var_4a8_2)
            zmm5_1.d = var_4b8.d f- zmm14.d
            zmm4_1.d = var_458_1.d f- zmm14.d
            uint64_t var_4f8 = var_568_1.q
            zmm0.d = zmm6_2.d f* zmm1[0]
            int32_t var_4f0_1 = var_560_1
            zmm7.d = zmm3_1.d f* zmm2_1.d
            zmm8 = zmm5_1
            zmm8[0] = zmm8[0] * zmm1[0]
            zmm7.d = zmm7.d f- zmm0.d
            zmm6_2.d = zmm6_2.d f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f* zmm3_1.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm6_2.d = zmm6_2.d f- zmm5_1.d
            zmm2_1.d = zmm7.d f* zmm7.d
            zmm8[0] = zmm8[0] f- zmm0.d
            zmm1 = zmm6_2
            zmm1[0] = zmm1[0] f* zmm6_2.d
            zmm0.d = zmm8.d f* zmm8[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1[0]
            int32_t var_530
            
            if (not(zmm2_1.d f!= 1f))
                var_530 = zmm7.d
                float var_52c_1 = zmm8[0]
                int32_t var_528_1 = zmm6_2.d
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                zmm3_1.d = zmm2_1.d f* 0.5f
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
                int32_t var_59c_3 = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm7.d
                zmm1[0] = zmm1[0] * zmm8[0]
                zmm5_1.d = zmm5_1.d f* zmm6_2.d
                var_530 = zmm0.d
                float var_52c_3 = zmm1[0]
                int32_t var_528_3 = zmm5_1.d
            else
                var_530 = data_143dbb1f8.d
                int32_t var_52c_2 = data_143dbb1fc.d
                int32_t var_528_2 = zmm15.d
            
            int32_t var_5b8_7 = 0x3f800000
            int32_t var_14c
            int32_t* rax_66
            rax_66, r9_13, zmm9, zmm10 = sub_140ae34d0(&var_14c, &var_530, &var_4f8, r9_13)
            void* var_258
            int32_t* rdx_28 = var_258
            zmm7 = zx.o(var_578_1)
            zmm6_2 = arg_20
            var_4f8 = *rax_66
            zmm1 = var_4f8:4.d
            zmm2_1 = rax_66[2]
            int32_t var_264
            var_258 = &rdx_28[sx.q(var_264)]
            *rdx_28 = var_4f8.d.d
            void* var_240
            float* rdx_29 = var_240
            int32_t var_24c
            var_240 = &rdx_29[sx.q(var_24c)]
            *rdx_29 = zmm1[0]
            void* var_228
            int32_t* rdx_30 = var_228
            int32_t var_234
            var_228 = &rdx_30[sx.q(var_234)]
            *rdx_30 = zmm2_1.d
        
        char var_18c
        char rbx_7 = var_18c
        char var_18d
        
        if (var_18d != 0 || rbx_7 != 0)
            int64_t rdx_31 = rsi[0x13]
            uint64_t rcx_42 = zx.q(rsi[0x15].d)
            zmm15.d = arg_10.d f- var_550_1
            zmm6_2.d = zmm6_2.d f- var_550_1
            zmm8 = zx.o(var_4d8_1)
            zmm7.d = zmm7.d f- zmm8[0]
            zmm13.d = var_588_1.d f- rcx_26
            int64_t rax_72 = zx.q(rax_39) * rcx_42
            arg_10 = zmm15.d
            zmm12.d = var_448_1.d f- zmm8[0]
            zmm15.d = arg_18.d f- rcx_26
            int32_t var_48c_1 = 0
            int32_t var_47c_1 = 0
            zmm4_1 = *(rdx_31 + (rax_72 << 3))
            zmm5_1 = *(rdx_31 + (rax_72 << 3) + 4)
            int64_t rax_74 = zx.q(rax_40) * rcx_42
            int32_t var_348_1 = zmm4_1.d
            int32_t var_344_1 = zmm5_1.d
            uint128_t var_338_1 = data_142d3f660
            int32_t var_46c_1 = 0
            int64_t var_360_1 = 0
            int64_t var_350_1 = 0
            int64_t var_340_1 = 0x3f800000
            zmm2_1.d = (*(rdx_31 + (rax_74 << 3))).d f- zmm4_1.d
            zmm3_1.d = (*(rdx_31 + (rax_74 << 3) + 4)).d f- zmm5_1.d
            int64_t rax_76 = zx.q(rax_41) * rcx_42
            int32_t var_368 = zmm2_1.d
            int32_t var_364_1 = zmm3_1.d
            zmm1 = *(rdx_31 + (rax_76 << 3) + 4)
            zmm0.d = (*(rdx_31 + (rax_76 << 3))).d f- zmm4_1.d
            zmm1[0] = zmm1[0] f- zmm5_1.d
            int32_t var_358_1 = zmm0.d
            float var_354_1 = zmm1[0]
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_77)[0x4]
            float zmm6_3[0x4]
            uint32_t zmm7_1[0x4]
            float zmm8_1[0x4]
            float zmm12_1
            float zmm13_1[0x4]
            float zmm14_1
            rax_77, zmm6_3, zmm7_1, zmm8_1, zmm12_1, zmm13_1, zmm14_1 =
                sub_140631b10(&var_368, &var_118)
            float var_488[0x4]
            var_488[0] = zmm6_2.d[0]
            uint32_t zmm2_2[0x4] = *rax_77
            float var_498[0x4]
            var_498[0] = arg_10[0]
            float zmm5_2[0x4] = _mm_shuffle_ps(var_488, var_488, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_498, var_498, 0xe1)
            zmm5_2[0] = zmm7_1[0]
            zmm4_2[0] = zmm12_1
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm13_1[0]
            zmm4_2[0] = zmm15.d.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            uint32_t zmm15_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float zmm0_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm15_1 = _mm_mul_ps(zmm15_1, zmm5_2)
            uint128_t zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm15_1 = _mm_add_ps(zmm15_1, zmm0_1)
            float var_478[0x4]
            var_478[0] = var_550_1[0]
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            int32_t var_48c_2 = 0
            float zmm3_2[0x4] = _mm_shuffle_ps(var_478, var_478, 0xe1)
            zmm3_2[0] = zmm8_1[0]
            int32_t var_47c_2 = 0
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = rcx_26[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            int32_t var_46c_2 = 0
            _mm_add_ps(_mm_add_ps(zmm15_1, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_2)
            zmm2_2 = rax_77[1]
            zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm7_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            zmm7_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_1, zmm5_2), zmm0_1), zmm1_1), 
                zmm2_2)
            zmm2_2 = rax_77[2]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm8_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            var_4d8_1.o = zmm7_1
            zmm8_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm8_1, zmm5_2), zmm0_1), zmm1_1), 
                zmm2_2)
            zmm2_2 = rax_77[3]
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm13_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm13_1 = _mm_mul_ps(zmm13_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
            zmm13_1 = _mm_add_ps(zmm13_1, zmm0_1)
            zmm2_2 = _mm_mul_ps(zmm2_2, zmm6_3)
            zmm0_1 = var_5a8_1
            zmm0_1[0] = zmm0_1[0] f- rax_52
            var_448_1.o = zmm8_1
            zmm13_1 = _mm_add_ps(zmm13_1, zmm1_1)
            float var_5a8_2 = zmm0_1[0]
            zmm0_1 = zx.o(var_458_1)
            zmm0_1[0] = zmm0_1[0] f- var_4b8.d
            zmm13_1 = _mm_add_ps(zmm13_1, zmm2_2)
            int64_t var_458_2 = zmm0_1.q
            zmm0_1 = var_5a4_1
            zmm0_1[0] = zmm0_1[0] f- var_540_1:4.d
            var_4a8_2.o = zmm13_1
            float var_5a4_2 = zmm0_1[0]
            zmm0_1 = var_5a0_1
            zmm0_1[0] = zmm0_1[0] f- rax_52
            float var_5a0_2 = zmm0_1[0]
            uint32_t (* rax_78)[0x4]
            float zmm6_4[0x4]
            rax_78, zmm6_4, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_368, &var_118)
            zmm5_2[0] = zmm14.d
            float zmm2_3[0x4] = *rax_78
            zmm4_2[0] = zx.o(var_458_2)[0]
            var_578_1.o = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_3[0] = zmm12.d
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = var_5a4_2[0]
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_5a8_2.d
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm14 = _mm_mul_ps(var_578_1.o, zmm5_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = var_5a0_2[0]
            var_488 = zmm5_3
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            zmm14 = _mm_add_ps(zmm14, zmm0)
            var_498 = zmm4_3
            zmm3_2[0] = var_4b8.d
            float zmm3_3[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
            zmm3_3[0] = var_540_1:4.d.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3[0] = rax_52.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_478 = zmm3_3
            zmm14 = _mm_add_ps(_mm_add_ps(zmm14, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = rax_78[1]
            zmm12 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm12 = _mm_mul_ps(zmm12, zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm12 = _mm_add_ps(zmm12, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            zmm12 = _mm_add_ps(_mm_add_ps(zmm12, zmm1), zmm2_3)
            zmm2_3 = rax_78[2]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_3d8.o = zmm12
            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm12 = _mm_add_ps(zmm12, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            zmm12 = _mm_add_ps(_mm_add_ps(zmm12, zmm1), zmm2_3)
            zmm2_3 = rax_78[3]
            var_458_2.o = zmm12
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm4_3)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm12 = _mm_add_ps(zmm12, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            var_4b8.o = _mm_add_ps(_mm_add_ps(zmm12, zmm1), zmm2_3)
            zmm12 = 0x322bcc77
            
            if (var_18d != 0)
                zmm2_3 = data_142d4cc00
                int64_t var_578_2 = 0
                zmm6_4 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm13)
                int32_t var_570_1 = 0
                zmm0 = _mm_mul_ps(zmm0, zmm15)
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm7)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), zmm8)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                
                if (zmm1[0] <= 9.99999994e-09f)
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm3_3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3_3[0] = zmm1.d
                    zmm2_3 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm0.d
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm1 = zmm5_3
                    zmm0.d = zmm5_3.d f* zmm6_4[0]
                    zmm1[0] = zmm1[0] f* zmm7.d
                    zmm5_3[0] = zmm5_3[0] * zmm8[0]
                
                zmm2_3 = data_142d4cc00
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1[0].q)
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_4b8.o)
                int64_t var_578_3 = 0
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_3d8.o)
                int32_t var_570_2 = 0
                uint64_t var_518 = zmm0.q
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_458_2.o)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm14)
                zmm3_3 = _mm_add_ps(zmm3_3, zmm0)
                float var_510_1 = zmm5_3[0]
                zmm3_3 = _mm_add_ps(zmm3_3, _mm_add_ps(zmm1, zmm2_3))
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0.d = zmm3_3.d f* zmm3_3[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3[0] = zmm3_3[0] * zmm3_3[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm1[0] = zmm1[0] + zmm3_3[0]
                
                if (not(zmm1[0] <= 9.99999994e-09f))
                    zmm3_3 = zx.o(0)
                    zmm5_3 = 0x3f000000
                    zmm3_3[0] = zmm1.d
                    zmm2_3 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm0.d = zmm4_3.d f* zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm0.d
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm4_3.d f* zmm2_3[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
                    zmm5_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    arg_10 = zmm4_3[0]
                
                int32_t var_5b8_8 = zmm9.d
                int32_t var_140
                int32_t* rax_80
                rax_80, r9_13, zmm9, zmm10, zmm12 =
                    sub_140ae34d0(&var_140, &var_518, &var_518, r9_13)
                void* var_210
                int32_t* rdx_35 = var_210
                zmm7 = var_4d8_1.o
                zmm8 = var_448_1.o
                zmm13 = var_4a8_2.o
                var_518 = *rax_80
                zmm1 = var_518:4.d
                zmm2_3 = rax_80[2]
                int32_t var_21c
                var_210 = &rdx_35[sx.q(var_21c)]
                *rdx_35 = var_518.d.d
                void* var_1f8
                float* rdx_36 = var_1f8
                int32_t var_204
                var_1f8 = &rdx_36[sx.q(var_204)]
                *rdx_36 = zmm1[0]
                void* var_1e0
                float* rdx_37 = var_1e0
                int32_t var_1ec
                var_1e0 = &rdx_37[sx.q(var_1ec)]
                *rdx_37 = zmm2_3[0]
                rbx_7 = var_18c
            
            if (rbx_7 != 0)
                zmm2_3 = data_142d4cc20
                int64_t var_578_4 = 0
                zmm6_4 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm8)
                int32_t var_570_3 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm7)
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm13)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm15)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                
                if (zmm1[0] f<= zmm12.d)
                    zmm6_4 = zmm10
                    zmm7 = zmm10
                    zmm8 = zmm10
                else
                    zmm3_3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3_3[0] = zmm1.d
                    zmm2_3 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm0.d
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm6_4[0] = zmm6_4[0] * zmm5_3[0]
                    zmm7.d = zmm7.d f* zmm5_3[0]
                    zmm8[0] = zmm8[0] * zmm5_3[0]
                
                zmm2_3 = data_142d4cc20
                uint64_t var_508 = (_mm_unpacklo_ps(zmm6_4, zmm7.q)).q
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_4d8_1.o)
                int64_t var_578_5 = 0
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_448_1.o)
                int32_t var_570_4 = 0
                zmm6_4 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_4a8_2.o)
                float var_2fc_1 = zmm8[0]
                zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                float var_500_1 = var_2fc_1
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(zmm2_3, zmm15)))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1[0] = zmm1[0] f+ zmm0.d
                
                if (zmm1[0] f<= zmm12.d)
                    zmm6_4 = zmm10
                    zmm7 = zmm10
                    zmm8 = zmm10
                else
                    zmm3_3 = zx.o(0)
                    zmm4_3 = 0x3f000000
                    zmm3_3[0] = zmm1.d
                    zmm2_3 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm0.d
                    zmm2_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
                    zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm6_4[0] = zmm6_4[0] * zmm5_3[0]
                    zmm7.d = zmm7.d f* zmm5_3[0]
                    zmm8[0] = zmm8[0] * zmm5_3[0]
                
                float var_3e8 = zmm6_4[0]
                int32_t var_3e4_1 = zmm7.d
                float var_3e0_1 = zmm8[0]
                int32_t var_5b8_9 = zmm9.d
                int32_t var_128[0x4]
                int32_t* rax_86
                rax_86, zmm9, zmm10 = sub_140ae34d0(&var_128, &var_3e8, &var_508, r9_13)
                int32_t* var_1c8
                int32_t* rdx_39 = var_1c8
                var_508 = *rax_86
                int32_t rax_87 = rax_86[2]
                zmm1 = var_508:4.d
                int32_t var_1d4
                var_1c8 = &rdx_39[sx.q(var_1d4)]
                *rdx_39 = var_508.d.d
                void* var_1b0
                float* rdx_40 = var_1b0
                int32_t var_1bc
                var_1b0 = &rdx_40[sx.q(var_1bc)]
                *rdx_40 = zmm1[0]
                void* var_198
                int32_t* rdx_41 = var_198
                int32_t var_1a4
                var_198 = &rdx_41[sx.q(var_1a4)]
                *rdx_41 = rax_87
        
        rbx_1 += r11_5
        cond:4_1 = var_520 + 1 s< *(arg2 + 0x40)
        result = result_2
        r9_6 = var_3a8_1
        r10_2 = var_3b8_1
        r11_5 = var_378_1
        var_520 += 1
        r8_2 += sx.q(var_3c8) << 2
    while (cond:4_1)

return result
