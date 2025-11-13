// 函数: sub_1420a02a0
// 地址: 0x1420a02a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x28)

if (rdx != 0)
    int32_t* rax = *(arg1 + 0x38)
    
    if (rax != 0)
        int64_t rax_1 = sx.q(rax[0x13])
        
        if (rax_1 != neg.q(rdx))
            *(arg1 + 0x30) = *(rax_1 + rdx)
            return 

*(arg1 + 0x30) = 0
