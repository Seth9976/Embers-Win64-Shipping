// 函数: sub_141f3cbf0
// 地址: 0x141f3cbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0xb8)

if (rax == 0)
    rax = *(arg1 + 0xa8)
    
    if (rax != 0)
    label_141f3cc23:
        int64_t rcx_3 = *(rax + 0x100)
        
        if (rcx_3 != 0)
            return rcx_3
        
        return sub_14243ab60(rax)
    
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        goto label_141f3cc23

return rax
