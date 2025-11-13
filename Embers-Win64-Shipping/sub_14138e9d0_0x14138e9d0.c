// 函数: sub_14138e9d0
// 地址: 0x14138e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = *arg4
uint128_t var_168 = arg4[1]
void*** r12 = zmm8.q
uint128_t var_178 = zmm8
uint128_t var_e8
uint128_t var_d8
uint128_t var_c8
uint128_t var_b8
uint128_t var_a8
char arg_10
int32_t arg_18
int64_t arg_20
int32_t r15_1
uint128_t zmm1

if (r12 == 0)
label_14138ea9e:
    int128_t zmm6 = arg4[2]
    uint64_t var_108_1 = arg4[3].q
    arg_10 = sub_14141f7a0(arg3)
    void* rax_5 = zmm6.q
    zmm1 = *(rax_5 + 0x40)
    var_e8 = *(rax_5 + 0x30)
    var_d8 = zmm1
    var_c8 = *(rax_5 + 0x50)
    var_c8:8.w = 1
    var_a8 = *(rax_5 + 0x70)
    var_b8:8.w = 0
    var_b8:4.d = ((*(rax_5 + 0x60)):4.d & 0xfffeffff) | 1
    var_a8:8.b = 1
    void*** rax_9
    uint128_t zmm6_1
    rax_9, zmm6_1 = sub_141188e50(arg2, &var_e8, u"VisualizeComplexity", 0)
    var_178.q = rax_9
    r12 = rax_9
    int32_t rax_10 = var_108_1.d
    arg_18 = rax_10
    var_168.d = rax_10
    uint128_t temp0_3 = _mm_bsrli_si128(zmm6_1, 8)
    r15_1 = _mm_bsrli_si128(zmm6_1, 8).d
    var_178:0xc.d = (temp0_3.q u>> 0x20).d
    var_178:8.d = r15_1
    var_168:4.d = (var_108_1 u>> 0x20).d
    arg_20 = var_178:8.q
else
    int32_t rax_1 = var_168.d
    r15_1 = _mm_bsrli_si128(zmm8, 8).d
    arg_18 = rax_1
    var_178:8.d = r15_1
    
    if (rax_1 != r15_1)
        arg_10 = var_168:8.b
        arg_20 = var_178:8.q
    else
        uint128_t temp0_2 = _mm_bsrli_si128(zmm8, 8)
        arg_20 = temp0_2.q
        
        if ((var_168.q u>> 0x20).d == (temp0_2.q u>> 0x20).d)
            goto label_14138ea9e
        
        arg_10 = var_168:8.b

zmm1 = arg4[2]
int64_t* rdx_1 = *(arg2 + 8)
void* rcx_6 = zmm1.q
uint64_t var_108_2 = arg4[3].q
uint128_t temp0_5 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_6 = _mm_bsrli_si128(zmm1, 8)
int32_t var_138 = *(rcx_6 + 0x44)
int32_t var_134 = *(rcx_6 + 0x48)
uint32_t var_12c = (temp0_5.q u>> 0x20).d
int32_t rax_18 = var_108_2.d
uint32_t var_124 = (var_108_2 u>> 0x20).d
int32_t var_130 = temp0_6.d
uint64_t* rax_21 = sub_14081d830(0x1f0, rdx_1, 1, 0)
uint64_t* rbx = rax_21

if (rax_21 == 0)
    rbx = nullptr
else
    __builtin_memset(&rax_21[0xe], 0, 0x20)
    sub_14117af20(&rax_21[0x2c])

memset(rbx, 0, 0x160)
memset(&rbx[0x2e], 0, 0x80)
char var_180 = arg_10
int16_t var_17f = 0
int32_t var_17c = 0xffffffff
*(rbx + 0x160) = r12.o
int32_t* rax_23
int512_t zmm6_2
int128_t zmm8_1
rax_23, zmm6_2, zmm8_1 = sub_141455b70(&var_e8, &var_138)
int32_t i_2 = 0xb
*rbx = *rax_23
rbx[1] = *(rax_23 + 8)
rbx[2] = *(rax_23 + 0x10)
rbx[3] = *(rax_23 + 0x18)
rbx[4].d = rax_23[8]
*(rbx + 0x24) = rax_23[9]
rbx[5].d = rax_23[0xa]
*(rbx + 0x2c) = rax_23[0xb]
rbx[6] = *(rax_23 + 0x30)
rbx[7] = *(rax_23 + 0x38)
rbx[8] = *(rax_23 + 0x40)
rbx[9] = *(rax_23 + 0x48)
rbx[0xa] = *(rax_23 + 0x50)
rbx[0xb] = *(rax_23 + 0x58)
rbx[0xc] = *(rax_23 + 0x60)
rbx[0xd] = *(rax_23 + 0x68)
rbx[0xe] = arg4[2].q
rbx[0xf] = data_14395f4d0

if (arg4[4].d s<= 0xb)
    i_2 = arg4[4].d

uint128_t zmm0_2

if (i_2 s<= 0)
    *(rbx + 0x90) = data_14399f5d0
    zmm0_2 = 0x3f800000
else
    int64_t i_1 = sx.q(i_2)
    int64_t rcx_13 = 0
    int64_t i
    
    do
        rcx_13 += 0x10
        *(rcx_13 + rbx + 0x80) = *(rcx_13 + *(arg4 + 0x38) - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)
    zmm0_2 = _mm_cvtepi32_ps(zx.o(i_2))

rbx[0x2b].d = zmm0_2.d
rbx[0x11] = *sub_1414558d0()
rbx[0x2a].d = 1

if (data_143ec4d38 != 0)
    void*** rax_31
    rax_31, zmm6_2 = sub_1410fccd0(arg2, &data_143ec4d38, u"External", 0)
    
    if (rax_31 != 0)
        sub_1422e5a30(arg3)

rbx[0x29].d = zx.d(arg4[5].b)
int32_t rax_33
rax_33.b = rbx[0x2a].d != 4
*(rbx + 0x14c) = rax_33
*(rbx + 0x154) = *(arg4 + 0x48)
*(rbx + 0x15c) = *(arg4 + 0x4c)
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(*(arg3 + 0x15a0) - *(arg3 + 0x1598) + 1)
int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(*(arg3 + 0x15a4) - *(arg3 + 0x159c) + 1)
rbx[0x28].d = (temp2 - temp1) s>> 1
*(rbx + 0x144) = (temp4 - temp3) s>> 1
int128_t var_158
char rcx_20 = sub_1419a2ec0(*(arg3 + 0x5150), &var_158, &data_143ec4580, 0)
int32_t rax_46 = *(r12 + 0x44)
zmm6_2.o = zx.o(0)
int128_t zmm7 = var_158
int32_t var_114 = r12[9].d
uint32_t var_10c = (arg_20 u>> 0x20).d
var_108_2.d = arg_18
var_108_2:4.d = (var_168.q u>> 0x20).d
int32_t var_110 = r15_1
int128_t var_148 = sub_14139f010(rcx_20)
sub_141998c50(zmm7.q, &data_143ec6840, rbx)
int64_t* rdx_7 = *(arg2 + 8)
var_e8.q = arg3
var_e8 = rax_46.o
var_a8:8.q = rbx
var_b8.q = rax_18.q
var_d8:8.q = var_108_2
char var_98 = 0
void*** rax_53
char rcx_22
rax_53, rcx_22 = sub_14081d830(0x90, rdx_7, 1, 0)
void*** rsi_1 = rax_53

if (rax_53 == 0)
    rsi_1 = nullptr
else
    var_158.q = rbx
    int128_t zmm6_4 = sub_14139f010(rcx_22)
    var_158:8.q = &data_143ec6870
    var_148 = var_158
    sub_141992bd0(rsi_1, &arg_10, &var_148, 1)
    uint128_t zmm0_5 = var_e8
    *rsi_1 = &data_142f6e250
    *(rsi_1 + 0x38) = zmm0_5
    *(rsi_1 + 0x48) = var_d8
    *(rsi_1 + 0x58) = zmm6_4
    *(rsi_1 + 0x68) = zmm7
    *(rsi_1 + 0x78) = var_a8
    rsi_1[0x11] = var_98.q

sub_1419968d0(arg2, rsi_1)
var_168:8.b = 1
int512_t zmm6_5
zmm6_5.o = var_168
int32_t var_f0 = (int.q(zmm0_2.d)).d
int64_t* rax_55
int128_t zmm6_6
rax_55, zmm6_6 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
int64_t* rsi_2 = rax_55

if (rax_55 == 0)
    rsi_2 = nullptr
else
    sub_14117af20(rax_55)

memset(&rsi_2[2], 0, 0x80)
var_180.w = 1
var_17f:1.b = 0
int32_t var_17c_1 = 0xffffffff
*rsi_2 = r12.o
var_c8.q = arg3
void*** rax_56 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
void*** rbx_1 = rax_56

if (rax_56 == 0)
    rbx_1 = nullptr
else
    int64_t* rax_57
    int128_t zmm6_7
    rax_57, zmm6_7 = sub_1412ec240(&var_158, rsi_2)
    var_148 = *rax_57
    sub_141992bd0(rbx_1, &arg_10, &var_148, 1)
    *rbx_1 = &data_142f6e260
    *(rbx_1 + 0x38) = zmm8_1
    *(rbx_1 + 0x48) = zmm6_7
    *(rbx_1 + 0x58) = zmm8_1
    *(rbx_1 + 0x68) = zmm6_6
    *(rbx_1 + 0x78) = arg3.o
    rbx_1[0x11] = var_98.q

sub_1419968d0(arg2, rbx_1)
*arg1 = zmm8_1
arg1[1].q = var_168.q
return arg1
