// 函数: sub_14258c5b0
// 地址: 0x14258c5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_2 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_2[4]
    sub_140d30490(arg2, &arg_8, r8_2)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
bool cond:0 = arg_8 != 0
*(arg2 + 0x20) = rdi + rax_2
return sub_141f49a80(arg1, not.b(*(arg1 + 0x14c) u>> 5) & 1, cond:0 + 1)
