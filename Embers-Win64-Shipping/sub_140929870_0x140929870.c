// 函数: sub_140929870
// 地址: 0x140929870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x2e8)
int64_t rax = sx.q(*(arg1 + 0x318))
int32_t rsi = 0
int32_t r8 = 0

if (rax.d s> 0)
    void* r10_1 = *(arg1 + 0x310)
    int64_t rdx = 0
    int64_t* rax_1 = r10_1 + 0xb0
    
    do
        if (*rax_1 == arg2)
            rsi = *(sx.q(r8) * 0xe8 + r10_1 + 0xe0)
            break
        
        r8 += 1
        rdx += 1
        rax_1 = &rax_1[0x1d]
    while (rdx s< rax)

if (arg1 != -0x2e8)
    LeaveCriticalSection(arg1 + 0x2e8)

return zx.q(rsi)
