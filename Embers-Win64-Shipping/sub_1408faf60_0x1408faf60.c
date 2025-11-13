// 函数: sub_1408faf60
// 地址: 0x1408faf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result != 0 && *(result + 0x130) != 0)
    result = (*(*arg1 + 0x150))(arg1)
    void* const rbx_1
    
    if (result == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(result + 0x130)
    
    if (rbx_1 + 0x2a0 != arg2)
        int32_t r8_1 = *(rbx_1 + 0x2ac)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int64_t rdi_1 = *arg2
        *(rbx_1 + 0x2a8) = rsi_1.d
        
        if (rsi_1.d == 0 && r8_1 == 0)
            *(rbx_1 + 0x2ac) = rsi_1.d
            return result
        
        sub_1405a4b40(rbx_1 + 0x2a0, rsi_1.d, r8_1)
        return memcpy(*(rbx_1 + 0x2a0), rdi_1, (rsi_1 * 0x30).d)

return result
