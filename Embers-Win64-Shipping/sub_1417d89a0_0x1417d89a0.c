// 函数: sub_1417d89a0
// 地址: 0x1417d89a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_48[0x4]
sub_1417dbd20(arg1, &var_48)
int64_t arg_8 = *(arg1 + 0xe0)
int64_t var_58
sub_140b63b70(&arg_8, &var_58)
void arg_20
int32_t* r9
int128_t zmm6_1
r9, zmm6_1 = sub_140ae16d0(arg3, &arg_20, 0)
zmm6_1.d = zmm6_1.d f* 0.25f
char var_78 = 1
float var_38[0x4]
float var_68 = var_38[0]
float var_64 = _mm_shuffle_ps(var_38, var_38, 0x55)[0]
int512_t zmm3_1
zmm3_1.o = zmm6_1
float var_60 = _mm_shuffle_ps(var_38, var_38, 0xaa)[0]
int64_t* result = sub_1417d9930(arg2, &var_68, &var_58, r9, &arg_20, arg4[0].b)
int64_t rcx_3 = var_58

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
