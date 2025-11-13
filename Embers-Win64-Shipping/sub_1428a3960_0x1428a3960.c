// 函数: sub_1428a3960
// 地址: 0x1428a3960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0 && sub_1406938b0(arg1) == 0x198)
    void* rax_3 = sub_142891590(sub_142896700(arg1))
    
    if (rax_3 != 0)
        int32_t rax_4 = sub_140611e80(rax_3)
        
        if (rax_4 != 0x2cb)
            if (rax_4 != 0x19f)
                return 0x3a
            
            if (arg2 == 0xffffffff || arg2 == 0x31a)
                if ((*arg3 & 0x10000) != 0)
                    return 0
                
                return 0x3c
        else if (arg2 == 0xffffffff || arg2 == 0x31b)
            int32_t rax_5 = *arg3
            
            if (not(test_bit(rax_5, 0x11)))
                return 0x3c
            
            *arg3 = rax_5 & 0xfffeffff
            return 0
        
        return 0x3b

return 0x39
