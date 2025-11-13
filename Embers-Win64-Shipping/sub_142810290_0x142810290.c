// 函数: sub_142810290
// 地址: 0x142810290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int128_t zmm9 = 0x80000000
int128_t zmm0
int128_t zmm1
float zmm2
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13
int128_t zmm14
int128_t zmm15

if (arg6 != 0)
    zmm1 = *(arg2 + 4)
    int32_t var_108 = (*arg2 ^ 0x80000000).d
    int32_t var_104_1 = (zmm1 ^ 0x80000000).d
    int32_t var_100_1 = (*(arg2 + 8) ^ 0x80000000).d
    int32_t var_fc_1 = (*(arg2 + 0xc)).d
    float var_f8
    sub_1417c7990(&var_108, &var_f8, arg3)
    float var_e8
    zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
        sub_14280f8f0(&var_e8, arg2, arg3)
    
    if ((arg6.b & 1) != 0)
        int32_t var_e0
        zmm0 = var_e0
        zmm2 = var_e8
        int32_t var_e4
        zmm1 = var_e4
        *(rbx + 0x4e) = 0x400
        *rbx = 0
        *(rbx + 8) = 0
        *(rbx + 0x18) = zmm0.d
        *(rbx + 0x10) = zmm2
        *(rbx + 0x14) = zmm1.d
        *(rbx + 0x20) = 0
        *(rbx + 0x28) = 0
        *(rbx + 0x38) = zmm0.d
        zmm0 = var_f8
        *(rbx + 0x30) = zmm2
        *(rbx + 0x34) = zmm1.d
        *(rbx + 0xc) = (zmm0 ^ zmm9).d
        rbx += 0x50
    
    if ((arg6.b & 2) != 0)
        int32_t var_d4
        zmm0 = var_d4
        int32_t var_d8
        zmm1 = var_d8
        *(rbx + 0x4e) = 0x400
        *rbx = 0
        *(rbx + 8) = 0
        *(rbx + 0x18) = zmm0.d
        float var_dc
        *(rbx + 0x10) = var_dc
        *(rbx + 0x14) = zmm1.d
        *(rbx + 0x20) = 0
        *(rbx + 0x28) = 0
        *(rbx + 0x38) = zmm0.d
        *(rbx + 0x30) = var_dc
        *(rbx + 0x34) = zmm1.d
        int32_t var_f4
        *(rbx + 0xc) = (var_f4 ^ zmm9).d
        rbx += 0x50
    
    if ((arg6.b & 4) != 0)
        int32_t var_c8
        zmm0 = var_c8
        int32_t var_cc
        zmm1 = var_cc
        *(rbx + 0x4e) = 0x400
        *rbx = 0
        *(rbx + 8) = 0
        *(rbx + 0x18) = zmm0.d
        float var_d0
        *(rbx + 0x10) = var_d0
        *(rbx + 0x14) = zmm1.d
        *(rbx + 0x20) = 0
        *(rbx + 0x28) = 0
        *(rbx + 0x38) = zmm0.d
        *(rbx + 0x30) = var_d0
        *(rbx + 0x34) = zmm1.d
        int32_t var_f0
        *(rbx + 0xc) = (var_f0 ^ zmm9).d
        rbx += 0x50

int32_t rax = arg5

if (rax != 0)
    zmm1 = *(arg2 + 8)
    zmm0 = *(arg2 + 4)
    zmm2 = *(arg2 + 0xc)
    int128_t zmm3
    zmm3.d = zmm1.d f+ zmm1.d
    int128_t var_28_1 = zmm6
    int128_t var_38_1 = zmm7
    zmm7 = *arg2
    int128_t var_48_1 = zmm8
    int128_t var_68_1 = zmm10
    zmm6.d = zmm7.d f+ zmm7.d
    int128_t var_78_1 = zmm11
    int128_t var_88_1 = zmm12
    zmm11.d = zmm0.d f+ zmm0.d
    float zmm4 = zmm3.d f* zmm1.d
    int128_t var_98_1 = zmm13
    int128_t zmm5
    zmm5.d = zmm6.d f* zmm1.d
    zmm10.d = zmm11.d f* zmm1.d
    int128_t var_a8_1 = zmm14
    zmm8.d = zmm11.d f* zmm0.d
    zmm14.d = zmm6.d f* zmm0.d
    zmm0 = zmm6
    zmm6.d = zmm6.d f* zmm7.d
    zmm1.d = 1f f- zmm8.d
    zmm11.d = zmm11.d f* zmm2
    zmm3.d = zmm3.d f* zmm2
    zmm12.d = 1f f- zmm6.d
    zmm0.d = zmm0.d f* zmm2
    zmm1.d = zmm1.d f- zmm4
    int128_t var_b8_1 = zmm15
    zmm13.d = zmm3.d f+ zmm14.d
    arg5 = zmm1.d
    zmm1.d = zmm5.d f- zmm11.d
    zmm14.d = zmm14.d f- zmm3.d
    zmm7.d = zmm12.d f- zmm4
    zmm15.d = zmm10.d f+ zmm0.d
    zmm11.d = zmm11.d f+ zmm5.d
    arg6 = zmm1.d
    zmm10.d = zmm10.d f- zmm0.d
    zmm12.d = zmm12.d f- zmm8.d
    
    if ((rax.b & 1) != 0)
        zmm6 = *arg4
        zmm8 = arg5
        *(rbx + 0x4e) = 0x400
        *(rbx + 4) = zmm13.d
        *rbx = zmm8.d
        *(rbx + 8) = zmm1.d
        zmm0.d = zmm13.d f* *(arg1 + 0x18)
        zmm5.d = zmm1.d f* *(arg1 + 0x14)
        zmm3.d = zmm8.d f* *(arg1 + 0x18)
        zmm2 = zmm13.d f* *(arg1 + 0x10)
        zmm5.d = zmm5.d f- zmm0.d
        zmm0.d = zmm1.d f* *(arg1 + 0x10)
        zmm3.d = zmm3.d f- zmm0.d
        zmm0.d = zmm8.d f* *(arg1 + 0x14)
        *(rbx + 0x10) = zmm5.d
        *(rbx + 0x14) = zmm3.d
        *(rbx + 0x18) = zmm2 f- zmm0.d
        *(rbx + 0x24) = zmm13.d
        *(rbx + 0x20) = zmm8.d
        *(rbx + 0x28) = zmm1.d
        zmm0.d = zmm13.d f* *(arg1 + 0x24)
        zmm5.d = zmm1.d f* *(arg1 + 0x1c)
        zmm13.d = zmm13.d f* *(arg1 + 0x1c)
        zmm4 = zmm1.d f* *(arg1 + 0x20) f- zmm0.d
        zmm0 = zmm8
        zmm8.d = zmm8.d f* *(arg1 + 0x20)
        zmm0.d = zmm0.d f* *(arg1 + 0x24)
        *(rbx + 0x30) = zmm4
        zmm13.d = zmm13.d f- zmm8.d
        zmm0.d = zmm0.d f- zmm5.d
        *(rbx + 0x38) = zmm13.d
        *(rbx + 0x34) = zmm0.d
        *(rbx + 0xc) = (zmm6 ^ zmm9).d
        rbx += 0x50
    
    if ((rax.b & 2) != 0)
        zmm6 = *(arg4 + 4)
        *(rbx + 0x4e) = 0x400
        *(rbx + 4) = zmm7.d
        *rbx = zmm14.d
        *(rbx + 8) = zmm15.d
        zmm0.d = zmm7.d f* *(arg1 + 0x18)
        zmm5.d = zmm15.d f* *(arg1 + 0x14)
        zmm3.d = zmm14.d f* *(arg1 + 0x18)
        zmm2 = zmm7.d f* *(arg1 + 0x10)
        zmm5.d = zmm5.d f- zmm0.d
        zmm0.d = zmm15.d f* *(arg1 + 0x10)
        zmm3.d = zmm3.d f- zmm0.d
        zmm0.d = zmm14.d f* *(arg1 + 0x14)
        *(rbx + 0x10) = zmm5.d
        *(rbx + 0x14) = zmm3.d
        *(rbx + 0x18) = zmm2 f- zmm0.d
        *(rbx + 0x24) = zmm7.d
        *(rbx + 0x20) = zmm14.d
        *(rbx + 0x28) = zmm15.d
        zmm0.d = zmm7.d f* *(arg1 + 0x24)
        zmm4 = zmm15.d f* *(arg1 + 0x20)
        zmm15.d = zmm15.d f* *(arg1 + 0x1c)
        zmm7.d = zmm7.d f* *(arg1 + 0x1c)
        zmm4 = zmm4 f- zmm0.d
        zmm0 = zmm14
        zmm14.d = zmm14.d f* *(arg1 + 0x20)
        zmm0.d = zmm0.d f* *(arg1 + 0x24)
        *(rbx + 0x30) = zmm4
        zmm7.d = zmm7.d f- zmm14.d
        zmm0.d = zmm0.d f- zmm15.d
        *(rbx + 0x38) = zmm7.d
        *(rbx + 0x34) = zmm0.d
        *(rbx + 0xc) = (zmm6 ^ zmm9).d
        rbx += 0x50
    
    if ((rax.b & 4) != 0)
        zmm6 = *(arg4 + 8)
        *(rbx + 0x4e) = 0x400
        *(rbx + 4) = zmm10.d
        *rbx = zmm11.d
        *(rbx + 8) = zmm12.d
        zmm0.d = zmm10.d f* *(arg1 + 0x18)
        zmm5.d = zmm12.d f* *(arg1 + 0x14)
        zmm3.d = zmm11.d f* *(arg1 + 0x18)
        zmm2 = zmm10.d f* *(arg1 + 0x10)
        zmm5.d = zmm5.d f- zmm0.d
        zmm0.d = zmm12.d f* *(arg1 + 0x10)
        zmm3.d = zmm3.d f- zmm0.d
        zmm0.d = zmm11.d f* *(arg1 + 0x14)
        *(rbx + 0x10) = zmm5.d
        *(rbx + 0x14) = zmm3.d
        *(rbx + 0x18) = zmm2 f- zmm0.d
        *(rbx + 0x24) = zmm10.d
        *(rbx + 0x20) = zmm11.d
        *(rbx + 0x28) = zmm12.d
        zmm0.d = zmm10.d f* *(arg1 + 0x24)
        zmm4 = zmm12.d f* *(arg1 + 0x20)
        zmm12.d = zmm12.d f* *(arg1 + 0x1c)
        zmm10.d = zmm10.d f* *(arg1 + 0x1c)
        zmm4 = zmm4 f- zmm0.d
        zmm0 = zmm11
        zmm11.d = zmm11.d f* *(arg1 + 0x20)
        zmm0.d = zmm0.d f* *(arg1 + 0x24)
        *(rbx + 0x30) = zmm4
        zmm10.d = zmm10.d f- zmm11.d
        zmm0.d = zmm0.d f- zmm12.d
        *(rbx + 0x38) = zmm10.d
        *(rbx + 0x34) = zmm0.d
        *(rbx + 0xc) = (zmm6 ^ zmm9).d
        rbx += 0x50

void* i

for (i = *(arg1 + 8); i u< rbx; i += 0x50)
    *(i + 0x4c) = 0x10

*(arg1 + 8) = rbx
return i
