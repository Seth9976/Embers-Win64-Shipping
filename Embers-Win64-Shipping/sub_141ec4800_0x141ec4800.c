// 函数: sub_141ec4800
// 地址: 0x141ec4800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* rcx

if (arg2 != 0)
    rcx = *(arg2 + 0x2b8)

int64_t result

if (arg2 == 0 || rcx == 0)
    result = 0
else
    int32_t var_118
    (*(*rcx + 0x708))(rcx, &var_118)
    int64_t* rcx_1 = *(arg2 + 0x2b8)
    void var_f8
    (*(*rcx_1 + 0x700))(rcx_1, &var_f8)
    void* rcx_2 = *(arg2 + 0x250)
    int64_t result_1 = 0
    int64_t var_128 = 0
    int64_t var_d8 = 0
    int64_t var_d0_1 = 0
    int64_t var_98_1 = 0
    int32_t var_90_1 = 0
    int32_t var_8c_1 = 8
    int64_t var_78_1 = 0
    int32_t var_70_1 = 0
    int32_t var_6c_1 = 4
    int32_t var_c8_1 = 0x101
    int32_t var_c0_1 = 0
    char var_ba_1 = 1
    char var_bc_1 = 0
    int16_t var_c4_1 = 0
    
    if (rcx_2 != 0)
        int32_t var_70_2 = 1
        int32_t var_88_1 = *(rcx_2 + 0xc)
        int64_t var_d0_2 = *(rcx_2 + 0x18)
    
    void var_e8
    int32_t* rax_6
    int512_t zmm1_1
    rax_6, zmm1_1 = sub_140ae4210(&var_f8, &var_e8)
    zmm1_1.o = 0x47c35000
    float zmm8_1[0x4] = *rax_6
    int64_t zmm7_1 = rax_6[1]
    int64_t rax_7 = *arg1
    float zmm0_1 = rax_6[2] f* 100000f
    zmm8_1[0] = zmm8_1[0] * 100000f
    zmm7_1.d = zmm7_1.d f* 100000f
    zmm8_1[0] = zmm8_1[0] f+ var_118
    int32_t var_114
    zmm7_1.d = zmm7_1.d f+ var_114
    void* rax_8 = (*(rax_7 + 0x150))(arg1, zmm1_1)
    int32_t rdi_1 = data_143f3a5c8
    int64_t zmm6_1 = var_118.q
    sub_140b34200("RaycastSingle", rdi_1)
    float var_110
    float var_120_1 = zmm0_1 + var_110
    int64_t var_108 = zmm6_1
    int32_t* var_148_1 = &data_143f3a680
    int128_t* var_150_1 = &data_143f3a660
    var_128 = (_mm_unpacklo_ps(zmm8_1, zmm7_1)).q
    float var_100_2 = var_110
    void var_138
    char rax_10 =
        sub_141eb32e0(rax_8, arg3, &var_138, &var_108, &var_128, 2, &var_d8, var_150_1, var_148_1)
    sub_140b38680("RaycastSingle", rdi_1)
    
    if (rax_10 != 0)
        result_1 = sub_140d3c6e0(arg3 + 0x68)
    
    if (var_78_1 != 0)
        sub_140a74f90(var_78_1)
    
    if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_188)
return result
