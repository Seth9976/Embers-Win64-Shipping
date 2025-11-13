// 函数: sub_141dc49d0
// 地址: 0x141dc49d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(*arg1 + 0xd0))()

if (result == 0)
    return result

if (*(arg1 + 0x5f) == 0)
    if (arg1[0x1e].b == 3)
        char rcx = *(arg1 + 0x5b)
        *(arg1 + 0x5f) = 1
        *(arg1 + 0x5b) = rcx | 1
        
        if ((rcx & 1) == 0)
            void* rax_3 = (*(*arg1 + 0x150))(arg1)
            
            if (rax_3 != 0)
                sub_14242c0c0(rax_3, arg1)
                sub_141dc4c00(arg1)
    
    arg1[0xb].b |= 8
    
    if (not((zx.o(0)).d f!= arg1[0x21].d))
        arg1[0x21].d = 0x3dcccccd

jump(*(*arg1 + 0x5e8))
