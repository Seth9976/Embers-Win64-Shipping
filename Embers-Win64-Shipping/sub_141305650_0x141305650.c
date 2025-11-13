// 函数: sub_141305650
// 地址: 0x141305650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rbx = *arg2
void*** result_7 = nullptr
int32_t var_a8 = 0x3f800000
int32_t rax_2 = sub_141312650(&arg2[0x1bc], &result_7, &var_a8, 5)
char rdi = *(arg2 + 0x515a)
char rax_4 = sub_14131a9e0(sub_1422e5a30(arg2))
rbx.b = *(rbx + 0x48) - 8 u<= 1
int64_t* result_3 = sub_1414203d0(arg2, *arg1, data_1439b6748, rax_4, rdi, rbx.b)
int64_t* result_1 = result_3
void*** result

if (result_3 == 0)
    result = nullptr
else
    int64_t rdx_2 = *result_3
    (*(rdx_2 + 0x30))(result_3, rdx_2)
    result_3 = result_1
    
    if (result_3 == 0)
        result = nullptr
    else
        result = sub_1410fccd0(arg1, &result_1, u"External", 0)
        result_3 = result_1

if (result_3 != 0)
    int64_t rdx_4 = *result_3
    (*(rdx_4 + 0x38))(result_3, rdx_4)

sub_1414297d0(arg2)

if (result == 0)
    int32_t r8_2 = data_1439b6748
    int32_t rdx_5 = 0x12
    
    if (data_1439c88d0 == 0)
        rdx_5 = 0x25
    
    int16_t var_c0_1 = 0
    int32_t var_e0_1 = r8_2
    int128_t var_f8 = data_1439c7b20
    
    if (rbx.b != 0)
        rdx_5 = 0xa
    
    int32_t var_dc_1 = 0
    int32_t var_e8_1 = data_1439c7b30
    int32_t rax_7 = 9
    int32_t var_d8_1 = 1
    int32_t var_d4_1 = 0x10000
    int16_t var_d0_1 = 1
    int32_t var_e4_1 = r8_2 * r8_2
    
    if (rdi != 0)
        rax_7 = 0x10008
    
    int32_t var_cc_1 = rdx_5
    int32_t var_c4_1 = rax_7
    int16_t var_b0_1 = 1
    char var_ae_1 = 0
    
    if (rax_4 != 0)
        int32_t var_e4_2 = r8_2
        int32_t var_dc_2 = r8_2
    
    wchar16 const* const var_b8_1 = u"CombineLUTs"
    int32_t var_c8_1 = data_143ed3394
    result = sub_141188e50(arg1, &var_f8, u"CombineLUT", 0)

int32_t rbx_1 = data_1439b6748
int32_t r13 = rbx_1

if (rax_4 == 0)
    r13 *= rbx_1

int64_t* rdx_7 = arg1[1]
void*** rdx_15
char var_138
void var_128
void*** result_2

if (rdi == 0)
    void*** result_11 = sub_14081d830(0x370, rdx_7, 1, 0)
    void*** result_4 = result_11
    
    if (result_11 == 0)
        result_4 = nullptr
    else
        sub_1412ff700(result_11)
        sub_14117af20(&result_4[0x5c])
    
    memset(result_4, 0, 0x370)
    var_138.d = rax_2
    sub_141313030(result_4, arg2, &result_7, &var_a8, var_138)
    result_1 = result
    int16_t var_110_1 = 0
    char var_10e_1 = 0
    int32_t var_10c_1 = 0xffffffff
    *(result_4 + 0x2e0) = result_1.o
    sub_1419a2ec0(arg2[0xa2a], &var_a8, &data_143eb3b80, rax_2 - 1)
    int128_t zmm0_7 = var_a8.o
    int64_t* rdx_18 = arg1[1]
    result_7 = arg2
    void*** result_9 = result_4
    void*** rax_17
    char rcx_27
    rax_17, rcx_27 = sub_14081d830(0x60, rdx_18, 1, 0)
    void*** rdi_2 = rax_17
    
    if (rax_17 == 0)
        rdi_2 = nullptr
    else
        result_2 = result_4
        sub_141318510(rcx_27)
        int16_t var_100
        var_100.q = &data_143eb6ce0
        var_a8.o = result_2.o
        sub_141992bd0(rdi_2, &var_128, &var_a8, 1)
        uint128_t zmm0_9 = result_7.o
        *rdi_2 = &data_142f5cad0
        *(rdi_2 + 0x38) = zmm0_9
        *(rdi_2 + 0x48) = zmm0_7
        rdi_2[0xb] = rax_4.q
    
    rdx_15 = rdi_2
else
    void*** result_10 = sub_14081d830(0x2f0, rdx_7, 1, 0)
    void*** result_5 = result_10
    
    if (result_10 == 0)
        result_5 = nullptr
    else
        sub_1412ff700(result_10)
        result_5[0x5d] = 0
    
    memset(result_5, 0, 0x2f0)
    var_138.d = rax_2
    float zmm6_1 = sub_141313030(result_5, arg2, &result_7, &var_a8, var_138)
    uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(r13))
    result_2 = result
    int16_t var_100_1 = 0
    float zmm2_1 = zmm6_1 f/ zmm0_2.d
    zmm6_1 = zmm6_1 f/ _mm_cvtepi32_ps(zx.o(rbx_1)).d
    result_5[0x5c].d = zmm2_1
    *(result_5 + 0x2e4) = zmm6_1
    void*** rax_11
    int512_t zmm6_2
    rax_11, zmm6_2 = sub_14081d830(0x28, arg1[1], 1, 0)
    
    if (rax_11 != 0)
        int128_t zmm0_3 = result_2.o
        rax_11[1] = result[1]
        *rax_11 = &data_142f285c0
        rax_11[2] = 0
        *(rax_11 + 0x18) = zmm0_3
    
    result_5[0x5d] = rax_11
    char rcx_18 = sub_1419a2ec0(arg2[0xa2a], &result_2, &data_143eb3c80, rax_2 - 1)
    int128_t zmm7_1 = result_2.o
    int32_t temp0_3
    int32_t temp1_1
    temp0_3:temp1_1 = sx.q(r13 + 7)
    int32_t rbx_2 = 1
    zmm6_2.o = zx.o(0)
    int32_t rax_15 = (temp1_1 + (temp0_3 & 7)) s>> 3
    result_1.d = rax_15
    result_1:4.d = rax_15
    
    if (rax_4 != 0)
        rbx_2 = rax_15
    
    var_a8.o = sub_1413183a0(rcx_18)
    sub_141998c50(zmm7_1.q, &data_143eb6dc0, result_5)
    int64_t* result_6 = result_1
    int64_t* rdx_13 = arg1[1]
    result_7 = result_5
    char var_68
    var_68.d = rbx_2
    int64_t* result_8 = result_6
    void*** rax_16
    char rcx_20
    rax_16, rcx_20 = sub_14081d830(0x60, rdx_13, 1, 0)
    
    if (rax_16 == 0)
        rdx_15 = nullptr
    else
        result_2 = result_5
        sub_1413183a0(rcx_20)
        var_100_1.q = &data_143eb6df0
        var_a8.o = result_2.o
        sub_141992bd0(rax_16, &var_128, &var_a8, 2)
        uint128_t zmm0_5 = result_7.o
        rdx_15 = rax_16
        *rax_16 = &data_142f5cbf0
        *(rax_16 + 0x38) = zmm0_5
        *(rax_16 + 0x48) = zmm7_1
        rax_16[0xb] = var_68.q
sub_1419968d0(arg1, rdx_15)
__security_check_cookie(rax_1 ^ &var_158)
return result
