// 函数: sub_141301ea0
// 地址: 0x141301ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t r14 = sx.q(arg2)
void*** result

if (**arg1 != 0)
    int32_t rax_3 = data_143f02318
    int32_t rax_4 = 0x15
    
    if (r14.d == 2)
        rax_4 = 0xf
    
    void* rcx = arg1[1]
    int32_t var_9c_1 = rax_4
    wchar16 const* const var_88_1 = u"UnknownTexture2D"
    int64_t r8_1 = (&data_142f59610)[r14]
    int16_t var_90_1 = 0
    uint128_t var_c8 = data_143f02308
    int32_t var_b4_1 = 0x20
    int64_t var_b0_1 = 0x20
    int32_t var_a8_1 = 1
    int32_t var_a4_1 = 0x10000
    int16_t var_a0_1 = 1
    int32_t var_98_1 = 0
    int32_t var_94_1 = 0x10008
    int16_t var_80_1 = 1
    char var_7e_1 = 0
    void*** result_1 = sub_141188e50(rcx, &var_c8, r8_1, 0)
    int32_t r15_1 = **arg1
    int32_t* rax_5 = sub_14081d830(0x20, *(arg1[1] + 8), 1, 0)
    int32_t* rbx_1 = rax_5
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        *(rax_5 + 0x18) = 0
    
    __builtin_memset(rbx_1, 0, 0x20)
    int16_t var_d0_1 = 0
    *rbx_1 = *(*arg1 + 0xc)
    rbx_1[1] = *(*arg1 + 0x10)
    rbx_1[2] = *(*arg1 + 4)
    rbx_1[3] = *(*arg1 + 8)
    rbx_1[4] = *(*arg1 + 0x14)
    rbx_1[5] = *(*arg1 + 0x18)
    void*** rax_12
    int512_t zmm6_1
    rax_12, zmm6_1 = sub_14081d830(0x28, *(arg1[1] + 8), 1, 0)
    
    if (rax_12 == 0)
        rax_12 = nullptr
    else
        rax_12[1] = result_1[1]
        *rax_12 = &data_142f285c0
        rax_12[2] = 0
        *(rax_12 + 0x18) = result_1.o
    
    *(rbx_1 + 0x18) = rax_12
    int32_t rax_13
    rax_13.b = r15_1 == 2
    int128_t var_68
    char rcx_10 =
        sub_1419a2ec0(*(arg1[2] + 0x5150), &var_68, &data_143eb2dd0, rax_13 + (r14 << 1).d)
    int128_t zmm7 = var_68
    zmm6_1.o = zx.o(0)
    void* r14_1 = arg1[1]
    void*** var_d8_1
    var_d8_1.d = 4
    var_d8_1:4.d = 4
    int128_t var_78 = sub_141316b30(rcx_10)
    sub_141998c50(zmm7.q, &data_143eb5af0, rbx_1)
    int64_t* rdx_7 = *(r14_1 + 8)
    var_c8.q = rbx_1
    var_c8 = zmm7
    int32_t var_a8_2 = 1
    void*** var_b0_2 = var_d8_1
    void*** rax_14
    char rcx_12
    rax_14, rcx_12 = sub_14081d830(0x60, rdx_7, 1, 0)
    void*** rdi_1 = rax_14
    
    if (rax_14 == 0)
        rdi_1 = nullptr
    else
        sub_141316b30(rcx_12)
        var_d0_1.q = &data_143eb5b20
        var_78 = rbx_1.o
        void var_e8
        sub_141992bd0(rdi_1, &var_e8, &var_78, 2)
        uint128_t zmm0_4 = var_c8
        *rdi_1 = &data_142f5cb60
        *(rdi_1 + 0x38) = zmm0_4
        *(rdi_1 + 0x48) = rax_3.o
        rdi_1[0xb] = var_a8_2.q
    
    sub_1419968d0(r14_1, rdi_1)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_108)
return result
