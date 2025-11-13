// 函数: sub_140928e60
// 地址: 0x140928e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x2e8)
int64_t rax = sx.q(*(arg1 + 0x318))
void* result = nullptr
int32_t r8 = 0

if (rax.d s> 0)
    void* rcx_1 = *(arg1 + 0x310)
    int64_t rdx = 0
    int64_t* rax_1 = rcx_1 + 0xb0
    
    do
        if (*rax_1 == arg2)
            result = sx.q(r8) * 0xe8 + rcx_1
            break
        
        r8 += 1
        rdx += 1
        rax_1 = &rax_1[0x1d]
    while (rdx s< rax)

if (arg1 != -0x2e8)
    LeaveCriticalSection(arg1 + 0x2e8)

return result
