// 函数: sub_14240b0a0
// 地址: 0x14240b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_4c = arg2.d
int64_t rcx = data_143f10dc8
int32_t zmm1
int32_t var_80 = zmm1
int32_t var_44 = arg3.d
int32_t var_48 = 0x3f800000
void** const var_88 = &data_1433443d0
int32_t var_3c = arg5.d

if (arg8 != 0)
    rcx = arg8

int32_t var_40 = arg4
int32_t var_14 = data_143dbb1f0.d.d
int32_t var_38 = arg6
int32_t var_78 = 0
int32_t zmm2
int32_t var_7c = zmm2
int128_t var_60 = *arg7
char var_70 = 0
int32_t zmm3
int32_t var_50 = zmm3
int32_t var_10 = data_143dbb1f0:4.d
int64_t var_68 = 0
int64_t var_30 = rcx
int64_t var_28
__builtin_memset(&var_28, 0, 0x14)

if (arg9 == 0)
    int32_t var_74_1 = 0
else
    int32_t rax_2 = 2
    
    if (*(arg1 + 0x95) != 0)
        rax_2 = 0xd
    
    int32_t var_74 = rax_2

int64_t result = sub_142408260(&var_88, arg1)

if (arg1[0x28] != 1)
    return result

return sub_14240e030(arg1, 0)
