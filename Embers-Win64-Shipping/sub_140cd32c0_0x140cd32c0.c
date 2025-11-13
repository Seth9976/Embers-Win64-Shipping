// 函数: sub_140cd32c0
// 地址: 0x140cd32c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = *(arg1 + 8)
int32_t rdi = *(arg2 + 0xc)
int32_t rsi = *(*arg2 + 0x10)
char result = not.b(*(arg1 + 0x14))

if ((result & 1) != 0)
    if (rdi != 0)
        int32_t rax_6 = rbx[1].d
        int32_t r10_4 = arg2[1].d
        int32_t rcx_9 = rax_6 - r10_4
        
        if (rcx_9 != rdi)
            memmove(sx.q(r10_4 * rsi) + *rbx, sx.q((r10_4 + rdi) * rsi) + *rbx, (rcx_9 - rdi) * rsi)
            rax_6 = rbx[1].d
        
        rbx[1].d = rax_6 - rdi
        return sub_140ce4eb0(rbx, rsi)
else if (rdi != 0)
    int32_t rax_1 = rbx[1].d
    int32_t r10_1 = arg2[1].d
    int32_t rcx_1 = rax_1 - r10_1
    
    if (rcx_1 != rdi)
        void* r9_1 = *rbx
        
        if ((r9_1.b & 1) != 0)
            r9_1 = (r9_1 s>> 1) + rbx
        
        memmove(sx.q(r10_1 * rsi) + r9_1, sx.q((r10_1 + rdi) * rsi) + r9_1, (rcx_1 - rdi) * rsi)
        rax_1 = rbx[1].d
    
    rbx[1].d = rax_1 - rdi
    return sub_140ce4e10(rbx, rsi) __tailcall

return result
