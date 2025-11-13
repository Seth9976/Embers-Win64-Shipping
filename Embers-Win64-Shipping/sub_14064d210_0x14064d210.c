// 函数: sub_14064d210
// 地址: 0x14064d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_6 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_6[4]
    sub_140d30490(arg2, &arg_10, r8_6)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int64_t rax_4 = *(arg2 + 0x20)
void* rdx_6 = arg_18
int64_t* rcx_3 = arg_20
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int64_t* result = sub_14062f760(rcx_3, rdx_6, cond:0)
*arg3 = result
return result
