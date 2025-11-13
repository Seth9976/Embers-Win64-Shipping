// 函数: sub_142199060
// 地址: 0x142199060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x538))
int32_t rax = (rsi + 1).d
*(arg1 + 0x538) = rax

if (rax s> *(arg1 + 0x53c))
    sub_1405c4fe0(arg1 + 0x530)

int64_t rcx_2 = rsi << 6
int32_t* rcx_3 = rcx_2 + *(arg1 + 0x530)

if (rcx_2 == neg.q(*(arg1 + 0x530)))
    rcx_3 = nullptr
else
    rcx_3[2] = 0
    *(rcx_3 + 0x28) = 0
    *(rcx_3 + 0x30) = 0

rcx_3[3] = arg3.d
*rcx_3 = 4
int32_t rax_2 = arg5[1].d
*(rcx_3 + 0x10) = *arg5
rcx_3[6] = rax_2
*(rcx_3 + 4) = arg2
rcx_3[0xe] = arg4
return sub_140780c40(&rcx_3[0xa], arg6) __tailcall
