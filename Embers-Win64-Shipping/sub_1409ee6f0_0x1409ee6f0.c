// 函数: sub_1409ee6f0
// 地址: 0x1409ee6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_18 = data_143a1c6b0

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
int32_t r9 = arg_10
int32_t r8_4 = arg_18
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void arg_20
int32_t* result = sub_1409c47d0(arg1, &arg_20, r8_4, r9)
*arg3 = *result
return result
