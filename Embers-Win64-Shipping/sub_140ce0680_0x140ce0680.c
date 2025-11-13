// 函数: sub_140ce0680
// 地址: 0x140ce0680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3 = *(arg1 + 0x38)

if ((*(arg1 + 0x80) & 1) == 0)
    int32_t i = 0
    
    if (rax_3 s> 0)
        do
            rax_3 = *(arg1 + 0x3c) * i
            i += 1
            int64_t rcx_1 = sx.q(rax_3)
            *(rcx_1 + arg2) = 0
            *(rcx_1 + arg2 + 8) = 0
        while (i s< *(arg1 + 0x38))
else
    int32_t i_1 = 0
    
    if (rax_3 s> 0)
        int32_t rax_1
        
        do
            rax_1 = *(arg1 + 0x3c) * i_1
            i_1 += 1
            int64_t rcx = sx.q(rax_1)
            *(rcx + arg2) = 0
            *(rcx + arg2 + 8) = 0
        while (i_1 s< *(arg1 + 0x38))
        
        return rax_1

return rax_3
