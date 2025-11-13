// 函数: sub_140f6d380
// 地址: 0x140f6d380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1406611a0(arg1) == 0)
    if (*(arg1 + 0x2d0) == 0)
    label_140f6d3b9:
        
        if (*(arg1 + 0x5a8) == 0)
        label_140f6d3dc:
            
            if (*(arg1 + 0x608) == 0)
            label_140f6d406:
                
                if (sub_140f07300(arg1 + 0x610) == 0 && sub_140f7b290(arg1 + 0x630) == 0
                        && sub_140f7b290(arg1 + 0x658) == 0 && sub_140f07300(arg1 + 0x680) == 0
                        && sub_140f7b2c0(arg1 + 0x6a0) == 0 && sub_140f07360(arg1 + 0x6d0) == 0
                        && sub_140f07360(arg1 + 0x6e8) == 0 && sub_140f07360(arg1 + 0x700) == 0
                        && sub_140f7b290(arg1 + 0x718) == 0 && sub_140f07360(arg1 + 0x740) == 0
                        && sub_140f07360(arg1 + 0x758) == 0)
                    char result = sub_140f07360(arg1 + 0x770)
                    
                    if (result == 0)
                        return result
            else
                int64_t* rcx_2 = *(arg1 + 0x600)
                
                if (rcx_2 == 0)
                    goto label_140f6d406
                
                if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                    goto label_140f6d406
        else
            int64_t* rcx_1 = *(arg1 + 0x5a0)
            
            if (rcx_1 == 0)
                goto label_140f6d3dc
            
            if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
                goto label_140f6d3dc
    else
        int64_t* rcx = *(arg1 + 0x2c8)
        
        if (rcx == 0)
            goto label_140f6d3b9
        
        if ((*(*rcx + 0x28))(rcx) == 0)
            goto label_140f6d3b9

return 1
