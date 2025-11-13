// 函数: sub_142570020
// 地址: 0x142570020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_5 = *(arg2 + 0x20)
int64_t zmm0_1 = var_38
uint64_t r9 = zx.q(arg_8)
int512_t zmm2
zmm2.o = arg_10
int64_t rdi
rdi.b = rax_5 != 0
int64_t rdx_8 = arg_18
*(arg2 + 0x20) = rdi + rax_5
int32_t var_30
int32_t var_20 = var_30
int64_t rax_7 = *arg1
int64_t var_28 = zmm0_1
int64_t result = (*(rax_7 + 0x788))(arg1, rdx_8, zmm2, r9, &var_28)
*arg3 = result
return result
