// 函数: sub_1420d8fd0
// 地址: 0x1420d8fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420d8e50(arg1, arg2)
*arg1 = &data_1432c2918
char rax = *(arg1 + 0xba)

if ((rax & 8) == 0)
    *(arg1 + 0xba) = rax | 8
    
    if (sub_140d23dc0(arg1, 0x30) == 0)
        void* rcx_1 = arg1[4]
        
        if (rcx_1 != 0)
            sub_14244a940(rcx_1, arg1)

return arg1
