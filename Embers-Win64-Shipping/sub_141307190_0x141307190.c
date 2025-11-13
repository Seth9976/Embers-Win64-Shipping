// 函数: sub_141307190
// 地址: 0x141307190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1
sub_1414302c0(arg2)
sub_1414297a0(arg2)
int64_t* rax = sub_14141f430(arg2, *arg1)
int64_t* arg_8 = rax

if (rax != 0)
    int64_t rdx_2 = *rax
    (*(rdx_2 + 0x30))(rax, rdx_2)

void*** result = sub_1410fccd0(arg1, &arg_8, u"EyeAdaptation", 2)
int64_t* rcx_5 = arg_8

if (rcx_5 != 0)
    int64_t rdx_4 = *rcx_5
    (*(rdx_4 + 0x38))(rcx_5, rdx_4)

int64_t* var_f8
int32_t* rax_1
int512_t zmm6
rax_1, zmm6 = sub_1413138f0(&var_f8, arg2, 3)
zmm6.o = *rax_1
uint128_t zmm7 = *(rax_1 + 0x10)
int128_t zmm8 = *(rax_1 + 0x20)
int128_t zmm9 = *(rax_1 + 0x30)
int128_t zmm10 = *(rax_1 + 0x40)
int128_t zmm11 = *(rax_1 + 0x50)
TEB* gsbase

if (data_143eb8390 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eb8390)
    
    if (data_143eb8390 == 0xffffffff)
        sub_140b58170(&data_143eb8388, "HistogramEyeAdaptationPass", 1)
        _Init_thread_footer(&data_143eb8390)

void* rax_4 = arg2[0x2b5]
int32_t rcx_8

if (rax_4 == 0)
    rcx_8 = 0
else
    rcx_8 = *(rax_4 + 0x28)

int64_t* rdx_7 = arg1[1]
int32_t arg_14 = rcx_8
arg1[0x4e] = data_143eb8388.q
void*** rdx_12
void*** result_1
int128_t var_168
uint128_t var_148

if (*(arg2 + 0x515a) == 0)
    void*** result_8
    int128_t zmm6_4
    result_8, zmm6_4 = sub_14081d830(0x100, rdx_7, 1, 0)
    void*** result_5 = result_8
    
    if (result_8 == 0)
        result_5 = nullptr
    else
        sub_14117af20(&result_8[0xe])
    
    memset(&result_5[0x10], 0, 0x80)
    *result_5 = zmm6_4
    result_1 = result
    *(result_5 + 0x10) = zmm7
    int16_t var_170_1 = 0
    *(result_5 + 0x20) = zmm8
    char var_16e_1 = 0
    *(result_5 + 0x30) = zmm9
    int32_t var_16c_1 = 0xffffffff
    *(result_5 + 0x40) = zmm10
    *(result_5 + 0x50) = zmm11
    *(result_5 + 0x60) = arg4.o
    *(result_5 + 0x70) = result_1.o
    sub_1419a2ec0(arg2[0xa2a], &result_1, &data_143eb4050, 0)
    zmm7 = result_1.o
    int128_t var_160_1 = zx.o(0)
    int32_t rcx_18
    
    if (arg4 == 0)
        rcx_18 = 0
    else
        rcx_18 = *(arg4 + 0x44)
        var_160_1:8.d = rcx_18
        var_160_1:0xc.d = *(arg4 + 0x48)
    
    int32_t var_128_1 = *(arg4 + 0x44)
    int32_t var_124_1 = *(arg4 + 0x48)
    uint32_t var_11c_1 = (var_160_1.q u>> 0x20).d
    int32_t var_120_1 = 0
    uint32_t var_114_1 = (var_160_1:8.q u>> 0x20).d
    int128_t var_160_2 = zx.o(0)
    int32_t rcx_19
    
    if (result == 0)
        rcx_19 = 0
    else
        rcx_19 = *(result + 0x44)
        var_160_2:8.d = rcx_19
        var_160_2:0xc.d = result[9].d
    
    var_148.d = *(result + 0x44)
    var_148:4.d = result[9].d
    var_148:0xc.d = (var_160_2.q u>> 0x20).d
    uint32_t var_134_1 = (var_160_2:8.q u>> 0x20).d
    var_148:8.d = 0
    int128_t zmm6_5 = sub_141317de0(rcx_19.b)
    void*** result_3 = result_1
    var_168 = zmm6_5
    sub_141998c50(result_3, &data_143eb8170, result_5)
    uint128_t zmm0_6 = var_148
    int64_t* rdx_14 = arg1[1]
    var_f8 = arg2
    void*** result_6 = result_5
    uint64_t var_c8_1 = rcx_18.q
    int64_t var_e0_1 = rcx_19.q
    char var_a8_1 = 0
    void*** rax_23
    char rcx_20
    rax_23, rcx_20 = sub_14081d830(0x90, rdx_14, 1, 0)
    void*** rbx_1 = rax_23
    
    if (rax_23 == 0)
        rbx_1 = nullptr
    else
        result_1 = result_5
        int128_t zmm6_6 = sub_141317de0(rcx_20)
        var_170_1.q = &data_143eb81a0
        var_168 = result_1.o
        sub_141992bd0(rbx_1, &arg_8, &var_168, 1)
        uint128_t zmm0_8 = var_f8.o
        *rbx_1 = &data_142f5cc30
        *(rbx_1 + 0x38) = zmm0_8
        *(rbx_1 + 0x48) = zmm0_6
        *(rbx_1 + 0x58) = zmm6_6
        *(rbx_1 + 0x68) = var_c8_1.o
        *(rbx_1 + 0x78) = zmm7
        rbx_1[0x11] = var_a8_1.q
    
    rdx_12 = rbx_1
else
    void*** result_7
    int128_t zmm6_1
    result_7, zmm6_1 = sub_14081d830(0x80, rdx_7, 1, 0)
    void*** result_4 = result_7
    
    if (result_7 == 0)
        result_4 = nullptr
    else
        result_7[0xe] = 0
    
    result_4[0xe] = 0
    result_4[0xf] = 0
    *result_4 = zmm6_1
    result_1 = result
    *(result_4 + 0x10) = zmm7
    int16_t var_170 = 0
    *(result_4 + 0x20) = zmm8
    *(result_4 + 0x30) = zmm9
    *(result_4 + 0x40) = zmm10
    *(result_4 + 0x50) = zmm11
    *(result_4 + 0x60) = arg4.o
    void*** rax_7
    int512_t zmm6_2
    rax_7, zmm6_2 = sub_14081d830(0x28, arg1[1], 1, 0)
    
    if (rax_7 == 0)
        rax_7 = nullptr
    else
        int128_t zmm0_1 = result_1.o
        rax_7[1] = result[1]
        *rax_7 = &data_142f285c0
        rax_7[2] = 0
        *(rax_7 + 0x18) = zmm0_1
    
    result_4[0xe] = rax_7
    char rcx_11 = sub_1419a2ec0(arg2[0xa2a], &var_148, &data_143eb4150, 0)
    zmm7 = var_148
    zmm6_2.o = zx.o(0)
    result_1.d = 1
    result_1:4.d = 1
    var_168 = sub_141317c70(rcx_11)
    sub_141998c50(zmm7.q, &data_143eb8280, result_4)
    int32_t var_128
    var_128.q = result_4
    int32_t var_120
    var_120.o = zmm7
    int32_t var_108_1 = 1
    void*** result_2 = result_1
    void*** rax_8
    char rcx_13
    rax_8, rcx_13 = sub_14081d830(0x60, arg1[1], 1, 0)
    
    if (rax_8 == 0)
        rdx_12 = nullptr
    else
        result_1 = result_4
        sub_141317c70(rcx_13)
        var_170.q = &data_143eb82b0
        var_168 = result_1.o
        sub_141992bd0(rax_8, &arg_8, &var_168, 2)
        rdx_12 = rax_8
        *rax_8 = &data_142f5cc20
        *(rax_8 + 0x38) = var_128.o
        int32_t var_118
        *(rax_8 + 0x48) = var_118.o
        rax_8[0xb] = var_108_1.q
sub_1419968d0(arg1, rdx_12)
return result
