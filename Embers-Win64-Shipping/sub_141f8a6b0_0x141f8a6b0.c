// 函数: sub_141f8a6b0
// 地址: 0x141f8a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx = *(rsi_1 + *(arg1 + 0x10))
        i += 1
        rsi_1 = &rsi_1[1]
        rbx += (*(*rcx + 0x80))(rcx)
    while (i s< *(arg1 + 0x18))

return zx.q(rbx)
