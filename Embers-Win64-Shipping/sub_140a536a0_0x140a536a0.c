// 函数: sub_140a536a0
// 地址: 0x140a536a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = 1

if (*(arg1 + 0x20) != 0)
    char rax_1 = *(arg1 + 0x63)
    void* arg_10 = arg1
    char arg_8 = rax_1
    void* rax_2 = *(arg1 + 0x30)
    void* rcx = arg1 + 0x40
    
    if (rax_2 != 0)
        rcx = rax_2
    
    (*(arg1 + 0x20))((*(*rcx + 8))(rcx), &arg_8, &arg_10)

*(arg1 + 0x61) = 1
