// 函数: sub_140648e30
// 地址: 0x140648e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_48 = 0
int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int128_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_4 = *(arg2 + 0x20)
int128_t zmm0 = var_28
int64_t rdi = var_48
int64_t var_38 = 0
int64_t rcx_3
rcx_3.b = rax_4 != 0
int128_t var_18 = zmm0
*(arg2 + 0x20) = rcx_3 + rax_4
int32_t var_30 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_38, var_40, 0)
    memcpy(var_38, rdi, var_40 * 2)
else
    int32_t var_2c_1 = 0

char result = sub_140629ab0(arg_10, &var_38, &var_18, arg4, var_48.b, var_40.b)
int64_t rcx_8 = var_48
*arg3 = result

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
