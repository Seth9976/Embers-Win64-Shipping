// 函数: sub_1417f9cf0
// 地址: 0x1417f9cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_2 = *(arg2 + 0x38)
char* rsi = &arg_10
char arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char* rax_4 = *(arg2 + 0x38)
char* rdx_4 = &arg_20

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
return sub_1417f13b0(rsi, rdx_4)
