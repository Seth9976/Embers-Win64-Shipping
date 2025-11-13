// 函数: sub_141303e20
// 地址: 0x141303e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1
sub_1414302c0(arg2)
sub_1414297a0(arg2)
uint128_t zmm1 = *arg4
uint64_t rdx_1 = *arg1
void* rcx_2 = zmm1.q
uint64_t var_228 = arg4[1].q
uint128_t var_238 = zmm1
uint128_t temp0 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 8)
int32_t var_250 = *(rcx_2 + 0x44)
int32_t var_24c = *(rcx_2 + 0x48)
uint32_t var_244 = (temp0.q u>> 0x20).d
int32_t var_240 = var_228.d
uint32_t var_23c = (var_228 u>> 0x20).d
int32_t var_248 = temp0_1.d
int64_t* rax_7 = sub_14141f430(arg2, rdx_1)
int64_t* arg_18 = rax_7

if (rax_7 != 0)
    int64_t rdx_2 = *rax_7
    (*(rdx_2 + 0x30))(rax_7, rdx_2)

void*** result = sub_1410fccd0(arg1, &arg_18, u"EyeAdaptation", 2)
int64_t* rcx_6 = arg_18

if (rcx_6 != 0)
    int64_t rdx_4 = *rcx_6
    (*(rdx_4 + 0x38))(rcx_6, rdx_4)

void* rax_8 = arg2[2]
void* var_1e8 = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

int128_t var_1d8 = *arg3
int128_t var_1c8 = arg3[1]
int128_t var_1b8 = arg3[2]
int128_t var_1a8 = arg3[3]
int128_t var_198 = arg3[4]
int128_t var_188 = arg3[5]
int64_t* var_b8
int32_t* rax_9
int128_t zmm6
int128_t zmm7
rax_9, zmm6, zmm7 = sub_141455b70(&var_b8, &var_250)
int128_t var_178 = *rax_9
int32_t var_158 = rax_9[8]
int32_t var_154 = rax_9[9]
int32_t var_150 = rax_9[0xa]
int128_t var_168 = *(rax_9 + 0x10)
int32_t var_14c = rax_9[0xb]
int128_t var_148 = *(rax_9 + 0x30)
int64_t var_108 = *arg4
int128_t var_138 = *(rax_9 + 0x40)
int64_t var_100 = arg5
int128_t var_128 = *(rax_9 + 0x50)
int128_t var_118 = *(rax_9 + 0x60)
TEB* gsbase

if (data_143eb8770 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eb8770)
    
    if (data_143eb8770 == 0xffffffff)
        zmm6 = sub_140b58170(&data_143eb8768, "BasicEyeAdaptationPass", 1)
        _Init_thread_footer(&data_143eb8770)

void* rax_18 = arg2[0x2b5]
int32_t rcx_10

if (rax_18 == 0)
    rcx_10 = 0
else
    rcx_10 = *(rax_18 + 0x28)

int64_t* rdx_7 = arg1[1]
arg5.d = data_143eb8768
arg5:4.d = rcx_10
arg1[0x4e] = arg5
int128_t var_48 = zmm7
void*** rdi_1
void*** result_1

if (*(arg2 + 0x515a) == 0)
    int64_t* rax_23 = sub_14081d830(0x180, rdx_7, 1, 0)
    int64_t* rbx_1 = rax_23
    
    if (rax_23 == 0)
        rbx_1 = nullptr
    else
        *rax_23 = 0
        rax_23[0xc] = 0
        rax_23[0xd] = 0
        rax_23[0x1c] = 0
        rax_23[0x1d] = 0
        sub_14117af20(&rax_23[0x1e])
    
    memset(rbx_1, 0, 0x180)
    sub_141300500(rbx_1, &var_1e8)
    result_1 = result
    int16_t var_280_1 = 0
    char var_27e_1 = 0
    int32_t var_27c_1 = 0xffffffff
    *(rbx_1 + 0xf0) = result_1.o
    int128_t var_278
    sub_1419a2ec0(arg2[0xa2a], &var_278, &data_143eb4350, 0)
    zmm7 = var_278
    int128_t var_200_1 = zx.o(0)
    int32_t rcx_23
    
    if (result == 0)
        rcx_23 = 0
    else
        rcx_23 = *(result + 0x44)
        var_200_1:8.d = rcx_23
        var_200_1:0xc.d = result[9].d
    
    int32_t rax_25 = *(result + 0x44)
    int512_t zmm6_3
    zmm6_3.o = zx.o(0)
    int32_t var_264_1 = result[9].d
    uint32_t var_25c_1 = (var_200_1.q u>> 0x20).d
    uint32_t var_254_1 = (var_200_1:8.q u>> 0x20).d
    int32_t var_260_1 = 0
    int128_t var_d8_1 = sub_141315fb0(rcx_23.b)
    sub_141998c50(var_278.q, &data_143eb8550, rbx_1)
    int64_t zmm0_8 = rcx_23.q
    int64_t* rdx_15 = arg1[1]
    var_b8 = arg2
    int64_t var_a0_1 = zmm0_8
    int64_t* var_70_1 = rbx_1
    char var_68_1 = 0
    void*** rax_31
    char rcx_25
    rax_31, rcx_25 = sub_14081d830(0x90, rdx_15, 1, 0)
    rdi_1 = rax_31
    
    if (rax_31 == 0)
        rdi_1 = nullptr
    else
        var_278.q = rbx_1
        int128_t zmm6_5 = sub_141315fb0(rcx_25)
        var_278:8.q = &data_143eb8580
        int128_t var_c8 = var_278
        void arg_10
        sub_141992bd0(rdi_1, &arg_10, &var_c8, 1)
        uint128_t zmm0_10 = var_b8.o
        *rdi_1 = &data_142f5cc60
        *(rdi_1 + 0x38) = zmm0_10
        *(rdi_1 + 0x48) = rax_25.o
        *(rdi_1 + 0x58) = zmm6_5
        *(rdi_1 + 0x68) = zmm0_8.o
        *(rdi_1 + 0x78) = zmm7
        rdi_1[0x11] = var_68_1.q
else
    int64_t* result_4 = sub_14081d830(0x100, rdx_7, 1, 0)
    int64_t* result_3 = result_4
    
    if (result_4 == 0)
        result_3 = nullptr
    else
        *result_4 = 0
        result_4[0xc] = 0
        result_4[0xd] = 0
        __builtin_memset(&result_4[0x1c], 0, 0x18)
    
    memset(result_3, 0, 0x100)
    sub_141300500(result_3, &var_1e8)
    int64_t* rdx_9 = arg1[1]
    result_1 = result
    int16_t var_280 = 0
    void*** rax_21
    int512_t zmm6_1
    rax_21, zmm6_1 = sub_14081d830(0x28, rdx_9, 1, 0)
    
    if (rax_21 == 0)
        rax_21 = nullptr
    else
        int128_t zmm0_3 = result_1.o
        rax_21[1] = result[1]
        *rax_21 = &data_142f285c0
        rax_21[2] = 0
        *(rax_21 + 0x18) = zmm0_3
    
    result_3[0x1e] = rax_21
    int128_t var_f8
    char rcx_15 = sub_1419a2ec0(arg2[0xa2a], &var_f8, &data_143eb4450, 0)
    zmm7 = var_f8
    zmm6_1.o = zx.o(0)
    result_1.d = 1
    result_1:4.d = 1
    int128_t var_e8_1 = sub_141315e40(rcx_15)
    sub_141998c50(zmm7.q, &data_143eb8660, result_3)
    var_238.q = result_3
    int32_t var_218_1 = 1
    void*** result_2 = result_1
    void*** rax_22
    char rcx_17
    rax_22, rcx_17 = sub_14081d830(0x60, arg1[1], 1, 0)
    rdi_1 = rax_22
    
    if (rax_22 == 0)
        rdi_1 = nullptr
    else
        result_1 = result_3
        sub_141315e40(rcx_17)
        var_280.q = &data_143eb8690
        result_1.o = result_1.o
        void arg_8
        sub_141992bd0(rdi_1, &arg_8, &result_1, 2)
        *rdi_1 = &data_142f5cc50
        *(rdi_1 + 0x38) = zmm7
        *(rdi_1 + 0x48) = var_228.o
        rdi_1[0xb] = var_218_1.q
sub_1419968d0(arg1, rdi_1)
sub_1405d1550(&var_1e8)
int512_t zmm6_6
zmm6_6.o = zmm6
return result
