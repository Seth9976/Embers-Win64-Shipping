// 函数: sub_141d63fb0
// 地址: 0x141d63fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rsi = var_28
int64_t var_18 = 0
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t rbx_1 = sx.q(var_20)
int32_t var_10 = rbx_1.d

if (rbx_1.d != 0)
    sub_140638750(&var_18, rbx_1.d, 0)
    memcpy(var_18, rsi, (rbx_1 << 2).d)
else
    int32_t var_c_1 = 0

int64_t result = sub_141d5c890(arg1, &var_18, arg_10)
int64_t rcx_7 = var_28

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
