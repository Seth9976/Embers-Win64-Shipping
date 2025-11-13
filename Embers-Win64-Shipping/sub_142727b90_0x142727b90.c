// 函数: sub_142727b90
// 地址: 0x142727b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t zmm1 = data_143b581b0
int32_t rax_2 = data_143b581b8
int32_t var_48 = 0x7f7fffff
int32_t var_44 = 0x7f7fffff
int32_t var_40 = 0xbf800000
int64_t var_3c = zmm1
int32_t var_34 = rax_2
int64_t var_30 = zmm1
int32_t var_28 = rax_2
int64_t var_24 = 0
void var_1c
sub_142704050(&var_1c)
int32_t var_10
int32_t var_10_1 = var_10 & 0xfffffff8
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* r8_4 = &var_48
int64_t* rdx_4 = arg_10

if (rax_4 != 0)
    r8_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
void arg_18
int64_t* result = sub_142701fb0(&arg_18, rdx_4, r8_4)
*arg3 = *result
return result
