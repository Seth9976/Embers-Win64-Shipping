// 函数: sub_141998480
// 地址: 0x141998480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg5
int64_t result = 0
int32_t rbx = 0

if (r14 != 0)
    int64_t r9 = sx.q(arg4) * 5
    int32_t r8 = (&data_1439c85f4)[r9 * 2]
    uint32_t rdi_1 = *((r9 << 3) + 0x1439c85e8)
    uint32_t rsi_1 = *((r9 << 3) + &data_1439c85ec)
    uint32_t rbp_1 = *((r9 << 3) + 0x1439c85f0)
    arg5 = r8
    
    do
        char rcx = rbx.b
        uint32_t rdx_1 = arg1 u>> rcx
        uint32_t r9_2 = arg2 u>> rcx
        uint32_t r10_2 = arg3 u>> rcx
        uint32_t rax_2 = rdi_1
        
        if (rdx_1 u>= rdi_1)
            rax_2 = rdx_1
        
        uint32_t rax_6 = rsi_1
        
        if (r9_2 u>= rsi_1)
            rax_6 = r9_2
        
        uint32_t rcx_2 = rbp_1
        
        if (r10_2 u>= rbp_1)
            rcx_2 = r10_2
        
        rbx += 1
        result += zx.q(r8 * divu.dp.d(0:(rax_2 - 1 + rdi_1), rdi_1))
            * zx.q(divu.dp.d(0:(rax_6 - 1 + rsi_1), rsi_1))
            * zx.q(divu.dp.d(0:(rbp_1 - 1 + rcx_2), rbp_1))
        r8 = arg5
    while (rbx u< r14)

return result
