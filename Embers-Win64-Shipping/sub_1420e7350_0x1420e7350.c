// 函数: sub_1420e7350
// 地址: 0x1420e7350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*(arg2 + 0x8b))
uint64_t result
result.b = rcx.b & 0x30

if (result.b != 0x10)
    if ((rcx.b & 0x30) == 0)
        goto label_1420e73a1
else if (arg3 != 0)
    *(*(arg1 + 0x200) + (sx.q(*(arg2 + 0x80)) << 3)) = 0
label_1420e73a1:
    char rax_1
    
    if (arg3 == 0)
        rax_1 = sub_140b011d0()
    
    int64_t rsi_1
    
    if (arg3 != 0 || rax_1 == 0 || *data_143f48340 == 0 || data_143db7aa8 == 0)
        char rax_5 = (*(arg2 + 0x8b) & 0xef) | 0x20
        *(arg2 + 0x80) = *(arg1 + 0x218)
        *(arg2 + 0x8b) = rax_5
        rsi_1 = sx.q(*(arg1 + 0x218))
        int32_t rax_6 = (rsi_1 + 1).d
        *(arg1 + 0x218) = rax_6
        
        if (rax_6 s> *(arg1 + 0x21c))
            sub_1405a4d70(arg1 + 0x210)
        
        result = *(arg1 + 0x210)
    else
        char rax_3 = (*(arg2 + 0x8b) & 0xdf) | 0x10
        *(arg2 + 0x80) = *(arg1 + 0x208)
        *(arg2 + 0x8b) = rax_3
        rsi_1 = sx.q(*(arg1 + 0x208))
        int32_t rax_4 = (rsi_1 + 1).d
        *(arg1 + 0x208) = rax_4
        
        if (rax_4 s> *(arg1 + 0x20c))
            sub_1405a4d70(arg1 + 0x200)
        
        result = *(arg1 + 0x200)
    
    *(result + (rsi_1 << 3)) = arg2

return result
