// 函数: sub_1406d7460
// 地址: 0x1406d7460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t var_28
int64_t* arg_18 = &var_28
var_28 = 0
int64_t rbx_1 = sx.q(var_30)
int64_t rsi = var_38
int32_t var_20 = rbx_1.d

if (rbx_1.d != 0)
    sub_1406d5a40(&var_28, rbx_1.d, 0)
    memcpy(var_28, rsi, (rbx_1 * 0xc).d)
else
    int32_t var_1c_1 = 0

void* result = sub_1406cdec0(&var_28, arg_10)
*arg3 = result
int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
