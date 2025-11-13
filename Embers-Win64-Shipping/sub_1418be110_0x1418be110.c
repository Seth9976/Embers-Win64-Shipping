// 函数: sub_1418be110
// 地址: 0x1418be110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(*arg1 + 0x1558)
EnterCriticalSection(rdi + 0x18)
int64_t r15 = *(rdi + 0x40)
int64_t r12 = *(rdi + 0x48)

if (rdi != -0x18)
    LeaveCriticalSection(rdi + 0x18)

int64_t* rsi = *arg2
int32_t rbp = data_143efb2fc
int64_t* rdi_1 = rsi

if (rsi != 0)
    rsi[1].d += 1
    rdi_1 = rsi

EnterCriticalSection(&arg1[1])
int32_t rcx_3 = arg1[7].d
arg1[7].d = rcx_3 + 1

if (rcx_3 + 1 s> *(arg1 + 0x3c))
    sub_1407c3b60(&arg1[6])

int32_t result = 0
int32_t* rcx_6 = sx.q(rcx_3) * 0x38 + arg1[6]
*rcx_6 = 0xd
rcx_6[1] = rbp
*(rcx_6 + 8) = r12
*(rcx_6 + 0x10) = r15
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x20) = rdi_1

if (rsi != 0)
    rsi[1].d += 1
    rdi_1 = rsi

*(rcx_6 + 0x28) = 0
*(rcx_6 + 0x30) = 0

if (arg1 != -8)
    result = LeaveCriticalSection(&arg1[1])

if (rdi_1 != 0)
    result = rdi_1[1].d
    rdi_1[1].d -= 1
    
    if (result == 1)
        result = (**rsi)(rsi, 1)

int64_t* rcx_9 = *arg2

if (rcx_9 != 0)
    int32_t rbx_2 = rcx_9[1].d
    rcx_9[1].d -= 1
    
    if (rbx_2 == 1 && rcx_9 != 0)
        return (**rcx_9)(rcx_9, zx.q(rbx_2))

return result
