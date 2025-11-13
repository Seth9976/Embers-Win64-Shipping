// 函数: sub_142bf33c0
// 地址: 0x142bf33c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
*arg6 = 0
*arg4 = 0
void* r10 = *(rcx + 0x40)
int64_t var_10 = *(r10 + 0x58)
int32_t* var_18 = arg6
int32_t result = (*(r10 + 0x168))(arg5, *(rcx + 0x48))

if (result == 0)
    return result

void* rcx_1 = *(arg1 + 0x10)
int64_t rdx_1 = sx.q(*arg4)
int64_t rax_1
int64_t r9

if (rcx_1 != 0)
    r9 = sx.q(*(rcx_1 + 0x20))
    rax_1 = sx.q(*(arg1 + 0x20))

int32_t rax_4

if (rcx_1 == 0 || r9.d == rax_1.d)
    rax_4 = rdx_1.d
else
    rax_4 = (divs.dp.q(sx.o(rax_1 * rdx_1), r9)).d

*arg4 = rax_4
void* rax_5 = *(arg1 + 0x10)
int64_t rcx_2 = sx.q(*arg6)
int64_t rax_6
int64_t rdx_4

if (rax_5 != 0)
    rdx_4 = sx.q(*(rax_5 + 0x24))
    rax_6 = sx.q(*(arg1 + 0x24))

int32_t rax_9

if (rax_5 == 0 || rdx_4.d == rax_6.d)
    rax_9 = rcx_2.d
else
    rax_9 = (divs.dp.q(sx.o(rax_6 * rcx_2), rdx_4)).d

*arg6 = rax_9
return result
