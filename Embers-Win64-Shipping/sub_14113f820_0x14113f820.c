// 函数: sub_14113f820
// 地址: 0x14113f820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t r14 = *(arg2 + 0x1b0)
int64_t r9 = arg3[2]
int64_t* r12 = arg3
void* var_1a8 = arg6
int64_t var_178 = r14
sub_1410809a0(arg1, arg2, r14, r9)
int32_t r8_1 = r12[0x2a9].d
int32_t var_188

if (*(arg1 + 0x118) != 0xffff)
    int32_t* rcx = &var_188
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_14077caf0(arg2, &var_178, arg1 + 0x118, var_188.q)
    sub_1405d1550(&var_188)

void* r8_3 = data_143a2dd48
int64_t var_1b8 = 0
int32_t rcx_3 = *(r8_3 + 0x64)
int32_t rdx_2 = *(r8_3 + 0x68)
var_188 = *(r8_3 + 0x60)
int32_t var_184 = rcx_3
int32_t var_180 = rdx_2
sub_1410e8980(arg1 + 0x11a, arg2, r14, &data_143e570b0, r8_3, &var_188, var_1b8)
sub_1410e8640(arg1 + 0x14c, arg2, r14, arg5)
sub_1410e8790(arg1 + 0x16a, arg2, &var_178, r12, arg4)
void* r15_1 = var_1a8
int512_t zmm6
zmm6.o = 0x3f800000
var_188.q = r14
void** var_1c8_1
int32_t* var_1c0

if (*(arg1 + 0x1a8) u> 0 || *(arg1 + 0x1ae) u> 0)
    int64_t r12_1 = *(r15_1 + 0xb0)
    
    if (r12_1 == 0)
        r12_1 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_1 = data_14396ee58
    
    if (*(arg1 + 0x186) u> 0)
        var_1a8.d = zx.d(*(arg1 + 0x184))
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_9[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_6
        int64_t* rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142da77b8
        rcx_9[3].d = var_1a8.d
        rcx_9[2] = r14
        rcx_9[4] = r12_1
    
    if (*(arg1 + 0x196) u> 0)
        uint32_t r12_2 = zx.d(*(arg1 + 0x194))
        
        if ((*(*r13_1 + 8))(r13_1) == 0)
            void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_12 = &rcx_16[5]
            
            if (rax_12 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_12 = &rcx_16[5]
            
            *(arg2 + 0x30) = rax_12
            void**** rax_13 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_13 = rcx_16
            *(arg2 + 8) = &rcx_16[1]
            rcx_16[1] = 0
            *rcx_16 = &data_142da77c8
            rcx_16[2] = r14
            rcx_16[3].d = r12_2
            rcx_16[4] = r13_1
    
    int64_t r12_3 = *(r15_1 + 0xb8)
    
    if (r12_3 == 0)
        r12_3 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_2 = data_14396ee58
    
    if (*(arg1 + 0x18a) u> 0)
        var_1a8.d = zx.d(*(arg1 + 0x188))
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_17 = &rcx_22[5]
        
        if (rax_17 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_17 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_17
        int64_t* rax_18 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_18 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142da77b8
        rcx_22[3].d = var_1a8.d
        rcx_22[2] = r14
        rcx_22[4] = r12_3
    
    if (*(arg1 + 0x19a) u> 0)
        uint32_t r12_4 = zx.d(*(arg1 + 0x198))
        
        if ((*(*r13_2 + 8))(r13_2) == 0)
            void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_23 = &rcx_29[5]
            
            if (rax_23 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_23 = &rcx_29[5]
            
            *(arg2 + 0x30) = rax_23
            void**** rax_24 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_24 = rcx_29
            *(arg2 + 8) = &rcx_29[1]
            rcx_29[1] = 0
            *rcx_29 = &data_142da77c8
            rcx_29[2] = r14
            rcx_29[3].d = r12_4
            rcx_29[4] = r13_2
    
    int64_t r12_5 = *(r15_1 + 0xc0)
    
    if (r12_5 == 0)
        r12_5 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_3 = data_14396ee58
    
    if (*(arg1 + 0x18e) u> 0)
        var_1a8.d = zx.d(*(arg1 + 0x18c))
        void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_28 = &rcx_35[5]
        
        if (rax_28 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_28 = &rcx_35[5]
        
        *(arg2 + 0x30) = rax_28
        int64_t* rax_29 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_29 = rcx_35
        *(arg2 + 8) = &rcx_35[1]
        rcx_35[1] = 0
        *rcx_35 = &data_142da77b8
        rcx_35[3].d = var_1a8.d
        rcx_35[2] = r14
        rcx_35[4] = r12_5
    
    if (*(arg1 + 0x19e) u> 0)
        uint32_t r12_6 = zx.d(*(arg1 + 0x19c))
        
        if ((*(*r13_3 + 8))(r13_3) == 0)
            void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_34 = &rcx_42[5]
            
            if (rax_34 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_34 = &rcx_42[5]
            
            *(arg2 + 0x30) = rax_34
            void**** rax_35 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_35 = rcx_42
            *(arg2 + 8) = &rcx_42[1]
            rcx_42[1] = 0
            *rcx_42 = &data_142da77c8
            rcx_42[2] = r14
            rcx_42[3].d = r12_6
            rcx_42[4] = r13_3
    
    int64_t r12_7 = *(r15_1 + 0xc8)
    
    if (r12_7 == 0)
        r12_7 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_4 = data_14396ee58
    
    if (*(arg1 + 0x192) u> 0)
        var_1a8.d = zx.d(*(arg1 + 0x190))
        void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_39 = &rcx_48[5]
        
        if (rax_39 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_39 = &rcx_48[5]
        
        *(arg2 + 0x30) = rax_39
        int64_t* rax_40 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_40 = rcx_48
        *(arg2 + 8) = &rcx_48[1]
        rcx_48[1] = 0
        *rcx_48 = &data_142da77b8
        rcx_48[3].d = var_1a8.d
        rcx_48[2] = r14
        rcx_48[4] = r12_7
    
    if (*(arg1 + 0x1a2) u> 0)
        uint32_t r12_8 = zx.d(*(arg1 + 0x1a0))
        
        if ((*(*r13_4 + 8))(r13_4) == 0)
            void*** rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_45 = &rcx_55[5]
            
            if (rax_45 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_45 = &rcx_55[5]
            
            *(arg2 + 0x30) = rax_45
            void**** rax_46 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_46 = rcx_55
            *(arg2 + 8) = &rcx_55[1]
            rcx_55[1] = 0
            *rcx_55 = &data_142da77c8
            rcx_55[2] = r14
            rcx_55[3].d = r12_8
            rcx_55[4] = r13_4
    
    var_1c0.d = 0
    var_1c8_1.d = 4
    sub_14077c9b0(arg2, &var_188, arg1 + 0x1a4, r15_1 + 0x30, var_1c8_1.d, var_1c0.d)
    var_1c0.d = 0
    var_1c8_1.d = 4
    sub_14077c9b0(arg2, &var_188, arg1 + 0x1aa, r15_1 + 0x70, var_1c8_1.d, var_1c0.d)
    var_1c8_1.d = 0
    float zmm6_1 = sub_140741e30(arg2, &var_188, arg1 + 0x1b0, r15_1 + 0xd0, var_1c8_1.d)
    var_1c8_1.d = 0
    var_1a8.d = zmm6_1 f/ *(r15_1 + 0xd0)
    sub_140741e30(arg2, &var_188, arg1 + 0x1b6, &var_1a8, var_1c8_1.d)
    var_1c8_1.d = 0
    sub_140741e30(arg2, &var_188, arg1 + 0x1bc, r15_1 + 0xd4, var_1c8_1.d)
    r12 = arg3

float (* var_f8)[0x1c] = nullptr
int32_t var_f0 = 0
int32_t var_ec = 9
float var_168[0x1c]
sub_1410f8450(*(*r12 + 0x3c), &var_168)
float (* rcx_65)[0x1c] = &var_168
int32_t var_18c = 0x3f800000
float zmm3[0x4] = arg3.o

if (var_f8 != 0)
    rcx_65 = var_f8

zmm3[0] = *rcx_65
float zmm1 = (*rcx_65)[1]
float zmm2 = (*rcx_65)[2]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm1
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float var_e8[0x4] = temp0_2
temp0_2[0] = (*rcx_65)[3]
zmm1 = (*rcx_65)[4]
zmm2 = (*rcx_65)[5]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
temp0_3[0] = zmm1
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = zmm2
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float var_d8[0x4] = temp0_5
zmm1 = (*rcx_65)[7]
temp0_5[0] = (*rcx_65)[6]
zmm2 = (*rcx_65)[8]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
temp0_6[0] = zmm1
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
temp0_7[0] = zmm2
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float var_c8[0x4] = temp0_8
zmm1 = (*rcx_65)[0xa]
temp0_8[0] = (*rcx_65)[9]
zmm2 = (*rcx_65)[0xb]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
temp0_9[0] = zmm1
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
temp0_10[0] = zmm2
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
float var_b8[0x4] = temp0_11
zmm1 = (*rcx_65)[0xd]
temp0_11[0] = (*rcx_65)[0xc]
zmm2 = (*rcx_65)[0xe]
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xe1)
temp0_12[0] = zmm1
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
temp0_13[0] = zmm2
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float var_a8[0x4] = temp0_14
zmm1 = (*rcx_65)[0x10]
temp0_14[0] = (*rcx_65)[0xf]
zmm2 = (*rcx_65)[0x11]
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xe1)
temp0_15[0] = zmm1
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
temp0_16[0] = zmm2
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
float var_98[0x4] = temp0_17
zmm1 = (*rcx_65)[0x13]
temp0_17[0] = (*rcx_65)[0x12]
zmm2 = (*rcx_65)[0x14]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xe1)
temp0_18[0] = zmm1
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
temp0_19[0] = zmm2
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r8_12 = 0
int64_t rax_50 = data_143e52a90
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
float var_88[0x4] = temp0_20
zmm1 = (*rcx_65)[0x16]
temp0_20[0] = (*rcx_65)[0x15]
zmm2 = (*rcx_65)[0x17]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xe1)
temp0_21[0] = zmm1
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
temp0_22[0] = zmm2
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
float var_78[0x4] = temp0_23
zmm1 = (*rcx_65)[0x19]
temp0_23[0] = (*rcx_65)[0x18]
zmm2 = (*rcx_65)[0x1a]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xe1)
temp0_24[0] = zmm1
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
temp0_25[0] = zmm2
float var_68[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)

if (rbx s> 0)
    int64_t rdx_12 = 0
    
    while (true)
        void* rcx_67 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_67 = (rcx_67 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_67 + (rdx_12 << 3)) == rax_50)
            break
        
        r8_12 += 1
        rdx_12 += 1
        
        if (rdx_12 s>= rbx)
            goto label_141140125

int16_t* rbx_1

if (rbx s<= 0 || r8_12 == 0xffffffff)
label_141140125:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rbx_1 = &data_143ce8560
else
    void* rcx_96 = *(arg1 + 0xe8)
    
    if ((rcx_96.b & 1) != 0)
        rcx_96 = (rcx_96 s>> 1) + arg1 + 0xe8
    
    rbx_1 = rcx_96 + (sx.q(r8_12) << 1)

if (*rbx_1 != 0xffff)
    int64_t* rcx_70 = data_143f0f180
    var_1c0.d = 1
    var_1c8_1.d = 0
    (*(*rcx_70 + 0xf8))(rcx_70, &var_188, &var_e8, &data_143e52aa0, var_1c8_1, var_1c0)
    int64_t r15_2 = var_188.q
    uint32_t r13_5 = zx.d(*rbx_1)
    void*** rcx_73 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_54 = &rcx_73[5]
    
    if (rax_54 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_73 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_54 = &rcx_73[5]
    
    *(arg2 + 0x30) = rax_54
    void**** rax_55 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_55 = rcx_73
    *(arg2 + 8) = &rcx_73[1]
    rcx_73[1] = 0
    *rcx_73 = &data_142da77a8
    rcx_73[2] = r14
    rcx_73[3].d = r13_5
    rcx_73[4] = r15_2
    sub_1405d1550(&var_188)

void* r15_3 = *(r12[0x2b5] + 0xd40)
int64_t r13_6 = *(r15_3 + 0x40)

if (*(arg1 + 0x1c4) u> 0)
    var_1a8.d = zx.d(*(arg1 + 0x1c2))
    void*** rcx_80 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_59 = &rcx_80[5]
    
    if (rax_59 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_80 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_59 = &rcx_80[5]
    
    *(arg2 + 0x30) = rax_59
    int64_t* rax_60 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_60 = rcx_80
    *(arg2 + 8) = &rcx_80[1]
    rcx_80[1] = 0
    *rcx_80 = &data_142d99560
    rcx_80[3].d = var_1a8.d
    rcx_80[2] = r14
    rcx_80[4] = r13_6

var_1c8_1.d = 0
sub_14077c4b0(arg2, &var_178, arg1 + 0x1c6, r15_3 + 0xd0, var_1c8_1.d)
sub_14077c370(arg1 + 0x1cc, arg2, &var_178, r15_3 + 0x50)
sub_14077c370(arg1 + 0x1d4, arg2, &var_178, r15_3 + 0x70)
sub_14077c370(arg1 + 0x1dc, arg2, &var_178, r15_3 + 0x90)
sub_14077c370(arg1 + 0x1e4, arg2, &var_178, r15_3 + 0xb0)
var_1a8.d = tanf(data_1439b5b9c)
var_1c8_1.d = 0
float zmm6_2 = sub_140741e30(arg2, &var_178, arg1 + 0x1ec, &var_1a8, var_1c8_1.d)
float (* rcx_90)[0x1c] = &var_168
var_1c8_1.d = 0

if (var_f8 != 0)
    rcx_90 = var_f8

float zmm0_5 = (*rcx_90)[5] + (*rcx_90)[2] + (*rcx_90)[8] + (*rcx_90)[0xb] + (*rcx_90)[0xe]
    + (*rcx_90)[0x11] + (*rcx_90)[0x14]
float zmm1_1 = (*rcx_90)[1] + (*rcx_90)[4] + (*rcx_90)[7] + (*rcx_90)[0xa] + (*rcx_90)[0xd]
    + (*rcx_90)[0x10] + (*rcx_90)[0x13]
zmm2 = (*rcx_90)[3] + *rcx_90 + (*rcx_90)[6] + (*rcx_90)[9] + (*rcx_90)[0xc] + (*rcx_90)[0xf]
    + (*rcx_90)[0x12] + (*rcx_90)[0x15]
zmm0_5 = zmm0_5 + (*rcx_90)[0x17] + (*rcx_90)[0x1a]
zmm2 = zmm2 + (*rcx_90)[0x18]
zmm1_1 = zmm1_1 + (*rcx_90)[0x16] + (*rcx_90)[0x19]
float var_170 =
    zmm6_2 / _mm_sqrt_ss(0, (zmm1_1 * zmm1_1 + zmm2 * zmm2 + zmm0_5 * zmm0_5) * 0.0123456791f)
sub_140741e30(arg2, &var_178, arg1 + 0x1f2, &var_170, var_1c8_1.d)
int64_t result = sub_14077c370(arg1 + 0x1f8, arg2, &var_178, *(r12[0x2b5] + 0xd48) + 0x18)

if (var_f8 != 0)
    result = sub_140a74f90(var_f8)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
