// 函数: sub_1427ec4c0
// 地址: 0x1427ec4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)
int64_t* arg_8
int64_t* arg_10
(*(*rcx + 0x30))(rcx, &arg_8, &arg_10)
float var_98
sub_1427ec150(arg1, &var_98, arg_8)
int64_t* rbx_1 = arg_8
int64_t* rdi = nullptr
int32_t zmm10 = (zx.o(0)).d
int64_t* rax_1

if (rbx_1 != 0)
    rax_1 = nullptr
    
    if (rbx_1[1].w == 7)
        rax_1 = rbx_1

void var_a8
float zmm6
float zmm7
float zmm8

if (rbx_1 == 0 || rax_1 != 0)
    zmm6 = (zx.o(0)).d
    zmm7 = (zx.o(0)).d
    zmm8 = (zx.o(0)).d
else
    (*(*rbx_1 + 0x128))(rbx_1, &var_a8)
    float* rax_4 = (*(*rbx_1 + 0x138))(rbx_1, &var_a8)
    zmm6 = *rax_4
    zmm7 = rax_4[1]
    zmm8 = rax_4[2]

int64_t* rbx_2 = arg_10

if (rbx_2 != 0 && rbx_2[1].w == 7)
    rdi = rbx_2

float zmm11
float zmm12

if (rbx_2 == 0 || rdi != 0)
    zmm11 = (zx.o(0)).d
    zmm12 = (zx.o(0)).d
else
    (*(*rbx_2 + 0x128))(rbx_2, &var_a8)
    int32_t* rax_7 = (*(*rbx_2 + 0x138))(rbx_2, &var_a8)
    zmm10 = *rax_7
    zmm11 = rax_7[1]
    zmm12 = rax_7[2]

zmm10 = zmm10 f- zmm6
zmm6 = var_98
float var_88
zmm10 = (zmm10 f- var_88) f* 2f
float var_8c
float zmm9 = var_8c * var_8c - 0.5f
float var_84
zmm11 = (zmm11 - zmm7 - var_84) * 2f
float var_80
zmm12 = (zmm12 - zmm8 - var_80) * 2f
float var_94
float var_90
zmm7 = var_94 * zmm11 + zmm6 f* zmm10 + var_90 * zmm12
*arg2 = zmm9 f* zmm10 - (var_94 * zmm12 - var_90 * zmm11) * var_8c + zmm6 * zmm7
arg2[1] = zmm9 * zmm11 - (var_90 f* zmm10 - zmm6 * zmm12) * var_8c + var_94 * zmm7
arg2[2] = zmm9 * zmm12 - (zmm6 * zmm11 - var_94 f* zmm10) * var_8c + var_90 * zmm7
return arg2
