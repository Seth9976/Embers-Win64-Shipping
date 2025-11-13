// 函数: sub_1424f37d0
// 地址: 0x1424f37d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_3 = *(arg2 + 0x20)
int64_t zmm1 = var_48
uint64_t var_1c = var_38
int64_t rcx_2
rcx_2.b = rax_3 != 0
char var_10 = 1
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_40
int32_t var_20 = var_40
int32_t var_30
int32_t var_14 = var_30
int32_t result = var_10.d
uint128_t zmm0
zmm0.q = zmm1
*arg3 = zmm0
arg3[1].q = var_1c
*(arg3 + 0x18) = result
return result
