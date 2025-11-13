// 函数: sub_1413a14d0
// 地址: 0x1413a14d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa370)
void var_a3a8
int64_t rax_1 = __security_cookie ^ &var_a3a8
int32_t rax_3 = data_1439b69d8

if (rax_3 s<= 0xffffffff)
    rax_3 = *(arg4 + 0x123c)

int32_t r14 = 0x20

if (rax_3 s<= 0x20)
    r14 = rax_3

int64_t rdx_1 = *(arg1 + 8) + 0x6338
int32_t rax_6 = *(*(arg4 + 0x15a8) + 0x4c8) & 0x3ff
int32_t var_a364 = rax_6
void** var_a188
sub_1411c8490(&var_a188, rdx_1, 1, 1, 0x18, rax_6)
int32_t var_a154
uint64_t r8 = zx.q(var_a154)
int32_t var_a150
uint32_t var_a258 = var_a150 u/ 3
int32_t rcx_1 = int.d(_mm_sqrt_ss(0, float.s(r8)))
int32_t var_a254 = rcx_1
int64_t* rcx_2 = data_143f0f180
uint32_t var_a250 = divu.dp.d(0:(r8.d), rcx_1)
int32_t var_a158
int32_t var_a24c = var_a158
int64_t var_a2e0
int64_t var_a178
(*(*rcx_2 + 0x5b0))(rcx_2, &var_a2e0, &data_143f02b98, var_a178)
int64_t var_a248 = var_a2e0
sub_1405ec8a0(&var_a2e0)
void* r9_1 = *(arg1 + 8)
int64_t* rcx_4 = data_143f0f180
int32_t var_a278 = *(r9_1 + 0x6380)
int64_t var_a2d8
(*(*rcx_4 + 0x5b0))(rcx_4, &var_a2d8, &data_143f02b98, *(r9_1 + 0x6368))
int64_t var_a270 = var_a2d8
sub_1405ec8a0(&var_a2d8)
void* r8_1 = data_143f5b298
int32_t* rcx_6 = *(*(r8_1 + 0x700) + 0xd0)
int32_t rax_16
int32_t rcx_7

if (rcx_6 == 0)
    rax_16 = 0
    rcx_7 = 0
else
    rax_16 = rcx_6[1]
    rcx_7 = *rcx_6

int32_t var_a238 = rcx_7
int32_t var_a234 = rcx_7

if (rcx_7 s<= 1)
    rcx_7 = 1

int32_t var_a230 = divs.dp.d(sx.q(rax_16), rcx_7)
int64_t var_a228 = *(*(*(r8_1 + 0x700) + 0x78) + 0x10)
void var_a078
sub_1413aa0a0(*(arg1 + 8), arg4, &var_a078)
float zmm0_1 = data_1439b69e0
void* rcx_10 = *(arg1 + 8)
float zmm7 = 9.99999988e+26f

if (zmm0_1 <= 0f)
    void* rax_21 = *(rcx_10 + 0xf80)
    
    if (rax_21 != 0)
        double temp0_3[0x2] = _mm_cvtps_pd((*(rax_21 + 0x14))[0])
        temp0_3[0] = temp0_3[0] * 0.98999999999999999
        zmm7 = _mm_cvtpd_ps(_mm_max_sd(temp0_3[0], 0))
else
    zmm7 = zmm0_1

int64_t var_a110 = 0
int128_t var_a0e8
__builtin_memset(&var_a0e8, 0, 0x68)
int64_t var_a108 = 0
void* rdi = *(rcx_10 + 0xf80)
void var_a148
sub_1413f9890(rcx_10, &var_a148)

if (rdi != 0 && (*(rdi + 0x20) & 0x40) == 0)
    int32_t var_a328_1 = 0
    int64_t var_a138_1 = _mm_unpacklo_ps(zx.o(0), 0)
    int32_t var_a130_1 = 0

int32_t* rax_22 = sub_14081d830(0x100, arg2[1], 1, 0)
int32_t* rdi_1 = rax_22

if (rax_22 == 0)
    rdi_1 = rax_22
else
    __builtin_memset(&rdi_1[0xe], 0, 0x38)
    __builtin_memset(&rdi_1[0x1e], 0, 0x58)
    *(rdi_1 + 0xe8) = 0
    *(rdi_1 + 0xf0) = 0

memset(&rdi_1[4], 0, 0xf0)
int32_t temp15
int32_t temp16
temp15:temp16 = sx.q(var_a364)
*rdi_1 = r14
rdi_1[2] = mods.dp.d(temp15:temp16, r14)
rdi_1[1] = 1
rdi_1[3] = 1
rdi_1[0xb] = sub_1413e95d0()
rdi_1[7] = data_1439b69dc.d
rdi_1[8] = zmm7
int32_t rax_25
rax_25.b = data_143ec4118 != 0
rdi_1[0xc] = rax_25
int32_t rax_26
rax_26.b = data_143ec411c != 0
rdi_1[0xd] = rax_26
rdi_1[0xa] = data_1439b69e8
uint128_t zmm1_2 = zx.o(data_1439b69e4)
*(rdi_1 + 0x14) = 0
rdi_1[4] = arg5
rdi_1[9] = _mm_cvtepi32_ps(zmm1_2).d
*(rdi_1 + 0x38) = *(*(arg4 + 0x51e8) + 0x18)
sub_1405d16e0(&rdi_1[0x10], *(arg4 + 0x10))
int64_t* rcx_14 = data_143f0f180
void* var_a2d0
(*(*rcx_14 + 0xf8))(rcx_14, &var_a2d0, &var_a258, &data_143e793f0, 0, 1, arg6)
void* rax_30 = var_a2d0
void* var_a2c8 = rax_30

if (rax_30 != 0)
    *(rax_30 + 8) += 1

sub_1405d1550(&var_a2d0)
sub_1405d1600(&rdi_1[0x12], &var_a2c8)
sub_1405d1550(&var_a2c8)
int64_t* rcx_18 = data_143f0f180
void* var_a2c0
(*(*rcx_18 + 0xf8))(rcx_18, &var_a2c0, &var_a278, &data_143e79490, 0, 1)
void* rax_32 = var_a2c0
void* var_a2b8 = rax_32

if (rax_32 != 0)
    *(rax_32 + 8) += 1

sub_1405d1550(&var_a2c0)
sub_1405d1600(&rdi_1[0x14], &var_a2b8)
sub_1405d1550(&var_a2b8)
int64_t* rcx_22 = data_143f0f180
void* var_a2b0
(*(*rcx_22 + 0xf8))(rcx_22, &var_a2b0, &var_a238, &data_143e2d9c0, 0, 1)
void* rax_34 = var_a2b0
void* var_a2a8 = rax_34

if (rax_34 != 0)
    *(rax_34 + 8) += 1

sub_1405d1550(&var_a2b0)
sub_1405d1600(&rdi_1[0x16], &var_a2a8)
sub_1405d1550(&var_a2a8)
int64_t* rcx_26 = data_143f0f180
void* var_a2a0
(*(*rcx_26 + 0xf8))(rcx_26, &var_a2a0, &var_a078, &data_143e8f6a0, 0, 1)
void* rax_36 = var_a2a0
void* var_a290 = rax_36

if (rax_36 != 0)
    *(rax_36 + 8) += 1

sub_1405d1550(&var_a2a0)
sub_1405d1600(&rdi_1[0x18], &var_a290)
sub_1405d1550(&var_a290)
*(rdi_1 + 0x70) = *arg3
*(rdi_1 + 0x80) = arg3[1]
int32_t var_a380_5 = 1
*(rdi_1 + 0x90) = arg3[2]
int32_t var_a388_5 = 0
*(rdi_1 + 0xa0) = arg3[3]
*(rdi_1 + 0xb0) = arg3[4]
int64_t* rcx_30 = data_143f0f180
void* var_a298
(*(*rcx_30 + 0xf8))(rcx_30, &var_a298, &var_a148, &data_143ec9190, var_a388_5, var_a380_5)
void* rax_38 = var_a298
void* var_a348 = rax_38

if (rax_38 != 0)
    *(rax_38 + 8) += 1

sub_1405d1550(&var_a298)
sub_1405d1600(&rdi_1[0x1a], &var_a348)
sub_1405d1550(&var_a348)
int64_t* rax_39 = sub_1422c6ca0(*arg2)
int64_t* var_a338 = rax_39
int64_t* rbx_1 = rax_39

if (rax_39 != 0)
    (*(*rax_39 + 0x30))(rbx_1)
    rbx_1 = var_a338

if (rax_39 == 0 || rbx_1 == 0)
    int64_t* rcx_36 = data_1439b70c8
    var_a338 = rcx_36
    
    if (rcx_36 != 0)
        (*(*rcx_36 + 0x30))()
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x38))(rbx_1)

*(rdi_1 + 0xc0) = sub_1410fccd0(arg2, &var_a338, u"External", 0)
*(rdi_1 + 0xc8) = data_14395f4d0
int32_t temp0_8 = divs.dp.d(sx.q(*(arg4 + 0x15a0) - *(arg4 + 0x1598) - 1 + arg5), arg5)
int32_t temp0_9 = divs.dp.d(sx.q(arg5 - 1 + *(arg4 + 0x15a4) - *(arg4 + 0x159c)), arg5)
int32_t var_a360
int32_t* var_a358
void*** rax_59
int32_t var_a330

if (*arg7 != temp0_8 || arg7[1] != temp0_9 || arg7[2] != r14)
    arg7[2] = r14
    *arg7 = temp0_8
    arg7[1] = temp0_9
    int64_t* rdx_33 = arg2[1]
    int32_t var_a324_1 = 2
    int32_t var_a328_2 = 0x209
    var_a330 = 0x20
    int32_t var_a32c_1 = r14 * temp0_9 * temp0_8
    rax_59 = sub_14081d830(0x48, rdx_33, 1, 0)
    
    if (rax_59 != 0)
        int128_t zmm0_6 = var_a330.o
        rax_59[3].b = 2
        rax_59[2] = 0
        rax_59[1] = u"GatherPointsBuffer"
        *(rax_59 + 0x1c) = 0
        rax_59[4] = 0
        rax_59[5].w = 0x200
        *rax_59 = &data_142f285d0
        *(rax_59 + 0x30) = zmm0_6
        rax_59[8] = 0
else
    int64_t* rbx_3 = *(arg4 + 8) + 0xcc8
    void* rax_55 = *rbx_3
    var_a348 = rax_55
    sub_140865c40(&arg2[0x22], &var_a364, rax_55)
    int64_t rax_56 = sx.q(var_a364)
    void* const rcx_42
    
    if (rax_56.d == 0xffffffff)
        rcx_42 = nullptr
    else
        rcx_42 = arg2[0x22] + rax_56 * 0x18
    
    int64_t* rax_58 = rcx_42 + 8
    
    if (rcx_42 == 0)
        rax_58 = nullptr
    
    if (rax_58 == 0)
        void*** rax_60 = sub_14081d830(0x48, arg2[1], 1, 0)
        void*** rcx_43 = rax_60
        
        if (rax_60 == 0)
            rcx_43 = rax_60
        else
            rax_60[1] = u"GatherPointsBuffer"
            rax_60[2] = 0
            rax_60[3].b = 0
            *(rax_60 + 0x1c) = 0
            rax_60[4] = 0
            rax_60[5].w = 0x200
            *rax_60 = &data_142f285d0
            int128_t zmm0_5 = *(var_a348 + 0xb8)
            rcx_43[8] = 0
            *(rcx_43 + 0x30) = zmm0_5
        
        int64_t rax_62 = *rbx_3
        void*** var_a340 = rcx_43
        rcx_43[8] = rax_62
        void*** rdx_30 = var_a340
        int32_t rcx_44 = *(rdx_30 + 0x3c)
        
        if (rcx_44 == 0)
            rdx_30[2] = **rbx_3
        else if (rcx_44 == 1)
            rdx_30[2] = *(*rbx_3 + 8)
        else if (rcx_44 == 2)
            rdx_30[2] = *(*rbx_3 + 0x10)
        
        int64_t* var_a260_1 = rbx_3
        void**** var_a268 = &var_a340
        void var_a288
        sub_1411610a0(&arg2[0xe], &var_a288, &var_a268, nullptr)
        var_a330.q = *rbx_3
        var_a358 = &var_a330
        void**** var_a350_1 = &var_a340
        sub_14107baa0(&arg2[0x22], &var_a360, &var_a358, nullptr)
        rax_59 = var_a340
    else
        rax_59 = *rax_58
*arg6 = rax_59
int32_t rax_67 = *arg7
rdi_1[0x35] = arg7[1]
rdi_1[0x34] = rax_67
void* rbx_5 = *arg6
int32_t var_a370 = 0x1c
int16_t var_a36c = 0
void*** rax_68 = sub_14081d830(0x28, arg2[1], 1, 0)

if (rax_68 == 0)
    rax_68 = nullptr
else
    rax_68[1] = *(rbx_5 + 8)
    rax_68[2] = 0
    *(rax_68 + 0x18) = rbx_5.o
    *rax_68 = &data_142f285c0

*(rdi_1 + 0xe8) = rax_68
void*** rbx_7
int128_t zmm7_1

if (*(data_143ec5a98 + 4) != 0)
    void* rax_75 = data_143ec5ba8
    int32_t rcx_57 = *arg7
    int32_t r12_1 = arg7[1]
    var_a360 = rcx_57
    int32_t r8_14 = *(rax_75 + 4)
    int32_t var_a35c_1 = r12_1
    
    if (r8_14 != 0)
        int32_t rcx_59 = rcx_57 - 1 + r8_14
        int32_t r12_5 = (var_a360.q u>> 0x20).d - 1 + r8_14
        rcx_57 = rcx_59 - mods.dp.d(sx.q(rcx_59), r8_14)
        var_a360 = rcx_57
        r12_1 = r12_5 - mods.dp.d(sx.q(r12_5), r8_14)
        int32_t var_a35c_2 = r12_1
    
    rdi_1[0x36] = rcx_57
    rdi_1[0x37] = r12_1
    rdi_1[0x38] = r8_14
    int32_t r12_6 = r12_1 * rcx_57
    int32_t* rax_81 = sub_14081d830(0x100, arg2[1], 1, 0)
    int32_t* rsi_1 = rax_81
    
    if (rax_81 == 0)
        rsi_1 = nullptr
    else
        __builtin_memset(&rax_81[0xe], 0, 0x38)
        __builtin_memset(&rax_81[0x1e], 0, 0x58)
        *(rax_81 + 0xe8) = 0
        *(rax_81 + 0xf0) = 0
    
    memset(rsi_1, 0, 0x100)
    *rsi_1 = *rdi_1
    rsi_1[1] = rdi_1[1]
    rsi_1[2] = rdi_1[2]
    rsi_1[3] = rdi_1[3]
    rsi_1[4] = rdi_1[4]
    rsi_1[5] = rdi_1[5]
    rsi_1[6] = rdi_1[6]
    rsi_1[7] = rdi_1[7]
    rsi_1[8] = rdi_1[8]
    rsi_1[9] = rdi_1[9]
    rsi_1[0xa] = rdi_1[0xa]
    rsi_1[0xb] = rdi_1[0xb]
    rsi_1[0xc] = rdi_1[0xc]
    rsi_1[0xd] = rdi_1[0xd]
    *(rsi_1 + 0x38) = *(rdi_1 + 0x38)
    sub_1405d16e0(&rsi_1[0x10], *(rdi_1 + 0x40))
    sub_1405d16e0(&rsi_1[0x12], *(rdi_1 + 0x48))
    sub_1405d16e0(&rsi_1[0x14], *(rdi_1 + 0x50))
    sub_1405d16e0(&rsi_1[0x16], *(rdi_1 + 0x58))
    sub_1405d16e0(&rsi_1[0x18], *(rdi_1 + 0x60))
    sub_1405d16e0(&rsi_1[0x1a], *(rdi_1 + 0x68))
    var_a36c.d = 2
    *(rsi_1 + 0x70) = *(rdi_1 + 0x70)
    *(rsi_1 + 0x80) = *(rdi_1 + 0x80)
    *(rsi_1 + 0x90) = *(rdi_1 + 0x90)
    *(rsi_1 + 0xa0) = *(rdi_1 + 0xa0)
    *(rsi_1 + 0xb0) = *(rdi_1 + 0xb0)
    *(rsi_1 + 0xc0) = *(rdi_1 + 0xc0)
    *(rsi_1 + 0xc8) = *(rdi_1 + 0xc8)
    rsi_1[0x34] = rdi_1[0x34]
    rsi_1[0x35] = rdi_1[0x35]
    rsi_1[0x36] = rdi_1[0x36]
    rsi_1[0x37] = rdi_1[0x37]
    rsi_1[0x38] = rdi_1[0x38]
    *(rsi_1 + 0xe8) = *(rdi_1 + 0xe8)
    *(rsi_1 + 0xf0) = *(rdi_1 + 0xf0)
    int32_t var_a370_1 = 0x209
    void* var_a378_1
    var_a378_1.d = 0xc
    var_a378_1:4.d = r12_6
    void*** rax_106 = sub_14081d830(0x48, arg2[1], 1, 0)
    void*** r14_3 = rax_106
    
    if (rax_106 == 0)
        r14_3 = nullptr
    else
        r14_3[2] = 0
        r14_3[1] = u"RayTracingGlobalIlluminationMaterialBuffer"
        r14_3[3].b = 0
        *(r14_3 + 0x1c) = 0
        r14_3[4] = 0
        r14_3[5].w = 0x200
        *r14_3 = &data_142f285d0
        *(r14_3 + 0x30) = var_a378_1.o
        r14_3[8] = 0
    
    int32_t rax_107 = 0
    
    if ((r14_3[7].d & 0x100) != 0)
        rax_107 = 0x1c
    
    int16_t var_a36c_1 = 0
    int32_t var_a370_2 = rax_107
    void*** rax_108 = sub_14081d830(0x28, arg2[1], 1, 0)
    
    if (rax_108 == 0)
        rax_108 = nullptr
    else
        rax_108[1] = r14_3[1]
        *rax_108 = &data_142f285c0
        rax_108[2] = 0
        *(rax_108 + 0x18) = r14_3.o
    
    *(rsi_1 + 0xf0) = rax_108
    int32_t rbx_8 = *(data_143ec5878 + 4)
    int64_t* rax_112 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
    int32_t r9_6 = 5
    
    if (rbx_8 != 0)
        r9_6 = 7
    
    int128_t var_a1e8
    char rcx_70 = sub_1419a2ec0(rax_112, &var_a1e8, &data_143ec5f70, r9_6)
    zmm7_1 = var_a1e8
    int128_t var_a1d8_1 = sub_14139ebc0(rcx_70)
    sub_141998c50(zmm7_1.q, &data_143ec7c10, rsi_1)
    void* var_a310_1 = arg1
    int64_t var_a2f0_1 = var_a360.q
    void*** rax_115
    char rcx_72
    rax_115, rcx_72 = sub_14081d830(0x68, arg2[1], 1, 0)
    void*** rbx_9 = rax_115
    
    if (rax_115 == 0)
        rbx_9 = rax_115
    else
        var_a358 = rsi_1
        sub_14139ebc0(rcx_72)
        void* var_a350_3 = &data_143ec7c40
        int128_t var_a1c8 = var_a358.o
        void var_a367
        sub_141992bd0(rbx_9, &var_a367, &var_a1c8, 2)
        *rbx_9 = &data_142f6e1e0
        *(rbx_9 + 0x38) = rsi_1.o
        *(rbx_9 + 0x48) = arg4.o
        *(rbx_9 + 0x58) = zmm7_1
    
    sub_1419968d0(arg2, rbx_9)
    var_a388_5.q = r14_3
    sub_1413ab4b0(arg2, arg4, *(data_143ec5d68 + 4), r12_6, var_a388_5)
    int32_t rax_117 = 0
    
    if ((r14_3[7].d & 0x100) != 0)
        rax_117 = 0x1c
    
    int16_t var_a36c_2 = 0
    int32_t var_a370_3 = rax_117
    void*** rax_118 = sub_14081d830(0x28, arg2[1], 1, 0)
    
    if (rax_118 == 0)
        rax_118 = nullptr
    else
        rax_118[1] = r14_3[1]
        *rax_118 = &data_142f285c0
        rax_118[2] = 0
        *(rax_118 + 0x18) = r14_3.o
    
    *(rdi_1 + 0xf0) = rax_118
    int32_t rbx_10 = *(data_143ec5878 + 4)
    int64_t* rax_121 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
    int32_t r9_9 = 9
    
    if (rbx_10 != 0)
        r9_9 = 0xb
    
    int128_t var_a1b8
    char rcx_79 = sub_1419a2ec0(rax_121, &var_a1b8, &data_143ec5e70, r9_9)
    int128_t zmm7_2 = var_a1b8
    int128_t var_a1a8_1 = sub_14139ea50(rcx_79)
    sub_141998c50(zmm7_2.q, &data_143ec7b00, rdi_1)
    void* var_a310_2 = arg1
    var_a2f0_1.d = r12_6
    void*** rax_122
    char rcx_81
    rax_122, rcx_81 = sub_14081d830(0x68, arg2[1], 1, 0)
    rbx_7 = rax_122
    
    if (rax_122 == 0)
        rbx_7 = nullptr
    else
        var_a358 = rdi_1
        sub_14139ea50(rcx_81)
        void* var_a350_4 = &data_143ec7b30
        int128_t var_a198 = var_a358.o
        void var_a366
        sub_141992bd0(rbx_7, &var_a366, &var_a198, 2)
        *rbx_7 = &data_142f6e1f0
        *(rbx_7 + 0x38) = rdi_1.o
        *(rbx_7 + 0x48) = arg4.o
        *(rbx_7 + 0x58) = zmm7_2
else
    int32_t rbx_6 = *(data_143ec5878 + 4)
    int64_t* rax_72 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
    int32_t r9_4 = 1
    
    if (rbx_6 != 0)
        r9_4 = 3
    
    int128_t var_a218
    char rcx_53 = sub_1419a2ec0(rax_72, &var_a218, &data_143ec5e70, r9_4)
    zmm7_1 = var_a218
    int128_t var_a208_1 = sub_14139ea50(rcx_53)
    sub_141998c50(zmm7_1.q, &data_143ec7b00, rdi_1)
    int32_t rax_73 = arg7[2]
    void* var_a310 = arg1
    int64_t var_a2f0 = *arg7
    void*** rax_74
    char rcx_55
    rax_74, rcx_55 = sub_14081d830(0x70, arg2[1], 1, 0)
    rbx_7 = rax_74
    
    if (rax_74 == 0)
        rbx_7 = nullptr
    else
        var_a358 = rdi_1
        sub_14139ea50(rcx_55)
        void* var_a350_2 = &data_143ec7b30
        int128_t var_a1f8 = var_a358.o
        void var_a368
        sub_141992bd0(rbx_7, &var_a368, &var_a1f8, 2)
        *rbx_7 = &data_142f6e1d0
        *(rbx_7 + 0x38) = rdi_1.o
        *(rbx_7 + 0x48) = arg4.o
        *(rbx_7 + 0x58) = zmm7_1
        rbx_7[0xd] = rax_73.q
sub_1419968d0(arg2, rbx_7)
int64_t* rcx_84 = var_a338

if (rcx_84 != 0)
    (*(*rcx_84 + 0x38))(rcx_84)

int64_t result = sub_1411c8fd0(&var_a188)
__security_check_cookie(rax_1 ^ &var_a3a8)
return result
