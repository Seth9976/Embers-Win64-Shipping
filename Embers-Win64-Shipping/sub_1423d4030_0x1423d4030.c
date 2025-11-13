// 函数: sub_1423d4030
// 地址: 0x1423d4030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x1a0)

if (rax != 0)
    rax = *(rax + 0x30)
    
    if (rax != 0)
        int64_t* rcx = *(rax + 0x88)
        
        if (rcx != 0)
            sub_14213f9e0(rcx)
            sub_1423d8550(arg2, *(*(*(arg2 + 0x1a0) + 0x30) + 0x190))
            void* rax_2 = *(arg2 + 0x1a0)
            *(rax_2 + 0x30) = 0
            *(arg2 + 0x1a0) = 0
            return rax_2

*(arg2 + 0x1a0) = 0
return rax
