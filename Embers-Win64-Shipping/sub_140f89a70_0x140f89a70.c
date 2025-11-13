// 函数: sub_140f89a70
// 地址: 0x140f89a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result

if (*(arg1 + 0x558) == 0)
label_140f89aaa:
    
    if (*(arg1 + 0x558) != 0)
        int64_t* rcx_1 = *(arg1 + 0x550)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *(arg1 + 0x550)
            
            if (rcx_2 != 0)
                *(arg1 + 0x550) = sub_140a84c80(rcx_2, 0, 0)
            
            *(arg1 + 0x558) = 0
    
    result = sub_14065da90(arg1 + 0x530, arg2)
    *(arg1 + 0x548) = 1
else
    int64_t* rcx = *(arg1 + 0x550)
    
    if (rcx == 0)
        goto label_140f89aaa
    
    result = (*(*rcx + 0x28))(rcx)
    
    if (result == 0)
        goto label_140f89aaa

return result
