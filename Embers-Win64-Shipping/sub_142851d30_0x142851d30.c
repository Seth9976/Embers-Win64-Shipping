// 函数: sub_142851d30
// 地址: 0x142851d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x508)
uint64_t result

if (rax_1 == 0)
label_142851d62:
    result = *(arg1 + 0x5e8)
    int64_t rcx_3 = *(arg1 + 0x5f0)
    
    if (result u> rcx_3)
        return zx.q(rcx_3.d)
else
    char rcx = *(rax_1 + 0x1b0)
    
    if (rcx - 1 u> 3)
        goto label_142851d62
    
    result = zx.q(0x200 << (rcx - 1))
    
    if (*(arg1 + 0x5e8) u<= result)
        goto label_142851d62

return result
