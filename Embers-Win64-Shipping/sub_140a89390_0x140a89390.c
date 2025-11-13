// 函数: sub_140a89390
// 地址: 0x140a89390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x328))
uint32_t r10

if (rdi.d u> 0x64)
    int64_t r10_1 = 4
    
    if (*(arg1 + 0x32c) != 0 || rdi.d u> 4)
        r10_1 = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    int64_t* rcx = data_143ddb3f0
    int64_t r10_3 = r10_1 << 3
    
    if (rcx != 0)
        r10_3 = (*(*rcx + 0x38))(rcx, r10_3, 0)
    
    r10 = (r10_3 u>> 3).d
    
    if (rdi.d s> r10)
        r10 = 0x7fffffff
else
    r10 = 0x64

*(arg1 + 0x32c) = r10
return sub_140a88560(arg1, arg2, r10, 8) __tailcall
