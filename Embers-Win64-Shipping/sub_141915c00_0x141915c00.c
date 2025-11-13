// 函数: sub_141915c00
// 地址: 0x141915c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(*(arg2 + 0x2c))
int32_t rbx = 0
int32_t rdi = 0

if (r10 == 0)
    rdi = data_1439c7494
else if (r10 == 1)
    rdi = data_1439c74a0 + data_1439c749c + data_1439c7494
else if (r10 == 2)
    rdi = data_1439c74a4 + data_1439c74a0 + data_1439c749c + data_1439c7494
else if (r10 != 3 && r10 == 4)
    rdi = data_1439c749c + data_1439c7494

void* const rsi_1

if (arg4 == 0)
    rsi_1 = nullptr
else
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rsi_1 = *(arg4 + 0x20)

int32_t rbp = 0
int32_t r14 = 0x8c2a
int32_t r15 = -1

if (rsi_1 != 0)
    rbp = *(rsi_1 + 0x10)
    r14 = *(rsi_1 + 0x14)
    r15 = *(rsi_1 + 0x20)
    sub_141917ad0(arg1 - 0x18, rsi_1)

int64_t rax_1 = *(arg1 + 0x138)
int64_t rdx_1 = sx.q(rdi + arg3) * 5
*(rax_1 + (rdx_1 << 3)) = 0
*(rax_1 + (rdx_1 << 3) + 8) = rsi_1
*(rax_1 + (rdx_1 << 3) + 0x10) = r14
*(rax_1 + (rdx_1 << 3) + 0x14) = rbp
*(rax_1 + (rdx_1 << 3) + 0x18) = r15
*(rax_1 + (rdx_1 << 3) + 0x1c) = 1
*(rax_1 + (rdx_1 << 3) + 0x20) = 0
uint32_t rcx_2 = zx.d(*(arg2 + 0x2c))

if (rcx_2 == 0)
    rbx = data_1439c7494
else if (rcx_2 == 1)
    rbx = data_1439c74a0 + data_1439c749c + data_1439c7494
else if (rcx_2 == 2)
    rbx = data_1439c74a4 + data_1439c74a0 + data_1439c749c + data_1439c7494
else if (rcx_2 != 3 && rcx_2 == 4)
    rbx = data_1439c749c + data_1439c7494

int64_t result = *(arg1 + 0x140)
*(result + (sx.q(rbx + arg3) << 3)) = *(arg1 + 0x888)
return result
