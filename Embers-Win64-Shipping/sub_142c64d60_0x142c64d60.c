// 函数: sub_142c64d60
// 地址: 0x142c64d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
int32_t rax
rax.b = arg2 == *(arg1 + 0x240)
uint64_t r10 = zx.q(rax)
int32_t* var_18 = &result_1
int64_t rax_1 = (*(arg1 + (r10 << 3) + 0x270))(arg3, zx.q(r10.d))
*arg4 = rax_1

if (rax_1 s< 0)
    int32_t result = result_1
    
    if (result == 0)
        return 0x37
    
    if (result != 0x51)
        return result
    
    *arg4 = 0

return 0
