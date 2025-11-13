// 函数: sub_1408345c0
// 地址: 0x1408345c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x210) s<= 0)
    return 

int64_t rsi_1 = 0

do
    void* rcx_1 = *(arg1 + 0x208) + rsi_1
    
    if (*(rcx_1 + 0x10) != arg2)
        i += 1
        rsi_1 += 0x58
    else
        sub_14084d9f0(rcx_1)
        int64_t r14_1 = sx.q(i) * 0x58
        sub_14081c910(*(arg1 + 0x208) + r14_1)
        int32_t rax_2 = *(arg1 + 0x210)
        int32_t rcx_5 = rax_2 - i
        
        if (rcx_5 != 1)
            int64_t r9_1 = *(arg1 + 0x208)
            memmove(r9_1 + r14_1, sx.q(i + 1) * 0x58 + r9_1, (rcx_5 - 1) * 0x58)
            rax_2 = *(arg1 + 0x210)
        
        *(arg1 + 0x210) = rax_2 - 1
        sub_14083ac10(arg1 + 0x208)
while (i s< *(arg1 + 0x210))
