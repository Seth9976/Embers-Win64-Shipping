// 函数: sub_14250c770
// 地址: 0x14250c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rsi = &arg_10
int32_t arg_20 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_4 = *(arg2 + 0x20)
int32_t rdx_4 = arg_20
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
return sub_1420b60c0(rsi, rdx_4)
