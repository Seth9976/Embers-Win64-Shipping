// 函数: sub_141998570
// 地址: 0x141998570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int32_t r11 = 0

if (arg4 != 0)
    int64_t r8 = sx.q(arg3) * 5
    int32_t rdi_1 = *((r8 << 3) + 0x1439c85e8)
    int32_t rsi_1 = *((r8 << 3) + &data_1439c85ec)
    
    do
        char rcx = r11.b
        uint32_t rdx_1 = arg2 u>> rcx
        uint32_t rax_2 = 1
        uint32_t r9_1 = arg1 u>> rcx
        uint32_t rcx_1 = 1
        
        if (rdx_1 u>= 1)
            rax_2 = rdx_1
        
        if (r9_1 u>= 1)
            rcx_1 = r9_1
        
        r11 += 1
        result += zx.q(divu.dp.d(0:(rax_2 - 1 + rsi_1), rsi_1))
            * zx.q(divu.dp.d(0:(rdi_1 - 1 + rcx_1), rdi_1)) * sx.q((&data_1439c85f4)[r8 * 2])
    while (r11 u< arg4)

return result
