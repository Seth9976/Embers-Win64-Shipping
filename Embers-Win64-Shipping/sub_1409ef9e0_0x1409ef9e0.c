// 函数: sub_1409ef9e0
// 地址: 0x1409ef9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
bool cond:0 = arg_8 != 0
*(arg2 + 0x20) = rdi + result
result.b = cond:0
*(arg1 + 0x3a8) = result.b
return result
