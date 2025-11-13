// 函数: sub_1425a9010
// 地址: 0x1425a9010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
uint128_t zmm2 = arg_18
int64_t rdi
rdi.b = rax_3 != 0
bool cond:2 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_3
rax_3.b = cond:2
int64_t var_28
sub_141f61e80(arg1, &var_28, zmm2, 1, rax_3.b)
*arg3 = var_28
int32_t result
arg3[1].d = result
return result
