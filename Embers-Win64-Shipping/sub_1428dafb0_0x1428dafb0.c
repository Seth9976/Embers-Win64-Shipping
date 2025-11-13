// 函数: sub_1428dafb0
// 地址: 0x1428dafb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    int64_t rax_2
    
    if (arg3 != 0xffffffff && arg1[1] == 0)
        rax_2 = sub_1428c3640()
        arg1[1] = rax_2
    
    if (arg3 == 0xffffffff || arg1[1] != 0 || rax_2 != 0)
        sub_1428cd400(*arg1)
        *arg1 = arg2
        
        if (arg3 != 0)
            int32_t* rcx_1 = arg1[1]
            
            if (arg3 == 0xffffffff)
                sub_1428c3620(rcx_1)
                arg1[1] = 0
                return zx.q(arg3 + 2)
            
            sub_1428cd2e0(rcx_1, arg3, arg4)
        
        return 1

return 0
