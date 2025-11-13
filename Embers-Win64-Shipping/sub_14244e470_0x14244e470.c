// 函数: sub_14244e470
// 地址: 0x14244e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
void* arg_20 = &arg_8
float zmm0 = *(arg1 + 0xc) + 0.5f
void** var_58 = &arg_20
void* var_50 = arg1
int64_t var_88 = 0
float arg_10
int64_t zmm8_1 = sub_140ad7530(&arg_10, arg3, &data_14399f698, &data_14399f6c8, &data_14399f678)
float zmm0_1[0x4] = *(arg1 + 0x98)
zmm0_1[0] = zmm0_1[0] * 0.0174532924f
float zmm7[0x4] = arg4

if (not(zmm0_1[0] < zmm7[0]))
    arg4 = zmm0_1[0]
    zmm7 = zmm0_1

float zmm6[0x4] = cosf(zmm7[0])
float var_70 = sinf(zmm7[0])[0]
int64_t var_78 = (_mm_unpacklo_ps(zmm6, zmm8_1)).q
int64_t var_68 = var_88
float var_60_1 = zmm0
sub_14244c740(&var_58, &var_88, &var_68, &var_78)
*arg2 = expf((var_88.d ^ 0x80000000).d).d
arg2[1] = expf((var_88:4.d ^ 0x80000000).d).d
arg2[2] = expf((zmm0 ^ 0x80000000).d)
arg2[3] = 0x3f800000
return arg2
