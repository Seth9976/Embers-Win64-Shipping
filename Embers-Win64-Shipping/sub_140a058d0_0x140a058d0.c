// 函数: sub_140a058d0
// 地址: 0x140a058d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0

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

void* const rcx_3 = *(arg1 + 0x10)

if (rcx_3 != 0)
    int32_t rax_4 = *(rcx_3 + 8)
    
    if (rax_4 != 0)
        *(rcx_3 + 8) = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rcx_3 = nullptr
    
    if (rcx_3 != 0)
        rsi = *(arg1 + 8)

*arg2 = rsi
arg2[1] = rcx_3
sub_140745b20(arg3)
return arg2
