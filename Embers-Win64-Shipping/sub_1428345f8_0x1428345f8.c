// 函数: sub_1428345f8
// 地址: 0x1428345f8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = *(arg1 + 0x30); i != 0; i = i[1])
    for (int64_t* j = *(*i + 0x18); j != 0; j = j[1])
        int32_t* rsi_1 = *j
        int32_t rdx_1 = *rsi_1
        
        if (rdx_1 != 0)
            void* rax_2 = sub_1428340c0(*(arg1 + 0x38), rdx_1 - 1)
            
            if (rax_2 == 0)
                return sub_142835944(3, "Instrument "%s": Invalid sample reference", *i)
            
            *rsi_1 = rax_2

return 1
