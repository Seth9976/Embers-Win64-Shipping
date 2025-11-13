// 函数: sub_1426f5a40
// 地址: 0x1426f5a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1426fbec0(arg1)

if (result == 0)
    return result

uint128_t zmm2_1
zmm2_1.d = float.s(arg3)
zmm2_1.d = zmm2_1.d f* data_143b58064
void var_98
float zmm6_1 = sub_1426f24c0(&var_98, arg2, zmm2_1)
float var_94
float zmm2_2 = 1f / var_94
float var_88
float var_7c
float zmm1_1 = (var_88 + var_7c) * 0.5f
float var_7c_1 = zmm1_1 + zmm6_1
float var_88_1 = zmm1_1 - zmm6_1
float var_74
int32_t rdx_1 = int.d((*arg2 - var_74) * zmm2_2)
float var_70
int32_t rcx_1 = int.d((arg2[1] f- var_70) * zmm2_2)
int32_t var_5c
int32_t var_58
int64_t var_50

if (rdx_1 s>= 0 && rdx_1 s< var_5c && rcx_1 s>= 0 && rcx_1 s< var_58)
    int32_t rax_2 = var_58 * rdx_1 + rcx_1
    
    if (rax_2 != 0xffffffff)
        *(sx.q(rax_2) + var_50) = 1

int32_t rax_4 = sub_1426f5640(result, &var_98, arg4)
int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

if (var_50 != 0)
    sub_140a74f90(var_50)

return zx.q(rax_4)
