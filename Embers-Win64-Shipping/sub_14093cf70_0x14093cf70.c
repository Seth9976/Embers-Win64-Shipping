// 函数: sub_14093cf70
// 地址: 0x14093cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx

if (*(arg1 + 0x14) == 0)
    rcx = sx.q(arg1[2].d)

int32_t rax

if (*(arg1 + 0x14) != 0 || (rcx + 4).d u> arg1[1].d)
    *(arg1 + 0x14) = 1
    rax.b = 1
else
    *(rcx + *arg1) = arg2[3]
    *(sx.q(arg1[2].d) + *arg1 + 1) = arg2[2]
    *(sx.q(arg1[2].d) + *arg1 + 2) = arg2[1]
    *(sx.q(arg1[2].d) + *arg1 + 3) = *arg2
    arg1[2].d += 4
    rax = zx.d(*(arg1 + 0x14))

int64_t rcx_4

if (rax.b == 0)
    rcx_4 = sx.q(arg1[2].d)

if (rax.b != 0 || (rcx_4 + 4).d u> arg1[1].d)
    *(arg1 + 0x14) = 1
    rax.b = 1
else
    *(rcx_4 + *arg1) = arg2[7]
    *(sx.q(arg1[2].d) + *arg1 + 1) = arg2[6]
    *(sx.q(arg1[2].d) + *arg1 + 2) = arg2[5]
    *(sx.q(arg1[2].d) + *arg1 + 3) = arg2[4]
    arg1[2].d += 4
    rax = zx.d(*(arg1 + 0x14))

int64_t rcx_9

if (rax.b == 0)
    rcx_9 = sx.q(arg1[2].d)

if (rax.b != 0 || (rcx_9 + 4).d u> arg1[1].d)
    *(arg1 + 0x14) = 1
    rax.b = 1
else
    *(rcx_9 + *arg1) = arg2[0xb]
    *(sx.q(arg1[2].d) + *arg1 + 1) = arg2[0xa]
    *(sx.q(arg1[2].d) + *arg1 + 2) = arg2[9]
    *(sx.q(arg1[2].d) + *arg1 + 3) = arg2[8]
    arg1[2].d += 4
    rax = zx.d(*(arg1 + 0x14))

if (rax.b == 0)
    int64_t rcx_14 = sx.q(arg1[2].d)
    
    if ((rcx_14 + 4).d u<= arg1[1].d)
        *(rcx_14 + *arg1) = arg2[0xf]
        *(sx.q(arg1[2].d) + *arg1 + 1) = arg2[0xe]
        *(sx.q(arg1[2].d) + *arg1 + 2) = arg2[0xd]
        *(sx.q(arg1[2].d) + *arg1 + 3) = arg2[0xc]
        arg1[2].d += 4
        return arg1

*(arg1 + 0x14) = 1
return arg1
