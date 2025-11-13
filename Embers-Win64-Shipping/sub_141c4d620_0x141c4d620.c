// 函数: sub_141c4d620
// 地址: 0x141c4d620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
*arg1 = r8

if (r8 != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == *(r8 + 8))
        *(r8 + 8) = 0
        z_1 = true
    else
        rax_1 = *(r8 + 8)
        z_1 = false
    
    if (z_1)
    label_141c4d665:
        *arg1 = 0
    else
        while (true)
            bool z_2
            
            if (rax_1 == *(r8 + 8))
                *(r8 + 8) = rax_1 + 1
                z_2 = true
            else
                *(r8 + 8)
                z_2 = false
            
            if (z_2)
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == *(r8 + 8))
                *(r8 + 8) = 0
                z_3 = true
            else
                rax_1 = *(r8 + 8)
                z_3 = false
            
            if (z_3)
                goto label_141c4d665
    
    int64_t* rcx_1 = *arg2
    int32_t rax_3 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (rax_3 == 1 && rcx_1 != 0)
        (*(*rcx_1 + 8))(rcx_1, 1)
    
    *arg2 = 0

return arg1
