// 函数: sub_142396ab0
// 地址: 0x142396ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x388))
uint32_t rcx

if (rdi.d u> 8)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x38c) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    rcx = (sub_140a846a0(rax_1 * 0x70, 0) u/ 0x70).d
    
    if (rdi.d s> rcx)
        rcx = 0x7fffffff
else
    rcx = 8

*(arg1 + 0x38c) = rcx
int64_t r9 = *(arg1 + 0x380)

if (rcx u> 8)
    if (r9 == 0)
        if (rcx != 0)
            int64_t rax_8 = sub_140a84c80(0, sx.q(rcx) * 0x70, 0)
            *(arg1 + 0x380) = rax_8
            r9 = rax_8
        
        return memmove(r9, arg1, arg2 * 0x70) __tailcall
    
    *(arg1 + 0x380) = sub_140a84c80(r9, sx.q(rcx) * 0x70, 0)
else if (r9 != 0)
    memmove(arg1, r9, arg2 * 0x70)
    int64_t rcx_7 = *(arg1 + 0x380)
    
    if (rcx_7 != 0)
        *(arg1 + 0x380) = sub_140a84c80(rcx_7, 0, 0)
