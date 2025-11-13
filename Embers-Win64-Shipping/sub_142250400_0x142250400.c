// 函数: sub_142250400
// 地址: 0x142250400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x103)
    int64_t* rcx_1 = arg1[9]
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x260))(rcx_1)
        arg1[0xa].b = result.b

return result
