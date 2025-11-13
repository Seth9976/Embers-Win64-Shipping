// 函数: sub_142257ba0
// 地址: 0x142257ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t* rbx = *(arg1 + 8)
int128_t zmm14 = 0x80000000
float var_e8
float var_dc
int32_t var_d0
int128_t zmm0
int128_t zmm1
int128_t zmm2
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13

if (arg6 != 0)
    zmm1 = *(arg2 + 4)
    int32_t var_108 = (*arg2 ^ 0x80000000).d
    int32_t var_104_1 = (zmm1 ^ 0x80000000).d
    int32_t var_100_1 = (*(arg2 + 8) ^ 0x80000000).d
    int32_t var_fc_1 = (*(arg2 + 0xc)).d
    float var_f8
    sub_1417c7990(&var_108, &var_f8, arg3)
    zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 = sub_142256ec0(&var_e8, arg2, arg3)
    
    if ((arg6.b & 1) != 0)
        int32_t var_e0
        zmm0 = var_e0
        zmm2 = var_e8
        int32_t var_e4
        zmm1 = var_e4
        *(rbx + 0x4e) = 0x400
        *rbx = 0
        rbx[2] = 0
        rbx[6] = zmm0.d
        rbx[4] = zmm2.d
        rbx[5] = zmm1.d
        *(rbx + 0x20) = 0
        rbx[0xa] = 0
        rbx[0xe] = zmm0.d
        zmm0 = var_f8
        rbx[0xc] = zmm2.d
        rbx[0xd] = zmm1.d
        rbx[3] = (zmm0 ^ zmm14).d
        rbx = &rbx[0x14]
    
    if ((arg6.b & 2) != 0)
        int32_t var_d4
        zmm0 = var_d4
        zmm2 = var_dc
        int32_t var_d8
        zmm1 = var_d8
        *(rbx + 0x4e) = 0x400
        *rbx = 0
        rbx[2] = 0
        rbx[6] = zmm0.d
        rbx[4] = zmm2.d
        rbx[5] = zmm1.d
        *(rbx + 0x20) = 0
        rbx[0xa] = 0
        rbx[0xe] = zmm0.d
        rbx[0xc] = zmm2.d
        rbx[0xd] = zmm1.d
        int32_t var_f4
        rbx[3] = (var_f4 ^ zmm14).d
        rbx = &rbx[0x14]
    
    if ((arg6.b & 4) != 0)
        int32_t var_c8
        zmm0 = var_c8
        zmm2 = var_d0
        int32_t var_cc
        zmm1 = var_cc
        *(rbx + 0x4e) = 0x400
        *rbx = 0
        rbx[2] = 0
        rbx[6] = zmm0.d
        rbx[4] = zmm2.d
        rbx[5] = zmm1.d
        *(rbx + 0x20) = 0
        rbx[0xa] = 0
        rbx[0xe] = zmm0.d
        rbx[0xc] = zmm2.d
        rbx[0xd] = zmm1.d
        int32_t var_f0
        rbx[3] = (var_f0 ^ zmm14).d
        rbx = &rbx[0x14]

if (arg5 != 0)
    zmm1 = *(arg2 + 8)
    zmm0 = *(arg2 + 4)
    zmm2 = *(arg2 + 0xc)
    int128_t var_38_1 = zmm6
    int128_t var_48_1 = zmm7
    int128_t var_58_1 = zmm8
    int128_t var_68_1 = zmm9
    int128_t var_78_1 = zmm10
    zmm9.d = zmm1.d f+ zmm1.d
    int128_t var_88_1 = zmm11
    zmm11 = *arg2
    int128_t var_98_1 = zmm12
    int128_t var_a8_1 = zmm13
    zmm13.d = zmm0.d f+ zmm0.d
    zmm6.d = zmm9.d f* zmm1.d
    zmm10.d = zmm11.d f+ zmm11.d
    zmm9.d = zmm9.d f* zmm2.d
    zmm12.d = zmm13.d f* zmm0.d
    zmm7.d = zmm10.d f* zmm1.d
    int128_t zmm5
    zmm5.d = zmm13.d f* zmm1.d
    float zmm4 = zmm10.d f* zmm0.d
    zmm13.d = zmm13.d f* zmm2.d
    zmm0.d = 1f f- zmm12.d
    zmm11.d = zmm11.d f* zmm10.d
    zmm1.d = zmm7.d f- zmm13.d
    zmm8.d = zmm10.d f* zmm2.d
    zmm0.d = zmm0.d f- zmm6.d
    int128_t zmm3
    zmm3.d = 1f f- zmm11.d
    zmm13.d = zmm13.d f+ zmm7.d
    int32_t var_e0_1 = zmm1.d
    var_e8 = zmm0.d
    zmm0.d = zmm9.d f+ zmm4
    var_d0 = zmm13.d
    zmm1.d = zmm5.d f+ zmm8.d
    zmm5.d = zmm5.d f- zmm8.d
    int32_t var_e4_1 = zmm0.d
    var_dc = zmm4 f- zmm9.d
    zmm0.d = zmm3.d f- zmm6.d
    zmm3.d = zmm3.d f- zmm12.d
    int32_t var_d4_1 = zmm1.d
    int32_t var_cc_1 = zmm5.d
    int32_t var_d8_1 = zmm0.d
    int32_t var_c8_1 = zmm3.d
    
    if ((arg5.b & 1) != 0)
        sub_142257a90(arg1, &var_e8, (*arg4 ^ zmm14).d, 0x400, rbx)
        rbx = &rbx[0x14]
    
    if ((arg5.b & 2) != 0)
        sub_142257a90(arg1, &var_dc, (*(arg4 + 4) ^ zmm14).d, 0x400, rbx)
        rbx = &rbx[0x14]
    
    if ((arg5.b & 4) != 0)
        sub_142257a90(arg1, &var_d0, (*(arg4 + 8) ^ zmm14).d, 0x400, rbx)
        rbx = &rbx[0x14]

void* i

for (i = *(arg1 + 8); i u< rbx; i += 0x50)
    *(i + 0x4c) = 0x10

*(arg1 + 8) = rbx
__security_check_cookie(rax_1 ^ &var_138)
return i
