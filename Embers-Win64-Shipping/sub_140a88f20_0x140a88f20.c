// 函数: sub_140a88f20
// 地址: 0x140a88f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x68))
uint64_t rdx = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x6c) != 0 || rdi.d u> 4)
        rdx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    int64_t* r9_1 = data_143ddb3f0
    int64_t rcx_1 = rdx * 0x18
    
    if (r9_1 != 0)
        rcx_1 = (*(*r9_1 + 0x38))(r9_1, rcx_1, 0)
    
    rdx = rcx_1 u/ 0x18
    
    if (rdi.d s> rdx.d)
        rdx = 0x7fffffff

*(arg1 + 0x6c) = rdx.d
return sub_140a88330(arg1, arg2, rdx.d, 0x18) __tailcall
