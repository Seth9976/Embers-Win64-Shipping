// 函数: sub_140761b00
// 地址: 0x140761b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_7 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_7)

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
int32_t* rbx = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t arg_18 = rax_6
rax_6.b = not.b(rax_6.b)
int32_t* r15_1

if ((rax_6.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    r15_1 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
int128_t* rdx_4

if ((rax_10.b & 1) == 0)
    rdx_4 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
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
    
    rdx_4 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
int128_t* var_168 = rdx_4
uint32_t rsi_1 = rax_13 u>> 0xf
*(arg2 + 0x10) = &rax[4]
int32_t i_3 = rax_13 & 0x7fff
void* rdx_9

if ((not.b(rsi_1.b) & 1) == 0)
    rdx_9 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_3 s>= *r8)
        int64_t rax_15 = 0
        int32_t* rdx_7 = nullptr
        
        do
            i_3 -= *(rdx_7 + r8)
            rax_15 += 1
            rdx_7 = rax_15 << 2
            r9_3 += 1
        while (i_3 s>= *(rdx_7 + r8))
    
    rdx_9 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rax_17 = zx.d(rax[4])
void* var_160 = rdx_9
uint8_t rdi_1 = (rax_17 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t i_4 = rax_17 & 0x7fff
int128_t* r13_1

if ((not.b(rdi_1) & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_19 = 0
        int32_t* rdx_12 = nullptr
        
        do
            i_4 -= *(rdx_12 + r8)
            rax_19 += 1
            rdx_12 = rax_19 << 2
            r9_4 += 1
        while (i_4 s>= *(rdx_12 + r8))
    
    r13_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t rcx_6 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t rcx_7 = rcx_6 & 0x7fff
int32_t var_148 = rcx_7
int32_t rax_21
rax_21.b = rcx_7 != 0x7fff
int32_t* var_138
void var_140

if (rcx_7 == 0x7fff)
    var_138 = &var_140
else
    var_138 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_130 = rcx_11
int32_t rax_22
rax_22.b = rcx_11 != 0x7fff
int32_t* var_120
void var_128

if (rcx_11 == 0x7fff)
    var_120 = &var_128
else
    var_120 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_15 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_118 = rcx_15
int32_t rax_23
rax_23.b = rcx_15 != 0x7fff
int32_t* var_108
void var_110

if (rcx_15 == 0x7fff)
    var_108 = &var_110
else
    var_108 = zx.q(rcx_15 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_18 = zx.d(rax[8])
*(arg2 + 0x10) = &rax[9]
int32_t rdx_17 = rcx_18 & 0x7fff
int32_t var_100 = rdx_17
int32_t rax_25
rax_25.b = rdx_17 != 0x7fff
int64_t result_1
void var_f8

if (rdx_17 == 0x7fff)
    result_1 = &var_f8
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_17) + *(arg2 + 0x70)

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

void* rax_27 = *(rbx + 0x58)
void* r12 = nullptr
void* var_150 = nullptr

if (rax_27 != 0)
    r12 = *(**(rax_27 + 0x58) + (sx.q(rbx[0x1a]) << 3))
    var_150 = r12
    
    if (rbx[0x86].b != 0)
        void* rax_30 = sub_140d3c6e0(rbx)
        
        if (rax_30 != 0)
            void* rax_31 = sub_142591550()
            void* rcx_25 = *(rax_30 + 0x10)
            int64_t rdx_18 = sx.q(*(rax_31 + 0x38))
            
            if (rdx_18.d s<= *(rcx_25 + 0x38)
                    && *(*(rcx_25 + 0x30) + (rdx_18 << 3)) == rax_31 + 0x30
                    && *(rax_30 + 0x430) != 0)
                sub_141f66050(rax_30, rbx[0x1a])

int64_t* rcx_28 = *(r12 + 0x18)
uint32_t i_6 = 0
int32_t temp0
int32_t result_2
temp0:result_2 = muls.dp.d(0x55555556, (*(*rcx_28 + 0x58))(rcx_28))
uint64_t result = zx.q(result_2)
int32_t r12_4 = (temp0 u>> 0x1f) - 1 + temp0

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    arg_18.q = zx.q(arg_18.b) << 2
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10 = 0x3b808081
    arg_20.q = zx.q(arg_20.b) << 2
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    uint32_t i_5
    
    do
        int32_t rcx_30 = *r15_1
        uint64_t rax_43
        
        if (rcx_30 s>= 0)
            rax_43 = zx.q(r12_4)
            
            if (rcx_30 s< r12_4)
                rax_43 = zx.q(rcx_30)
        else
            rax_43 = 0
        
        int32_t rbx_1 = (rax_43 * 3).d
        int32_t rax_45 = (*(*rcx_28 + 0x68))(rcx_28, zx.q(rbx_1))
        int64_t r8_1 = *rcx_28
        int32_t rax_46 = (*(r8_1 + 0x68))(rcx_28, zx.q(rbx_1 + 1), r8_1)
        int64_t r8_2 = *rcx_28
        int32_t rax_47 = (*(r8_2 + 0x68))(rcx_28, zx.q(rbx_1 + 2), r8_2)
        zmm11 = *r13_1
        int32_t r9_5 = *(var_150 + 0x128)
        int64_t r8_3 = *(var_150 + 0x120)
        char* rdx_26 = zx.q(r9_5 * rax_47) + r8_3
        zmm8 = zx.o(rdx_26[1])
        int32_t* rdi_4 = var_160
        zmm7 = zx.o(*rdx_26)
        uint32_t rax_50 = zx.d(rdx_26[3])
        char* rcx_38 = zx.q(r9_5 * rax_46) + r8_3
        float zmm0 = *rdi_4
        uint128_t zmm5_1 = *var_168
        zmm9 = _mm_cvtepi32_ps(zx.o(rdx_26[2]))
        uint32_t rax_51 = zx.d(rcx_38[2])
        zmm8 = _mm_cvtepi32_ps(zmm8)
        uint32_t rax_52 = zx.d(rcx_38[1])
        zmm7 = _mm_cvtepi32_ps(zmm7)
        uint32_t rax_53 = zx.d(*rcx_38)
        zmm6 = _mm_cvtepi32_ps(zx.o(rax_50))
        char* rcx_40 = zx.q(r9_5 * rax_45) + r8_3
        zmm9.d = zmm9.d f* zmm10.d
        zmm12 = zx.o(rcx_38[3])
        zmm15 = _mm_cvtepi32_ps(zx.o(rax_51))
        uint128_t zmm1 = zx.o(rcx_40[2])
        uint32_t rax_56 = zx.d(rcx_40[1])
        zmm14 = _mm_cvtepi32_ps(zx.o(rax_52))
        uint32_t rax_57 = zx.d(*rcx_40)
        zmm13 = _mm_cvtepi32_ps(zx.o(rax_53))
        uint32_t rax_58 = zx.d(rcx_40[3])
        zmm12 = _mm_cvtepi32_ps(zmm12)
        uint128_t zmm3
        zmm3.d = _mm_cvtepi32_ps(zx.o(rax_58)).d f* zmm10.d
        zmm8.d = zmm8.d f* zmm10.d
        zmm7.d = zmm7.d f* zmm10.d
        zmm6.d = zmm6.d f* zmm10.d
        zmm15.d = zmm15.d f* zmm10.d
        zmm14.d = zmm14.d f* zmm10.d
        zmm13.d = zmm13.d f* zmm10.d
        zmm12.d = zmm12.d f* zmm10.d
        zmm1.d = _mm_cvtepi32_ps(zmm1).d f* zmm10.d
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(rax_56)).d f* zmm10.d
        uint128_t zmm4_1
        zmm4_1.d = _mm_cvtepi32_ps(zx.o(rax_57)).d f* zmm10.d
        i_5 = i_6 + 1
        r15_1 += arg_18.q
        r13_1 += zx.q(rdi_1) << 2
        zmm10.d = zmm11.d f* zmm9.d
        var_168 += arg_20.q
        zmm9.d = zmm11.d f* zmm8.d
        var_160 = &rdi_4[zx.q(rsi_1.b)]
        zmm15.d = zmm15.d f* zmm0
        i_6 = i_5
        zmm14.d = zmm14.d f* zmm0
        zmm13.d = zmm13.d f* zmm0
        zmm12.d = zmm12.d f* zmm0
        zmm0 = zmm5_1.d f* zmm1.d
        zmm1.d = zmm5_1.d f* zmm2.d
        zmm15.d = zmm15.d f+ zmm0
        zmm2.d = zmm5_1.d f* zmm4_1.d
        zmm14.d = zmm14.d f+ zmm1.d
        zmm8.d = zmm11.d f* zmm7.d
        zmm13.d = zmm13.d f+ zmm2.d
        zmm5_1.d = zmm5_1.d f* zmm3.d
        zmm10.d = zmm10.d f+ zmm15.d
        zmm11.d = zmm11.d f* zmm6.d
        zmm9.d = zmm9.d f+ zmm14.d
        zmm12.d = zmm12.d f+ zmm5_1.d
        zmm8.d = zmm8.d f+ zmm13.d
        *var_138 = zmm10.d
        zmm10 = 0x3b808081
        zmm11.d = zmm11.d f+ zmm12.d
        *var_120 = zmm9.d
        *var_108 = zmm8.d
        *result_1 = zmm11.d
        var_138 = &var_138[sx.q(rax_21)]
        var_120 = &var_120[sx.q(rax_22)]
        result = result_1
        var_108 = &var_108[sx.q(rax_23)]
        result_1 = result + (sx.q(rax_25) << 2)
    while (i_5 s< *(arg2 + 0x40))

return result
