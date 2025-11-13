// 函数: sub_14070d430
// 地址: 0x14070d430
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
uint8_t rax_6 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
void* rdx_4

if ((not.b(rax_6) & 1) == 0)
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
void* var_428 = rdx_4
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
*(arg2 + 0x10) = &rax[3]
void* rdx_9

if ((rax_10.b & 1) == 0)
    rdx_9 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_11 = 0
        int64_t rdx_7 = 0
        
        do
            i_2 -= *(r8 + rdx_7)
            rax_11 += 1
            rdx_7 = rax_11 << 2
            r9_1 += 1
        while (i_2 s>= *(r8 + rdx_7))
    
    rdx_9 = sx.q(i_2) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_13 = zx.d(rax[3])
void* var_430 = rdx_9
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
        int64_t rdx_12 = 0
        
        do
            i_3 -= *(r8 + rdx_12)
            rax_15 += 1
            rdx_12 = rax_15 << 2
            r9_2 += 1
        while (i_3 s>= *(r8 + rdx_12))
    
    rdx_14 = sx.q(i_3) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rcx_5 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
uint8_t rdi_1 = (rcx_5 u>> 0xf).b
int32_t i_4 = rcx_5 & 0x7fff
void* var_438 = rdx_14
void* rdx_19

if ((not.b(rdi_1) & 1) == 0)
    rdx_19 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_19 = 0
        int64_t rdx_17 = 0
        
        do
            i_4 -= *(r8 + rdx_17)
            rax_19 += 1
            rdx_17 = rax_19 << 2
            r9_3 += 1
        while (i_4 s>= *(r8 + rdx_17))
    
    rdx_19 = sx.q(i_4) + *(r10 + (sx.q(r9_3) << 3))

void* var_440 = rdx_19
void var_2d8
sub_140742680(&var_2d8, arg2)
void* rax_21 = sub_140d3c6e0(rbx)
void* var_480 = rax_21
void* rax_22
int64_t rax_23
void* rdx_23

if (rax_21 != 0)
    rax_22 = sub_142591550()
    rdx_23 = *(rax_21 + 0x10)
    rax_23 = sx.q(*(rax_22 + 0x38))

if (rax_21 == 0 || rax_23.d s> *(rdx_23 + 0x38)
        || *(*(rdx_23 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
    var_480 = nullptr

void* rax_25 = *(rbx + 0x58)
int64_t* r14 = nullptr
void* var_498 = nullptr

if (rax_25 != 0)
    r14 = *(**(rax_25 + 0x58) + (sx.q(rbx[0x1a]) << 3))
    
    if (rbx[0x86].b != 0)
        void* rax_28 = sub_140d3c6e0(rbx)
        void* rax_29
        void* rcx_11
        int64_t rdx_24
        
        if (rax_28 != 0)
            rax_29 = sub_142591550()
            rcx_11 = *(rax_28 + 0x10)
            rdx_24 = sx.q(*(rax_29 + 0x38))
        
        void* rax_31
        
        if (rax_28 == 0 || rdx_24.d s> *(rcx_11 + 0x38)
                || *(*(rcx_11 + 0x30) + (rdx_24 << 3)) != rax_29 + 0x30 || *(rax_28 + 0x430) == 0)
            rax_31 = &r14[0x27]
        else
            rax_31 = sub_141f66050(rax_28, rbx[0x1a])
        
        var_498 = rax_31

int64_t* r13_2

if (rax_25 == 0 || r14 == 0)
    r13_2 = nullptr
else
    r13_2 = r14[3]

void* r12 = *(rbx + 0x70)
int32_t rax_33 = (*(*r13_2 + 0x58))(r13_2)
uint128_t zmm2 = 0x3f800000
float zmm8[0x4] = 0x3f800000
zmm8[0] = 1f f/ rbx[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_33)
float var_474 = zmm8[0]
char result_6
uint64_t result = zx.q(result_6)
int32_t r11_5 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_448 = r11_5
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

int32_t var_478 = 0

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm13[0x4] = zx.o(0)
    int32_t var_45c
    float zmm14[0x4] = var_45c
    float zmm15[0x4] = arg_10.d
    uint64_t r9_5 = zx.q(arg_20.b) << 2
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    uint64_t rdx_28 = zx.q(rdi_1) << 2
    uint64_t r8_3 = zx.q(rsi_1) << 2
    int32_t var_48c
    arg_20 = var_48c.d
    uint64_t r10_2 = zx.q(rax_6) << 2
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    int32_t var_46c
    int32_t var_4a0_1 = var_46c.d
    float var_49c_1 = zmm14[0]
    uint64_t var_3e8_1 = rdx_28
    uint64_t var_3e0_1 = r8_3
    uint64_t var_3d0_1 = r9_5
    uint64_t var_3d8_1 = r10_2
    bool cond:5_1
    
    do
        uint128_t* rcx_16 = var_440
        int32_t* rdx_29 = var_428
        var_440 = rcx_16 + rdx_28
        uint128_t* rcx_18 = var_438
        int32_t var_300_1 = (*rcx_16).d
        var_438 = rcx_18 + r8_3
        uint128_t* rcx_20 = var_430
        var_430 = rcx_20 + r9_5
        var_428 = rdx_29 + r10_2
        uint64_t rdx_31 = zx.q(*rdx_29)
        uint64_t var_414_1 = (_mm_unpacklo_ps(*rcx_20, (*rcx_18).q)).q
        
        if (rdx_31.d s< 0 || rdx_31.d s> r11_5)
            int32_t var_2f4_1 = 0
            uint64_t var_394_1 = (_mm_unpacklo_ps(zmm2, zmm13[0].q)).q
            int32_t var_38c_1 = 0
            rdx_31 = zx.q(0.o.d)
        
        uint32_t rbx_1 = (rdx_31 * 3).d
        int32_t rax_41 = (*(*r13_2 + 0x68))(r13_2, zx.q(rbx_1))
        int64_t r8_4 = *r13_2
        uint64_t rdi_2 = zx.q(rax_41)
        int32_t rax_42 = (*(r8_4 + 0x68))(r13_2, zx.q(rbx_1 + 1), r8_4)
        int64_t r8_5 = *r13_2
        result = (*(r8_5 + 0x68))(r13_2, zx.q(rbx_1 + 2), r8_5)
        int32_t rbx_2 = result.d
        int32_t var_4b4_1 = result.d
        uint32_t var_490
        int32_t var_488
        int32_t var_470
        int32_t var_468
        uint32_t var_460
        int32_t var_458
        uint128_t zmm0
        uint128_t zmm1
        
        if (arg_10 != 0)
            int64_t var_168
            int64_t* rax_44
            int512_t zmm7_1
            rax_44, zmm7_1 = sub_1423162c0(&var_168, var_480, rdi_2.d, r14, var_498, 
                ((sx.q(*(r12 + 0x34)) + 4) << 4) + r12)
            zmm7_1.o = zx.o(*rax_44)
            var_488 = rax_44[1].d
            int64_t var_15c
            int64_t* rax_51
            int512_t zmm6_1
            rax_51, zmm6_1 = sub_1423162c0(&var_15c, var_480, rax_42, r14, var_498, 
                ((sx.q(*(r12 + 0x34)) + 4) << 4) + r12)
            zmm6_1.o = zx.o(*rax_51)
            var_468 = rax_51[1].d
            int64_t var_12c[0x2]
            int64_t* rax_58
            rax_58, zmm6, zmm7, zmm8 = sub_1423162c0(&var_12c, var_480, rbx_2, r14, var_498, 
                ((sx.q(*(r12 + 0x34)) + 4) << 4) + r12)
            var_490 = zmm7.d
            arg_20 = _mm_shuffle_ps(zmm7, zmm7, 0x55).d
            zmm0 = zmm6
            zmm1 = zx.o(*rax_58)
            result = zx.q(rax_58[1].d)
            var_4a0_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_49c_1 = zmm0.d
            zmm14 = zmm0
            var_458 = result.d
            var_470 = zmm6.d
            var_460 = zmm1.d
        
        zmm9 = var_300_1
        zmm10 = var_414_1:4.d
        zmm11 = var_414_1.d
        int32_t var_44c
        uint128_t zmm3
        float zmm4_1[0x4]
        uint128_t zmm5_1
        float var_450
        
        if (arg_18 == 0)
            zmm6 = var_450
        else
            int64_t var_150
            int64_t* rax_65
            int512_t zmm8_1
            rax_65, zmm8_1 = sub_1423162c0(&var_150, var_480, rdi_2.d, r14, var_498, 
                (((sx.q(*(r12 + 0x34)) ^ 1) + 4) << 4) + r12)
            zmm8_1.o = zx.o(*rax_65)
            int32_t rax_66 = rax_65[1].d
            int64_t var_144
            int64_t* rax_73
            int512_t zmm6_2
            rax_73, zmm6_2 = sub_1423162c0(&var_144, var_480, rax_42, r14, var_498, 
                (((sx.q(*(r12 + 0x34)) ^ 1) + 4) << 4) + r12)
            zmm6_2.o = zx.o(*rax_73)
            int32_t rax_74 = rax_73[1].d
            int64_t var_138
            int64_t* rax_81
            rax_81, zmm6, zmm8, zmm9 = sub_1423162c0(&var_138, var_480, rbx_2, r14, var_498, 
                (((sx.q(*(r12 + 0x34)) ^ 1) + 4) << 4) + r12)
            zmm4_1 = zmm10
            zmm4_1[0] = zmm4_1[0] * zmm6[0]
            zmm1 = zx.o(*rax_81)
            zmm15 = zmm11
            zmm15[0] = zmm15[0] f* rax_66
            result = zx.q(rax_81[1].d)
            zmm2.d = zmm10.d f* rax_74
            zmm5_1.d = zmm9.d f* result.d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm15[0] = zmm15[0] f+ zmm2.d
            zmm7.d = zmm9.d f* zmm0.d
            zmm0 = zmm6
            zmm6 = zmm11
            zmm3.d = zmm10.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
            zmm0 = zmm8
            zmm12.d = zmm9.d f* zmm1.d
            zmm15[0] = zmm15[0] f+ zmm5_1.d
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm6[0] = zmm6[0] f* zmm0.d
            zmm1.d = zmm11.d f* zmm8[0]
            zmm8 = var_474
            zmm6[0] = zmm6[0] f+ zmm3.d
            zmm4_1[0] = zmm4_1[0] f+ zmm1.d
            zmm6[0] = zmm6[0] f+ zmm7.d
            zmm12.d = zmm12.d f+ zmm4_1[0]
            var_450 = zmm6[0]
            var_44c = zmm12.d
        
        if (var_170 != 0 || result_6 != 0)
            void* var_2c8
            int32_t* rdx_41 = var_2c8
            zmm0 = zmm10
            zmm1 = zmm10
            zmm10.d = zmm10.d f* var_470
            zmm2 = zmm9
            zmm7 = var_460
            zmm3 = zmm9
            zmm1.d = zmm1.d f* var_4a0_1
            int32_t var_2d4
            var_2c8 = &rdx_41[sx.q(var_2d4)]
            zmm0.d = zmm0.d f* var_468
            zmm11[0] = zmm11[0] f* var_488
            zmm5_1.d = zmm11.d f* arg_20
            zmm11[0] = zmm11[0] f* var_490
            zmm11[0] = zmm11[0] f+ zmm0.d
            zmm12 = var_458
            zmm5_1.d = zmm5_1.d f+ zmm1.d
            zmm9.d = zmm9.d f* zmm7.d
            zmm10.d = zmm10.d f+ zmm11[0]
            zmm3.d = zmm3.d f* zmm14[0]
            zmm2.d = zmm2.d f* zmm12.d
            zmm5_1.d = zmm5_1.d f+ zmm3.d
            zmm9.d = zmm9.d f+ zmm10.d
            zmm11[0] = zmm11[0] f+ zmm2.d
            *rdx_41 = zmm9.d
            void* var_2b0
            int32_t* rdx_42 = var_2b0
            int32_t var_2bc
            var_2b0 = &rdx_42[sx.q(var_2bc)]
            *rdx_42 = zmm5_1.d
            void* var_298
            float* rdx_43 = var_298
            int32_t result_1
            result = sx.q(result_1)
            var_298 = &rdx_43[result]
            *rdx_43 = zmm11[0]
            
            if (result_6 != 0)
                void* var_280
                int32_t* rdx_44 = var_280
                zmm5_1.d = zmm5_1.d f- zmm6[0]
                zmm11[0] = zmm11[0] - zmm15[0]
                zmm9.d = zmm9.d f- var_44c
                zmm5_1.d = zmm5_1.d f* zmm8[0]
                int32_t var_28c
                var_280 = &rdx_44[sx.q(var_28c)]
                zmm9.d = zmm9.d f* zmm8[0]
                zmm11[0] = zmm11[0] * zmm8[0]
                *rdx_44 = zmm9.d
                void* var_268
                int32_t* rdx_45 = var_268
                int32_t var_274
                var_268 = &rdx_45[sx.q(var_274)]
                *rdx_45 = zmm5_1.d
                float* var_250
                float* rdx_46 = var_250
                int32_t result_2
                result = sx.q(result_2)
                var_250 = &rdx_46[result]
                *rdx_46 = zmm11[0]
        else
            zmm12 = var_458
            zmm7 = var_460
        
        zmm11 = arg_20
        zmm10 = var_490
        zmm9 = var_470
        
        if (var_16e != 0)
            zmm6 = var_4a0_1
            zmm6[0] = zmm6[0] - zmm14[0]
            zmm11[0] = zmm11[0] - zmm14[0]
            zmm5_1.d = var_488.d f- zmm12.d
            zmm2.d = zmm10.d f- zmm7.d
            zmm1.d = zmm9.d f- zmm7.d
            zmm3.d = var_468.d f- zmm12.d
            zmm6[0] = zmm6[0] f* zmm5_1.d
            zmm0.d = zmm6.d f* zmm2.d
            zmm7.d = zmm11.d f* zmm1.d
            zmm8 = zmm3
            zmm8[0] = zmm8[0] f* zmm2.d
            zmm7.d = zmm7.d f- zmm0.d
            zmm3.d = zmm3.d f* zmm11[0]
            zmm0.d = zmm5_1.d f* zmm1.d
            zmm6[0] = zmm6[0] f- zmm3.d
            zmm1.d = zmm7.d f* zmm7.d
            zmm8[0] = zmm8[0] f- zmm0.d
            zmm2.d = zmm6.d f* zmm6[0]
            zmm0.d = zmm8.d f* zmm8[0]
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            int32_t var_3f0_1
            
            if (not(zmm2.d f!= 1f))
                var_3f0_1 = zmm7.d
            else if (zmm2.d f>= 9.99999994e-09f)
                zmm4_1 = 0x3f000000
                zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                zmm3.d = zmm2.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm2.d = zmm3.d f* zmm0.d
                zmm1.d = 0.5f f- zmm2.d
                zmm0.d = zmm5_1.d f* zmm1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm0.d
                zmm4_1[0] = 0.5f f- zmm3.d
                zmm0.d = zmm5_1.d f* zmm4_1[0]
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                int32_t var_4b0_1 = zmm5_1.d
                zmm0.d = zmm5_1.d f* zmm7.d
                zmm1.d = zmm5_1.d f* zmm8[0]
                zmm5_1.d = zmm5_1.d f* zmm6[0]
                zmm7 = zmm0
                var_3f0_1 = zmm0.d
                zmm8 = zmm1
                zmm6 = zmm5_1
            else
                zmm7 = data_143dbb200
                zmm6 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                var_3f0_1 = zmm7.d
            
            void* var_238
            float* rdx_47 = var_238
            int32_t var_2e8_1 = var_3f0_1
            uint64_t var_2f0_1 = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
            int32_t var_244
            var_238 = &rdx_47[sx.q(var_244)]
            *rdx_47 = zmm6[0]
            void* var_220
            float* rdx_48 = var_220
            int32_t var_22c
            var_220 = &rdx_48[sx.q(var_22c)]
            *rdx_48 = zmm8[0]
            int32_t* var_208
            int32_t* rdx_49 = var_208
            int32_t result_3
            result = sx.q(result_3)
            var_208 = &rdx_49[result]
            *rdx_49 = zmm7.d
        
        if (var_16d != 0 || var_16c != 0)
            int16_t* rsi_5 = rdi_2 * (zx.q(r14[0x15].d) << 2) + r14[0x13]
            uint32_t rbx_3 = zx.d(rsi_5[1])
            int32_t rdi_5 = (rbx_3 & 0xffff8000) << 0x10
            int32_t var_4a4_1
            TEB* gsbase
            
            if ((0x7c00 & rbx_3.w) == 0)
                int32_t rbx_4 = rbx_3 & 0x3ff
                
                if (rbx_4 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_4))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_4a4_1 = (rbx_4 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_5
                else
                    var_4a4_1 = rdi_5
            else if ((rbx_3.w & 0x7c00) != 0x7c00)
                var_4a4_1 = ((rbx_3 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_3 & 0x3ff) << 0xd | rdi_5
            else
                var_4a4_1 = rdi_5 | 0x477fe000
            
            uint32_t rbx_11 = zx.d(*rsi_5)
            int32_t rdi_9 = (rbx_11 & 0xffff8000) << 0x10
            int32_t var_4a8_1
            
            if ((0x7c00 & rbx_11.w) == 0)
                int32_t rbx_12 = rbx_11 & 0x3ff
                
                if (rbx_12 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_12))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_4a8_1 = (rbx_12 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_9
                else
                    var_4a8_1 = rdi_9
            else if ((rbx_11.w & 0x7c00) != 0x7c00)
                var_4a8_1 =
                    ((rbx_11 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_11 & 0x3ff) << 0xd | rdi_9
            else
                var_4a8_1 = rdi_9 | 0x477fe000
            
            int16_t* rsi_8 = zx.q(rax_42) * (zx.q(r14[0x15].d) << 2) + r14[0x13]
            uint32_t rbx_19 = zx.d(rsi_8[1])
            int32_t rdi_13 = (rbx_19 & 0xffff8000) << 0x10
            int32_t var_4b8_2
            
            if ((0x7c00 & rbx_19.w) == 0)
                int32_t rbx_20 = rbx_19 & 0x3ff
                
                if (rbx_20 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_20))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_4b8_2 = (rbx_20 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_13
                else
                    var_4b8_2 = rdi_13
            else if ((rbx_19.w & 0x7c00) != 0x7c00)
                var_4b8_2 =
                    ((rbx_19 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_19 & 0x3ff) << 0xd | rdi_13
            else
                var_4b8_2 = rdi_13 | 0x477fe000
            
            uint32_t rbx_27 = zx.d(*rsi_8)
            int32_t rdi_17 = (rbx_27 & 0xffff8000) << 0x10
            int32_t var_4b0_2
            
            if ((0x7c00 & rbx_27.w) == 0)
                int32_t rbx_28 = rbx_27 & 0x3ff
                
                if (rbx_28 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_28))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_4b0_2 = (rbx_28 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_17
                else
                    var_4b0_2 = rdi_17
            else if ((rbx_27.w & 0x7c00) != 0x7c00)
                var_4b0_2 =
                    ((rbx_27 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_27 & 0x3ff) << 0xd | rdi_17
            else
                var_4b0_2 = rdi_17 | 0x477fe000
            
            int16_t* rsi_11 = zx.q(var_4b4_1) * (zx.q(r14[0x15].d) << 2) + r14[0x13]
            uint32_t rbx_35 = zx.d(rsi_11[1])
            int32_t rdi_21 = (rbx_35 & 0xffff8000) << 0x10
            int32_t var_4b4_2
            
            if ((0x7c00 & rbx_35.w) == 0)
                int32_t rbx_36 = rbx_35 & 0x3ff
                
                if (rbx_36 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_36))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_4b4_2 = (rbx_36 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_21
                else
                    var_4b4_2 = rdi_21
            else if ((rbx_35.w & 0x7c00) != 0x7c00)
                var_4b4_2 =
                    ((rbx_35 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_35 & 0x3ff) << 0xd | rdi_21
            else
                var_4b4_2 = rdi_21 | 0x477fe000
            
            uint32_t rbx_43 = zx.d(*rsi_11)
            int32_t rdi_25 = (rbx_43 & 0xffff8000) << 0x10
            int32_t var_4ac_1
            
            if ((0x7c00 & rbx_43.w) == 0)
                int32_t rbx_44 = rbx_43 & 0x3ff
                
                if (rbx_44 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_44))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_4ac_1 = (rbx_44 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_25
                else
                    var_4ac_1 = rdi_25
            else if ((rbx_43.w & 0x7c00) != 0x7c00)
                var_4ac_1 =
                    ((rbx_43 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_43 & 0x3ff) << 0xd | rdi_25
            else
                var_4ac_1 = rdi_25 | 0x477fe000
            
            zmm4_1 = var_4a4_1
            zmm9.d = zmm9.d f- zmm10.d
            zmm5_1 = var_4a8_1
            zmm0.d = var_4b8_2.d f- zmm4_1[0]
            zmm3.d = var_4ac_1.d f- zmm5_1.d
            zmm2.d = var_4b4_2.d f- zmm4_1[0]
            zmm6 = var_460
            zmm1.d = var_4b0_2.d f- zmm5_1.d
            zmm6[0] = zmm6[0] f- zmm10.d
            int32_t var_328_1 = zmm5_1.d
            zmm8 = zmm12
            zmm12 = data_142d3f660
            zmm10.d = var_4a0_1.d f- zmm11[0]
            zmm8[0] = zmm8[0] f- var_488
            int32_t var_344_1 = zmm0.d
            zmm7.d = zmm14.d f- zmm11[0]
            int32_t var_348 = zmm1.d
            zmm11 = var_468
            zmm11[0] = zmm11[0] f- var_488
            uint128_t var_318_1 = zmm12
            int32_t var_338_1 = zmm3.d
            int32_t var_334_1 = zmm2.d
            float var_324_1 = zmm4_1[0]
            int32_t var_37c_1 = 0
            int32_t var_36c_1 = 0
            int32_t var_35c_1 = 0
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0
            int64_t var_320_1 = 0x3f800000
            uint32_t var_118[0x4][0x4]
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
                sub_140631b10(&var_348, &var_118)
            float var_378[0x4]
            var_378[0] = zmm6[0]
            float var_388[0x4]
            var_388[0] = zmm9.d
            zmm2 = *result
            float zmm5_2[0x4] = _mm_shuffle_ps(var_378, var_378, 0xe1)
            zmm14 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7.d
            float zmm4_2[0x4] = _mm_shuffle_ps(var_388, var_388, 0xe1)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm4_2[0] = zmm10.d
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm5_2[0] = zmm8[0]
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2[0] = zmm11[0]
            zmm14 = _mm_mul_ps(zmm14, zmm5_2)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm14 = _mm_add_ps(zmm14, zmm0)
            var_378 = zmm5_2
            zmm3.d = var_490.d
            var_388 = zmm4_2
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = arg_20.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = var_488.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_368 = zmm3
            zmm14 = _mm_add_ps(_mm_add_ps(zmm14, _mm_mul_ps(zmm1, zmm3)), zmm2)
            zmm2 = *(result + 0x10)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x20)
            zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
            zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
            zmm2 = *(result + 0x30)
            zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm11 = _mm_mul_ps(zmm11, zmm5_2)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_2)
            zmm1 = _mm_mul_ps(zmm1, zmm3)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm11 = _mm_add_ps(zmm11, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm12)
            zmm11 = _mm_add_ps(_mm_add_ps(zmm11, zmm1), zmm2)
            
            if (var_16d != 0)
                zmm2 = data_142d4cc00
                int64_t var_408_1 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_400_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm4_2 = 0x3f000000
                    zmm3.d = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm2.d = 0.5f f- zmm1.d
                    zmm0.d = zmm5_2.d f* zmm2.d
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_2[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    float var_4b8_3 = zmm5_2[0]
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1f0
                float* rdx_63 = var_1f0
                int32_t var_1fc
                var_1f0 = &rdx_63[sx.q(var_1fc)]
                *rdx_63 = zmm6[0]
                void* var_1d8
                int32_t* rdx_64 = var_1d8
                int32_t var_1e4
                var_1d8 = &rdx_64[sx.q(var_1e4)]
                *rdx_64 = zmm7.d
                void* var_1c0
                float* rdx_65 = var_1c0
                int32_t result_4
                result = sx.q(result_4)
                var_1c0 = &rdx_65[result]
                *rdx_65 = zmm8[0]
            
            if (var_16c != 0)
                zmm2 = data_142d4cc20
                int64_t var_408_2 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_400_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8[0]
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm6 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
                else
                    zmm4_2 = 0x3f000000
                    zmm3.d = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm2.d = 0.5f f- zmm1.d
                    zmm0.d = zmm5_2.d f* zmm2.d
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_2[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    float var_4b8_4 = zmm5_2[0]
                    zmm6[0] = zmm6[0] * zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1a8
                float* rdx_66 = var_1a8
                int32_t var_1b4
                var_1a8 = &rdx_66[sx.q(var_1b4)]
                *rdx_66 = zmm6[0]
                void* var_190
                int32_t* rdx_67 = var_190
                int32_t var_19c
                var_190 = &rdx_67[sx.q(var_19c)]
                *rdx_67 = zmm7.d
                void* var_178
                float* rdx_68 = var_178
                int32_t result_5
                result = sx.q(result_5)
                var_178 = &rdx_68[result]
                *rdx_68 = zmm8[0]
        
        zmm14 = var_49c_1
        cond:5_1 = var_478 + 1 s< *(arg2 + 0x40)
        zmm8 = var_474
        zmm2 = 0x3f800000
        rdx_28 = var_3e8_1
        r9_5 = var_3d0_1
        r10_2 = var_3d8_1
        r11_5 = var_448
        var_478 += 1
        r8_3 = var_3e0_1
    while (cond:5_1)

return result
