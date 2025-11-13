// 函数: sub_141f0e4f0
// 地址: 0x141f0e4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ede5c0(arg1)
char result = sub_141f4ac00(arg1)

if (result != 0)
    result = sub_141f4ac80(arg1)
    
    if (result != 0)
        void* rax = arg1[0x15]
        
        if (rax == 0)
            rax = sub_141ee69e0(arg1)
        
        jump(*(**(rax + 0x1b0) + 0x88))

return result
