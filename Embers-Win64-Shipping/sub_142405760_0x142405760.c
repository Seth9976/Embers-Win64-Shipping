// 函数: sub_142405760
// 地址: 0x142405760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint32_t rax_2 = zx.d(data_14399f638:1.b)
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(data_14399f638:2.b)).d f* 0.00392156886f
int32_t var_230 = zmm0.d
uint32_t rax_3 = zx.d(data_14399f638.b)
zmm0 = _mm_cvtepi32_ps(zx.o(rax_2))
uint32_t rax_4 = zx.d(data_14399f638:3.b)
zmm0.d = zmm0.d f* 0.00392156886f
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_3))
int32_t var_22c_1 = zmm0.d
int64_t rax_5 = *(arg2 + 0x98)
zmm1.d = zmm1.d f* 0.00392156886f
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_4)).d f* 0.00392156886f
int32_t var_228_1 = zmm1.d
int32_t var_224_1 = zmm0.d
(*(rax_5 + 0x20))(arg2 + 0x98, &var_230)
int64_t var_1b4 = arg1[3]
int32_t arg_10 = 0
int16_t* var_1a8
sub_140b63b70(&var_1b4, &var_1a8)
int16_t* const r8_1 = &data_142d40450
int32_t var_1a0

if (var_1a0 != 0)
    r8_1 = var_1a8

int64_t var_b8
sub_140a2e390(&var_b8, u"INPUT %s", r8_1)
sub_142409af0(arg2 + 0x98, &var_b8, &arg_10)
int64_t rcx_4 = var_b8

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int16_t* rcx_5 = var_1a8

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

void* rax_8 = (*(*arg1 + 0x150))(arg1)
int32_t var_24c_1 = 1
int32_t var_240_1 = 0xffffffff
int32_t r11_1 = arg1[0x51].d
void* r9_1 = &arg1[0x4e]
*(rax_8 + 0x528)
int32_t rcx_7 = 0
int32_t var_250_1 = 0
int32_t r8_3 = 0
void* var_248_1 = r9_1
int64_t var_23c_1 = 0

if (r11_1 != 0)
    void* rax_9 = *(r9_1 + 0x10)
    
    if (rax_9 != 0)
        r9_1 = rax_9
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11_1 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14240593b:
        int32_t rax_16 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_5
        temp0_5, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_24c_2 = rax_16
        int32_t var_1b8_1 = temp0_5
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_5
        
        int32_t rax_18 = r8_3 - rax_17 + 0x1f
        var_23c_1.d = rax_18
        
        if (rax_18 s> r11_1)
            var_23c_1.d = r11_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_7)
            r8_3 += 0x20
            rcx_7 += 1
            var_23c_1:4.d = r8_3
            var_250_1 = rcx_7
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_240_2 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14240593b
        
        var_23c_1.d = r11_1

void* var_c0_1 = &arg1[0x4c]
void* var_e8 = &arg1[0x4c]
int128_t var_d0_1 = 0xffffffff
uint128_t var_e0_1 = var_250_1.o
int16_t var_1c0_1 = 0
double zmm3_1[0x2] = var_e0_1
double rax_19 = zmm3_1[0]
double var_1f8[0x2] = var_e8.o
uint128_t zmm0_1
zmm0_1.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_d0_1 = zmm0_1
uint128_t var_1d8_1 = zmm0_1

if (0 s< *(rax_19 i+ 0x18))
    int32_t i = zmm3_1[1]:4.d
    
    do
        int64_t* rdi_1 = sx.q(i) * 0xf0
        int64_t rsi_1 = *var_1f8[0]
        int64_t var_188 = *(rdi_1 + rsi_1)
        int64_t var_180_1 = *(rdi_1 + rsi_1 + 8)
        int64_t* rax_24 = *(rdi_1 + rsi_1 + 0x10)
        
        if (rax_24 != 0)
            rax_24[1].d += 1
        
        r8_3.b = 1
        int64_t* rax_25
        int128_t zmm6_2
        rax_25, zmm6_2 = sub_140d44c30(&var_188, &var_e8, r8_3.b)
        int64_t* rax_26 = sub_140ac6680(rax_25)
        int16_t* const r8_4
        
        if (rax_26[1].d == 0)
            r8_4 = &data_142d40450
        else
            r8_4 = *rax_26
        
        float zmm0_2[0x2] = *(rdi_1 + rsi_1 + 0x18)
        double temp0_7[0x2] = _mm_cvtps_pd((*(rdi_1 + rsi_1 + 0x24))[0])
        float temp0_8[0x2] = _mm_cvtps_pd(zmm0_2)
        temp0_7[0]
        float var_278_1[0x2] = temp0_8
        int64_t var_220
        sub_140a2e390(&var_220, u" %s: %.2f (raw %.2f)", r8_4)
        int64_t* rbx_2 = var_e0_1.q
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_29 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int32_t* r8_5
        
        if ((*(rdi_1 + rsi_1 + 0x34) & 1) != 0 || 0f f!= *(rdi_1 + rsi_1 + 0x24))
            if (sub_140d6de40(&var_188) == 0)
                int128_t zmm0_4
                zmm0_4.d = zmm6_2.d f- *(rdi_1 + rsi_1 + 0x30)
                int64_t var_198
                sub_140a2e390(&var_198, u" time: %.2f", fconvert.d(zmm0_4.d))
                int32_t var_190
                int32_t r8_8
                
                if (var_190 == 0)
                    r8_8 = 0
                else
                    r8_8 = var_190 - 1
                
                sub_140a20ba0(&var_220, var_198, r8_8)
                int64_t rcx_18 = var_198
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
            
            int64_t rax_33 = *(arg2 + 0x98)
            int128_t var_68 = data_1433473d0
            (*(rax_33 + 0x20))(arg2 + 0x98, &var_68)
            int32_t var_264
            r8_5 = &var_264
            var_264 = 0
        else
            int64_t rax_31 = *(arg2 + 0x98)
            int128_t var_78 = data_1433473c0
            (*(rax_31 + 0x20))(arg2 + 0x98, &var_78)
            int32_t var_268
            r8_5 = &var_268
            var_268 = 0
        
        sub_142409af0(arg2 + 0x98, &var_220, r8_5)
        int64_t rcx_21 = var_220
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        if (rax_24 != 0)
            rax_24[1].d -= 1
            
            if (rax_24[1].d == 1)
                (**rax_24)(rax_24)
                int32_t temp4_1 = *(rax_24 + 0xc)
                *(rax_24 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rax_24 + 8))(rax_24, 1)
        
        zmm3_1[1].d &= not.d(var_1f8[1]:4.d)
        sub_14059bdd0(&var_1f8[1])
        i = zmm3_1[1]:4.d
    while (i s< *(zmm3_1[0] i+ 0x18))
    
    if (var_1c0_1.b != 0 && var_1c0_1:1.b != 0)
        r8_3.b = 1
        sub_141c9a080(&arg1[0x4c], arg1[0x4d].d - *(arg1 + 0x294), r8_3.b)

uint32_t rax_39 = zx.d(data_14399f630:2.b)
uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(arg1[0x22].d))
uint32_t rax_40 = zx.d(data_14399f630:1.b)
zmm6_1.d = zmm6_1.d f/ *(arg1 + 0x114)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_39))
uint32_t rax_41 = zx.d(data_14399f630.b)
double zmm1_1[0x2] = _mm_cvtepi32_ps(zx.o(rax_40))
zmm0_1.d = zmm0_1.d f* 0.00392156886f
zmm1_1[0].d = zmm1_1[0].d f* 0.00392156886f
int32_t var_210 = zmm0_1.d
uint32_t rax_42 = zx.d(data_14399f630:3.b)
int32_t var_20c_1 = zmm1_1[0].d
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_41))
int64_t rax_43 = *(arg2 + 0x98)
zmm1_1 = _mm_cvtepi32_ps(zx.o(rax_42))
zmm0_1.d = zmm0_1.d f* 0.00392156886f
zmm1_1[0].d = zmm1_1[0].d f* 0.00392156886f
int32_t var_208_1 = zmm0_1.d
int32_t var_204_1 = zmm1_1[0].d
(*(rax_43 + 0x20))(arg2 + 0x98, &var_210)
double temp0_16[0x2] = _mm_cvtps_pd(zmm6_1.q)
int32_t var_260 = 0
int64_t var_a8
sub_140a2e390(&var_a8, u"MouseSampleRate: %.2f", temp0_16[0])
sub_142409af0(arg2 + 0x98, &var_a8, &var_260)
int64_t rcx_29 = var_a8

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

float zmm2_3[0x2] = arg1[0x20].d
_mm_cvtps_pd(arg1[0x21].d)
int32_t var_25c = 0
int64_t var_98
sub_140a2e390(&var_98, u"MouseX ZeroTime: %.2f, Smoothed: %.2f", _mm_cvtps_pd(zmm2_3))
sub_142409af0(arg2 + 0x98, &var_98, &var_25c)
int64_t rcx_32 = var_98

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

float zmm2_4[0x2] = *(arg1 + 0x104)
_mm_cvtps_pd(*(arg1 + 0x10c))
int32_t var_258 = 0
int64_t var_88
sub_140a2e390(&var_88, u"MouseY ZeroTime: %.2f, Smoothed: %.2f", _mm_cvtps_pd(zmm2_4))
sub_142409af0(arg2 + 0x98, &var_88, &var_258)
int64_t rcx_35 = var_88

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

void* rax_45

if (not(2f f>= arg1[0x20].d) && not(2f f>= *(arg1 + 0x104)))
    int64_t* rax_44 = sub_1424c7800()
    rax_45 = rax_44[0x23]
    
    if (rax_45 == 0)
        int64_t rdx_18 = *rax_44
        (*(rdx_18 + 0x390))(rax_44, rdx_18)
        rax_45 = rax_44[0x23]

uint128_t zmm0_5
uint128_t zmm1_2
uint128_t zmm2_5

if (2f f>= arg1[0x20].d || 2f f>= *(arg1 + 0x104) || (*(rax_45 + 0x38) & 8) == 0)
    uint128_t zmm3_4 = zx.o(*(arg2 + 0x44))
    zmm2_5 = data_143f5d824
    uint128_t zmm4_1
    zmm4_1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x40))).d f* 0.5f
    zmm3_4.d = _mm_cvtepi32_ps(zmm3_4).d f* 0.5f
    uint128_t zmm5_1 = zmm4_1
    zmm4_1.d = zmm4_1.d f- 700f
    zmm5_1.d = zmm5_1.d f+ 700f
    
    if (not(zmm2_5.d f>= zmm4_1.d))
        data_143f5d824 = zmm4_1.d
        zmm2_5 = zmm4_1
    else if (not(zmm2_5.d f< zmm5_1.d))
        data_143f5d824 = zmm5_1.d
        zmm2_5 = zmm5_1
    
    zmm0_5 = zmm3_4
    zmm3_4.d = zmm3_4.d f- 700f
    zmm0_5.d = zmm0_5.d f+ 700f
    zmm1_2 = data_143f5d82c
    
    if (not(zmm1_2.d f>= zmm3_4.d))
        data_143f5d82c = zmm3_4.d
        zmm1_2 = zmm3_4
    else if (not(zmm1_2.d f< zmm0_5.d))
        data_143f5d82c = zmm0_5.d
        zmm1_2 = zmm0_5
    
    int32_t zmm6_3 = data_143f5d820
    
    if (not(zmm6_3 f>= zmm4_1.d))
        data_143f5d820 = zmm4_1.d
    else if (not(zmm6_3 f< zmm5_1.d))
        data_143f5d820 = zmm5_1.d
    
    zmm4_1 = data_143f5d828
    
    if (not(zmm4_1.d f>= zmm3_4.d))
        data_143f5d828 = zmm3_4.d
    else if (not(zmm4_1.d f< zmm0_5.d))
        data_143f5d828 = zmm0_5.d
else
    zmm1_2 = zx.o(*(arg2 + 0x44))
    zmm2_5.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x40))).d f* 0.5f
    zmm1_2.d = _mm_cvtepi32_ps(zmm1_2).d f* 0.5f
    data_143f5d820 = zmm2_5.d
    data_143f5d824 = zmm2_5.d
    data_143f5d828 = zmm1_2.d
    data_143f5d82c = zmm1_2.d

int32_t* rbx_5 = *(arg2 + 0x260)
int32_t var_118_1 = 0x3f800000
int32_t var_15c_1 = zmm1_2.d
zmm1_2 = data_142d8c9b0
int32_t var_f4_1 = data_143dbb1f0.d.d
zmm0_5 = data_14399f620
void** const var_168 = &data_1433443d0
uint128_t var_128_1 = zmm1_2
uint128_t var_140_1 = zmm0_5
int64_t var_158_1 = 0
int32_t var_160_1 = zmm2_5.d
int32_t var_f0_1 = data_143dbb1f0:4.d.d
char var_150_1 = 0
int64_t var_148_1 = 0
int32_t var_130_1 = 0x41000000
int32_t var_12c_1 = 0x41000000
int64_t var_110_1 = data_143f10dc8
int64_t var_108
__builtin_memset(&var_108, 0, 0x14)
sub_142408260(&var_168, rbx_5)

if (rbx_5[0x28] == 1)
    sub_14240e030(rbx_5, 0)

void* rbx_6 = *(arg2 + 0x260)
int128_t var_140_2 = data_14399f5c0
int32_t var_130_2 = 0x40a00000
int32_t var_15c_2 = data_143f5d828.d
int32_t var_160_2 = data_143f5d820
int32_t var_12c_2 = 0x40a00000
var_168[3](&var_168, rbx_6)

if (*(rbx_6 + 0xa0) == 1)
    sub_14240e030(rbx_6, 0)
