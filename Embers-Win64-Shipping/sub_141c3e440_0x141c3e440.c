// 函数: sub_141c3e440
// 地址: 0x141c3e440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *arg1
int32_t rax = 0

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
else
    rax = *(arg1 + 0x14)

uint64_t r9 = zx.q(rax)

if (0 == arg1[3].d)
    arg1[3].d = 0
else
    arg1[3].d

int32_t rax_2 = 0

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
else
    rax_2 = *(arg1 + 0x14)

int32_t rax_3 = 0

if (0 == arg1[3].d)
    arg1[3].d = 0
else
    rax_3 = arg1[3].d

int32_t rsi = arg1[2].d
int32_t rdi_1

if (rax_3 s< rax_2)
    rdi_1 = rax_3 + rsi - rax_2
else
    rdi_1 = rax_3 - rax_2

if (arg3 s<= rdi_1)
    rdi_1 = arg3

int32_t rsi_1 = rsi - r9.d

if (rdi_1 s<= rsi_1)
    rsi_1 = rdi_1

int64_t rbx = sx.q(rsi_1) << 2
memcpy(arg2, r14 + (r9 << 2), rbx.d)
memcpy(rbx + arg2, r14, (rdi_1 - rsi_1) << 2)
return zx.q(rdi_1)
