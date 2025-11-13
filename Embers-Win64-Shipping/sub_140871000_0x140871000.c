// 函数: sub_140871000
// 地址: 0x140871000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_3 = *(arg2 + 0x20)
int64_t r8_4 = arg_20
int64_t rdx_4 = arg_10
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
return sub_140777b90(arg1, rdx_4, r8_4)
