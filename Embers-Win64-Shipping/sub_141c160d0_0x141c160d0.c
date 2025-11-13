// 函数: sub_141c160d0
// 地址: 0x141c160d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int64_t rdx_2 = arg_10
int64_t rcx_1
rcx_1.b = result != 0
*(arg2 + 0x20) = rcx_1 + result
sub_141be12b0(arg1, rdx_2)
return result
