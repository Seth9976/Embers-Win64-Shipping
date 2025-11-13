// 函数: sub_142b50810
// 地址: 0x142b50810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_8 = *arg1

if (rax_8 != 0)
    char rdx_1 = arg1[1]
    
    if (rdx_1 != 0 && arg1[2] == 0)
        if (rax_8 == 0x6c)
            if (rdx_1 == 0x67)
                return 1
            
            if (rdx_1 == 0x73)
                return 2
            
            if (rdx_1 == 0x64)
                return 3
            
            return 0xffffffff
        
        if (rax_8 == 0x73)
            if (rdx_1 == 0x67)
                return 4
            
            if (rdx_1 == 0x73)
                return 5
            
            if (rdx_1 == 0x64)
                return 6
            
            return 0xffffffff
        
        if (rax_8 == 0x65 && rdx_1 == 0x63)
            return 0

return 0xffffffff
