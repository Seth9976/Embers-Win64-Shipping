// 函数: sub_14064e180
// 地址: 0x14064e180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &arg_18
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rsi = rax_3

void arg_20
int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    r9 = sub_140d30490(arg2, &arg_20, r8_5)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r8_6 = &arg_20
int64_t* rcx_3 = arg_10

if (rax_5 != 0)
    r8_6 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
char result = sub_140631060(rcx_3, rsi, r8_6, r9)
*arg3 = result
return result
