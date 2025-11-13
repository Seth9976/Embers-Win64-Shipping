// 函数: sub_141402ac0
// 地址: 0x141402ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 8))
*(arg1 + 0xf70) = 0x22
*(arg1 + 0xf68) = 1
*(arg1 + 0xf6c) = 0

if (rdx.d s< 3)
    char rax_3
    int32_t rcx_5
    rax_3, rcx_5 = sub_1419a51c0((*U"1111")[rdx])
    *(arg1 + 0xf68) = sbb.d(rcx_5, rcx_5, rax_3 != 0) & 4
    return neg.b(rax_3)

int64_t rsi = data_143ec9a28
int64_t rcx
int64_t rdi

if (data_143de5480 == 0)
    rdi = 0
    rcx = 0
else
    uint32_t rax_1 = GetCurrentThreadId()
    rdx = zx.q(*(arg1 + 8))
    rdi = 0
    rcx.b = rax_1 != data_143de5470

int32_t rcx_1 = *(rsi + (rcx << 2))

if (rcx_1 == 0)
    *(arg1 + 0xf68) = 0
else if (rcx_1 == 1)
    *(arg1 + 0xf68) = 1
else if (rcx_1 == 2)
    *(arg1 + 0xf68) = 2

uint32_t result = sub_1413fad50((*U"1111")[sx.q(rdx.d)])

if (result.b != 0)
    *(arg1 + 0xf68) = 3
    *(arg1 + 0xf6c) = 1

if (*(arg1 + 0xf68) == 3)
    int64_t rsi_1 = data_143ec9b38
    
    if (data_143de5480 != 0)
        result = GetCurrentThreadId()
        rdi.b = result != data_143de5470
    
    if (*(rsi_1 + (rdi << 2)) == 0)
        *(arg1 + 0xf70) = 0x21

return result
