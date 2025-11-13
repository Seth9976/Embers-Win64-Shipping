// 函数: sub_1427d9630
// 地址: 0x1427d9630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1427e4f10(arg1)

if (result == 0)
    return result

int128_t var_48
int32_t* rax = (*(arg3 + 0x18))(&var_48, arg1[6])
int32_t var_28 = *rax
int32_t var_24_1 = rax[1]
int32_t var_20_1 = rax[2]
int32_t var_1c_1 = rax[3]
int32_t var_18_1 = rax[4]
int32_t zmm1 = rax[5]
int32_t zmm0 = rax[6]
sub_1427dd870(arg1, &var_28, arg4)
int64_t rcx_2 = arg1[6]
var_48 = var_28.o
int32_t var_38_1 = var_18_1.d
int32_t var_30_1 = zmm0.d
int32_t var_34_1 = zmm1
return (*(arg3 + 0x20))(rcx_2, &var_48)
