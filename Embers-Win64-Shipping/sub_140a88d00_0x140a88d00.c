// 函数: sub_140a88d00
// 地址: 0x140a88d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x88))
uint64_t r10 = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x8c) != 0 || rdi.d u> 4)
        r10 = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    int64_t* rcx = data_143ddb3f0
    int64_t r10_2 = r10 << 5
    
    if (rcx != 0)
        r10_2 = (*(*rcx + 0x38))(rcx, r10_2, 0)
    
    r10 = r10_2 u>> 5
    
    if (rdi.d s> r10.d)
        r10 = 0x7fffffff

*(arg1 + 0x8c) = r10.d
return sub_140a88220(arg1, arg2, r10.d, 0x20) __tailcall
