// 函数: sub_141a26f00
// 地址: 0x141a26f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_10 = 0x18
int32_t var_14 = 0
int32_t var_18 = 0
int32_t var_c = 1
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rcx_1 = &var_18

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int64_t result
int32_t zmm0
zmm0, result = sub_141a25c80(rcx_1)
*arg3 = zmm0
return result
