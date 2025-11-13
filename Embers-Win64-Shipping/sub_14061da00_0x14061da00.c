// 函数: sub_14061da00
// 地址: 0x14061da00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_3 = *(arg2 + 0x38)
char* rsi = &arg_10
uint8_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

uint8_t* rax_5 = *(arg2 + 0x38)
uint8_t* r8_6 = &arg_20
int32_t rcx_3 = var_18

if (rax_5 != 0)
    r8_6 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
return sub_14060eae0(rcx_3, rsi, r8_6)
