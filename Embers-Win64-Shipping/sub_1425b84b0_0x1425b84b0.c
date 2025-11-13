// 函数: sub_1425b84b0
// 地址: 0x1425b84b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
bool cond:0 = arg_10 != 0
*(arg2 + 0x20) = rdi + result
sub_1423efee0(arg1, cond:0)
return result
