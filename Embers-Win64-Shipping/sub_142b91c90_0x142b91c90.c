// 函数: sub_142b91c90
// 地址: 0x142b91c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = *(arg1 + 0x88)
    
    if (rax_1 != 0 && *(rax_1 + 8) == 0x756e6963)
        void* rax_2 = sub_142b98790(arg1, arg2)
        
        if (rax_2 != 0)
            *(arg1 + 0x88)
            jump(*(*(rax_2 + 0x10) + 0x28))

return 0
