// 函数: sub_142462050
// 地址: 0x142462050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_4 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_4[4]
    sub_140d30490(arg2, &arg_20, r8_4)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
bool cond:2 = arg_20 != 0
*(arg2 + 0x20) = rdi + result
int64_t r8_3
r8_3.b = cond:2
return result
