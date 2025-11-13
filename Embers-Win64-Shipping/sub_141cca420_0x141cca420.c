// 函数: sub_141cca420
// 地址: 0x141cca420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_28 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rdi = 0
int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdx_4 = arg_10
int64_t rcx_2
rcx_2.b = rax_3 != 0
int64_t rax_4 = var_28.q
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t var_18 = rax_4

if (rax_4 != 0)
    rdi = var_28:8.q

int64_t var_10 = rdi
char result = sub_141cc1a40(&var_18, rdx_4)
*arg3 = result
return result
