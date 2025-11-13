// 函数: sub_141c437f0
// 地址: 0x141c437f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *arg1

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
else
    *(arg1 + 0x14)

int32_t rax_2 = 0

if (0 == arg1[3].d)
    arg1[3].d = 0
else
    rax_2 = arg1[3].d

uint64_t rbp = zx.q(rax_2)
int32_t rax_3 = 0

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
else
    rax_3 = *(arg1 + 0x14)

int32_t rax_4 = 0

if (0 == arg1[3].d)
    arg1[3].d = 0
else
    rax_4 = arg1[3].d

int32_t rdi = arg1[2].d
uint32_t temp1 = modu.dp.d(0:(rax_3 - 1 + rdi - rax_4), rdi)
uint32_t rsi = temp1

if (arg3 s<= temp1)
    rsi = arg3

uint32_t rdi_1 = rdi - rbp.d

if (rsi s<= rdi_1)
    rdi_1 = rsi

int64_t rbx = sx.q(rdi_1) << 2
memcpy(r14 + (rbp << 2), arg2, rbx.d)
memcpy(r14, rbx + arg2, (rsi - rdi_1) << 2)
arg1[3].d
arg1[3].d = modu.dp.d(0:(rsi + rbp.d), arg1[2].d)
return zx.q(rsi)
