// 函数: sub_140bcb6b0
// 地址: 0x140bcb6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2] == 0)
    int64_t arg_8 = 0
    sub_140bcaa40(arg1, &arg_8)
    arg1[2] = arg_8

if ((arg2.b & 2) == 0)
    if ((arg2.b & 1) == 0)
        sub_140af98a0("Unknown", 0x356, u"Unknown lock flag %i", zx.q(arg2))
        sub_140afbb40()
        return 0
    
    uint8_t rax_6 = (arg1[3].d u>> 0x11).b
    *(arg1 + 0x1c) = 1
    
    if ((rax_6 & 1) == 0)
        return arg1[2]
    
    int64_t* rcx = arg1[2]
    
    if (rcx != 0)
        int64_t result = *rcx
        
        if (result != 0)
            return result
        
        void* rax_8 = rcx[2]
        
        if (rax_8 != 0)
            return *(rax_8 + 8)
else
    uint8_t rax_3 = (arg1[3].d u>> 0x11).b
    *(arg1 + 0x1c) = 2
    
    if ((rax_3 & 1) == 0)
        return arg1[2]

return 0
