// 函数: sub_142a2a880
// 地址: 0x142a2a880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1164)

if (rax != 2)
    return rax

int64_t rbp_1 = sx.q(sub_142a322f0(arg1, arg2))
int32_t rsi_1 = 0
uint32_t rbx_4 = (zx.d(*(*(arg1 + 0x1168) + rbp_1 + 0x78f)) * (arg3[1].d - 1) + 0x100) u>> 8

if (*(arg3 + 0xc) s< 0)
    sub_142a23140(arg3)

int64_t r8 = *arg3
uint64_t rcx_2 = zx.q(rbx_4) << 0x38

if (r8 u>= rcx_2)
    rsi_1 = 1
    rbx_4 = arg3[1].d - rbx_4
    r8 -= rcx_2

uint32_t rdx = zx.d(*(zx.q(rbx_4) + &data_143603f00))
*(arg3 + 0xc) -= rdx
arg3[1].d = rbx_4 << rdx.b
*arg3 = r8 << rdx.b
int64_t rdx_1 = *(arg2 + 0x188)

if (rdx_1 != 0)
    int64_t rcx_5 = zx.q(rsi_1) + (rbp_1 << 1)
    *(rdx_1 + (rcx_5 << 2) + 0x30f0) += 1

return rsi_1
