// 函数: sub_140720290
// 地址: 0x140720290
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
uint32_t var_470 = rax_6
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
void* var_408 = rdx_4
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
        int32_t* rdx_7 = nullptr
        
        do
            i_2 -= *(rdx_7 + r8)
            rax_11 += 1
            rdx_7 = rax_11 << 2
            r9_1 += 1
        while (i_2 s>= *(rdx_7 + r8))
    
    rdx_9 = sx.q(i_2) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_13 = zx.d(rax[3])
void* var_410 = rdx_9
uint8_t r14_1 = (rax_13 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i_3 = rax_13 & 0x7fff
void* rdx_14

if ((not.b(r14_1) & 1) == 0)
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
uint8_t rsi_1 = (rcx_5 u>> 0xf).b
int32_t i_4 = rcx_5 & 0x7fff
void* var_418 = rdx_14
void* rdx_19

if ((not.b(rsi_1) & 1) == 0)
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

void* var_420 = rdx_19
void var_288
sub_140742680(&var_288, arg2)

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
            void* rcx_10 = *(rax_25 + 0x10)
            int64_t rdx_23 = sx.q(*(rax_26 + 0x38))
            
            if (rdx_23.d s<= *(rcx_10 + 0x38)
                    && *(*(rcx_10 + 0x30) + (rdx_23 << 3)) == rax_26 + 0x30
                    && *(rax_25 + 0x430) != 0)
                sub_141f66050(rax_25, rdi[0x1a])

int64_t* r12

if (rax_22 == 0 || r13 == 0)
    r12 = nullptr
else
    r12 = *(r13 + 0x18)

void* rax_28 = *(rdi + 0x70)
int32_t rbx_2 = (*(rdi + 0x68)).d
int32_t rax_30 = (*(*r12 + 0x58))(r12)
float zmm2[0x4] = 0x3f800000
uint128_t zmm0
zmm0.d = 1f f/ rdi[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_30)
int32_t var_42c = zmm0.d
char result_6
uint64_t result = zx.q(result_6)
int32_t r11_5 = (temp0 u>> 0x1f) - 1 + temp0
int32_t var_428 = r11_5
char var_120
char var_11e
char var_11d
char var_11c
char arg_10
char arg_18

if (var_120 != 0 || result.b != 0 || var_11e != result.b || var_11d != result.b
        || var_11c != result.b)
    arg_10 = 1
    
    if (result.b != 0)
        arg_18 = 1
    else
        arg_18 = result.b
else
    arg_10 = result.b
    arg_18 = result.b

int32_t var_450 = 0

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    uint128_t zmm12 = arg_10.d
    uint128_t zmm13 = zx.o(0)
    uint128_t zmm14 = arg_10.d
    uint128_t zmm15 = arg_10.d
    int64_t var_438_1 = (arg_10.d).q
    uint64_t r9_5 = zx.q(arg_20.b) << 2
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint64_t rdx_27 = zx.q(rsi_1) << 2
    uint64_t r8_2 = zx.q(r14_1) << 2
    int64_t var_440_1 = (arg_10.d).q
    uint64_t r10_2 = zx.q(var_470.b) << 2
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint64_t var_360_1 = rdx_27
    uint64_t var_348_1 = r8_2
    uint64_t var_3b8_1 = r9_5
    uint64_t var_3b0_1 = r10_2
    int64_t var_3e8_1 = zmm14.q
    int64_t var_400_1 = zmm12.q
    uint64_t var_448_1 = (arg_10.d).q
    bool cond:6_1
    
    do
        uint128_t* rcx_15 = var_420
        int32_t* rdx_28 = var_408
        var_420 = rcx_15 + rdx_27
        uint128_t* rcx_17 = var_418
        int32_t var_2b0_1 = (*rcx_15).d
        var_418 = rcx_17 + r8_2
        uint128_t* rcx_19 = var_410
        var_410 = rcx_19 + r9_5
        var_408 = rdx_28 + r10_2
        uint64_t rdx_30 = zx.q(*rdx_28)
        uint64_t var_3f4_1 = (_mm_unpacklo_ps(*rcx_19, (*rcx_17).q)).q
        
        if (rdx_30.d s< 0 || rdx_30.d s> r11_5)
            int32_t var_2a4_1 = 0
            uint64_t var_354_1 = (_mm_unpacklo_ps(zmm2, zmm13.q)).q
            int32_t var_34c_1 = 0
            rdx_30 = zx.q(0.o.d)
        
        uint32_t rdi_1 = (rdx_30 * 3).d
        int32_t rax_38 = (*(*r12 + 0x68))(r12, zx.q(rdi_1))
        int64_t r8_3 = *r12
        uint64_t rsi_2 = zx.q(rax_38)
        int32_t rax_39 = (*(r8_3 + 0x68))(r12, zx.q(rdi_1 + 1), r8_3)
        int64_t r8_4 = *r12
        int64_t r14_2 = sx.q(rax_39)
        result = (*(r8_4 + 0x68))(r12, zx.q(rdi_1 + 2), r8_4)
        int64_t r11_6 = sx.q(result.d)
        int64_t r10_3 = sx.q(rsi_2.d)
        int32_t var_460
        int32_t var_454
        
        if (arg_10 != 0)
            int64_t r8_7 =
                *(sx.q(rbx_2) * 0x38 + *(rax_28 + 0x80) + sx.q(*(rax_28 + 0x34)) * 0x10 + 8)
            int64_t rcx_27 = r10_3 * 3
            zmm7 = zx.o(*(r8_7 + (rcx_27 << 2)))
            zmm12 = zmm7
            int64_t rcx_28 = r14_2 * 3
            var_460 = (*(r8_7 + (rcx_27 << 2) + 8)).d
            var_448_1 = zmm7.q
            zmm7 = zx.o(*(r8_7 + (rcx_28 << 2)))
            int64_t rcx_29 = r11_6 * 3
            zmm6 = zx.o(*(r8_7 + (rcx_29 << 2)))
            result = zx.q(*(r8_7 + (rcx_29 << 2) + 8))
            var_470 = (*(r8_7 + (rcx_28 << 2) + 8)).d
            zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
            zmm14 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            var_454 = result.d.d
            zmm15 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            var_400_1 = zmm12.q
            var_440_1 = zmm7.q
            var_3e8_1 = zmm14.q
            var_438_1 = zmm6.q
        
        zmm9 = var_2b0_1
        zmm10 = var_3f4_1:4.d
        zmm11 = var_3f4_1.d
        int32_t var_430
        uint128_t zmm1
        uint128_t zmm3
        uint128_t zmm4_1
        uint128_t zmm5_1
        float var_45c
        int32_t var_458
        
        if (arg_18 == 0)
            zmm8 = var_45c
            zmm6 = var_458
        else
            zmm2 = zmm10
            int64_t rdx_38 =
                *(sx.q(rbx_2) * 0x38 + *(rax_28 + 0x80) + (sx.q(*(rax_28 + 0x34)) ^ 1) * 0x10 + 8)
            int64_t rcx_31 = r14_2 * 3
            int64_t rax_44 = r10_3 * 3
            zmm8 = zx.o(*(rdx_38 + (rax_44 << 2)))
            zmm5_1 = zx.o(*(rdx_38 + (rcx_31 << 2)))
            int32_t rax_45 = *(rdx_38 + (rax_44 << 2) + 8)
            zmm4_1.d = zmm10.d f* zmm5_1.d
            int64_t rcx_32 = r11_6 * 3
            zmm1 = zx.o(*(rdx_38 + (rcx_32 << 2)))
            zmm2[0] = zmm2[0] f* *(rdx_38 + (rcx_31 << 2) + 8)
            result = zx.q(*(rdx_38 + (rcx_32 << 2) + 8))
            zmm7.d = zmm9.d f* _mm_shuffle_ps(zmm1, zmm1, 0x55).d
            zmm0.d = zmm9.d f* zmm1.d
            zmm6.d = zmm9.d f* result.d
            int32_t var_458_1 = zmm0.d
            zmm0 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            zmm5_1.d = zmm11.d f* rax_45
            zmm3.d = zmm10.d f* zmm0.d
            zmm0 = zmm8
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm5_1.d = zmm5_1.d f+ zmm2[0]
            zmm1.d = zmm11.d f* zmm0.d
            int32_t var_45c_1 = zmm1.d
            zmm5_1.d = zmm5_1.d f+ zmm6.d
            zmm1.d = zmm11.d f* zmm8[0]
            zmm8 = var_45c_1
            zmm8[0] = zmm8[0] f+ zmm3.d
            var_430 = zmm5_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1.d
            zmm8[0] = zmm8[0] f+ zmm7.d
            zmm6.d = var_458_1.d f+ zmm4_1.d
            var_45c = zmm8[0]
            var_458 = zmm6.d
        
        if (var_120 != 0 || result_6 != 0)
            void* var_278
            int32_t* rdx_39 = var_278
            zmm0 = zmm10
            zmm1 = zmm10
            zmm10.d = zmm10.d f* var_440_1.d
            zmm2 = zmm9
            zmm7 = zx.o(var_438_1)
            zmm3 = zmm9
            zmm0.d = zmm0.d f* var_470
            int32_t var_284
            var_278 = &rdx_39[sx.q(var_284)]
            zmm2[0] = zmm2[0] f* var_454
            zmm4_1.d = zmm11.d f* var_460
            zmm11[0] = zmm11[0] f* var_448_1.d
            zmm5_1.d = zmm11.d f* zmm12.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm10.d = zmm10.d f+ zmm11[0]
            zmm9.d = zmm9.d f* zmm7.d
            zmm1.d = zmm1.d f* zmm14.d
            zmm3.d = zmm3.d f* zmm15.d
            zmm4_1.d = zmm4_1.d f+ zmm2[0]
            zmm9.d = zmm9.d f+ zmm10.d
            zmm5_1.d = zmm5_1.d f+ zmm1.d
            *rdx_39 = zmm9.d
            void* var_260
            int32_t* rdx_40 = var_260
            zmm5_1.d = zmm5_1.d f+ zmm3.d
            int32_t var_26c
            var_260 = &rdx_40[sx.q(var_26c)]
            *rdx_40 = zmm5_1.d
            void* var_248
            int32_t* rdx_41 = var_248
            int32_t result_1
            result = sx.q(result_1)
            var_248 = &rdx_41[result]
            *rdx_41 = zmm4_1.d
            
            if (result_6 != 0)
                void* var_230
                int32_t* rdx_42 = var_230
                zmm9.d = zmm9.d f- zmm6.d
                zmm5_1.d = zmm5_1.d f- zmm8[0]
                zmm0 = var_42c
                zmm4_1.d = zmm4_1.d f- var_430
                zmm9.d = zmm9.d f* zmm0.d
                int32_t var_23c
                var_230 = &rdx_42[sx.q(var_23c)]
                zmm5_1.d = zmm5_1.d f* zmm0.d
                *rdx_42 = zmm9.d
                void* var_218
                int32_t* rdx_43 = var_218
                zmm4_1.d = zmm4_1.d f* zmm0.d
                int32_t var_224
                var_218 = &rdx_43[sx.q(var_224)]
                *rdx_43 = zmm5_1.d
                void* var_200
                int32_t* rdx_44 = var_200
                int32_t result_2
                result = sx.q(result_2)
                var_200 = &rdx_44[result]
                *rdx_44 = zmm4_1.d
        else
            zmm7 = zx.o(var_438_1)
        
        zmm11 = var_454
        zmm10 = zx.o(var_448_1)
        zmm9 = zx.o(var_440_1)
        
        if (var_11e != 0)
            zmm6.d = zmm14.d f- zmm15.d
            zmm5_1.d = var_460.d f- zmm11[0]
            zmm4_1.d = zmm12.d f- zmm15.d
            zmm2 = zmm10
            zmm2[0] = zmm2[0] f- zmm7.d
            zmm1.d = zmm9.d f- zmm7.d
            zmm0 = zmm6
            zmm3.d = var_470.d f- zmm11[0]
            zmm6.d = zmm6.d f* zmm5_1.d
            zmm0.d = zmm0.d f* zmm2[0]
            zmm7.d = zmm4_1.d f* zmm1.d
            zmm8 = zmm3
            zmm8[0] = zmm8[0] * zmm2[0]
            zmm7.d = zmm7.d f- zmm0.d
            zmm3.d = zmm3.d f* zmm4_1.d
            zmm0.d = zmm5_1.d f* zmm1.d
            zmm6.d = zmm6.d f- zmm3.d
            zmm1.d = zmm7.d f* zmm7.d
            zmm8[0] = zmm8[0] f- zmm0.d
            zmm0.d = zmm6.d f* zmm6.d
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm8[0] = zmm8[0] f+ zmm0.d
            zmm8[0] = zmm8[0] f+ zmm1.d
            int32_t var_3c0_1
            
            if (not(zmm8[0] != 1f))
                var_3c0_1 = zmm7.d
            else if (zmm8[0] >= 9.99999994e-09f)
                zmm0 = zmm8
                zmm5_1 = _mm_rsqrt_ss(zmm0.d, zmm0.d)
                zmm3.d = zmm0.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm2 = zmm3
                zmm2[0] = zmm2[0] f* zmm0.d
                zmm1.d = 0.5f - zmm2[0]
                zmm0.d = zmm5_1.d f* zmm1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm0.d
                zmm4_1.d = 0.5f f- zmm3.d
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                int32_t var_474_1 = zmm5_1.d
                zmm0.d = zmm5_1.d f* zmm7.d
                zmm1.d = zmm5_1.d f* zmm8[0]
                zmm5_1.d = zmm5_1.d f* zmm6.d
                zmm7 = zmm0
                var_3c0_1 = zmm0.d
                zmm8 = zmm1
                zmm6 = zmm5_1
            else
                zmm7 = data_143dbb200
                zmm6 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                var_3c0_1 = zmm7.d
            
            void* var_1e8
            int32_t* rdx_45 = var_1e8
            int32_t var_298_1 = var_3c0_1
            uint64_t var_2a0_1 = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
            int32_t var_1f4
            var_1e8 = &rdx_45[sx.q(var_1f4)]
            *rdx_45 = zmm6.d
            void* var_1d0
            float* rdx_46 = var_1d0
            int32_t var_1dc
            var_1d0 = &rdx_46[sx.q(var_1dc)]
            *rdx_46 = zmm8[0]
            void* var_1b8
            int32_t* rdx_47 = var_1b8
            int32_t result_3
            result = sx.q(result_3)
            var_1b8 = &rdx_47[result]
            *rdx_47 = zmm7.d
        
        if (var_11d != 0 || var_11c != 0)
            int16_t* r14_5 = rsi_2 * (zx.q(*(r13 + 0xa8)) << 2) + *(r13 + 0x98)
            uint32_t rdi_3 = zx.d(r14_5[1])
            int32_t rsi_5 = (rdi_3 & 0xffff8000) << 0x10
            int32_t var_468_1
            TEB* gsbase
            
            if ((0x7c00 & rdi_3.w) == 0)
                int32_t rdi_4 = rdi_3 & 0x3ff
                
                if (rdi_4 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rdi_4))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_468_1 = (rdi_4 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_5
                else
                    var_468_1 = rsi_5
            else if ((rdi_3.w & 0x7c00) != 0x7c00)
                var_468_1 = ((rdi_3 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_3 & 0x3ff) << 0xd | rsi_5
            else
                var_468_1 = rsi_5 | 0x477fe000
            
            uint32_t rdi_11 = zx.d(*r14_5)
            int32_t rsi_9 = (rdi_11 & 0xffff8000) << 0x10
            int32_t var_46c_1
            
            if ((0x7c00 & rdi_11.w) == 0)
                int32_t rdi_12 = rdi_11 & 0x3ff
                
                if (rdi_12 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rdi_12))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_46c_1 = (rdi_12 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_9
                else
                    var_46c_1 = rsi_9
            else if ((rdi_11.w & 0x7c00) != 0x7c00)
                var_46c_1 =
                    ((rdi_11 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_11 & 0x3ff) << 0xd | rsi_9
            else
                var_46c_1 = rsi_9 | 0x477fe000
            
            int16_t* r14_8 = zx.q(r14_2.d) * (zx.q(*(r13 + 0xa8)) << 2) + *(r13 + 0x98)
            uint32_t rdi_19 = zx.d(r14_8[1])
            int32_t rsi_13 = (rdi_19 & 0xffff8000) << 0x10
            int32_t var_474_2
            
            if ((0x7c00 & rdi_19.w) == 0)
                int32_t rdi_20 = rdi_19 & 0x3ff
                
                if (rdi_20 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rdi_20))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_474_2 = (rdi_20 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_13
                else
                    var_474_2 = rsi_13
            else if ((rdi_19.w & 0x7c00) != 0x7c00)
                var_474_2 =
                    ((rdi_19 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_19 & 0x3ff) << 0xd | rsi_13
            else
                var_474_2 = rsi_13 | 0x477fe000
            
            uint32_t rdi_27 = zx.d(*r14_8)
            int32_t rsi_17 = (rdi_27 & 0xffff8000) << 0x10
            int32_t var_464_1
            
            if ((0x7c00 & rdi_27.w) == 0)
                int32_t rdi_28 = rdi_27 & 0x3ff
                
                if (rdi_28 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rdi_28))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_464_1 = (rdi_28 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_17
                else
                    var_464_1 = rsi_17
            else if ((rdi_27.w & 0x7c00) != 0x7c00)
                var_464_1 =
                    ((rdi_27 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_27 & 0x3ff) << 0xd | rsi_17
            else
                var_464_1 = rsi_17 | 0x477fe000
            
            int16_t* r14_11 = zx.q(r11_6.d) * (zx.q(*(r13 + 0xa8)) << 2) + *(r13 + 0x98)
            uint32_t rdi_35 = zx.d(r14_11[1])
            int32_t rsi_21 = (rdi_35 & 0xffff8000) << 0x10
            int32_t var_478_2
            
            if ((0x7c00 & rdi_35.w) == 0)
                int32_t rdi_36 = rdi_35 & 0x3ff
                
                if (rdi_36 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rdi_36))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_478_2 = (rdi_36 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_21
                else
                    var_478_2 = rsi_21
            else if ((rdi_35.w & 0x7c00) != 0x7c00)
                var_478_2 =
                    ((rdi_35 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_35 & 0x3ff) << 0xd | rsi_21
            else
                var_478_2 = rsi_21 | 0x477fe000
            
            uint32_t rdi_43 = zx.d(*r14_11)
            int32_t rsi_25 = (rdi_43 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rdi_43.w) == 0)
                int32_t rdi_44 = rdi_43 & 0x3ff
                
                if (rdi_44 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rdi_44))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    arg_20 = (rdi_44 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rsi_25
                else
                    arg_20 = rsi_25
            else if ((rdi_43.w & 0x7c00) != 0x7c00)
                arg_20 = ((rdi_43 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_43 & 0x3ff) << 0xd | rsi_25
            else
                arg_20 = rsi_25 | 0x477fe000
            
            zmm4_1 = var_468_1
            zmm9.d = zmm9.d f- zmm10.d
            zmm5_1 = var_46c_1
            zmm0.d = var_474_2.d f- zmm4_1.d
            zmm2 = var_478_2
            zmm3.d = arg_20.d f- zmm5_1.d
            zmm2[0] = zmm2[0] f- zmm4_1.d
            zmm1.d = var_464_1.d f- zmm5_1.d
            zmm8 = zmm11
            int32_t var_2d8_1 = zmm5_1.d
            zmm11 = var_470
            zmm6.d = var_438_1.d f- zmm10.d
            zmm8[0] = zmm8[0] f- var_460
            zmm11[0] = zmm11[0] f- var_460
            int32_t var_2f4_1 = zmm0.d
            int32_t var_2f8 = zmm1.d
            zmm7.d = zmm15.d f- zmm12.d
            int32_t var_2e8_1 = zmm3.d
            zmm10.d = zmm14.d f- zmm12.d
            float var_2e4_1 = zmm2[0]
            int32_t var_2d4_1 = zmm4_1.d
            uint128_t var_2c8_1 = data_142d3f660
            int32_t var_32c_1 = 0
            int32_t var_31c_1 = 0
            int32_t var_30c_1 = 0
            int64_t var_2f0_1 = 0
            int64_t var_2e0_1 = 0
            int64_t var_2d0_1 = 0x3f800000
            uint32_t var_118[0x4][0x4]
            result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm15 =
                sub_140631b10(&var_2f8, &var_118)
            float var_328[0x4]
            var_328[0] = zmm6.d
            float var_338[0x4]
            var_338[0] = zmm9.d
            zmm2 = *result
            float zmm5_2[0x4] = _mm_shuffle_ps(var_328, var_328, 0xe1)
            zmm14 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm5_2[0] = zmm7.d
            float zmm4_2[0x4] = _mm_shuffle_ps(var_338, var_338, 0xe1)
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
            var_328 = zmm5_2
            zmm3.d = var_448_1.d
            var_338 = zmm4_2
            _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3.d = var_400_1.d
            _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3.d = var_460.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            uint128_t var_318 = zmm3
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
            
            if (var_11d != 0)
                zmm2 = data_142d4cc00
                int64_t var_3d8_1 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_3d0_1 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6.d
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
                    zmm2 = 0x3f000000
                    zmm3.d = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm2[0] = 0.5f f- zmm1.d
                    zmm0.d = zmm5_2.d f* zmm2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_2[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    arg_20 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                void* var_1a0
                int32_t* rdx_61 = var_1a0
                int32_t var_1ac
                var_1a0 = &rdx_61[sx.q(var_1ac)]
                *rdx_61 = zmm6.d
                void* var_188
                int32_t* rdx_62 = var_188
                int32_t var_194
                var_188 = &rdx_62[sx.q(var_194)]
                *rdx_62 = zmm7.d
                void* var_170
                float* rdx_63 = var_170
                int32_t result_4
                result = sx.q(result_4)
                var_170 = &rdx_63[result]
                *rdx_63 = zmm8[0]
            
            if (var_11c != 0)
                zmm2 = data_142d4cc20
                int64_t var_3d8_2 = 0
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm10)
                int32_t var_3d0_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm11)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6.d
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
                    zmm2 = 0x3f000000
                    zmm3.d = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1.d = zmm3.d f* zmm0.d
                    zmm2[0] = 0.5f f- zmm1.d
                    zmm0.d = zmm5_2.d f* zmm2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1.d = zmm5_2.d f* zmm5_2[0]
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4_2[0] = 0.5f f- zmm3.d
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    arg_20 = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8[0] = zmm8[0] * zmm5_2[0]
                
                int32_t* var_158
                int32_t* rdx_64 = var_158
                int32_t var_164
                var_158 = &rdx_64[sx.q(var_164)]
                *rdx_64 = zmm6.d
                void* var_140
                int32_t* rdx_65 = var_140
                int32_t var_14c
                var_140 = &rdx_65[sx.q(var_14c)]
                *rdx_65 = zmm7.d
                void* var_128
                float* rdx_66 = var_128
                int32_t result_5
                result = sx.q(result_5)
                var_128 = &rdx_66[result]
                *rdx_66 = zmm8[0]
        
        zmm12 = zx.o(var_400_1)
        cond:6_1 = var_450 + 1 s< *(arg2 + 0x40)
        zmm14 = zx.o(var_3e8_1)
        zmm2 = 0x3f800000
        rdx_27 = var_360_1
        r9_5 = var_3b8_1
        r10_2 = var_3b0_1
        r11_5 = var_428
        var_450 += 1
        r8_2 = var_348_1
    while (cond:6_1)

return result
