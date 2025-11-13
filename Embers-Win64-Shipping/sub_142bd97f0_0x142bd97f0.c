// 函数: sub_142bd97f0
// 地址: 0x142bd97f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1].d

if (result == 0)
    uint64_t rax = zx.q(arg1[5].d)
    int64_t rdi_1 = *arg1
    
    if (rax.d != 0)
        *(arg1[6] + rax * 0x18 - 8) = arg2
    
    result = sub_142bda240(&arg1[7], rdi_1)
    
    if (result == 0)
        uint64_t rax_2 = zx.q(arg1[0xb].d)
        
        if (rax_2.d != 0)
            *(arg1[0xc] + rax_2 * 0x18 - 8) = arg2
        
        return sub_142bda240(&arg1[0xd], rdi_1)

return result
