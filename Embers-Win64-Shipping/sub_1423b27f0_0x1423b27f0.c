// 函数: sub_1423b27f0
// 地址: 0x1423b27f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg1 != 0)
    result = zx.d(*(arg1 + 0x3d))
    
    if ((result.b & 8) != 0 && (result.b & 2) == 0)
        int32_t rax_1 = (*(*arg1 + 0x270))()
        int64_t rdx_1 = *arg1
        
        if ((*(rdx_1 + 0x268))(arg1, rdx_1) s> rax_1)
            result.b = 1
            return result

result.b = 0
return result
