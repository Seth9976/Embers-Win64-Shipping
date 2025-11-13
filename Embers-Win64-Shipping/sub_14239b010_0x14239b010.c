// 函数: sub_14239b010
// 地址: 0x14239b010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) != 0)
    int64_t* rcx = *(arg1 + 0x28)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = *(arg1 + 0x28)
        
        if (rcx_1 != 0)
            *(arg1 + 0x28) = sub_140a84c80(rcx_1, 0, 0)
        
        *(arg1 + 0x30) = 0

if (*(arg1 + 0x40) != 0)
    int64_t* rcx_2 = *(arg1 + 0x38)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = *(arg1 + 0x38)
        
        if (rcx_3 != 0)
            *(arg1 + 0x38) = sub_140a84c80(rcx_3, 0, 0)
        
        *(arg1 + 0x40) = 0

if (*(arg1 + 0x20) == 0)
    return 

int64_t* rcx_4 = *(arg1 + 0x18)

if (rcx_4 == 0)
    return 

(*(*rcx_4 + 0x38))(rcx_4, 0)
int64_t rcx_5 = *(arg1 + 0x18)

if (rcx_5 != 0)
    *(arg1 + 0x18) = sub_140a84c80(rcx_5, 0, 0)

*(arg1 + 0x20) = 0
