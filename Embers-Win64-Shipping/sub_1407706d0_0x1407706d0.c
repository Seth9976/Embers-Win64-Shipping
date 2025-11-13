// 函数: sub_1407706d0
// 地址: 0x1407706d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
*(arg2 + 0x10) = &rax[1]
int32_t* rdx = *(arg2 + 0x20)
uint32_t i = zx.d(*rax) & 0x7fff

if (i s>= *rdx)
    int64_t rax_2 = 0
    int32_t* rcx_1 = nullptr
    
    do
        i -= *(rcx_1 + rdx)
        rax_2 += 1
        rcx_1 = rax_2 << 2
        r9 += 1
    while (i s>= *(rcx_1 + rdx))

int64_t rax_3 = *(arg2 + 0x18)
uint32_t var_c0 = 0xffffffff
int64_t rax_4 = *(rax_3 + (sx.q(r9) << 3))
int64_t result_1 = 0
int32_t var_b0 = 0
uint32_t var_a8 = 0xffffffff
int64_t rdx_2 = sx.q(*(sx.q(i) + rax_4))
int64_t rax_5 = *(arg2 + 0x38)
int32_t* var_a0 = nullptr
int32_t var_98 = 0
uint32_t var_90 = 0xffffffff
int32_t* rsi = *(rax_5 + (rdx_2 << 3))
int32_t* var_88 = nullptr
int32_t var_80 = 0
sub_140767bd0(&var_c0, arg2)
sub_140767bd0(&var_a8, arg2)
sub_140767bd0(&var_90, arg2)
int16_t* rax_6 = *(arg2 + 0x10)
int32_t rdx_7 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
int32_t var_148 = rdx_7
int32_t rax_7
rax_7.b = rdx_7 != 0x7fff
void* var_138
void var_140

if (rdx_7 == 0x7fff)
    var_138 = &var_140
else
    var_138 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
int32_t rcx_10 = zx.d(rax_6[1]) & 0x7fff
*(arg2 + 0x10) = &rax_6[2]
int32_t var_130 = rcx_10
int32_t rax_8
rax_8.b = rcx_10 != 0x7fff
void* var_120
void var_128

if (rcx_10 == 0x7fff)
    var_120 = &var_128
else
    var_120 = zx.q(rcx_10 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_14 = zx.d(rax_6[2]) & 0x7fff
*(arg2 + 0x10) = &rax_6[3]
int32_t var_118 = rcx_14
int32_t rax_9
rax_9.b = rcx_14 != 0x7fff
void* var_108
void var_110

if (rcx_14 == 0x7fff)
    var_108 = &var_110
else
    var_108 = zx.q(rcx_14 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_17 = zx.d(rax_6[3])
*(arg2 + 0x10) = &rax_6[4]
int32_t rdx_11 = rcx_17 & 0x7fff
int32_t var_100 = rdx_11
int32_t result_2
result_2.b = rdx_11 != 0x7fff
void* var_f0
void var_f8

if (rdx_11 == 0x7fff)
    var_f0 = &var_f8
else
    var_f0 = zx.q(*(arg2 + 0x80) * rdx_11) + *(arg2 + 0x70)
int64_t rax_11
void* rcx_22
rax_11, rcx_22 = sub_140d3c6e0(rsi)

if (rax_11 != 0)
    sub_142591550()

int64_t result = *(rsi + 0x58)
int64_t result_3 = 0
int64_t* r9_1

if (result == 0)
    r9_1 = nullptr
else
    rcx_22 = **(result + 0x58)
    result = sx.q(rsi[0x1a])
    void* r15_1 = *(rcx_22 + (result << 3))
    
    if (rsi[0x86].b != 0)
        result, rcx_22 = sub_140d3c6e0(rsi)
        int64_t result_5 = result
        
        if (result == 0)
            result_3 = r15_1 + 0x138
        else
            int64_t rax_13 = sub_142591550()
            rcx_22 = *(result_5 + 0x10)
            result = rax_13 + 0x30
            int64_t rdx_12 = sx.q(*(result + 8))
            
            if (rdx_12.d s> *(rcx_22 + 0x38) || *(*(rcx_22 + 0x30) + (rdx_12 << 3)) != result
                    || *(result_5 + 0x430) == 0)
                result_3 = r15_1 + 0x138
            else
                result, rcx_22 = sub_141f66050(result_5, rsi[0x1a])
                result_3 = result
    
    if (r15_1 == 0)
        r9_1 = nullptr
    else
        r9_1 = *(r15_1 + 0x18)

if (result_3 != 0)
    result = sx.q(rsi[0x1a])
    void* r8_1 = *(rsi + 0x58)
    
    if (result.d s< 0 || result.d s>= *(r8_1 + 0xe0))
        rcx_22.b = 0
    else
        rcx_22.b = 1
    
    int64_t rcx_30
    
    if (rcx_22.b == 0)
        rcx_30 = 0
    else
        rcx_30 = result * 0xb8 + *(r8_1 + 0xd8)
    
    int64_t arg_20
    int64_t r8_2
    int64_t r13_1
    
    if ((*(rcx_30 + 0xb1) & 8) != 0)
        r8_2 = *(r8_1 + 0x318)
        r13_1 = result * 9
        arg_20 = r8_2
    
    uint128_t zmm0
    uint128_t zmm1
    uint128_t zmm2
    uint128_t zmm3
    
    if ((*(rcx_30 + 0xb1) & 8) == 0 || *(r8_2 + (r13_1 << 3) + 0x10) s<= 0)
        int32_t temp0_7
        int32_t temp1_1
        temp0_7:temp1_1 = muls.dp.d(0x55555556, (*(*r9_1 + 0x58))(r9_1))
        int32_t rdx_39 = temp0_7 + (temp0_7 u>> 0x1f)
        result = sx.q(*(arg2 + 0x40))
        
        if (rdx_39 s<= 0)
            memset(var_138, 0xff, result << 2)
            memset(var_120, 0xff, sx.q(*(arg2 + 0x40)) << 2)
            memset(var_108, 0xff, sx.q(*(arg2 + 0x40)) << 2)
            return memset(var_f0, 0xff, sx.q(*(arg2 + 0x40)) << 2)
        
        if (result.d s> 0)
            int64_t rsi_4 = 0
            int32_t* r12_3 = var_88
            int32_t* r13_2 = var_a0
            result = result_1
            int64_t rcx_65 = sx.q(var_b0) << 2
            int64_t r8_14 = sx.q(var_98) << 2
            int64_t r9_13 = sx.q(var_80) << 2
            int64_t var_e8_2 = r9_13
            int64_t var_d8_2 = rcx_65
            int64_t var_e0_2 = r8_14
            uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rdx_39))
            
            do
                int32_t r10_13 = *r12_3
                int32_t r14_2 = *r13_2
                r12_3 += r9_13
                int32_t r15_3 = *result
                r13_2 += r8_14
                
                if (r10_13 == 0xffffffff)
                    int32_t rax_62 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                    *(arg2 + 0x8c) = rax_62
                    zmm0.d = (rax_62 u>> 9 | 0x3f800000).d f- 1f
                else
                    int32_t* rcx_67 = *(arg2 + 0x90)
                    int32_t rdx_40 = *(rcx_67 + rsi_4)
                    *(rcx_67 + rsi_4) = rdx_40 + 1
                    int32_t r9_15 = r15_3 * 0x19660d + (r14_2 * 0x19660d + 0x3c6ef35f)
                        * ((r10_13 << 0x10 | rdx_40) * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                    int32_t rcx_76 = ((r10_13 << 0x10 | rdx_40) * 0x19660d + 0x3c6ef35f) * r9_15
                        + r14_2 * 0x19660d + 0x3c6ef35f
                    zmm0.d = _mm_cvtepi32_ps(zx.o((r9_15 + rcx_76
                        * (r9_15 * rcx_76 + (r10_13 << 0x10 | rdx_40) * 0x19660d + 0x3c6ef35f)) s>> 8)
                        & 0xffffff).d f* 5.96046448e-08f
                
                zmm0.d = zmm0.d f* zmm6.d
                arg_20.d = int.d(zmm0.d)
                
                if (r10_13 == 0xffffffff)
                    int32_t rcx_86 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                    zmm3.d = (rcx_86 u>> 9 | 0x3f800000).d f- 1f
                    *(arg2 + 0x8c) = rcx_86 * 0xbb38435 + 0x3619636b
                    zmm0.d = ((rcx_86 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                else
                    int32_t* rcx_78 = *(arg2 + 0x90)
                    int32_t rdx_43 = *(rcx_78 + rsi_4)
                    *(rcx_78 + rsi_4) = rdx_43 + 1
                    int32_t r9_20 = r15_3 * 0x19660d + (r14_2 * 0x19660d + 0x3c6ef35f)
                        * ((r10_13 << 0x10 | rdx_43) * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                    int32_t r10_18 = ((r10_13 << 0x10 | rdx_43) * 0x19660d + 0x3c6ef35f) * r9_20
                        + r14_2 * 0x19660d + 0x3c6ef35f
                    int32_t rcx_84 =
                        r9_20 * r10_18 + (r10_13 << 0x10 | rdx_43) * 0x19660d + 0x3c6ef35f
                    int32_t r9_21 = r9_20 + r10_18 * rcx_84
                    zmm0.d = _mm_cvtepi32_ps(zx.o(r9_21 s>> 8) & 0xffffff).d f* 5.96046448e-08f
                    zmm3.d = _mm_cvtepi32_ps(zx.o((r10_18 + r9_21 * rcx_84) s>> 8) & 0xffffff).d
                        f* 5.96046448e-08f
                
                void* rdx_46 = var_138
                r8_14 = var_e0_2
                zmm1.d = 1f f- zmm3.d
                r9_13 = var_e8_2
                i_1 += 1
                zmm2 = _mm_sqrt_ss(zx.o(0).d, zmm0.d)
                rsi_4 += 4
                var_138 = rdx_46 + (sx.q(rax_7) << 2)
                *rdx_46 = arg_20.d
                int32_t* rdx_47 = var_120
                var_120 = &rdx_47[sx.q(rax_8)]
                zmm0.d = 1f f- zmm2.d
                zmm1.d = zmm1.d f* zmm2.d
                zmm2.d = zmm2.d f* zmm3.d
                *rdx_47 = zmm0.d
                void* rdx_48 = var_108
                var_108 = rdx_48 + (sx.q(rax_9) << 2)
                *rdx_48 = zmm1.d
                void* rdx_49 = var_f0
                result += rcx_65
                var_f0 = rdx_49 + (sx.q(result_2) << 2)
                rcx_65 = var_d8_2
                *rdx_49 = zmm2.d
            while (i_1 s< *(arg2 + 0x40))
    else if (*(arg2 + 0x40) s> 0)
        int64_t* r12_2 = r8_2 + ((r13_1 + 1) << 3)
        int32_t* r15_2 = nullptr
        int32_t* rcx_31 = var_88
        int32_t* rdx_18 = var_a0
        result = result_1
        int64_t r9_3 = sx.q(var_b0) << 2
        int64_t r10_2 = sx.q(var_98) << 2
        int64_t r11_2 = sx.q(var_80) << 2
        int64_t var_d0_1 = r11_2
        int64_t var_e0_1 = r9_3
        int64_t var_d8_1 = r10_2
        
        do
            int32_t rsi_1 = *rcx_31
            int64_t result_4 = r9_3 + result
            void* rcx_32 = rcx_31 + r11_2
            int32_t r9_4 = *result
            void* rdx_19 = rdx_18 + r10_2
            int32_t r10_3 = *rdx_18
            
            if (rsi_1 == 0xffffffff)
                int32_t rcx_46 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                zmm2.d = (rcx_46 u>> 9 | 0x3f800000).d f- 1f
                *(arg2 + 0x8c) = rcx_46 * 0xbb38435 + 0x3619636b
                zmm1.d = ((rcx_46 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
            else
                int64_t rcx_33 = *(arg2 + 0x90)
                int32_t r10_5 = rsi_1 << 0x10
                int32_t rdx_20 = *(r15_2 + rcx_33)
                int32_t r11_4 = r10_3 * 0x19660d + 0x3c6ef35f
                *(r15_2 + rcx_33) = rdx_20 + 1
                int32_t rdx_23 = r11_4 * ((r10_5 | rdx_20) * 0x19660d + 0x3c6ef35f)
                    + r9_4 * 0x19660d + 0x3c6ef35f
                int32_t rcx_38 = ((r10_5 | rdx_20) * 0x19660d + 0x3c6ef35f) * rdx_23 + r11_4
                int64_t rcx_40 = *(arg2 + 0x90)
                int32_t rdx_27 = *(r15_2 + rcx_40)
                zmm2 = _mm_cvtepi32_ps(zx.o((rdx_23
                    + rcx_38 * (rdx_23 * rcx_38 + (r10_5 | rdx_20) * 0x19660d + 0x3c6ef35f)) s>> 8)
                    & 0xffffff)
                *(r15_2 + rcx_40) = rdx_27 + 1
                zmm2.d = zmm2.d f* 5.96046448e-08f
                int32_t r8_7 = r11_4 * ((r10_5 | rdx_27) * 0x19660d + 0x3c6ef35f) + r9_4 * 0x19660d
                    + 0x3c6ef35f
                int32_t rcx_43 = ((r10_5 | rdx_27) * 0x19660d + 0x3c6ef35f) * r8_7 + r11_4
                r8_2 = arg_20
                zmm1.d = _mm_cvtepi32_ps(zx.o((r8_7
                    + rcx_43 * (r8_7 * rcx_43 + (r10_5 | rdx_27) * 0x19660d + 0x3c6ef35f)) s>> 8)
                    & 0xffffff).d f* 5.96046448e-08f
            
            void* rax_33 = *r12_2
            zmm0.d = _mm_cvtepi32_ps(zx.o(*(r8_2 + (r13_1 << 3) + 0x10))).d f* zmm1.d
            int32_t r11_5 = int.d(zmm0.d)
            
            if ((rax_33.b & 1) != 0)
                rax_33 = (rax_33 s>> 1) + r12_2
            
            int64_t rdx_30 = sx.q(r11_5)
            
            if (not(zmm2.d f< *(rax_33 + (rdx_30 << 2))))
                int64_t rax_35 = *(r8_2 + ((r13_1 + 3) << 3))
                
                if ((rax_35.b & 1) != 0)
                    rax_35 = (rax_35 s>> 1) + r8_2 + ((r13_1 + 3) << 3)
                
                r11_5 = *(rax_35 + (rdx_30 << 2))
            
            if (rsi_1 == 0xffffffff)
                int32_t rcx_57 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                zmm3.d = (rcx_57 u>> 9 | 0x3f800000).d f- 1f
                *(arg2 + 0x8c) = rcx_57 * 0xbb38435 + 0x3619636b
                zmm0.d = ((rcx_57 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
            else
                int32_t* rcx_49 = *(arg2 + 0x90)
                int32_t rdx_31 = *(rcx_49 + r15_2)
                *(rcx_49 + r15_2) = rdx_31 + 1
                int32_t r9_8 = r9_4 * 0x19660d + (r10_3 * 0x19660d + 0x3c6ef35f)
                    * ((rsi_1 << 0x10 | rdx_31) * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                int32_t r10_9 = ((rsi_1 << 0x10 | rdx_31) * 0x19660d + 0x3c6ef35f) * r9_8
                    + r10_3 * 0x19660d + 0x3c6ef35f
                int32_t rcx_55 = r9_8 * r10_9 + (rsi_1 << 0x10 | rdx_31) * 0x19660d + 0x3c6ef35f
                r8_2 = arg_20
                int32_t r9_9 = r9_8 + r10_9 * rcx_55
                zmm0.d = _mm_cvtepi32_ps(zx.o(r9_9 s>> 8) & 0xffffff).d f* 5.96046448e-08f
                zmm3.d = _mm_cvtepi32_ps(zx.o((r10_9 + r9_9 * rcx_55) s>> 8) & 0xffffff).d
                    f* 5.96046448e-08f
            
            int32_t* rdx_34 = var_138
            r9_3 = var_e0_1
            zmm2.d = 1f f- zmm3.d
            r10_2 = var_d8_1
            i_1 += 1
            zmm0 = _mm_sqrt_ss(zmm0.d, zmm0.d)
            r15_2 = &r15_2[1]
            var_138 = &rdx_34[sx.q(rax_7)]
            *rdx_34 = r11_5
            int32_t* rdx_35 = var_120
            r11_2 = var_d0_1
            var_120 = &rdx_35[sx.q(rax_8)]
            zmm1.d = 1f f- zmm0.d
            zmm2.d = zmm2.d f* zmm0.d
            zmm3.d = zmm3.d f* zmm0.d
            *rdx_35 = zmm1.d
            void* rdx_36 = var_108
            var_108 = rdx_36 + (sx.q(rax_9) << 2)
            *rdx_36 = zmm2.d
            void* rdx_37 = var_f0
            result = result_4
            var_f0 = rdx_37 + (sx.q(result_2) << 2)
            rcx_31 = rcx_32
            *rdx_37 = zmm3.d
            rdx_18 = rdx_19
        while (i_1 s< *(arg2 + 0x40))
else
    int32_t i_2 = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            int32_t* rdx_14 = var_138
            i_2 += 1
            var_138 = &rdx_14[sx.q(rax_7)]
            *rdx_14 = 0xffffffff
            int32_t* rdx_15 = var_120
            var_120 = &rdx_15[sx.q(rax_8)]
            *rdx_15 = 0
            int32_t* rdx_16 = var_108
            var_108 = &rdx_16[sx.q(rax_9)]
            *rdx_16 = 0
            int32_t* rdx_17 = var_f0
            result = sx.q(result_2)
            var_f0 = &rdx_17[result]
            *rdx_17 = 0
        while (i_2 s< *(arg2 + 0x40))

return result
