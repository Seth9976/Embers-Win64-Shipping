// 函数: sub_140731180
// 地址: 0x140731180
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
void* var_4b8 = rdx_4
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
void* var_4c0 = rdx_9
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
void* var_4c8 = rdx_14
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

void* var_4d0 = rdx_19
uint32_t var_3d8 = 0xffffffff
uint128_t* var_3d0 = nullptr
int32_t var_3c8 = 0
sub_140767bd0(&var_3d8, arg2)
void var_2f8
sub_140742680(&var_2f8, arg2)

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

void* rcx_9 = *(rbx + 0x58)
int64_t* rsi = nullptr
void* var_4e8 = nullptr

if (rcx_9 != 0)
    rsi = *(**(rcx_9 + 0x58) + (sx.q(rbx[0x1a]) << 3))
    
    if (rbx[0x86].b != 0)
        void* rax_24 = sub_140d3c6e0(rbx)
        void* rax_25
        void* rcx_12
        int64_t rdx_24
        
        if (rax_24 != 0)
            rax_25 = sub_142591550()
            rcx_12 = *(rax_24 + 0x10)
            rdx_24 = sx.q(*(rax_25 + 0x38))
        
        void* rax_27
        
        if (rax_24 == 0 || rdx_24.d s> *(rcx_12 + 0x38)
                || *(*(rcx_12 + 0x30) + (rdx_24 << 3)) != rax_25 + 0x30 || *(rax_24 + 0x430) == 0)
            rax_27 = &rsi[0x27]
        else
            rax_27 = sub_141f66050(rax_24, rbx[0x1a])
        
        var_4e8 = rax_27

int64_t* rcx_15

if (rcx_9 == 0 || rsi == 0)
    rcx_15 = nullptr
else
    rcx_15 = rsi[3]

int32_t rax_29 = (*(*rcx_15 + 0x58))(rcx_15)
uint128_t zmm9 = 0x3f800000
int32_t var_538 = 0
uint128_t zmm0
zmm0.d = 1f f/ rbx[0x64]
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, rax_29)
int32_t var_4dc = zmm0.d
uint64_t result = zx.q((temp0 u>> 0x1f) - 1 + temp0)
int32_t var_4e0 = result.d

if (*(arg2 + 0x40) s> 0)
    uint64_t r12_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint128_t* r8_1 = var_3d0
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    float zmm13[0x4] = zx.o(0)
    uint64_t r10_2 = zx.q(arg_10.b) << 2
    uint64_t r11_5 = zx.q(arg_18.b) << 2
    uint64_t rdx_28 = zx.q(rdi_1) << 2
    uint64_t r9_5 = zx.q(r14_1) << 2
    int64_t rbx_2 = sx.q(var_3c8) << 2
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    uint64_t var_3a8_1 = rdx_28
    uint64_t var_370_1 = r9_5
    uint64_t var_390_1 = r10_2
    uint64_t var_398_1 = r11_5
    int64_t var_378_1 = rbx_2
    bool cond:1_1
    
    do
        uint128_t* rcx_17 = var_4d0
        int32_t* rdx_29 = var_4b8
        var_4d0 = rcx_17 + rdx_28
        uint128_t* rcx_19 = var_4c8
        int32_t var_320_1 = (*rcx_17).d
        var_4c8 = rcx_19 + r9_5
        uint128_t* rcx_21 = var_4c0
        var_4c0 = rcx_21 + r10_2
        zmm0 = _mm_unpacklo_ps(*rcx_21, (*rcx_19).q)
        var_4b8 = rdx_29 + r11_5
        uint64_t rdx_31 = zx.q(*rdx_29)
        void* rcx_24 = r8_1 + rbx_2
        uint64_t var_444_1 = zmm0.q
        int32_t arg_20 = (*r8_1).d
        
        if (rdx_31.d s< 0 || rdx_31.d s> var_4e0)
            int32_t var_314_1 = 0
            uint64_t var_384_1 = (_mm_unpacklo_ps(zmm9, zmm13[0].q)).q
            int32_t var_37c_1 = 0
            rdx_31 = zx.q(0.o.d)
        
        uint32_t rbx_3 = (rdx_31 * 3).d
        int32_t rax_38 = (*(*rcx_15 + 0x68))(rcx_15, zx.q(rbx_3))
        int64_t r8_2 = *rcx_15
        uint64_t rdi_2 = zx.q(rax_38)
        int32_t rax_39 = (*(r8_2 + 0x68))(rcx_15, zx.q(rbx_3 + 1), r8_2)
        int64_t r8_3 = *rcx_15
        uint32_t rax_40 = (*(r8_3 + 0x68))(rcx_15, zx.q(rbx_3 + 2), r8_3)
        void var_188
        int64_t* rax_41 = sub_142316040(&var_188, rcx_9, rsi, var_4e8, rdi_2.d)
        int32_t rcx_29 = rax_41[1].d
        zmm10 = zx.o(*rax_41)
        void var_17c
        int64_t* rax_42 = sub_142316040(&var_17c, rcx_9, rsi, var_4e8, rax_39)
        zmm9 = zx.o(*rax_42)
        int32_t rax_43 = rax_42[1].d
        void var_170
        int64_t* rax_44 = sub_142316040(&var_170, rcx_9, rsi, var_4e8, rax_40)
        zmm8 = zx.o(*rax_44)
        int32_t rax_45 = rax_44[1].d
        void var_164
        int64_t* rax_46 = sub_142316040(&var_164, rcx_9, rsi, var_4e8, rdi_2.d)
        zmm7 = zx.o(*rax_46)
        int32_t rax_47 = rax_46[1].d
        void var_158
        int64_t* rax_48
        int512_t zmm6_1
        rax_48, zmm6_1 = sub_142316040(&var_158, rcx_9, rsi, var_4e8, rax_39)
        zmm6_1.o = zx.o(*rax_48)
        int32_t rax_49 = rax_48[1].d
        void var_14c
        int64_t* rax_51
        int32_t r9_12
        uint128_t zmm6_2
        rax_51, r9_12, zmm6_2 = sub_142316040(&var_14c, rcx_9, rsi, var_4e8, rax_40)
        zmm11 = var_320_1
        zmm0 = zx.o(*rax_51)
        result = zx.q(rax_51[1].d)
        uint128_t zmm1 = result.d
        int32_t var_5a0_1 = zmm1.d
        uint128_t zmm5_1
        zmm5_1.d = zmm11.d f* zmm1.d
        zmm12 = var_444_1:4.d
        zmm15 = var_444_1.d
        uint32_t var_3e8_1 = zmm0.d
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        uint128_t zmm4_1
        zmm4_1.d = zmm11.d f* zmm1.d
        zmm14 = zmm15
        uint64_t var_4f8_1 = zmm1.q
        zmm1 = var_3e8_1
        zmm0.d = zmm11.d f* zmm1.d
        int32_t var_3b8_1 = zmm6_2.d
        int32_t var_5a4_1 = zmm1.d
        arg_10 = zmm0.d
        zmm0 = rax_49
        uint128_t zmm2_1
        zmm2_1.d = zmm12.d f* zmm0.d
        int32_t var_598_1 = zmm0.d
        zmm0 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
        zmm6_2.d = zmm15.d f* rax_47
        zmm1.d = zmm12.d f* zmm0.d
        uint64_t var_548_1 = zmm0.q
        zmm6_2.d = zmm6_2.d f+ zmm2_1.d
        zmm0 = var_3b8_1
        uint128_t zmm3_1
        zmm3_1.d = zmm12.d f* zmm0.d
        int32_t var_59c_1 = zmm0.d
        zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm6_2.d = zmm6_2.d f+ zmm5_1.d
        zmm14[0] = zmm14[0] f* zmm0.d
        uint64_t var_438_1 = zmm0.q
        uint32_t var_580_1 = zmm7.d
        zmm0.d = zmm15.d f* var_580_1
        zmm14[0] = zmm14[0] f+ zmm1.d
        zmm5_1 = zmm9.d
        zmm3_1.d = zmm3_1.d f+ zmm0.d
        zmm14[0] = zmm14[0] f+ zmm4_1.d
        uint32_t var_408_1 = zmm8.d
        zmm4_1 = zmm9
        zmm1 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
        zmm9 = rax_45
        zmm0 = zmm8
        zmm8 = var_408_1
        zmm7.d = arg_10.d f+ zmm3_1.d
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        zmm3_1 = rax_43
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        arg_10 = zmm3_1.d
        int32_t var_5a8_1 = zmm5_1.d
        int32_t var_4d8_1 = zmm9.d
        int32_t var_594_1 = zmm8.d
        uint64_t var_458_1 = zmm1.q
        uint32_t var_570_1 = zmm10.d
        uint64_t var_428_1 = zmm4_1.q
        uint64_t var_468_1 = zmm0.q
        char var_190
        char var_18f
        
        if (var_190 != 0 || var_18f != 0)
            void* var_2e8
            int32_t* rdx_41 = var_2e8
            zmm2_1 = zmm11
            zmm10 = arg_20
            zmm1.d = zmm12.d f* zmm4_1.d
            zmm4_1.d = zmm15.d f* rcx_29
            int32_t var_2f4
            var_2e8 = &rdx_41[sx.q(var_2f4)]
            zmm3_1.d = zmm11.d f* zmm0.d
            zmm0.d = zmm12.d f* arg_10
            zmm12.d = zmm12.d f* zmm5_1.d
            zmm5_1 = zmm15
            zmm15.d = zmm15.d f* var_570_1
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm11.d = zmm11.d f* zmm8.d
            zmm12.d = zmm12.d f+ zmm15.d
            zmm5_1.d = zmm5_1.d f* var_458_1.d
            zmm8 = var_594_1
            zmm2_1.d = zmm2_1.d f* zmm9.d
            zmm5_1.d = zmm5_1.d f+ zmm1.d
            zmm11.d = zmm11.d f+ zmm12.d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            zmm5_1.d = zmm5_1.d f+ zmm3_1.d
            zmm3_1 = arg_10
            zmm11.d = zmm11.d f- zmm7.d
            zmm4_1.d = zmm4_1.d f- zmm6_2.d
            zmm5_1.d = zmm5_1.d f- zmm14[0]
            zmm11.d = zmm11.d f* zmm10.d
            zmm4_1.d = zmm4_1.d f* zmm10.d
            zmm0.d = zmm7.d f+ zmm11.d
            zmm5_1.d = zmm5_1.d f* zmm10.d
            zmm4_1.d = zmm4_1.d f+ zmm6_2.d
            zmm5_1.d = zmm5_1.d f+ zmm14[0]
            *rdx_41 = zmm0.d
            void* var_2d0
            int32_t* rdx_42 = var_2d0
            int32_t var_2dc
            var_2d0 = &rdx_42[sx.q(var_2dc)]
            *rdx_42 = zmm5_1.d
            void* var_2b8
            int32_t* rdx_43 = var_2b8
            int32_t result_1
            result = sx.q(result_1)
            var_2b8 = &rdx_43[result]
            *rdx_43 = zmm4_1.d
            
            if (var_18f != 0)
                void* var_2a0
                int32_t* rdx_44 = var_2a0
                zmm0.d = zmm0.d f- zmm7.d
                zmm5_1.d = zmm5_1.d f- zmm14[0]
                zmm1 = var_4dc
                zmm4_1.d = zmm4_1.d f- zmm6_2.d
                zmm0.d = zmm0.d f* zmm1.d
                int32_t var_2ac
                var_2a0 = &rdx_44[sx.q(var_2ac)]
                zmm5_1.d = zmm5_1.d f* zmm1.d
                *rdx_44 = zmm0.d
                void* var_288
                int32_t* rdx_45 = var_288
                zmm4_1.d = zmm4_1.d f* zmm1.d
                int32_t var_294
                var_288 = &rdx_45[sx.q(var_294)]
                *rdx_45 = zmm5_1.d
                void* var_270
                int32_t* rdx_46 = var_270
                int32_t result_2
                result = sx.q(result_2)
                var_270 = &rdx_46[result]
                *rdx_46 = zmm4_1.d
            
            zmm1 = zx.o(var_458_1)
            zmm0 = zx.o(var_468_1)
        
        char var_18e
        
        if (var_18e == 0)
            zmm9 = 0x3f800000
        else
            zmm3_1.d = zmm3_1.d f- zmm9.d
            zmm6_2.d = var_428_1.d.d f- zmm0.d
            zmm2_1.d = var_570_1.d f- zmm8.d
            zmm12 = data_143dbb200
            zmm5_1.d = rcx_29.d f- zmm9.d
            zmm4_1.d = zmm1.d f- zmm0.d
            zmm14 = data_143dbb1fc
            zmm1.d = var_5a8_1.d f- zmm8.d
            zmm15 = data_143dbb1f8
            zmm0.d = zmm6_2.d f* zmm2_1.d
            zmm8.d = zmm3_1.d f* zmm2_1.d
            zmm7.d = zmm4_1.d f* zmm1.d
            zmm6_2.d = zmm6_2.d f* zmm5_1.d
            zmm7.d = zmm7.d f- zmm0.d
            zmm3_1.d = zmm3_1.d f* zmm4_1.d
            zmm0.d = zmm5_1.d f* zmm1.d
            zmm6_2.d = zmm6_2.d f- zmm3_1.d
            zmm1.d = zmm7.d f* zmm7.d
            zmm8.d = zmm8.d f- zmm0.d
            zmm0.d = zmm6_2.d f* zmm6_2.d
            zmm2_1.d = zmm8.d f* zmm8.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1.d
            int32_t var_590_1
            int32_t var_588_1
            
            if (not(zmm2_1.d f!= 1f))
                var_590_1 = zmm6_2.d
                int32_t var_58c_1 = zmm8.d
                var_588_1 = zmm7.d
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                zmm3_1.d = zmm2_1.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm2_1.d = zmm3_1.d f* zmm0.d
                zmm1.d = 0.5f f- zmm2_1.d
                zmm0.d = zmm5_1.d f* zmm1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm3_1.d = zmm3_1.d f* zmm0.d
                zmm4_1.d = 0.5f f- zmm3_1.d
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                arg_20 = zmm5_1.d
                zmm1.d = zmm5_1.d f* zmm7.d
                zmm0.d = zmm5_1.d f* zmm8.d
                zmm5_1.d = zmm5_1.d f* zmm6_2.d
                int32_t var_58c_3 = zmm0.d
                var_588_1 = zmm1.d
                var_590_1 = zmm5_1.d
            else
                var_590_1 = zmm15.d
                float var_58c_2 = zmm14[0]
                var_588_1 = zmm12.d
            
            zmm2_1.d = var_580_1.d f- var_5a4_1
            zmm1.d = var_59c_1.d f- var_5a4_1
            zmm5_1.d = rax_47.d f- var_5a0_1
            zmm3_1.d = var_598_1.d f- var_5a0_1
            uint64_t var_518 = var_590_1.q
            zmm0 = zx.o(var_4f8_1)
            zmm4_1.d = var_438_1.d f- zmm0.d
            int32_t var_510_1 = var_588_1
            zmm6_2.d = var_548_1.d.d f- zmm0.d
            zmm8.d = zmm3_1.d f* zmm2_1.d
            zmm3_1.d = zmm3_1.d f* zmm4_1.d
            zmm7.d = zmm4_1.d f* zmm1.d
            zmm0.d = zmm6_2.d f* zmm2_1.d
            zmm6_2.d = zmm6_2.d f* zmm5_1.d
            zmm7.d = zmm7.d f- zmm0.d
            zmm0.d = zmm5_1.d f* zmm1.d
            zmm6_2.d = zmm6_2.d f- zmm3_1.d
            zmm8.d = zmm8.d f- zmm0.d
            zmm1.d = zmm7.d f* zmm7.d
            zmm0.d = zmm6_2.d f* zmm6_2.d
            zmm2_1.d = zmm8.d f* zmm8.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm1.d
            int32_t var_560
            
            if (not(zmm2_1.d f!= 1f))
                var_560 = zmm6_2.d
                int32_t var_55c_1 = zmm8.d
                int32_t var_558_1 = zmm7.d
            else if (zmm2_1.d f>= 9.99999994e-09f)
                zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                zmm3_1.d = zmm2_1.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm2_1.d = zmm3_1.d f* zmm0.d
                zmm1.d = 0.5f f- zmm2_1.d
                zmm0.d = zmm5_1.d f* zmm1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm3_1.d = zmm3_1.d f* zmm0.d
                zmm4_1.d = 0.5f f- zmm3_1.d
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                arg_20 = zmm5_1.d
                zmm1.d = zmm5_1.d f* zmm7.d
                zmm0.d = zmm5_1.d f* zmm8.d
                zmm5_1.d = zmm5_1.d f* zmm6_2.d
                int32_t var_55c_3 = zmm0.d
                int32_t var_558_3 = zmm1.d
                var_560 = zmm5_1.d
            else
                var_560 = zmm15.d
                float var_55c_2 = zmm14[0]
                int32_t var_558_2 = zmm12.d
            
            int32_t var_5c8_7 = 0x3f800000
            int32_t var_140
            int32_t* rax_57
            rax_57, r9_12, zmm9, zmm13 = sub_140ae34d0(&var_140, &var_560, &var_518, r9_12)
            void* var_258
            int32_t* rdx_48 = var_258
            var_518 = *rax_57
            zmm1 = var_518:4.d
            zmm2_1 = rax_57[2]
            int32_t var_264
            var_258 = &rdx_48[sx.q(var_264)]
            *rdx_48 = var_518.d.d
            void* var_240
            int32_t* rdx_49 = var_240
            int32_t var_24c
            var_240 = &rdx_49[sx.q(var_24c)]
            *rdx_49 = zmm1.d
            void* var_228
            int32_t* rdx_50 = var_228
            int32_t result_3
            result = sx.q(result_3)
            var_228 = &rdx_50[result]
            *rdx_50 = zmm2_1.d
        
        char var_18d
        char var_18c
        
        if (var_18d != 0 || var_18c != 0)
            int16_t* r14_6 = rdi_2 * (zx.q(rsi[0x15].d) << 2) + rsi[0x13]
            uint32_t rbx_5 = zx.d(r14_6[1])
            int32_t rdi_5 = (rbx_5 & 0xffff8000) << 0x10
            int32_t var_5b0_1
            
            if ((0x7c00 & rbx_5.w) == 0)
                int32_t rbx_6 = rbx_5 & 0x3ff
                
                if (rbx_6 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_6))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_5b0_1 = (rbx_6 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_5
                else
                    var_5b0_1 = rdi_5
            else if ((rbx_5.w & 0x7c00) != 0x7c00)
                var_5b0_1 = ((rbx_5 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_5 & 0x3ff) << 0xd | rdi_5
            else
                var_5b0_1 = rdi_5 | 0x477fe000
            
            uint32_t rbx_13 = zx.d(*r14_6)
            int32_t rdi_9 = (rbx_13 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rbx_13.w) == 0)
                int32_t rbx_14 = rbx_13 & 0x3ff
                
                if (rbx_14 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_14))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    arg_20 = (rbx_14 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_9
                else
                    arg_20 = rdi_9
            else if ((rbx_13.w & 0x7c00) != 0x7c00)
                arg_20 = ((rbx_13 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_13 & 0x3ff) << 0xd | rdi_9
            else
                arg_20 = rdi_9 | 0x477fe000
            
            int16_t* r14_9 = zx.q(rax_39) * (zx.q(rsi[0x15].d) << 2) + rsi[0x13]
            uint32_t rbx_21 = zx.d(r14_9[1])
            int32_t rdi_13 = (rbx_21 & 0xffff8000) << 0x10
            int32_t var_5b8_2
            
            if ((0x7c00 & rbx_21.w) == 0)
                int32_t rbx_22 = rbx_21 & 0x3ff
                
                if (rbx_22 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_22))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_5b8_2 = (rbx_22 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_13
                else
                    var_5b8_2 = rdi_13
            else if ((rbx_21.w & 0x7c00) != 0x7c00)
                var_5b8_2 =
                    ((rbx_21 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_21 & 0x3ff) << 0xd | rdi_13
            else
                var_5b8_2 = rdi_13 | 0x477fe000
            
            uint32_t rbx_29 = zx.d(*r14_9)
            int32_t rdi_17 = (rbx_29 & 0xffff8000) << 0x10
            int32_t var_5ac_1
            
            if ((0x7c00 & rbx_29.w) == 0)
                int32_t rbx_30 = rbx_29 & 0x3ff
                
                if (rbx_30 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_30))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_5ac_1 = (rbx_30 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_17
                else
                    var_5ac_1 = rdi_17
            else if ((rbx_29.w & 0x7c00) != 0x7c00)
                var_5ac_1 =
                    ((rbx_29 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_29 & 0x3ff) << 0xd | rdi_17
            else
                var_5ac_1 = rdi_17 | 0x477fe000
            
            int16_t* r14_12 = zx.q(rax_40) * (zx.q(rsi[0x15].d) << 2) + rsi[0x13]
            uint32_t rbx_37 = zx.d(r14_12[1])
            int32_t rdi_21 = (rbx_37 & 0xffff8000) << 0x10
            int32_t var_5b4_1
            
            if ((0x7c00 & rbx_37.w) == 0)
                int32_t rbx_38 = rbx_37 & 0x3ff
                
                if (rbx_38 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_38))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    var_5b4_1 = (rbx_38 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_21
                else
                    var_5b4_1 = rdi_21
            else if ((rbx_37.w & 0x7c00) != 0x7c00)
                var_5b4_1 =
                    ((rbx_37 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_37 & 0x3ff) << 0xd | rdi_21
            else
                var_5b4_1 = rdi_21 | 0x477fe000
            
            uint32_t rbx_45 = zx.d(*r14_12)
            int32_t rdi_25 = (rbx_45 & 0xffff8000) << 0x10
            
            if ((0x7c00 & rbx_45.w) == 0)
                int32_t rbx_46 = rbx_45 & 0x3ff
                
                if (rbx_46 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_46))
                    zmm0, r9_12 = logf(zmm0.d)
                    zmm0.d = zmm0.d f* data_143cda910
                    arg_18 = (rbx_46 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_25
                else
                    arg_18 = rdi_25
            else if ((rbx_45.w & 0x7c00) != 0x7c00)
                arg_18 = ((rbx_45 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_45 & 0x3ff) << 0xd | rdi_25
            else
                arg_18 = rdi_25 | 0x477fe000
            
            zmm2_1.d = var_5a8_1.d f- var_570_1
            zmm1.d = arg_10.d f- rcx_29
            zmm4_1 = var_5b0_1
            zmm5_1 = arg_20
            zmm0.d = var_5b8_2.d f- zmm4_1.d
            zmm6_2 = data_142d3f660
            zmm3_1.d = arg_18.d f- zmm5_1.d
            zmm8 = zx.o(var_458_1)
            zmm7.d = var_468_1.d f- zmm8.d
            zmm12.d = var_594_1.d f- var_570_1
            zmm15.d = var_4d8_1.d f- rcx_29
            int32_t var_5a8_2 = zmm2_1.d
            zmm11.d = var_428_1.d f- zmm8.d
            arg_10 = zmm1.d
            zmm2_1.d = var_5b4_1.d f- zmm4_1.d
            zmm1.d = var_5ac_1.d f- zmm5_1.d
            int32_t var_364_1 = zmm0.d
            int32_t var_358_1 = zmm3_1.d
            int32_t var_348_1 = zmm5_1.d
            int32_t var_354_1 = zmm2_1.d
            int32_t var_344_1 = zmm4_1.d
            int32_t var_368 = zmm1.d
            int32_t var_49c_1 = 0
            int32_t var_48c_1 = 0
            int32_t var_47c_1 = 0
            int64_t var_360_1 = 0
            int64_t var_350_1 = 0
            int64_t var_340_1 = 0x3f800000
            uint128_t var_338_1 = zmm6_2
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_157)[0x4]
            float zmm6_3[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            float zmm11_1
            float zmm12_1
            float zmm15_1[0x4]
            rax_157, zmm6_3, zmm7_1, zmm8_1, zmm11_1, zmm12_1, zmm15_1 =
                sub_140631b10(&var_368, &var_118)
            float var_498[0x4]
            var_498[0] = zmm12_1
            uint32_t zmm2_2[0x4] = *rax_157
            float var_4a8[0x4]
            var_4a8[0] = var_5a8_2[0]
            float zmm5_2[0x4] = _mm_shuffle_ps(var_498, var_498, 0xe1)
            float zmm4_2[0x4] = _mm_shuffle_ps(var_4a8, var_4a8, 0xe1)
            zmm5_2[0] = zmm7_1[0]
            zmm4_2[0] = zmm11_1
            uint128_t zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
            zmm5_2[0] = zmm15_1[0]
            zmm4_2[0] = arg_10[0]
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            uint32_t zmm14_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x55), zmm5_2)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm14_1 = _mm_add_ps(zmm14_1, zmm0_1)
            float var_488[0x4]
            var_488[0] = var_570_1.d
            float zmm3_2[0x4] = _mm_shuffle_ps(var_488, var_488, 0xe1)
            zmm3_2[0] = zmm8_1[0]
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
            zmm3_2[0] = rcx_29.d
            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
            float var_488_1[0x4] = zmm3_2
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            int32_t var_49c_2 = 0
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            int32_t var_48c_2 = 0
            int32_t var_47c_2 = 0
            _mm_add_ps(_mm_add_ps(zmm14_1, zmm1_1), zmm2_2)
            zmm2_2 = rax_157[1]
            zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm15_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm5_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm15_1, zmm4_2), zmm0_1), zmm1_1), zmm2_2)
            zmm2_2 = rax_157[2]
            zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm7_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            zmm7_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7_1, zmm5_2), zmm0_1), zmm1_1), 
                zmm2_2)
            zmm2_2 = rax_157[3]
            zmm0_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            zmm1_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            zmm8_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm3_2)
            zmm8_1 = _mm_mul_ps(zmm8_1, zmm5_2)
            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm6_3)
            zmm8_1 = _mm_add_ps(zmm8_1, zmm0_1)
            var_468_1.o = zmm7_1
            zmm0_1.d = var_5a4_1.d f- var_580_1
            zmm8_1 = _mm_add_ps(zmm8_1, zmm1_1)
            zmm1_1 = var_5a0_1
            zmm1_1[0] = zmm1_1[0] f- rax_47
            int32_t var_5a4_2 = zmm0_1.d
            zmm0_1.d = var_598_1.d f- rax_47
            float var_5a0_2 = zmm1_1[0]
            zmm8_1 = _mm_add_ps(zmm8_1, zmm2_2)
            zmm1_1 = var_59c_1
            zmm1_1[0] = zmm1_1[0] f- var_580_1
            var_428_1.o = zmm8_1
            float var_59c_2 = zmm1_1[0]
            float zmm6_4[0x4]
            result, zmm6_4, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_140631b10(&var_368, &var_118)
            zmm5_2[0] = var_5a4_2.d
            float zmm2_3[0x4] = *result
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
            zmm4_2[0] = var_59c_2.d
            float zmm5_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
            zmm5_3[0] = zmm11.d
            float zmm4_3[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            zmm4_3[0] = zmm12.d
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc6)
            zmm5_3[0] = var_5a0_2.d
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc6)
            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm4_3[0] = zmm0_1.d.d
            zmm1 = _mm_mul_ps(zmm1, zmm5_3)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            var_498 = zmm5_3
            var_4a8 = zmm4_3
            zmm1 = _mm_add_ps(zmm1, _mm_mul_ps(zmm0, zmm4_3))
            uint128_t zmm3_3
            zmm3_3.d = var_580_1.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
            zmm3_3.d = var_438_1.d
            _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
            zmm3_3.d = rax_47.d
            var_548_1.o = zmm1
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            zmm3_3 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9)
            var_488 = zmm3_3
            zmm0 = _mm_add_ps(_mm_add_ps(var_548_1.o, _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = *(result + 0x10)
            zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            var_548_1.o = zmm0
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm4_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            zmm11 =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm11, zmm0), _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = *(result + 0x20)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            var_3d8.o = zmm11
            zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm6_4)
            zmm11 =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm11, zmm0), _mm_mul_ps(zmm1, zmm3_3)), zmm2_3)
            zmm2_3 = *(result + 0x30)
            zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
            var_458_1.o = zmm11
            zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm5_3)
            zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
            zmm0 = _mm_mul_ps(zmm0, zmm4_3)
            zmm1 = _mm_mul_ps(zmm1, zmm3_3)
            zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            zmm11 = _mm_add_ps(zmm11, zmm0)
            zmm2_3 = _mm_mul_ps(zmm2_3, zmm6_4)
            var_438_1.o = _mm_add_ps(_mm_add_ps(zmm11, zmm1), zmm2_3)
            
            if (var_18d != 0)
                zmm2_3 = data_142d4cc00
                zmm6_4 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int64_t var_4f8_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                int32_t var_4f0_1 = 0
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm8)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm14)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm0 = zmm13
                    zmm1 = zmm13
                    zmm5_3 = zmm13
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
                    zmm5_3[0] = zmm5_3[0] f* zmm8.d
                
                zmm2_3 = data_142d4cc00
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
                zmm3_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_438_1.o)
                int64_t var_4f8_3 = 0
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_3d8.o)
                int32_t var_4f0_2 = 0
                uint64_t var_528 = zmm0.q
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_458_1.o)
                zmm2_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_548_1.o)
                zmm3_3 = _mm_add_ps(zmm3_3, zmm0)
                float var_520_1 = zmm5_3[0]
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
                
                int32_t var_5c8_8 = zmm9.d
                int32_t var_128[0x4]
                int32_t* rax_159
                rax_159, r9_12, zmm9, zmm10, zmm13, zmm14 =
                    sub_140ae34d0(&var_128, &var_528, &var_528, r9_12)
                void* var_210
                int32_t* rdx_60 = var_210
                zmm7 = var_468_1.o
                zmm8 = var_428_1.o
                var_528 = *rax_159
                zmm1 = var_528:4.d
                zmm2_3 = rax_159[2]
                int32_t var_21c
                var_210 = &rdx_60[sx.q(var_21c)]
                *rdx_60 = var_528.d.d
                void* var_1f8
                int32_t* rdx_61 = var_1f8
                int32_t var_204
                var_1f8 = &rdx_61[sx.q(var_204)]
                *rdx_61 = zmm1.d
                void* var_1e0
                float* rdx_62 = var_1e0
                int32_t result_4
                result = sx.q(result_4)
                var_1e0 = &rdx_62[result]
                *rdx_62 = zmm2_3[0]
            
            if (var_18c != 0)
                zmm2_3 = data_142d4cc20
                zmm6_4 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                zmm0 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm7)
                int64_t var_548_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                int32_t var_540_1 = 0
                zmm6_4 = _mm_mul_ps(zmm6_4, zmm8)
                zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm14)
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), _mm_add_ps(zmm1, zmm2_3))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm6_4 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
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
                    zmm6_4[0] = zmm6_4[0] * zmm5_3[0]
                    zmm7.d = zmm7.d f* zmm5_3[0]
                    zmm8.d = zmm8.d f* zmm5_3[0]
                
                zmm2_3 = data_142d4cc20
                uint64_t var_508 = (_mm_unpacklo_ps(zmm6_4, zmm7.q)).q
                zmm1 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_468_1.o)
                int64_t var_548_3 = 0
                zmm6_4 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_428_1.o)
                int32_t var_540_2 = 0
                zmm1 = _mm_mul_ps(zmm1, zmm15)
                int32_t var_500_1 = zmm8.d
                zmm6_4 = _mm_add_ps(_mm_add_ps(zmm6_4, zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), zmm14)))
                zmm0.d = zmm6_4.d f* zmm6_4[0]
                zmm7 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                zmm1.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (zmm1.d f<= 9.99999994e-09f)
                    zmm6_4 = zmm13
                    zmm7 = zmm13
                    zmm8 = zmm13
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
                    zmm6_4[0] = zmm6_4[0] * zmm5_3[0]
                    zmm7.d = zmm7.d f* zmm5_3[0]
                    zmm8.d = zmm8.d f* zmm5_3[0]
                
                float var_3f8 = zmm6_4[0]
                int32_t var_3f4_1 = zmm7.d
                int32_t var_3f0_1 = zmm8.d
                int32_t var_5c8_9 = zmm9.d
                int32_t var_134
                int32_t* rax_164
                rax_164, zmm9, zmm13 = sub_140ae34d0(&var_134, &var_3f8, &var_508, r9_12)
                void* var_1c8
                int32_t* rdx_64 = var_1c8
                var_508 = *rax_164
                int32_t rax_165 = rax_164[2]
                zmm1 = var_508:4.d
                int32_t var_1d4
                var_1c8 = &rdx_64[sx.q(var_1d4)]
                *rdx_64 = var_508.d.d
                void* var_1b0
                int32_t* rdx_65 = var_1b0
                int32_t var_1bc
                var_1b0 = &rdx_65[sx.q(var_1bc)]
                *rdx_65 = zmm1.d
                void* var_198
                int32_t* rdx_66 = var_198
                int32_t result_5
                result = sx.q(result_5)
                var_198 = &rdx_66[result]
                *rdx_66 = rax_165
        
        rdx_28 = var_3a8_1
        cond:1_1 = var_538 + 1 s< *(arg2 + 0x40)
        r9_5 = var_370_1
        r10_2 = var_390_1
        r11_5 = var_398_1
        rbx_2 = var_378_1
        var_538 += 1
        r8_1 = rcx_24
    while (cond:1_1)

return result
