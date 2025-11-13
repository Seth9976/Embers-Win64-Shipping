// 函数: sub_141c3fd80
// 地址: 0x141c3fd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t i_2 = divs.dp.d(sx.q(arg2[1].d), arg3)
arg4[1].d = 0
int32_t i = i_2

if (i_2 s> *(arg4 + 0xc))
    sub_140775b10(arg4, i_2)

arg5[1].d = 0

if (i s> *(arg5 + 0xc))
    sub_140775b10(arg5, i)

int32_t rax_3 = arg4[1].d + i
arg4[1].d = rax_3

if (rax_3 s> *(arg4 + 0xc))
    sub_140775270(arg4)

int32_t result = arg5[1].d + i
arg5[1].d = result

if (result s> *(arg5 + 0xc))
    result = sub_140775270(arg5)

uint64_t r12 = *arg4
int32_t rsi_1 = 0
int64_t r15_1 = *arg2
uint64_t r13 = *arg5

while (i s> 0)
    int32_t i_1 = i
    int64_t rax_4 = sx.q(rsi_1)
    
    if (*(arg1 + 0x14) s<= i)
        i_1 = *(arg1 + 0x14)
    
    sub_141c41eb0(arg1, r15_1 + (sx.q(rbp) << 2), i_1, arg3, r12 + (rax_4 << 2), (rax_4 << 2) + r13)
    i -= i_1
    result = i_1 i* arg3
    rsi_1 += i_1
    rbp += result

return result
