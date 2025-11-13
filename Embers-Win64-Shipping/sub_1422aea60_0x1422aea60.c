// 函数: sub_1422aea60
// 地址: 0x1422aea60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 0x70) == 1)
    int64_t* rcx = *(arg1 + 0x78)
    
    if (((*((*(*rcx + 0x40))(rcx) + 0x28) u>> 5).b & 1) != 0)
        int64_t* rcx_1 = *(arg1 + 0x80)
        int64_t arg_8 = 0
        result = sub_1405948b0((*(*rcx_1 + 0x40))(rcx_1, zx.q(arg2), &arg_8))
        
        if (result == 0 || *(*(result + 0x28) + 0x108) s<= 0)
            result.b = 1
            return result

result.b = 0
return result
