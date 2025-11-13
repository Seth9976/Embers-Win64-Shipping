// 函数: sub_140eed1d0
// 地址: 0x140eed1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x37].d == 0)
label_140eed1fc:
    
    if (arg1[0x34].d == 0)
    label_140eed21f:
        
        if (arg1[0x3e].d == 0)
        label_140eed248:
            
            if ((*(*arg1 + 0x1a0))(arg1) == 0 && sub_140f6cfd0(arg1[0x58]) == 0)
                if (arg1[0x65].d == 0)
                label_140eed290:
                    
                    if (sub_140f07330(&arg1[0x66]) == 0 && sub_140f07300(&arg1[0x6e]) == 0
                            && sub_140f07360(&arg1[0x72]) == 0 && sub_140f07360(&arg1[0x75]) == 0)
                        if (arg1[0x94].d == 0)
                            return 0
                        
                        int64_t* rcx_10 = arg1[0x93]
                        
                        if (rcx_10 == 0)
                            return 0
                        
                        if ((*(*rcx_10 + 0x28))(rcx_10) == 0)
                            return 0
                else
                    int64_t* rcx_5 = arg1[0x64]
                    
                    if (rcx_5 == 0)
                        goto label_140eed290
                    
                    if ((*(*rcx_5 + 0x28))(rcx_5) == 0)
                        goto label_140eed290
        else
            int64_t* rcx_2 = arg1[0x3d]
            
            if (rcx_2 == 0)
                goto label_140eed248
            
            if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                goto label_140eed248
    else
        int64_t* rcx_1 = arg1[0x33]
        
        if (rcx_1 == 0)
            goto label_140eed21f
        
        if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            goto label_140eed21f
else
    int64_t* rcx = arg1[0x36]
    
    if (rcx == 0)
        goto label_140eed1fc
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140eed1fc

return 1
