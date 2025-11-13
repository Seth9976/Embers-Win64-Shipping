// 函数: sub_142895740
// 地址: 0x142895740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_142890ec0(arg1)

if (arg2 == 0)
    *(rax + 0x1f0) = 0
    *(rax + 0x2e8) = sub_142890ed0(arg1)
    *(rax + 0x2a8) = sub_1406219d0(arg1)
    *(rax + 0x2ec) = 0x10
    *(rax + 0x2e0) = 0
else
    if (arg2 == 8)
        void* rax_5 = sub_142890ec0(arg4)
        return sub_1428d4830(rax_5 + 0x1f8, rax + 0x1f8, rax_5, rax_5 + 0xf8)
    
    if (arg2 == 9)
        if (arg3 - 1 u> 0xe)
            return 0
        
        *(rax + 0x2e8) = arg3
    else if (arg2 == 0x10)
        if (arg3 != *(rax + 0x2ec))
            return 0
        
        if (sub_142890eb0(arg1) == 0)
            return 0
        
        memcpy(arg4, rax + 0x2b0, arg3)
    else
        if (arg2 != 0x11)
            return 0xffffffff
        
        if (arg4 != 0)
            if (arg3 != *(rax + 0x2ec))
                return 0
            
            if (sub_142890eb0(arg1) != 0)
                return 0
            
            memcpy(rax + 0x2b0, arg4, arg3)
        else
            if (arg3 u> 0x10)
                return 0
            
            *(rax + 0x2ec) = arg3

return 1
