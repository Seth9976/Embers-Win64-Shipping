// 函数: sub_1408b7240
// 地址: 0x1408b7240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int128_t var_28 = data_142d3f660

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_3 = *(arg2 + 0x20)
int32_t rcx_2 = arg_10
int64_t rdi
rdi.b = rax_3 != 0
int128_t var_18 = var_28
*(arg2 + 0x20) = rdi + rax_3
int64_t result
int32_t zmm0_2
zmm0_2, result = sub_1408ae140(rcx_2, &var_18)
*arg3 = zmm0_2
return result
