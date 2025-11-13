// 函数: sub_14086fed0
// 地址: 0x14086fed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int32_t zmm1 = arg_10
int64_t rcx_1
rcx_1.b = result != 0
*(arg2 + 0x20) = rcx_1 + result
sub_140777010(arg1, zmm1)
return result
