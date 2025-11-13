// 函数: sub_142491cb0
// 地址: 0x142491cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int128_t zmm0 = data_143264930
int32_t var_a8 = var_a8 & 0xfffffff8
int128_t var_38 = zmm0
int64_t var_28 = 0
int64_t var_20 = 0
int64_t var_a4 = 0
int32_t var_3c = 0xffffffff
void var_9c
memset(&var_9c, 0, 0x88)
int32_t var_94 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int32_t* rax_3 = *(arg2 + 0x38)
int32_t* r8_4 = &var_a8
int64_t var_b8 = var_c8

if (rax_3 != 0)
    r8_4 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int32_t var_c0
int32_t var_b0 = var_c0
return (*(*arg1 + 0x8a8))(arg1, &var_b8, r8_4)
