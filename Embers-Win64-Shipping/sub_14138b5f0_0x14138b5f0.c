// 函数: sub_14138b5f0
// 地址: 0x14138b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19d0)
void var_19f8
int64_t rax_1 = __security_cookie ^ &var_19f8
uint128_t zmm1 = *(arg4 + 0x10)
int32_t r15 = *(arg3 + 0x1548)
void* rax_2 = zmm1.q
uint64_t var_1968 = arg4[4]
int32_t rsi = *(rax_2 + 0x44)
int32_t r14 = *(rax_2 + 0x48)
int32_t r13 = var_1968.d
uint32_t var_193c = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
int32_t r12 = _mm_bsrli_si128(zmm1, 8).d
uint32_t var_1934 = (var_1968 u>> 0x20).d
float zmm8[0x4] = zx.o(0)
void* var_1928 = arg3
void* var_1998 = arg2
zmm8[0] = float.s(zx.q(r13 - r12))
int32_t var_1948 = rsi
int32_t var_1944 = r14
zmm8[0] = zmm8[0] f* arg4[0xb].d
zmm8[0] = zmm8[0] * 0.00499999989f
int64_t rcx_1 = sx.q(sub_1422e5a30(arg3))
int32_t rdi

if (*(data_143ec4258 + 4) != 0)
    rdi = 0x80
else if (rcx_1.d u> 0x1f)
    if (((*(&data_143f025fc + rcx_1 * 0x14) u>> 1).b & 1) == 0)
        goto label_14138b73c
    
    rdi = 0xf
else if (test_bit(0x88001000, rcx_1.d) || ((*(&data_143f025fc + rcx_1 * 0x14) u>> 1).b & 1) != 0)
    rdi = 0xf
else
label_14138b73c:
    rdi = 0x20
    
    if (r15 s< 3)
        rdi = 7

float zmm12[0x4] = var_1948.o
bool cond:0 = zmm8[0] f< *(data_143ec4478 + 4)
int128_t zmm7
zmm7.d = 1f f/ _mm_cvtepi32_ps(zx.o(rsi)).d
int128_t zmm6
zmm6.d = 1f f/ _mm_cvtepi32_ps(zx.o(r14)).d
int32_t var_19a8
float var_1978[0x4]
int64_t var_1958

if (cond:0)
    var_1978 = zmm12
    var_1968 = r13.q
else
    var_1958 = r12.q
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r12)
    var_19a8 = 2
    int32_t var_19a4_1 = 1
    int64_t r8 = var_19a8.q
    int32_t rax_18 = (temp3_1 - temp2_1) s>> 1
    var_1958.d = rax_18
    int64_t rcx_5 = r13.q
    var_1958:4.d = divs.dp.d(sx.q(var_1958:4.d), (r8 u>> 0x20).d)
    var_1978[3] = (var_1958 u>> 0x20).d
    int32_t temp10_1
    int32_t temp11_1
    temp10_1:temp11_1 = sx.q(r13 + 1)
    uint32_t r8_1 = (r8 u>> 0x20).d
    var_1958 = rcx_5
    var_1978[2] = rax_18
    int32_t r9_1 = (temp11_1 - temp10_1) s>> 1
    int64_t rcx_7 = var_1948.q
    int32_t rax_31 = divs.dp.d(sx.q((rcx_5 u>> 0x20).d - 1 + r8_1), r8_1)
    
    if (r9_1 s<= 1)
        r9_1 = 1
    
    var_1958.d = r9_1
    
    if (rax_31 s<= 1)
        rax_31 = 1
    
    var_1968.d = r9_1
    var_1958:4.d = rax_31
    var_1968:4.d = (var_1958 u>> 0x20).d
    int32_t temp18_1
    int32_t temp19_1
    temp18_1:temp19_1 = sx.q(rsi + 1)
    var_1958 = rcx_7
    int32_t r9_2 = (temp19_1 - temp18_1) s>> 1
    int32_t rax_41 = divs.dp.d(sx.q(r8_1 - 1 + (rcx_7 u>> 0x20).d), r8_1)
    
    if (r9_2 s<= 1)
        r9_2 = 1
    
    var_1958.d = r9_2
    
    if (rax_41 s<= 1)
        rax_41 = 1
    
    var_1978[0] = r9_2
    var_1958:4.d = rax_41
    var_1978[1] = (var_1958 u>> 0x20).d

void var_18c8
int32_t rax_44
uint128_t zmm7_1
float zmm9
rax_44, zmm7_1, zmm9 = sub_141396c90(&var_18c8, rdi, zmm8, arg4[0xa].d)
uint32_t r10 = 0
float var_18e8[0x4]
uint64_t var_18d8
void var_18cc
void var_18c4
void var_18c0
void var_14d0
void var_14c8
void var_14c4
void var_14bc
float zmm0_1[0x4]
uint128_t zmm1_1

if (rax_44 u>= 4)
    void var_10b8
    void* rdx_9 = &var_10b8
    int64_t rcx_10 = 0
    uint64_t rax_47 = zx.q(((rax_44 - 4) u>> 2) + 1)
    uint64_t i_9 = zx.q(rax_47.d)
    r10 = (rax_47 << 2).d
    uint64_t i
    
    do
        zmm0_1 = *(&var_18c4 + rcx_10)
        zmm1_1.d = zmm7_1.d f* *(&var_18c8 + rcx_10)
        rdx_9 += 0x40
        *(&var_14c4 + rcx_10) = 0
        float temp0_7[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
        *(&var_14bc + rcx_10) = 0
        *(&var_14c8 + rcx_10) = zmm1_1.d
        zmm1_1.d = zmm7_1.d f* *(&var_18c0 + rcx_10)
        void var_14b4
        *(&var_14b4 + rcx_10) = 0
        void var_14ac
        *(&var_14ac + rcx_10) = 0
        rcx_10 += 0x20
        var_19a8.o = temp0_7
        void var_14e0
        *(&var_14e0 + rcx_10) = zmm1_1.d
        zmm1_1.d = zmm7_1.d f* *(&var_18d8 + rcx_10)
        *(rdx_9 - 0x50) = temp0_7
        zmm0_1 = *(&var_18e8[3] + rcx_10)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
        void var_14d8
        *(&var_14d8 + rcx_10) = zmm1_1.d
        void var_18d0
        zmm1_1.d = zmm7_1.d f* *(&var_18d0 + rcx_10)
        var_19a8.o = temp0_8
        *(&var_14d0 + rcx_10) = zmm1_1.d
        *(rdx_9 - 0x40) = temp0_8
        zmm0_1 = *(&var_18d8:4 + rcx_10)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
        var_19a8.o = temp0_9
        *(rdx_9 - 0x30) = temp0_9
        zmm0_1 = *(&var_18cc + rcx_10)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
        *(rdx_9 - 0x20) = temp0_10
        var_19a8.o = temp0_10
        i = i_9
        i_9 -= 1
    while (i != 1)

void var_10c8

if (r10 u< rax_44)
    void* rdx_10 = &var_10c8 + (zx.q(r10) << 4)
    uint64_t i_10 = zx.q(rax_44 - r10)
    uint64_t rcx_12 = zx.q(r10) << 3
    uint64_t i_1
    
    do
        zmm0_1 = *(&var_18c4 + rcx_12)
        zmm1_1.d = zmm7_1.d f* *(&var_18c8 + rcx_12)
        rdx_10 += 0x10
        *(&var_14c4 + rcx_12) = 0
        rcx_12 += 8
        float temp0_11[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
        *(rdx_10 - 0x10) = temp0_11
        *(&var_14d0 + rcx_12) = zmm1_1.d
        var_19a8.o = temp0_11
        i_1 = i_10
        i_10 -= 1
    while (i_1 != 1)

void* r14_1 = var_1998
var_19a8.q = &var_10c8
int32_t var_19a0 = rax_44
var_19a8.q = &var_14c8
int32_t var_19a0_1 = rax_44
var_1958.o = var_19a8.o
zmm0_1 = var_19a8.o
int64_t r9_4 = *arg4
int64_t* var_19b8 = &var_1958
int64_t* var_19c0 = &var_19a8
int64_t* var_19c8 = &var_1948
__builtin_memset(&var_1948, 0, 0x18)
float var_1908[0x4]
int128_t* var_19d0 = &var_1908
var_19a8.o = zmm0_1
int32_t* var_19d8 = &var_18e8
var_1948.o = var_1948.o
zmm1_1 = zx.o(arg4[4])
var_1908 = *(arg4 + 0x10)
zmm0_1 = var_1978
uint64_t var_18f8 = zmm1_1.q
void* rsi_1 = var_1928
float var_88 = zmm9
int32_t var_1938
var_1938.q = _mm_unpackhi_pd(zx.o(0), 0)
var_18e8 = zmm0_1
var_18d8 = var_1968
int128_t* rax_50
float zmm8_1[0x4]
rax_50, zmm8_1 =
    sub_14138bee0(&var_1998, r14_1, rsi_1, r9_4, var_19d8, var_19d0, var_19c8, var_19c0, var_19b8)
float zmm3_1[0x4] = *(arg4 + 0x54)
var_1978[0].q = *rax_50
var_1978[2] = *(rax_50 + 8)
var_1978[3] = *(rax_50 + 0xc)
var_1968.d = rax_50[1].d
var_1968:4.d = *(rax_50 + 0x14)
int32_t rax_56
uint128_t zmm6_1
int128_t zmm10
int64_t zmm11_1
float zmm12_1[0x4]
rax_56, zmm6_1, zmm10, zmm11_1, zmm12_1 = sub_141396c90(&var_14c8, rdi, zmm8_1, zmm3_1)
uint32_t r10_1 = 0
uint128_t zmm0_2
float zmm2_3
float zmm7_2[0x4]
float zmm8_2[0x4]
float zmm9_1

if (rax_56 u>= 4)
    zmm7_2 = arg4[8].d
    void var_8b8
    void* rdx_13 = &var_8b8
    zmm8_2 = *(arg4 + 0x44)
    void* rcx_16 = &var_14bc
    zmm9_1 = arg4[9].d
    uint64_t rax_59 = zx.q(((rax_56 - 4) u>> 2) + 1)
    int128_t var_98_1 = zmm10
    zmm10 = *(arg4 + 0x4c)
    uint64_t i_11 = zx.q(rax_59.d)
    r10_1 = (rax_59 << 2).d
    uint64_t i_2
    
    do
        zmm0_2 = *(rcx_16 - 8)
        zmm7_2[0] = zmm7_2[0] f* zmm0_2.d
        rdx_13 += 0x40
        zmm8_2[0] = zmm8_2[0] f* zmm0_2.d
        rcx_16 += 0x20
        zmm2_3 = zmm9_1 f* zmm0_2.d
        float temp0_13[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xe1)
        float zmm3_2 = zmm10.d f* zmm0_2.d
        temp0_13[0] = zmm8_2[0]
        zmm0_2 = *(rcx_16 - 0x20)
        zmm7_2[0] = zmm7_2[0] f* zmm0_2.d
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
        zmm8_2[0] = zmm8_2[0] f* zmm0_2.d
        temp0_14[0] = zmm2_3
        float temp0_15[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xe1)
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
        temp0_15[0] = zmm8_2[0]
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
        temp0_16[0] = zmm3_2
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
        zmm3_2 = zmm10.d f* zmm0_2.d
        temp0_17[0] = zmm9_1 f* zmm0_2.d
        zmm0_2 = *(rcx_16 - 0x18)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x27)
        zmm8_2[0] = zmm8_2[0] f* zmm0_2.d
        temp0_19[0] = zmm3_2
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
        zmm2_3 = zmm9_1 f* zmm0_2.d
        zmm3_2 = zmm10.d f* zmm0_2.d
        *(rdx_13 - 0x50) = temp0_18
        zmm7_2[0] = zmm7_2[0] f* zmm0_2.d
        zmm0_2 = *(rcx_16 - 0x10)
        *(rdx_13 - 0x40) = temp0_20
        float temp0_21[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xe1)
        zmm7_2[0] = zmm7_2[0] f* zmm0_2.d
        temp0_21[0] = zmm8_2[0]
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
        zmm8_2[0] = zmm8_2[0] f* zmm0_2.d
        temp0_22[0] = zmm2_3
        float temp0_23[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xe1)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x27)
        temp0_23[0] = zmm8_2[0]
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc6)
        temp0_24[0] = zmm3_2
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x39)
        temp0_25[0] = zmm9_1 f* zmm0_2.d
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x27)
        *(rdx_13 - 0x30) = temp0_26
        temp0_27[0] = zmm10.d f* zmm0_2.d
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x39)
        *(rdx_13 - 0x20) = temp0_28
        var_1998.o = temp0_28
        i_2 = i_11
        i_11 -= 1
    while (i_2 != 1)

void var_8c8

if (r10_1 u< rax_56)
    float zmm5_1[0x4] = arg4[8].d
    zmm7_2 = *(arg4 + 0x44)
    zmm8_2 = arg4[9].d
    zmm9_1 = *(arg4 + 0x4c)
    void* r8_4 = &var_8c8 + (zx.q(r10_1) << 4)
    void* rdx_14 = &var_14c4 + (zx.q(r10_1) << 3)
    uint64_t i_6 = zx.q(rax_56 - r10_1)
    uint64_t i_3
    
    do
        zmm0_2 = *rdx_14
        zmm5_1[0] = zmm5_1[0] f* zmm0_2.d
        r8_4 += 0x10
        zmm7_2[0] = zmm7_2[0] f* zmm0_2.d
        rdx_14 += 8
        zmm2_3 = zmm8_2[0] f* zmm0_2.d
        float temp0_29[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        temp0_29[0] = zmm7_2[0]
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc6)
        temp0_30[0] = zmm2_3
        float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x27)
        temp0_31[0] = zmm9_1 f* zmm0_2.d
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x39)
        *(r8_4 - 0x10) = temp0_32
        var_1998.o = temp0_32
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)

uint32_t r8_5 = 0
float zmm1_2[0x4]

if (rax_56 u>= 4)
    int64_t rcx_19 = 0
    uint64_t rax_64 = zx.q(((rax_56 - 4) u>> 2) + 1)
    uint64_t i_7 = zx.q(rax_64.d)
    r8_5 = (rax_64 << 2).d
    uint64_t i_4
    
    do
        *(&var_18c8 + rcx_19) = 0
        zmm0_2.d = zmm6_1.d f* *(&var_14c8 + rcx_19)
        zmm1_2 = zmm6_1
        *(&var_18c0 + rcx_19) = 0
        void var_14b8
        zmm1_2[0] = zmm1_2[0] f* *(&var_14b8 + rcx_19)
        void var_18b8
        *(&var_18b8 + rcx_19) = 0
        *(&var_18c4 + rcx_19) = zmm0_2.d
        void var_14c0
        zmm0_2.d = zmm6_1.d f* *(&var_14c0 + rcx_19)
        void var_18b0
        *(&var_18b0 + rcx_19) = 0
        void var_18b4
        *(&var_18b4 + rcx_19) = zmm1_2[0]
        rcx_19 += 0x20
        *(&var_18e8[3] + rcx_19) = zmm0_2.d
        zmm0_2.d = zmm6_1.d f* *(&var_14d0 + rcx_19)
        *(&var_18cc + rcx_19) = zmm0_2.d
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

if (r8_5 u< rax_56)
    uint64_t i_8 = zx.q(rax_56 - r8_5)
    uint64_t rcx_20 = zx.q(r8_5) << 3
    uint64_t i_5
    
    do
        *(&var_18c8 + rcx_20) = 0
        zmm0_2.d = zmm6_1.d f* *(&var_14c8 + rcx_20)
        rcx_20 += 8
        *(&var_18cc + rcx_20) = zmm0_2.d
        i_5 = i_8
        i_8 -= 1
    while (i_5 != 1)

zmm1_2 = *(arg4 + 0x28)
var_1998 = &var_8c8
int32_t var_1990 = rax_56
zmm0_2 = var_1998.o
var_1998 = &var_18c8
void** var_19b8_1 = &var_1928
int64_t* var_19c0_1 = &var_1998
int64_t* var_19c8_1 = &var_18e8
var_1928.o = zmm0_2
int32_t var_1990_1 = rax_56
int64_t r9_6 = arg4[1]
var_1998.o = var_1998.o
zmm0_2 = zx.o(arg4[7])
int128_t* var_19d0_1 = &var_1908
var_18e8 = zmm1_2
zmm1_2 = var_1978
int32_t* var_19d8_1 = &var_1978
var_18d8 = zmm0_2.q
var_1908 = zmm1_2
uint64_t var_18f8_1 = var_1968
var_1978 = zmm12_1
int64_t var_1968_1 = zmm11_1
sub_14138bee0(arg1, r14_1, rsi_1, r9_6, var_19d8_1, var_19d0_1, var_19c8_1, var_19c0_1, var_19b8_1)
__security_check_cookie(rax_1 ^ &var_19f8)
return arg1
