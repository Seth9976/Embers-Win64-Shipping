// 函数: sub_141745100
// 地址: 0x141745100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t rbp = sx.q(arg2)
int64_t* rbx_2 = (rbp << 4) + *(arg1 + 8)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_1405a4f90(arg3 + 8)

int64_t* rdx_3 = (rsi << 4) + *(arg3 + 8)
*rdx_3 = *rbx_2
rdx_3[1] = rbx_2[1]
rbx_2[1] = 0
*rbx_2 = 0
return sub_140dbb060(arg1 + 8, rbp.d, 1, 1) __tailcall
