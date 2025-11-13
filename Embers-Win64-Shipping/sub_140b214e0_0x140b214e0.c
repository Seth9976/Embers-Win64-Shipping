// 函数: sub_140b214e0
// 地址: 0x140b214e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a306e0(arg1, &(*U"{}[\nt")[3], &data_142d5a024, 0)
char result = sub_140a237d0(arg1, &data_142d5a024, 0)

if (result != 0)
    result = sub_140a237d0(arg1, &data_142e76608, 0)
    
    if (result == 0)
        result = sub_140a237d0(arg1, &data_142e76610, 0)
        
        if (result == 0)
            int32_t rax = arg1[1].d
            int32_t rcx_3 = rax - 2
            
            if (rax == 0)
                rcx_3 = -1
            
            *(*arg1 + (sx.q(rcx_3) << 1)) = 0
            return sub_140a36160(arg1) __tailcall

return result
