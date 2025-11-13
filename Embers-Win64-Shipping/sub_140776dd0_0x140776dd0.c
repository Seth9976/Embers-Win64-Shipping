// 函数: sub_140776dd0
// 地址: 0x140776dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x57c) &= 0xfffffff7
uint64_t result = zx.q(zx.d(arg2) << 3)
*(arg1 + 0x57c) |= result.d

if (arg2 == 0)
    if (*(arg1 + 0x5b0) != 0xffffffff)
        void* rax_1 = *(arg1 + 0xa8)
        
        if (rax_1 == 0)
            rax_1 = sub_141ee69e0(arg1)
        
        result = sub_140865dd0(rax_1)
        
        if (result != 0)
            result = sub_14086a150(result, arg1)
    
    *(arg1 + 0x57c) &= 0xffffffef
    *(arg1 + 0x5b0) = 0xffffffff

return result
