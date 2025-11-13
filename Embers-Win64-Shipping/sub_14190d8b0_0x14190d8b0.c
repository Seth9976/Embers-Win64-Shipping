// 函数: sub_14190d8b0
// 地址: 0x14190d8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    (*(*arg1 + 0x48))()
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    if ((*(*arg1 + 8))(arg1) != 0)
        return zx.q(*(arg1 + 0x64))
    
    if ((*(*arg1 + 0x10))(arg1) != 0)
        return zx.q(*(arg1 + 0x64))
    
    if ((*(*arg1 + 0x18))(arg1) != 0)
        return zx.q(*(arg1 + 0x64))
    
    int64_t rax_10
    int64_t r9_1
    rax_10, r9_1 = (*(*arg1 + 0x20))(arg1)
    
    if (rax_10 != 0)
        return zx.q(arg1[0xc].d)
    
    sub_140af98a0("Unknown", 0x6e0, u"Unknown RHI texture type", r9_1)
    sub_140afbb40()

return 0
