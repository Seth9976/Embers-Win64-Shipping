// 函数: sub_140989c70
// 地址: 0x140989c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_48 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_40 = 0
int32_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_40, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_5 = *(arg2 + 0x38)
char* rdi = &arg_10
int64_t rsi = var_40
int64_t var_30 = 0

if (rax_5 != 0)
    rdi = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rcx_4
rcx_4.b = rax_6 != 0
*(arg2 + 0x20) = rcx_4 + rax_6
int32_t var_28 = var_38

if (var_38 != 0)
    sub_1405a4c70(&var_30, var_38, 0)
    memcpy(var_30, rsi, var_38 * 2)
else
    int32_t var_24_1 = 0

int64_t result = sub_140961520(var_48, arg_20, &var_30, rdi)
int64_t rcx_9 = var_40

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
