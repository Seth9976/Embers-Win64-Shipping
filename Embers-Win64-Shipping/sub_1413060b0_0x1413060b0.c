// 函数: sub_1413060b0
// 地址: 0x1413060b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 0
int64_t r8 = *arg4

if ((*(arg4 + 0x21) & 1) == 0)
    rbx = *(arg3 + 0x515a)

void* rax_1 = arg4[1]
int32_t var_238 = 1
uint128_t zmm2 = *(rax_1 + 0x40)
uint128_t var_1f8 = *(rax_1 + 0x50)
var_1f8:8.w = 1
int64_t var_1e8 = (*(rax_1 + 0x60)).q
uint128_t var_1d8 = *(rax_1 + 0x70)
int32_t rax_2 = _mm_bsrli_si128(zmm2, 4).d
int128_t var_234 = zx.o(0)
var_1d8:8.b = 1
uint128_t zmm0 = var_238.o
var_1e8:8.w = 0
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_2 + 1)
int64_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
var_1d8.q = r8
int32_t rcx = (temp3 - temp2) s>> 1
uint128_t var_218 = zmm0
uint128_t var_208
var_208.d = temp0_1.d
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q((zmm2:4.q u>> 0x20).d + 1)
int32_t rax_12 = (temp5 - temp4) s>> 1

if (rcx s<= 1)
    rcx = 1

var_208:4.d = rcx
int32_t rcx_1 = 1

if (rax_12 s<= 1)
    rax_12 = 1

var_208:8.d = rax_12

if (rbx != 0)
    rcx_1 = 0x10000

int32_t rcx_2 = rcx_1 | (var_1e8:4.d & 0xfffefffe)
var_1e8.d |= data_143ed3398
int32_t rax_16 = var_1f8:0xc.d
var_1e8:4.d = rcx_2
int32_t rcx_3 = *(arg4 + 0x24)

if (rcx_3 != 0)
    rax_16 = rcx_3

var_1f8:0xc.d = rax_16
void*** rax_17 = sub_141188e50(arg2, &var_218, r8, 0)
int128_t zmm0_1 = *(arg4 + 0x10)
var_218.q = rax_17
int32_t arg_8 = 2
int32_t arg_c = 2
int64_t r8_1 = arg_8.q
uint32_t r9_1 = (r8_1 u>> 0x20).d
int64_t rcx_5 = zmm0_1:8.q
int32_t temp0_2 = divs.dp.d(sx.q((rcx_5 - 1).d + 2), 2)
arg_8 = temp0_2
var_208.d = temp0_2
int32_t var_1b8 = temp0_2
arg_c = divs.dp.d(sx.q((rcx_5 u>> 0x20).d - 1 + r9_1), r9_1)
int64_t rax_26 = zmm0_1.q
int64_t arg_18 = rax_26
int32_t temp18
int32_t temp19
temp18:temp19 = sx.q(rax_26.d)
int32_t rax_29 = (temp19 - temp18) s>> 1
arg_18.d = rax_29
var_218:8.d = rax_29
int64_t* rdx_7 = *(arg2 + 8)
arg_18:4.d = divs.dp.d(sx.q(arg_18:4.d), (r8_1 u>> 0x20).d)
var_208:4.d = (arg_8.q u>> 0x20).d
arg_8.b = arg4[4].b
uint32_t r15_1 = (var_208.q u>> 0x20).d
var_218:0xc.d = (arg_18 u>> 0x20).d
uint32_t rax_37 = (var_218:8.q u>> 0x20).d
int32_t var_1c0 = rax_29
uint32_t var_1bc = rax_37
uint32_t var_1b4 = r15_1
int128_t zmm8_1
int64_t zmm9_1
int128_t var_248
uint128_t var_1a8
void var_188

if (rbx == 0)
    int64_t* rax_51 = sub_14081d830(0x190, rdx_7, 1, 0)
    int64_t* rdi_3 = rax_51
    
    if (rax_51 == 0)
        rdi_3 = nullptr
    else
        *rax_51 = 0
        rax_51[0x1e] = 0
        rax_51[0x1f] = 0
        sub_14117af20(&rax_51[0x20])
    
    memset(rdi_3, 0, 0x190)
    char rax_52 = arg4[4].b
    var_238.o = *(arg4 + 8)
    var_234:0xc.q = arg4[3]
    var_1a8 = var_218
    uint64_t var_198_1 = var_208.q
    char var_258_1 = rax_52
    int64_t* rax_53
    rax_53, zmm8_1, zmm9_1 = sub_141313660(&var_188, arg3, &var_1a8, &var_238)
    sub_141300340(rdi_3, rax_53)
    sub_1405d1550(&var_188)
    uint32_t r9_7 = zx.d(arg_8.b)
    var_248.q = var_218.q
    var_248:8.w = 0
    var_248:0xa.b = 0
    var_248:0xc.d = 0xffffffff
    *(rdi_3 + 0x100) = var_248
    char rcx_27 = sub_1419a2ec0(*(arg3 + 0x5150), &var_238, &data_143eb3d90, r9_7)
    int128_t zmm7_1 = var_238.o
    int512_t zmm6_2
    zmm6_2.o = zx.o(0)
    int64_t rbx_2 = *(arg3 + 0x5150)
    var_1a8 = sub_141317b00(rcx_27)
    sub_141998c50(zmm7_1.q, &data_143eb7e90, rdi_3)
    var_218.q = rdi_3
    var_218:8.q = rbx_2
    var_1d8.q = 0
    var_1d8:8.d = 0
    void*** rax_54
    char rcx_29
    rax_54, rcx_29 = sub_14081d830(0x88, *(arg2 + 8), 1, 0)
    void*** rbx_3 = rax_54
    
    if (rax_54 == 0)
        rbx_3 = nullptr
    else
        var_248.q = rdi_3
        int128_t zmm6_4 = sub_141317b00(rcx_29)
        var_248:8.q = &data_143eb7ec0
        var_238.o = var_248
        sub_141992bd0(rbx_3, &arg_8, &var_238, 1)
        uint128_t zmm0_10 = var_218
        *rbx_3 = &data_142f5cc10
        *(rbx_3 + 0x38) = zmm0_10
        *(rbx_3 + 0x48) = zmm7_1
        *(rbx_3 + 0x58) = zmm6_4
        *(rbx_3 + 0x68) = zx.o(0)
        *(rbx_3 + 0x78) = var_1d8
    
    sub_1419968d0(arg2, rbx_3)
else
    int64_t* rax_38 = sub_14081d830(0x110, rdx_7, 1, 0)
    int64_t* rbx_1 = rax_38
    
    if (rax_38 == 0)
        rbx_1 = nullptr
    else
        *rbx_1 = 0
        __builtin_memset(&rbx_1[0x1e], 0, 0x18)
    
    memset(rbx_1, 0, 0x110)
    char rax_39 = arg4[4].b
    int64_t zmm1_1 = arg4[3]
    uint128_t zmm8 = var_218
    int128_t var_1c8 = *(arg4 + 8)
    var_1b8.q = zmm1_1
    var_238.o = zmm8
    var_234:0xc.q = var_208.q
    char var_258 = rax_39
    int64_t* rax_40
    rax_40, zmm8_1, zmm9_1 = sub_141313660(&var_188, arg3, &var_238, &var_1c8)
    sub_141300340(rbx_1, rax_40)
    sub_1405d1550(&var_188)
    void* r14_1 = var_218.q
    var_248.q = r14_1
    var_248:8.w = 0
    void*** rax_41
    int512_t zmm6
    rax_41, zmm6 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
    
    if (rax_41 != 0)
        rax_41[1] = *(r14_1 + 8)
        *rax_41 = &data_142f285c0
        rax_41[2] = 0
        *(rax_41 + 0x18) = var_248
    
    uint32_t r9_4 = zx.d(arg_8.b)
    rbx_1[0x20] = rax_41
    char rcx_15 = sub_1419a2ec0(*(arg3 + 0x5150), &var_1a8, &data_143eb3e90, r9_4)
    zmm6.o = zx.o(0)
    uint128_t zmm7 = var_1a8
    int32_t temp26_1
    int32_t temp27_1
    temp26_1:temp27_1 = sx.q(temp0_2 - arg_18.d + 7)
    var_248.d = (temp27_1 + (temp26_1 & 7)) s>> 3
    int32_t temp28_1
    int32_t temp29_1
    temp28_1:temp29_1 = sx.q(r15_1 - rax_37 + 7)
    var_248:4.d = (temp29_1 + (temp28_1 & 7)) s>> 3
    var_238.o = sub_141317990(rcx_15)
    sub_141998c50(zmm7.q, &data_143eb7fa0, rbx_1)
    int64_t* rdx_16 = *(arg2 + 8)
    var_218.q = rbx_1
    var_218 = zmm7
    var_1f8.d = 1
    var_208:8.q = var_248.q
    void*** rax_50
    char rcx_17
    rax_50, rcx_17 = sub_14081d830(0x60, rdx_16, 1, 0)
    
    if (rax_50 == 0)
        sub_1419968d0(arg2, nullptr)
    else
        var_248.q = rbx_1
        sub_141317990(rcx_17)
        var_248:8.q = &data_143eb7fd0
        var_238.o = var_248
        sub_141992bd0(rax_50, &arg_8, &var_238, 2)
        uint128_t zmm0_6 = var_218
        *rax_50 = &data_142f5cc00
        *(rax_50 + 0x38) = zmm0_6
        *(rax_50 + 0x48) = var_208
        rax_50[0xb] = var_1f8.q
        sub_1419968d0(arg2, rax_50)
*arg1 = zmm8_1
arg1[1].q = zmm9_1
return arg1
