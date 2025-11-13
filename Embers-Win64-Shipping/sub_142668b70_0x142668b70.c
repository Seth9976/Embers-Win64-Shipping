// 函数: sub_142668b70
// 地址: 0x142668b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[0x7f].d
int32_t result = r8 u>> 2 & 1
uint64_t r9 = zx.q(arg2)

if (result != r9.d)
    result = (r9 << 2).d | (r8 & 0xfffffffb)
    arg1[0x7f].d = result
    
    if (arg2 == 0 && arg1[0x5f].d s> 0)
        result = (*(*arg1 + 0x6b8))(arg1, &arg1[0x5e])
        arg1[0x5f].d = 0
        
        if (*(arg1 + 0x2fc) != 0)
            return sub_1405a51b0(&arg1[0x5e], 0) __tailcall

return result
