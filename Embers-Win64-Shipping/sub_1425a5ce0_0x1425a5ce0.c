// 函数: sub_1425a5ce0
// 地址: 0x1425a5ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_38
char arg_10 = 0

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
uint32_t r9 = zx.d(arg_10)
int64_t rsi
rsi.b = rax_4 != 0
*(arg2 + 0x20) = rsi + rax_4
int32_t var_28[0x4]
int32_t* rax_5 = sub_141f5dad0(arg1, &var_28, rdi, r9)
*arg3 = *rax_5
int32_t result = rax_5[2]
arg3[1].d = result
return result
