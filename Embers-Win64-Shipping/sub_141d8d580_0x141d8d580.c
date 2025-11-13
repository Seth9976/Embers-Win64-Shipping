// 函数: sub_141d8d580
// 地址: 0x141d8d580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    int64_t* rcx = *(arg1 + 0x38)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = *(arg1 + 0x38)
        
        if (rcx_1 != 0)
            *(arg1 + 0x38) = sub_140a84c80(rcx_1, 0, 0)
        
        *(arg1 + 0x40) = 0

if (*(arg1 + 0x50) != 0)
    int64_t* rcx_2 = *(arg1 + 0x48)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = *(arg1 + 0x48)
        
        if (rcx_3 != 0)
            *(arg1 + 0x48) = sub_140a84c80(rcx_3, 0, 0)
        
        *(arg1 + 0x50) = 0

void* rcx_4 = data_143f5b298

if (rcx_4 == 0)
    return 

sub_1423ebf10(rcx_4, 0)
return sub_1423ebf20(data_143f5b298, 0) __tailcall
