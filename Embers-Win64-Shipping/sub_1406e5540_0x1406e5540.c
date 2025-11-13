// 函数: sub_1406e5540
// 地址: 0x1406e5540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rsi = var_48
int64_t rdi
rdi.b = arg_10 != 0
int64_t var_38 = 0
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_30 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_38, var_40, 0)
    memcpy(var_38, rsi, var_40 * 2)
else
    int32_t var_2c_1 = 0

int64_t var_28
int64_t* result = sub_140597df0(arg3, sub_1406dab40(&var_28, &var_38, rdi.b))
int64_t rcx_8 = var_28

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_48

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
