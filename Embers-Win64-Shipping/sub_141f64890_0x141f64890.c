// 函数: sub_141f64890
// 地址: 0x141f64890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result = sub_141f162d0(arg1, arg2)
void* rcx = *(arg1 + 0x250)
int96_t var_18 = (*(arg1 - 0x10)).12

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0x130)
    
    if (rcx_1 != 0 && (var_18.d.d f!= 0f || var_18:4.d.d f!= 0f || not(var_18:8.d.d f== 0f)))
        result = *(arg1 + 0x25c)
        
        if ((result & 8) == 0)
            result = rcx_1[5].b
        else
            result u>>= 4
        
        if ((result & 1) != 0)
            return (*(*rcx_1 + 0x270))(rcx_1, arg2 + 0x70, arg1 - 0x30)

return result
