// 函数: sub_14064aa50
// 地址: 0x14064aa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

uint64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_6 = *(arg2 + 0x20)
uint64_t r8_10 = arg_10
void* rdx_10 = arg_18
int64_t rdi
rdi.b = rax_6 != 0
int64_t* rcx_5 = arg_20
int32_t var_50
int32_t var_30 = var_50
int32_t var_40
int32_t var_20 = var_40
int64_t var_38 = var_58
int64_t zmm0 = var_48
*(arg2 + 0x20) = rdi + rax_6
int64_t var_28 = zmm0
void* result = sub_14062b630(rcx_5, rdx_10, r8_10, &var_28, &var_38)
*arg3 = result
return result
