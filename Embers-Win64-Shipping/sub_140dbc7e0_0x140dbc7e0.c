// 函数: sub_140dbc7e0
// 地址: 0x140dbc7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xe8))
uint64_t rcx = 4

if (rdi.d u> 4)
    if (*(arg1 + 0xec) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rcx = sub_140a846a0(rcx * 0x38, 0) u/ 0x38
    
    if (rdi.d s> rcx.d)
        rcx = 0x7fffffff

*(arg1 + 0xec) = rcx.d
int64_t r9 = *(arg1 + 0xe0)

if (rcx.d u> 4)
    if (r9 == 0)
        if (rcx.d != 0)
            int64_t rax_6 = sub_140a84c80(0, sx.q(rcx.d) * 0x38, 0)
            *(arg1 + 0xe0) = rax_6
            r9 = rax_6
        
        return memmove(r9, arg1, arg2 * 0x38) __tailcall
    
    *(arg1 + 0xe0) = sub_140a84c80(r9, sx.q(rcx.d) * 0x38, 0)
else if (r9 != 0)
    memmove(arg1, r9, arg2 * 0x38)
    int64_t rcx_8 = *(arg1 + 0xe0)
    
    if (rcx_8 != 0)
        *(arg1 + 0xe0) = sub_140a84c80(rcx_8, 0, 0)
