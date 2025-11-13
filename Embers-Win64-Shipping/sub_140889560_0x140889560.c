// 函数: sub_140889560
// 地址: 0x140889560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != arg1 + 0x18)
    int64_t* rcx
    
    if (arg3[1].d != 0)
        rcx = *arg3
    
    if (arg3[1].d != 0 && rcx != 0)
        (*(*rcx + 0x40))(rcx, arg1 + 0x18)
    else if (*(arg1 + 0x20) != 0)
        int64_t* rcx_1 = *(arg1 + 0x18)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *(arg1 + 0x18)
            
            if (rcx_2 != 0)
                *(arg1 + 0x18) = sub_140a84c80(rcx_2, 0, 0)
            
            *(arg1 + 0x20) = 0

bool cond:0 = *(arg1 + 0x20) == 0
*arg2 = 0

if (not(cond:0))
    int64_t* rcx_3 = *(arg1 + 0x18)
    void arg_8
    
    if (rcx_3 != 0)
        *arg2 = *(*(*rcx_3 + 0x30))(rcx_3, &arg_8)

sub_140745b20(arg3)
return arg2
