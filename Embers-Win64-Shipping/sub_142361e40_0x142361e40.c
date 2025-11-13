// 函数: sub_142361e40
// 地址: 0x142361e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)
int32_t result_1 = 0
int64_t rdx = sx.q(*(arg1 + 0x50))
int32_t result = rax - 1

if (rax - 1 s>= 0)
    result_1 = result

if (rdx.d s< result_1)
    int64_t rsi_1 = sx.q(*(arg1 + 0x50))
    int32_t rbx = result_1 - rdx.d
    int32_t rax_1 = rsi_1.d + rbx
    *(arg1 + 0x50) = rax_1
    
    if (rax_1 s> *(arg1 + 0x54))
        sub_1405a4cf0(arg1 + 0x48)
    
    return memset(*(arg1 + 0x48) + (rsi_1 << 2), 0, sx.q(rbx) << 2) __tailcall

if (rdx.d s> result_1)
    int32_t rsi_2 = rdx.d
    int32_t rsi_3 = rsi_2 - result_1
    
    if (rsi_2 != result_1)
        int32_t rax_4 = *(arg1 + 0x50)
        int32_t rcx_4 = rax_4 - result_1
        
        if (rcx_4 != rsi_3)
            int64_t r9_2 = *(arg1 + 0x48)
            memmove(r9_2 + (sx.q(result_1) << 2), r9_2 + (rdx << 2), (rcx_4 - rsi_3) << 2)
            rax_4 = *(arg1 + 0x50)
        
        *(arg1 + 0x50) = rax_4 - rsi_3
        return sub_1405dac90(arg1 + 0x48)

return result
