// 函数: sub_141c1c450
// 地址: 0x141c1c450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t* r8_6 = arg_10
int64_t* rdx_6 = arg_18
int64_t* rcx_3 = arg_20
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void* result = sub_141b9f840(rcx_3, rdx_6, r8_6)
*arg3 = result
return result
