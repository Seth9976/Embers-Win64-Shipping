// 函数: sub_14177f040
// 地址: 0x14177f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
sub_14152dda0(arg2, arg1 + 0x18, arg3)
sub_1409ac860(arg2, arg1 + 0x30, arg3)
sub_14152f8a0(arg2, arg1 + 0x50, sub_14175ef70(arg2, arg1 + 0x40, arg3))
int64_t* rcx_4 = arg2[1]
char* r8 = *rcx_4

if (&r8[1] u> rcx_4[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0xc8, 1)
else
    *(arg1 + 0xc8) = *r8
    int64_t* rax_4 = arg2[1]
    *rax_4 += 1

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int32_t rax_7
int512_t zmm1_1
rax_7, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9538)

if (rax_7 s< 0x10 && *(*(arg1 + 0x40) + 0xc) != 0)
    void* i_1 = *(arg1 + 0x58)
    void* i = arg1 + 0x50
    
    if (i_1 != 0)
        i = i_1
    
    for (void* r14_1 = i + (sx.q(*(arg1 + 0x60)) << 3); i != r14_1; i += 8)
        float zmm0_1[0x4] = *(arg1 + 0x30)
        zmm1_1.o = *(arg1 + 0x20)
        void* rcx_8 = *i
        float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x18), zmm1_1.q)
        float var_68[0x4] = zmm0_1
        float temp0_2[0x4] = _mm_unpacklo_ps(*(arg1 + 0x1c), zx.o(0)[0].q)
        float zmm2_1[0x4] = data_14399f66c
        float var_58_1[0x4] = _mm_unpacklo_ps(temp0_1, temp0_2[0].q)
        float var_48_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
            _mm_unpacklo_ps(zmm2_1, 0)[0].q)
        zmm1_1 = sub_14175b310(rcx_8, &var_68)

if ((arg2[5].b & 1) != 0)
    zmm1_1 = sub_14177ab20(arg1)

sub_14152dda0(arg2, arg1 + 0xd0, zmm1_1)
sub_14152dda0(arg2, arg1 + 0xdc, zmm1_1)
sub_1409ac860(arg2, arg1 + 0x110, zmm1_1)
sub_14152dda0(arg2, arg1 + 0x120, zmm1_1)
sub_14152dda0(arg2, arg1 + 0x12c, zmm1_1)
sub_14152dda0(arg2, arg1 + 0x138, zmm1_1)
sub_14152dda0(arg2, arg1 + 0x144, zmm1_1)
sub_14152dda0(arg2, arg1 + 0x150, zmm1_1)
sub_14152dda0(arg2, arg1 + 0x15c, zmm1_1)
sub_14152dda0(arg2, arg1 + 0x168, zmm1_1)
sub_1408dbe80(arg2, arg1 + 0x180, zmm1_1)
sub_1408dbe80(arg2, arg1 + 0x1c0, zmm1_1)
int512_t zmm1_2 = sub_14152f2b0(arg2, arg1 + 0x200)
int64_t* rcx_23 = arg2[1]
int32_t* r8_1 = *rcx_23

if (&r8_1[1] u<= rcx_23[1])
    *(arg1 + 0x208) = *r8_1
    int64_t* rax_12 = arg2[1]
    *rax_12 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x208, zmm1_2)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x208, 4)

int64_t* rcx_25 = arg2[1]
int32_t* r8_2 = *rcx_25

if (&r8_2[1] u<= rcx_25[1])
    *(arg1 + 0x20c) = *r8_2
    int64_t* rax_16 = arg2[1]
    *rax_16 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x20c, zmm1_2)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x20c, 4)

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int32_t rax_19
int512_t zmm1_3
rax_19, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9538)

if (rax_19 s>= 0x18)
    int64_t* rcx_29 = arg2[1]
    int32_t* r8_3 = *rcx_29
    
    if (&r8_3[1] u<= rcx_29[1])
        *(arg1 + 0x210) = *r8_3
        int64_t* rax_22 = arg2[1]
        *rax_22 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x210, zmm1_3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x210, 4)
    
    int64_t* rcx_31 = arg2[1]
    int32_t* r8_4 = *rcx_31
    
    if (&r8_4[1] u<= rcx_31[1])
        *(arg1 + 0x214) = *r8_4
        int64_t* rax_26 = arg2[1]
        *rax_26 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x214, zmm1_3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x214, 4)

int64_t* rcx_33 = arg2[1]
int32_t* r8_5 = *rcx_33

if (&r8_5[1] u<= rcx_33[1])
    *(arg1 + 0x218) = *r8_5
    int64_t* rax_30 = arg2[1]
    *rax_30 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x218, zmm1_3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x218, 4)

int64_t* rcx_35 = arg2[1]
int32_t* r8_6 = *rcx_35

if (&r8_6[1] u<= rcx_35[1])
    *(arg1 + 0x21c) = *r8_6
    int64_t* rax_34 = arg2[1]
    *rax_34 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x21c, zmm1_3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x21c, 4)

int64_t* rcx_37 = arg2[1]
char* r8_7 = *rcx_37

if (&r8_7[1] u> rcx_37[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x220, 1)
else
    *(arg1 + 0x220) = *r8_7
    int64_t* rax_38 = arg2[1]
    *rax_38 += 1

int64_t* rcx_39 = arg2[1]
int32_t* rdx_26 = *rcx_39
int32_t var_78

if (&rdx_26[1] u> rcx_39[1])
    int32_t rax_42
    rax_42.b = *(arg1 + 0x221) != 0
    var_78 = rax_42
    (*(*arg2 + 0x150))(arg2, &var_78, 4)
    *(arg1 + 0x221) = var_78 != 0
else
    void* rax_40
    rax_40.b = *rdx_26 != 0
    *(arg1 + 0x221) = rax_40.b
    int64_t* rax_41 = arg2[1]
    *rax_41 += 4

int64_t* rcx_41 = arg2[1]
int32_t* rdx_28 = *rcx_41

if (&rdx_28[1] u> rcx_41[1])
    int32_t rax_47
    rax_47.b = *(arg1 + 0x222) != 0
    var_78 = rax_47
    (*(*arg2 + 0x150))(arg2, &var_78, 4)
    *(arg1 + 0x222) = var_78 != 0
else
    void* rax_45
    rax_45.b = *rdx_28 != 0
    *(arg1 + 0x222) = rax_45.b
    int64_t* rax_46 = arg2[1]
    *rax_46 += 4

int64_t* rcx_43 = arg2[1]
int32_t* rdx_30 = *rcx_43
int64_t* result

if (&rdx_30[1] u> rcx_43[1])
    int64_t rax_51 = *arg2
    int32_t rsi_1
    rsi_1.b = *(arg1 + 0x223) != 0
    var_78 = rsi_1
    (*(rax_51 + 0x150))(arg2, &var_78, 4)
    result.b = var_78 != 0
    *(arg1 + 0x223) = result.b
else
    void* rax_50
    rax_50.b = *rdx_30 != 0
    *(arg1 + 0x223) = rax_50.b
    result = arg2[1]
    *result += 4

__security_check_cookie(rax_1 ^ &var_98)
return result
