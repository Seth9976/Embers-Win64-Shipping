// 函数: sub_140a97f80
// 地址: 0x140a97f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t* rcx = *arg2
int16_t rsi = 0
int16_t rax_7

if (*((*(*rcx + 0x10))(rcx) + 8) s<= 1 || ((arg2[2].d u>> 1).b & 1) != 0)
    rax_7 = 0
else
    int64_t* rcx_1 = *arg2
    rax_7 = (*(*rcx_1 + 0x40))(rcx_1)

arg1[2].w = rax_7
int64_t* rcx_2 = *arg2

if (*((*(*rcx_2 + 0x10))(rcx_2) + 8) s> 1 && ((arg2[2].d u>> 1).b & 1) == 0)
    int64_t* rcx_3 = *arg2
    rsi = (*(*rcx_3 + 0x48))(rcx_3)

*(arg1 + 0x12) = rsi
*(arg1 + 0x14) = arg2[2].d
return arg1
