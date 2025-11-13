// 函数: sub_1421c7ac0
// 地址: 0x1421c7ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg2 + 0x28)
void* result = *(rcx + 0x30)
uint32_t rsi = zx.d(*(result + 0xa9))

if (rsi != 0)
    uint64_t rbx_1 = zx.q(*(arg2 + 0x38))
    
    if (rbx_1.d != 0)
        int64_t* rcx_1 = *(rcx + 0x48)
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x370))(rcx_1)
        
        if (rcx_1 == 0 || result.b != 0)
            int32_t* rbx_2 = rbx_1 + arg6
            int32_t var_28_1 = arg4.d
            int32_t* var_30_1 = rbx_2
            uint32_t var_38_1 = rsi
            result = (*(*arg1 + 0x348))(arg1, arg2, zx.q(arg3))
            *rbx_2 = arg5

return result
