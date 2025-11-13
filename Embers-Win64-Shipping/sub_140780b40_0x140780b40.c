// 函数: sub_140780b40
// 地址: 0x140780b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    int64_t rsi_1 = *arg2
    int64_t rdi_1 = sx.q(arg2[1].d)
    arg1[1].d = rdi_1.d
    
    if (rdi_1.d == 0 && r8_1 == 0)
        *(arg1 + 0xc) = rdi_1.d
        return arg1
    
    sub_1405a4b40(arg1, rdi_1.d, r8_1)
    memcpy(*arg1, rsi_1, (rdi_1 * 0x30).d)

return arg1
