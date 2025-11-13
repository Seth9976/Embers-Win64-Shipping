// 函数: sub_140654520
// 地址: 0x140654520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_50, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_60, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_7 = *(arg2 + 0x20)
bool cond:0 = arg_10 != 0
int64_t r8_12 = arg_18
int64_t* rdx_12 = arg_20
int64_t* rcx_7 = var_68
int64_t rdi
rdi.b = rax_7 != 0
int64_t var_38 = var_60
int64_t zmm0 = var_50
int32_t var_58
int32_t var_30 = var_58
int32_t var_48
int32_t var_20 = var_48
*(arg2 + 0x20) = rdi + rax_7
int64_t var_28 = zmm0
void* result = sub_14063a760(rcx_7, rdx_12, r8_12, &var_28, &var_38, cond:0)
*arg3 = result
return result
