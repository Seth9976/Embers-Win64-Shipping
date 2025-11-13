// 函数: sub_141c37910
// 地址: 0x141c37910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c37670(arg1)
arg1[4].d = 0

if (*(arg1 + 0x24) s<= 0xffffffff)
    sub_1405c5510(&arg1[3], 0)

(*(*arg1 + 0x28))(arg1, &arg1[3])
uint32_t r8 = arg1[4].d
int64_t r14 = arg1[3]
int64_t rbp = arg1[9]

if (0 == *(arg1 + 0x5c))
    *(arg1 + 0x5c) = 0
else
    *(arg1 + 0x5c)

int32_t rax_2 = 0

if (0 == arg1[0xc].d)
    arg1[0xc].d = 0
else
    rax_2 = arg1[0xc].d

uint64_t rsi = zx.q(rax_2)
int32_t rax_3 = 0

if (0 == *(arg1 + 0x5c))
    *(arg1 + 0x5c) = 0
else
    rax_3 = *(arg1 + 0x5c)

int32_t rax_4 = 0

if (0 == arg1[0xc].d)
    arg1[0xc].d = 0
else
    rax_4 = arg1[0xc].d

int32_t rdi = arg1[0xb].d
uint32_t temp1 = modu.dp.d(0:(rax_3 - 1 + rdi - rax_4), rdi)
uint32_t r12 = temp1

if (r8 s<= temp1)
    r12 = r8

uint32_t rdi_1 = rdi - rsi.d

if (r12 s<= rdi_1)
    rdi_1 = r12

int64_t rbx = sx.q(rdi_1)
memcpy(rsi + rbp, r14, rbx.d)
memcpy(rbp, rbx + r14, r12 - rdi_1)
arg1[0xc].d
arg1[0xc].d = modu.dp.d(0:(r12 + rsi.d), arg1[0xb].d)

if (r12 s< 0)
    return sx.q(r12)

int32_t rax_13 = 0

if (0 == *(arg1 + 0x5c))
    *(arg1 + 0x5c) = 0
else
    rax_13 = *(arg1 + 0x5c)

int32_t rax_14 = 0

if (0 == arg1[0xc].d)
    arg1[0xc].d = 0
else
    rax_14 = arg1[0xc].d

int32_t rcx_7

if (rax_14 s< rax_13)
    rcx_7 = rax_14 + arg1[0xb].d - rax_13
else
    rcx_7 = rax_14 - rax_13

return zx.q(rcx_7)
