// 函数: sub_142bf35f0
// 地址: 0x142bf35f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
*arg4 = 0
arg4[1] = 0
void* r10 = *(rcx + 0x40)
int64_t var_18 = *(r10 + 0x78)
int32_t result = (*(r10 + 0x188))(arg5, *(rcx + 0x48))

if (result == 0)
    return result

void* rcx_1 = *(arg1 + 0x10)
int64_t rdx_1 = sx.q(*arg4)
int64_t rcx_2
int64_t r8

if (rcx_1 != 0)
    r8 = sx.q(*(rcx_1 + 0x20))
    rcx_2 = sx.q(*(arg1 + 0x20))

int32_t rax_4

if (rcx_1 == 0 || r8.d == rcx_2.d)
    rax_4 = rdx_1.d
else
    rax_4 = (divs.dp.q(sx.o(rcx_2 * rdx_1), r8)).d

*arg4 = rax_4
void* rax_5 = *(arg1 + 0x10)
int64_t rcx_3 = sx.q(*(arg4 + 4))
int64_t rax_6
int64_t rdx_4

if (rax_5 != 0)
    rdx_4 = sx.q(*(rax_5 + 0x24))
    rax_6 = sx.q(*(arg1 + 0x24))

int32_t rax_9

if (rax_5 == 0 || rdx_4.d == rax_6.d)
    rax_9 = rcx_3.d
else
    rax_9 = (divs.dp.q(sx.o(rax_6 * rcx_3), rdx_4)).d

*(arg4 + 4) = rax_9
void* rax_10 = *(arg1 + 0x10)
int64_t rcx_5 = sx.q(arg4[1].d)
int64_t rax_11
int64_t rdx_7

if (rax_10 != 0)
    rdx_7 = sx.q(*(rax_10 + 0x20))
    rax_11 = sx.q(*(arg1 + 0x20))

int32_t rax_14

if (rax_10 == 0 || rdx_7.d == rax_11.d)
    rax_14 = rcx_5.d
else
    rax_14 = (divs.dp.q(sx.o(rax_11 * rcx_5), rdx_7)).d

arg4[1].d = rax_14
void* rax_15 = *(arg1 + 0x10)
int64_t rcx_7 = sx.q(*(arg4 + 0xc))

if (rax_15 != 0)
    int64_t rdx_10 = sx.q(*(rax_15 + 0x24))
    int64_t rax_16 = sx.q(*(arg1 + 0x24))
    
    if (rdx_10.d != rax_16.d)
        *(arg4 + 0xc) = (divs.dp.q(sx.o(rax_16 * rcx_7), rdx_10)).d
        return zx.q(result)

*(arg4 + 0xc) = rcx_7.d
return result
