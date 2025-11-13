// 函数: sub_1425713c0
// 地址: 0x1425713c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_3 = *(arg2 + 0x20)
uint64_t r8_4 = zx.q(arg_8)
int64_t rdi
rdi.b = rax_3 != 0
int64_t var_18 = var_28
*(arg2 + 0x20) = rdi + rax_3
int32_t var_20
int32_t var_10 = var_20
char result = (*(*arg1 + 0x7d0))(arg1, &var_18, r8_4)

if (result == 0)
    sub_140be4120(u"ServerUpdateCamera_Validate")
    return result

uint64_t r8_5 = zx.q(arg_8)
int32_t var_10_1 = var_20
int64_t rax_7 = *arg1
var_18 = var_28
return (*(rax_7 + 0x7d8))(arg1, &var_18, r8_5)
