// 函数: sub_140e62950
// 地址: 0x140e62950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr

if (arg1[3].d == 0)
label_140e6298f:
    
    if (arg1[1].d != 0)
        int64_t* rcx_2 = *arg1
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            if (arg1[1].d != 0)
                rdi = *arg1
            
            jump(*(*rdi + 0x50))
else
    int64_t* rcx = arg1[2]
    
    if (rcx == 0)
        goto label_140e6298f
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140e6298f
    
    int64_t* rcx_1
    
    if (arg1[3].d == 0)
        rcx_1 = nullptr
    else
        rcx_1 = arg1[2]
    
    if ((*(*rcx_1 + 0x48))(rcx_1) != 0)
        goto label_140e6298f

return 0
