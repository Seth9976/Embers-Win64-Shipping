// 函数: sub_141dbcea0
// 地址: 0x141dbcea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x130)

if (result != 0)
    void* rcx = *(result + 0xc0)
    
    if (rcx != 0)
        void* rax = sub_140d21d80(rcx)
        result = sub_140d21d80(arg1)
        
        if (result != rax)
            jump(*(**(arg1 + 0x130) + 0x400))

return result
