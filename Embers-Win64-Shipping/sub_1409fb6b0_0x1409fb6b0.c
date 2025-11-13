// 函数: sub_1409fb6b0
// 地址: 0x1409fb6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    int64_t rsi_1 = *arg2
    int32_t rdi_1 = arg2[1].d
    arg1[1].d = rdi_1
    
    if (rdi_1 == 0 && r8_1 == 0)
        *(arg1 + 0xc) = rdi_1
        return arg1
    
    sub_140a05dc0(arg1, rdi_1, r8_1)
    memcpy(*arg1, rsi_1, rdi_1 * 0x4c)

return arg1
