// 函数: sub_140a180f0
// 地址: 0x140a180f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0xc))
    *(arg1 + 0xc) = 0
    z = true
else
    *(arg1 + 0xc)
    z = false

if (z)
    int64_t* rsi_1 = *(arg1 + 0x10)
    int64_t rdi_1 = sx.q(rsi_1[1].d)
    
    if (arg3 s> rdi_1.d)
        rsi_1[1].d = arg3
        
        if (arg3 s> *(rsi_1 + 0xc))
            sub_1405daba0(rsi_1)
        
        memset(rdi_1 + *rsi_1, 0, sx.q(arg3 - rdi_1.d))
    else if (arg3 s< rdi_1.d && arg3 != rdi_1.d)
        rsi_1[1].d = arg3
    
    if (arg3 != 0)
        memcpy(**(arg1 + 0x10), arg2, arg3)
    
    *(arg1 + 0xc)
    *(arg1 + 0xc) = 1

return 0
