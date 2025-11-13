// 函数: sub_142361fb0
// 地址: 0x142361fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x50))
int64_t rbx = sx.q(*(arg1 + 0x30))

if (result.d s< rbx.d)
    int64_t rsi_1 = sx.q(*(arg1 + 0x50))
    int32_t rbx_1 = rbx.d - result.d
    int32_t rax = rsi_1.d + rbx_1
    *(arg1 + 0x50) = rax
    
    if (rax s> *(arg1 + 0x54))
        sub_1406105e0(arg1 + 0x48)
    
    return memset(*(arg1 + 0x48) + (rsi_1 << 2), 0, sx.q(rbx_1) << 2) __tailcall

if (result.d s> rbx.d)
    int32_t rsi_2 = result.d
    int32_t rsi_3 = rsi_2 - rbx.d
    
    if (rsi_2 != rbx.d)
        int32_t rcx_3 = *(arg1 + 0x50)
        int32_t rdx_4 = rcx_3 - rbx.d
        
        if (rdx_4 != rsi_3)
            int64_t r9_2 = *(arg1 + 0x48)
            memmove(r9_2 + (rbx << 2), r9_2 + (result << 2), (rdx_4 - rsi_3) << 2)
            rcx_3 = *(arg1 + 0x50)
        
        *(arg1 + 0x50) = rcx_3 - rsi_3
        return sub_1405dac90(arg1 + 0x48)

return result
