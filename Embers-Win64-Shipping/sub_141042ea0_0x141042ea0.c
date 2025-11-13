// 函数: sub_141042ea0
// 地址: 0x141042ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*arg1 + 0x18) = 0

for (int32_t i = *arg1[1]; i u< *arg1[2]; i += 1)
    uint64_t i_1 = zx.q(i)
    *(arg1[4] + (i_1 << 1)) =
        ((1 << (*(arg1[3] + (i_1 << 2) + 0x2fb4)).b) - 1) & *(arg1[5] + (i_1 << 1))
    
    if (*(arg1[4] + (i_1 << 1)) != 0)
        void* rcx_8 = arg1[3]
        
        if (*(rcx_8 + 0x3c) != 1)
            *(*arg1 + (i_1 << 2)) = *(rcx_8 + (i_1 << 2) + 0x2fb4)
        else
            *(*arg1 + (i_1 << 2)) = zx.d(*(*arg1[6] + (i_1 << 3) + 0x2c))
        
        void* rdx_4 = *arg1
        *(rdx_4 + 0x18) += *(rdx_4 + (i_1 << 2))

return arg1
