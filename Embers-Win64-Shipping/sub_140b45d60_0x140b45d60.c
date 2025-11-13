// 函数: sub_140b45d60
// 地址: 0x140b45d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x18)

if (rax != arg2)
    if (rax != 0xffffffff)
        rax = sub_140b3b080(arg1)
    
    arg3 = 0
    *(arg1 + 0x18) = arg2
    *(arg1 + 0x34) = 1

uint32_t rcx = zx.d(arg3)

if (arg3 == 0)
    *(arg1 + 0x20) = arg4
else
    if (rcx == 1)
        int32_t rax_2 = *(arg1 + 0x20)
        
        if (arg4 s<= rax_2)
            rax_2 = arg4
        
        *(arg1 + 0x20) = rax_2
        return rax_2
    
    if (rcx == 2)
        int32_t rax_1 = *(arg1 + 0x20)
        
        if (arg4 s>= rax_1)
            rax_1 = arg4
        
        *(arg1 + 0x20) = rax_1
        return rax_1
    
    if (rcx == 3)
        *(arg1 + 0x20) += arg4

return rax
