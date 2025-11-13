// 函数: sub_1420e56a0
// 地址: 0x1420e56a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t i_1 = *(arg1 + 0x1fc)
int32_t i

if (i_1 s< *(arg1 + 0xa0))
    i = i_1
    
    do
        int64_t* rcx_1 = *(*(arg1 + 0x98) + (sx.q(i) << 3))
        
        if (rcx_1 != 0)
            rdi += rcx_1[0x35].d - *(rcx_1 + 0x1d4)
            (*(*rcx_1 + 0x4c8))(rcx_1, 0)
            i = *(arg1 + 0x1fc)
        
        i += 1
        *(arg1 + 0x1fc) = i
        
        if (rdi s> arg2)
            break
    while (i s< *(arg1 + 0xa0))
    
    if (i s< *(arg1 + 0xa0))
        i.b = 0
        return i

*(arg1 + 0x1fc) = 0
i.b = 1
return i
