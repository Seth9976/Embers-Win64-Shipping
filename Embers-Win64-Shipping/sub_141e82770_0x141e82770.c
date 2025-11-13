// 函数: sub_141e82770
// 地址: 0x141e82770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int64_t* rdi = *(arg1 + 0xc0)
int64_t rsi = 0
void* result = &rdi[sx.q(*(arg1 + 0xc8))]
uint64_t r14_1 = sx.q(*(arg1 + 0xc8)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx_1 = *rdi
        int64_t rax_1 = sx.q(rcx_1[2].d)
        
        if (rax_1.d != 0xffffffff)
            void* rdx_1 = rcx_1[1]
            
            if (rax_1.d s< *(rdx_1 + 0x18))
                *((rax_1 << 5) + *(rdx_1 + 0x10)) = *rcx_1
        
        result = j_sub_140a74f90(rcx_1)
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

*(arg1 + 0xc8) = 0

if (*(arg1 + 0xcc) s<= 0xffffffff)
    result = sub_1405c5570(arg1 + 0xc0, 0)

if (arg1 == -0xd0)
    return result

return LeaveCriticalSection(arg1 + 0xd0)
