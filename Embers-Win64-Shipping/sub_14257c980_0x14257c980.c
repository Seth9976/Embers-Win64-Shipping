// 函数: sub_14257c980
// 地址: 0x14257c980
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
    int64_t* r8_4 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_4[4]
    sub_140d30490(arg2, &arg_8, r8_4)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_3 = *(arg2 + 0x20)
int64_t var_18 = var_28
int64_t rdi
rdi.b = rax_3 != 0
bool cond:2 = arg_8 != 0
*(arg2 + 0x20) = rdi + rax_3
int32_t var_20
int32_t var_10 = var_20
int64_t r8_3
r8_3.b = cond:2
return (*(*arg1 + 0x5f8))(arg1, &var_18, r8_3)
