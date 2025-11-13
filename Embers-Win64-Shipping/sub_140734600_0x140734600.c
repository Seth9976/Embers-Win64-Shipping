// 函数: sub_140734600
// 地址: 0x140734600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int64_t* r15 = nullptr
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
uint128_t* rbx_1

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
uint128_t* r12_1

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

uint32_t var_418 = 0xffffffff
uint128_t* var_410 = nullptr
int32_t var_408 = 0
sub_140767bd0(&var_418, arg2)
void var_338
sub_140742680(&var_338, arg2)

if (sub_140d3c6e0(result_3) != 0)
    sub_142591550()

void* rax_23 = *(result_3 + 0x58)
void* var_568 = nullptr

if (rax_23 != 0)
    r15 = *(**(rax_23 + 0x58) + (sx.q(result_3[0x1a]) << 3))
    
    if (result_3[0x86].b != 0)
        void* rax_26 = sub_140d3c6e0(result_3)
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
            rax_29 = &r15[0x27]
        else
            rax_29 = sub_141f66050(rax_26, result_3[0x1a])
        
        var_568 = rax_29

int64_t* rsi

if (rax_23 == 0 || r15 == 0)
    rsi = nullptr
else
    rsi = r15[3]

int64_t* var_4b0 = rsi
uint128_t zmm9 = 0x3f800000
int32_t var_52c = 0
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*rsi + 0x58))(rsi))
uint64_t result = result_1
uint128_t zmm0
zmm0.d = 1f f/ *(result + 0x190)
int32_t var_4d8 = zmm0.d

if (*(arg2 + 0x40) s> 0)
    uint128_t* r8_2 = var_410
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm10[0x4] = zx.o(0)
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
    uint64_t var_378_1 = r10_2
    uint64_t var_398_1 = r11_5
    bool cond:4_1
    
    do
        uint128_t* rdx_10 = r12_1
        uint128_t* rcx_18 = r13_1
        r12_1 += result
        r13_1 += r9_6
        uint64_t rdx_11 = zx.q(*rdi_1)
        int32_t var_360_1 = (*rdx_10).d
        uint64_t var_434_1 = (_mm_unpacklo_ps(*rbx_1, (*rcx_18).q)).q
        int32_t var_530_1 = (*r8_2).d
        
        if (rdx_11.d s< 0 || rdx_11.d s> (temp0 u>> 0x1f) - 1 + temp0)
            int32_t var_354_1 = 0
            uint64_t var_384_1 = (_mm_unpacklo_ps(zmm9, zmm10[0].q)).q
            int32_t var_37c_1 = 0
            rdx_11 = zx.q(0.o.d)
        
        uint32_t rbx_5 = (rdx_11 * 3).d
        int32_t rax_40 = (*(*rsi + 0x68))(rsi, zx.q(rbx_5))
        int64_t r8_3 = *rsi
        int32_t rax_41 = (*(r8_3 + 0x68))(rsi, zx.q(rbx_5 + 1), r8_3)
        int64_t r8_4 = *var_4b0
        int32_t rax_42 = (*(r8_4 + 0x68))(var_4b0, zx.q(rbx_5 + 2), r8_4)
        void var_188
        int64_t* rax_43 = sub_142316040(&var_188, rax_23, r15, var_568, rax_40)
        int32_t rcx_25 = rax_43[1].d
        zmm8 = zx.o(*rax_43)
        void var_134
        int64_t* rax_44 = sub_142316040(&var_134, rax_23, r15, var_568, rax_41)
        zmm7 = zx.o(*rax_44)
        int32_t rax_45 = rax_44[1].d
        void var_17c
        int64_t* rax_46
        int512_t zmm6_1
        rax_46, zmm6_1 = sub_142316040(&var_17c, rax_23, r15, var_568, rax_42)
        zmm6_1.o = zx.o(*rax_46)
        int32_t rax_47 = rax_46[1].d
        void var_170
        int64_t* rax_48 = sub_142316040(&var_170, rax_23, r15, var_568, rax_40)
        int64_t zmm0_1 = *rax_48
        int32_t rax_49 = rax_48[1].d
        void var_164
        int64_t* rax_50 = sub_142316040(&var_164, rax_23, r15, var_568, rax_41)
        zmm11 = zx.o(*rax_50)
        int32_t rax_51 = rax_50[1].d
        uint64_t var_458_1 = zmm11.q
        void var_158
        int64_t* rax_52
        int32_t r9_13
        uint128_t zmm6_2
        rax_52, r9_13, zmm6_2 = sub_142316040(&var_158, rax_23, r15, var_568, rax_42)
        zmm9 = var_360_1
        zmm0 = zx.o(*rax_52)
        uint64_t var_4a8_2 = zmm0.q
        zmm13.d = zmm9.d f* zmm0.d
        zmm0 = zmm0.q:4.d
        float var_598_1 = zmm0.d
        zmm12 = var_434_1:4.d
        zmm14.d = zmm9.d f* zmm0.d
        zmm0 = rax_52[1].d
        float zmm5_1[0x4] = zmm12
        zmm15.d = zmm9.d f* zmm0.d
        float zmm3_1[0x4] = zmm12
        int32_t var_5a8_1 = zmm0.d
        uint32_t var_3c8_1 = zmm7.d
        zmm0 = zmm11.q:4.d
        uint128_t zmm4_1
        zmm4_1.d = zmm12.d f* zmm0.d
        int32_t var_5a4_1 = zmm0.d
        zmm0 = rax_51
        zmm3_1[0] = zmm3_1[0] f* zmm0.d
        int32_t var_5a0_1 = zmm0.d
        zmm0 = zx.o(zmm0_1)
        uint64_t var_540_1 = zmm0.q
        zmm5_1[0] = zmm5_1[0] f* zmm11.d
        zmm11 = var_434_1.d
        int32_t var_550_1 = zmm8.d
        uint128_t zmm2_1
        zmm2_1.d = zmm11.d f* zmm0.d
        uint128_t zmm1
        zmm1.d = zmm11.d f* var_540_1:4.d
        zmm0.d = zmm11.d f* rax_49
        zmm5_1[0] = zmm5_1[0] f+ zmm2_1.d
        zmm2_1 = rax_45
        zmm4_1.d = zmm4_1.d f+ zmm1.d
        zmm1 = rax_47
        zmm3_1[0] = zmm3_1[0] f+ zmm0.d
        int32_t var_3f8_1 = zmm6_2.d
        zmm0 = zmm8
        arg_20 = zmm2_1.d
        zmm8 = zmm7
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm7 = zmm6_2
        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        zmm6_2 = var_3f8_1
        zmm14.d = zmm14.d f+ zmm4_1.d
        zmm4_1 = var_3c8_1
        zmm13.d = zmm13.d f+ zmm5_1[0]
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm15.d = zmm15.d f+ zmm3_1[0]
        arg_10 = zmm4_1.d
        uint64_t var_588_1 = zmm7.q
        int32_t var_59c_1 = zmm1.d
        arg_18 = zmm6_2.d
        uint64_t var_4c8_1 = zmm0.q
        int64_t var_4e8 = zmm8.q
        char var_1d0
        char var_1cf
        
        if (var_1d0 != 0 || var_1cf != 0)
            void* var_328
            int32_t* rdx_21 = var_328
            zmm5_1 = zmm9
            zmm3_1 = zmm9
            zmm9.d = zmm9.d f* zmm1.d
            zmm0.d = zmm12.d f* zmm4_1.d
            zmm1 = zmm12
            zmm12.d = zmm12.d f* zmm2_1.d
            zmm4_1 = zmm11
            int32_t var_334
            var_328 = &rdx_21[sx.q(var_334)]
            zmm1.d = zmm1.d f* zmm8[0]
            zmm2_1.d = zmm11.d f* var_550_1
            zmm11.d = zmm11.d f* rcx_25
            zmm4_1.d = zmm4_1.d f* zx.o(var_4c8_1)[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm8 = zx.o(var_4e8)
            zmm11.d = zmm11.d f+ zmm12.d
            zmm5_1[0] = zmm5_1[0] f* zmm6_2.d
            zmm4_1.d = zmm4_1.d f+ zmm1.d
            zmm3_1[0] = zmm3_1[0] f* zmm7.d
            zmm5_1[0] = zmm5_1[0] f+ zmm2_1.d
            zmm9.d = zmm9.d f+ zmm11.d
            zmm11 = var_530_1
            zmm4_1.d = zmm4_1.d f+ zmm3_1[0]
            zmm5_1[0] = zmm5_1[0] f- zmm13.d
            zmm9.d = zmm9.d f- zmm15.d
            zmm4_1.d = zmm4_1.d f- zmm14.d
            zmm5_1[0] = zmm5_1[0] f* zmm11.d
            zmm9.d = zmm9.d f* zmm11.d
            zmm4_1.d = zmm4_1.d f* zmm11.d
            zmm0.d = zmm13.d f+ zmm5_1[0]
            zmm2_1.d = zmm15.d f+ zmm9.d
            zmm1.d = zmm14.d f+ zmm4_1.d
            zmm4_1 = arg_10
            *rdx_21 = zmm0.d
            void* var_310
            int32_t* rdx_22 = var_310
            int32_t var_31c
            var_310 = &rdx_22[sx.q(var_31c)]
            *rdx_22 = zmm1.d
            void* var_2f8
            int32_t* rdx_23 = var_2f8
            int32_t var_304
            var_2f8 = &rdx_23[sx.q(var_304)]
            *rdx_23 = zmm2_1.d
            
            if (var_1cf != 0)
                void* var_2e0
                int32_t* rdx_24 = var_2e0
                zmm0.d = zmm0.d f- zmm13.d
                zmm1.d = zmm1.d f- zmm14.d
                zmm3_1 = var_4d8
                zmm2_1.d = zmm2_1.d f- zmm15.d
                zmm0.d = zmm0.d f* zmm3_1[0]
                int32_t var_2ec
                var_2e0 = &rdx_24[sx.q(var_2ec)]
                zmm1.d = zmm1.d f* zmm3_1[0]
                *rdx_24 = zmm0.d
                void* var_2c8
                int32_t* rdx_25 = var_2c8
                zmm2_1.d = zmm2_1.d f* zmm3_1[0]
                int32_t var_2d4
                var_2c8 = &rdx_25[sx.q(var_2d4)]
                *rdx_25 = zmm1.d
                void* var_2b0
                int32_t* rdx_26 = var_2b0
                int32_t var_2bc
                var_2b0 = &rdx_26[sx.q(var_2bc)]
                *rdx_26 = zmm2_1.d
            
            zmm0 = zx.o(var_4c8_1)
        
        zmm15 = var_59c_1
        char var_1ce
        
        if (var_1ce == 0)
            zmm9 = 0x3f800000
        else
            zmm5_1 = var_550_1
            zmm3_1 = zmm8
            zmm5_1[0] = zmm5_1[0] f- zmm6_2.d
            zmm2_1.d = rcx_25.d f- zmm15.d
            zmm4_1.d = zmm4_1.d f- arg_18
            zmm3_1[0] = zmm3_1[0] f- zmm7.d
            zmm1.d = arg_20.d f- zmm15.d
            zmm6_2.d = zmm0.d f- zmm7.d
            zmm8 = zmm5_1
            zmm5_1[0] = zmm5_1[0] * zmm3_1[0]
            zmm7.d = zmm3_1.d f* zmm2_1.d
            zmm8[0] = zmm8[0] f* zmm1.d
            zmm0.d = zmm6_2.d f* zmm1.d
            zmm6_2.d = zmm6_2.d f* zmm4_1.d
            zmm7.d = zmm7.d f- zmm0.d
            zmm0.d = zmm4_1.d f* zmm2_1.d
            zmm6_2.d = zmm6_2.d f- zmm5_1[0]
            zmm8[0] = zmm8[0] f- zmm0.d
            zmm2_1.d = zmm7.d f* zmm7.d
            zmm1.d = zmm6_2.d f* zmm6_2.d
            zmm0.d = zmm8.d f* zmm8[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1.d
            int32_t var_578_1
            float var_570_1
            
            if (not(zmm2_1.d f!= 1f))
                var_578_1 = zmm7.d
                float var_574_1 = zmm8[0]
                var_570_1 = zmm6_2.d
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm3_1 = zx.o(0)
                zmm3_1[0] = zmm2_1.d
                zmm5_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1[0]
                zmm1.d = zmm3_1.d f* zmm0.d
                zmm2_1.d = 0.5f f- zmm1.d
                zmm0.d = zmm5_1.d f* zmm2_1.d
                zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                zmm1.d = zmm5_1.d f* zmm5_1[0]
                zmm3_1[0] = zmm3_1[0] f* zmm1.d
                zmm4_1.d = 0.5f - zmm3_1[0]
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                float var_59c_2 = zmm5_1[0]
                zmm0.d = zmm5_1.d f* zmm7.d
                zmm1.d = zmm5_1.d f* zmm8[0]
                zmm5_1[0] = zmm5_1[0] f* zmm6_2.d
                var_578_1 = zmm0.d
                int32_t var_574_3 = zmm1.d
                var_570_1 = zmm5_1[0]
            else
                var_578_1 = data_143dbb1f8.d
                int32_t var_574_2 = data_143dbb1fc.d
                var_570_1 = data_143dbb200.d
            
            zmm6_2.d = var_540_1:4.d.d f- var_598_1
            zmm5_1 = zx.o(zmm0_1)
            zmm14 = zx.o(var_4a8_2)
            zmm3_1 = rax_49
            zmm5_1[0] = zmm5_1[0] f- zmm14.d
            zmm3_1[0] = zmm3_1[0] f- var_5a8_1
            zmm2_1.d = var_5a4_1.d f- var_598_1
            zmm1.d = var_5a0_1.d f- var_5a8_1
            zmm8 = zmm5_1
            zmm4_1.d = var_458_1.d f- zmm14.d
            zmm7.d = zmm3_1.d f* zmm2_1.d
            float var_4f8_1 = var_570_1
            zmm5_1[0] = zmm5_1[0] f* zmm2_1.d
            uint64_t var_500 = var_578_1.q
            zmm0.d = zmm6_2.d f* zmm1.d
            zmm8[0] = zmm8[0] f* zmm1.d
            zmm7.d = zmm7.d f- zmm0.d
            zmm6_2.d = zmm6_2.d f* zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm4_1.d
            zmm6_2.d = zmm6_2.d f- zmm5_1[0]
            zmm8[0] = zmm8[0] - zmm3_1[0]
            zmm2_1.d = zmm7.d f* zmm7.d
            zmm1.d = zmm6_2.d f* zmm6_2.d
            zmm0.d = zmm8.d f* zmm8[0]
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1.d
            int32_t var_560
            
            if (not(zmm2_1.d f!= 1f))
                var_560 = zmm7.d
                float var_55c_1 = zmm8[0]
                int32_t var_558_1 = zmm6_2.d
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm3_1 = zmm2_1
                zmm5_1 = _mm_rsqrt_ss(zmm2_1[0], zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1[0]
                zmm1.d = zmm3_1.d f* zmm0.d
                zmm2_1.d = 0.5f f- zmm1.d
                zmm0.d = zmm5_1.d f* zmm2_1.d
                zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                zmm1.d = zmm5_1.d f* zmm5_1[0]
                zmm3_1[0] = zmm3_1[0] f* zmm1.d
                zmm4_1.d = 0.5f - zmm3_1[0]
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                float var_59c_3 = zmm5_1[0]
                zmm0.d = zmm5_1.d f* zmm7.d
                zmm1.d = zmm5_1.d f* zmm8[0]
                zmm5_1[0] = zmm5_1[0] f* zmm6_2.d
                var_560 = zmm0.d
                int32_t var_55c_3 = zmm1.d
                float var_558_3 = zmm5_1[0]
            else
                var_560 = data_143dbb1f8.d
                int32_t var_55c_2 = data_143dbb1fc.d
                int32_t var_558_2 = data_143dbb200.d
            
            int32_t var_5b8_7 = 0x3f800000
            int32_t var_14c
            int32_t* rax_61
            rax_61, r9_13, zmm9, zmm10 = sub_140ae34d0(&var_14c, &var_560, &var_500, r9_13)
            void* var_298
            int32_t* rdx_28 = var_298
            zmm7 = zx.o(var_588_1)
            zmm6_2 = arg_18
            var_500 = *rax_61
            zmm1 = var_500:4.d
            zmm2_1 = rax_61[2]
            int32_t var_2a4
            var_298 = &rdx_28[sx.q(var_2a4)]
            *rdx_28 = var_500.d.d
            void* var_280
            int32_t* rdx_29 = var_280
            int32_t var_28c
            var_280 = &rdx_29[sx.q(var_28c)]
            *rdx_29 = zmm1.d
            void* var_268
            int32_t* rdx_30 = var_268
            int32_t var_274
            var_268 = &rdx_30[sx.q(var_274)]
            *rdx_30 = zmm2_1.d
        
        char var_1cc
        char rbx_7 = var_1cc
        char var_1cd
        
        if (var_1cd != 0 || rbx_7 != 0)
            zmm1.d = arg_20.d f- rcx_25
            zmm6_2.d = zmm6_2.d f- var_550_1
            zmm2_1.d = arg_10.d f- var_550_1
            zmm8 = zx.o(var_4c8_1)
            zmm7.d = zmm7.d f- zmm8[0]
            zmm15.d = zmm15.d f- rcx_25
            zmm12.d = var_4e8.d f- zmm8[0]
            int128_t var_1c8
            __builtin_memset(&var_1c8, 0, 0x20)
            data_142d3f660
            int32_t var_48c_1 = 0
            int32_t var_47c_1 = 0
            int32_t var_46c_1 = 0
            int128_t var_1a8
            __builtin_memcpy(&var_1a8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_66)[0x4]
            float zmm6_3[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            float zmm12_1
            float zmm14_1
            float zmm15_1[0x4]
            rax_66, zmm6_3, zmm7_1, zmm8_1, zmm12_1, zmm14_1, zmm15_1 =
                sub_140631b10(&var_1c8, &var_118)
            float var_488[0x4]
            var_488[0] = zmm6_2.d[0]
            uint32_t zmm2_2[0x4] = *rax_66
            float var_498[0x4]
            var_498[0] = zmm2_1.d[0]
            float zmm0_2[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            uint32_t zmm13_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float zmm5_2[0x4] = _mm_shuffle_ps(var_488, var_488, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_498, var_498, 0xe1)
            zmm5_2[0] = zmm7_1[0]
            zmm4_2[0] = zmm12_1
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm5_2[0] = zmm15_1[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm4_2[0] = zmm1.d[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm4_2)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm13_1 = _mm_mul_ps(zmm13_1, zmm5_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            zmm13_1 = _mm_add_ps(zmm13_1, zmm0_2)
            float var_478[0x4]
            var_478[0] = var_550_1[0]
            float zmm3_2[0x4] = _mm_shuffle_ps(var_478, var_478, 0xe1)
            zmm3_2[0] = zmm8_1[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = rcx_25[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            float var_478_1[0x4] = zmm3_2
            zmm13_1 = _mm_add_ps(_mm_add_ps(zmm13_1, _mm_mul_ps(zmm1_1, zmm3_2)), zmm2_2)
            zmm2_2 = rax_66[1]
            zmm15_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            var_4c8_1.o = zmm13_1
            zmm15_1 = _mm_add_ps(_mm_mul_ps(zmm15_1, zmm5_2), _mm_mul_ps(zmm0_2, zmm4_2))
            int32_t var_48c_2 = 0
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa), zmm3_2)
            int32_t var_47c_2 = 0
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            int32_t var_46c_2 = 0
            _mm_add_ps(_mm_add_ps(zmm15_1, zmm1_1), zmm2_2)
            zmm2_2 = rax_66[2]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm7_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            zmm7_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_1, zmm5_2), zmm0_2), zmm1_1), 
                zmm2_2)
            zmm2_2 = rax_66[3]
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0), zmm4_2)
            zmm8_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm8_1 = _mm_mul_ps(zmm8_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
            zmm8_1 = _mm_add_ps(zmm8_1, zmm0_2)
            zmm2_2 = _mm_mul_ps(zmm2_2, zmm6_3)
            zmm0_2 = var_5a8_1
            zmm0_2[0] = zmm0_2[0] f- rax_49
            var_4e8.o = zmm7_1
            zmm8_1 = _mm_add_ps(zmm8_1, zmm1_1)
            zmm1_1 = zx.o(zmm0_1)
            zmm1_1[0]
            float var_5a8_2 = zmm0_2[0]
            zmm0_2 = zx.o(var_458_1)
            zmm0_2[0] = zmm0_2[0] - zmm1_1[0]
            zmm8_1 = _mm_add_ps(zmm8_1, zmm2_2)
            int64_t var_458_2 = zmm0_2.q
            zmm0_2 = var_5a4_1
            zmm0_2[0] = zmm0_2[0] f- var_540_1:4.d
            var_4a8_2.o = zmm8_1
            float var_5a4_2 = zmm0_2[0]
            zmm0_2 = var_5a0_1
            zmm0_2[0] = zmm0_2[0] f- rax_49
            float var_5a0_2 = zmm0_2[0]
            uint32_t (* rax_67)[0x4]
            float zmm6_4[0x4]
            rax_67, zmm6_4, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_1c8, &var_118)
            zmm5_2[0] = zmm14.d
            float zmm2_3[0x4] = *rax_67
            zmm4_2[0] = var_458_2.d
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm5_3[0] = zmm12.d
            var_588_1.o = zmm0
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_5a8_2.d
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            var_488 = zmm5_3
            zmm14 = _mm_mul_ps(var_588_1.o, zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = var_5a4_2.d
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm4_3[0] = var_5a0_2.d
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_498 = zmm4_3
            zmm14 = _mm_add_ps(zmm14, _mm_mul_ps(zmm0, zmm4_3))
            uint128_t zmm3_3
            zmm3_3.d = zmm0_1.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
            zmm3_3.d = var_540_1:4.d.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3.d = rax_49.d
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_478 = zmm3_3
            zmm14 = _mm_add_ps(_mm_add_ps(zmm14, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = rax_67[1]
            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            zmm12 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm12, zmm0), zmm1), zmm2_3)
            zmm2_3 = rax_67[2]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_418.o = zmm12
            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            zmm12 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm12, zmm0), zmm1), zmm2_3)
            zmm2_3 = rax_67[3]
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_458_2.o = zmm12
            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            int64_t var_448_1
            var_448_1.o = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm12, zmm0), zmm1), zmm2_3)
            zmm12 = 0x322bcc77
            
            if (var_1cd != 0)
                zmm2_3 = data_142d4cc00
                int64_t var_588_2 = 0
                zmm6_4 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int32_t var_580_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm8)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm13)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm4_3 = 0x3f000000
                    zmm3_3.d = zmm1.d
                    zmm2_3 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1.d = zmm3_3.d f* zmm0.d
                    zmm2_3[0] = 0.5f f- zmm1.d
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm1.d
                    zmm4_3[0] = 0.5f f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm0.d = zmm5_3.d f* zmm6_4[0]
                    zmm1.d = zmm5_3.d f* zmm7.d
                    zmm5_3[0] = zmm5_3[0] * zmm8[0]
                
                zmm2_3 = data_142d4cc00
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_448_1.o)
                int64_t var_588_3 = 0
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_418.o)
                int32_t var_580_2 = 0
                uint64_t var_520 = zmm0.q
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_458_2.o)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm14)
                zmm3_3 = _mm_add_ps(zmm3_3, zmm0)
                float var_518_1 = zmm5_3[0]
                zmm3_3 = _mm_add_ps(zmm3_3, _mm_add_ps(zmm1, zmm2_3))
                zmm1 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                zmm0.d = zmm3_3.d f* zmm3_3.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                zmm3_3.d = zmm3_3.d f* zmm3_3.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm1.d = zmm1.d f+ zmm3_3.d
                
                if (not(zmm1.d f<= 9.99999994e-09f))
                    zmm5_3 = 0x3f000000
                    zmm3_3.d = zmm1.d
                    zmm2_3 = 0x3f000000
                    zmm4_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* 0.5f
                    zmm0.d = zmm4_3.d f* zmm4_3[0]
                    zmm1.d = zmm3_3.d f* zmm0.d
                    zmm2_3[0] = 0.5f f- zmm1.d
                    zmm0.d = zmm4_3.d f* zmm2_3[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    zmm1.d = zmm4_3.d f* zmm4_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm1.d
                    zmm5_3[0] = 0.5f f- zmm3_3.d
                    zmm0.d = zmm4_3.d f* zmm5_3[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm0.d
                    arg_10 = zmm4_3[0]
                
                int32_t var_5b8_8 = zmm9.d
                int32_t var_140
                int32_t* rax_69
                rax_69, r9_13, zmm9, zmm10, zmm12 =
                    sub_140ae34d0(&var_140, &var_520, &var_520, r9_13)
                void* var_250
                int32_t* rdx_34 = var_250
                zmm13 = var_4c8_1.o
                zmm7 = var_4e8.o
                zmm8 = var_4a8_2.o
                var_520 = *rax_69
                zmm1 = var_520:4.d
                zmm2_3 = rax_69[2]
                int32_t var_25c
                var_250 = &rdx_34[sx.q(var_25c)]
                *rdx_34 = var_520.d.d
                void* var_238
                int32_t* rdx_35 = var_238
                int32_t var_244
                var_238 = &rdx_35[sx.q(var_244)]
                *rdx_35 = zmm1.d
                void* var_220
                float* rdx_36 = var_220
                int32_t var_22c
                var_220 = &rdx_36[sx.q(var_22c)]
                *rdx_36 = zmm2_3[0]
                rbx_7 = var_1cc
            
            if (rbx_7 != 0)
                zmm2_3 = data_142d4cc20
                int64_t var_588_4 = 0
                zmm6_4 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int32_t var_580_3 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm8)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm13)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= zmm12.d)
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm4_3 = 0x3f000000
                    zmm3_3.d = zmm1.d
                    zmm2_3 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1.d = zmm3_3.d f* zmm0.d
                    zmm2_3[0] = 0.5f f- zmm1.d
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm1.d
                    zmm4_3[0] = 0.5f f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm0.d = zmm5_3.d f* zmm6_4[0]
                    zmm1.d = zmm5_3.d f* zmm7.d
                    zmm5_3[0] = zmm5_3[0] * zmm8[0]
                
                zmm2_3 = data_142d4cc20
                uint64_t var_510 = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_4e8.o)
                int64_t var_588_5 = 0
                zmm6_4 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_4a8_2.o)
                int32_t var_580_4 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                zmm2_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_4c8_1.o)
                zmm6_4 = _mm_add_ps(zmm6_4, zmm0)
                float var_508_1 = zmm5_3[0]
                zmm6_4 = _mm_add_ps(zmm6_4, _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= zmm12.d)
                    zmm0 = zmm10
                    zmm1 = zmm10
                    zmm5_3 = zmm10
                else
                    zmm4_3 = 0x3f000000
                    zmm3_3.d = zmm1.d
                    zmm2_3 = 0x3f000000
                    zmm5_3 = _mm_rsqrt_ss(zmm3_3[0], zmm3_3.d)
                    zmm3_3.d = zmm3_3.d f* 0.5f
                    zmm0.d = zmm5_3.d f* zmm5_3[0]
                    zmm1.d = zmm3_3.d f* zmm0.d
                    zmm2_3[0] = 0.5f f- zmm1.d
                    zmm0.d = zmm5_3.d f* zmm2_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    zmm1.d = zmm5_3.d f* zmm5_3[0]
                    zmm3_3.d = zmm3_3.d f* zmm1.d
                    zmm4_3[0] = 0.5f f- zmm3_3.d
                    zmm0.d = zmm5_3.d f* zmm4_3[0]
                    zmm5_3[0] = zmm5_3[0] f+ zmm0.d
                    arg_10 = zmm5_3[0]
                    zmm0.d = zmm5_3.d f* zmm6_4[0]
                    zmm1.d = zmm5_3.d f* zmm7.d
                    zmm5_3[0] = zmm5_3[0] * zmm8[0]
                
                int32_t var_428 = zmm0.d
                int32_t var_424_1 = zmm1.d
                float var_420_1 = zmm5_3[0]
                int32_t var_5b8_9 = zmm9.d
                int32_t var_128[0x4]
                int32_t* rax_75
                rax_75, zmm9, zmm10 = sub_140ae34d0(&var_128, &var_428, &var_510, r9_13)
                int32_t* var_208
                int32_t* rdx_38 = var_208
                var_510 = *rax_75
                int32_t rax_76 = rax_75[2]
                zmm1 = var_510:4.d
                int32_t var_214
                var_208 = &rdx_38[sx.q(var_214)]
                *rdx_38 = var_510.d.d
                void* var_1f0
                int32_t* rdx_39 = var_1f0
                int32_t var_1fc
                var_1f0 = &rdx_39[sx.q(var_1fc)]
                *rdx_39 = zmm1.d
                void* var_1d8
                int32_t* rdx_40 = var_1d8
                int32_t var_1e4
                var_1d8 = &rdx_40[sx.q(var_1e4)]
                *rdx_40 = rax_76
        
        rbx_1 += r10_2
        cond:4_1 = var_52c + 1 s< *(arg2 + 0x40)
        rdi_1 += r11_5
        rsi = var_4b0
        result = result_2
        r9_6 = var_3a8_1
        r10_2 = var_378_1
        r11_5 = var_398_1
        var_52c += 1
        r8_2 += sx.q(var_408) << 2
    while (cond:4_1)

return result
