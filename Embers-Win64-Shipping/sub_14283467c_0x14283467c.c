// 函数: sub_14283467c
// 地址: 0x14283467c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = *(arg1 + 0x28); i != 0; i = i[1])
    for (int64_t* j = *(*i + 0x28); j != 0; j = j[1])
        int32_t* rsi_1 = *j
        int32_t rdx_1 = *rsi_1
        void* const rax_2
        
        if (rdx_1 == 0)
            rax_2 = nullptr
        else
            rax_2 = sub_1428340c0(*(arg1 + 0x30), rdx_1 - 1)
            
            if (rax_2 == 0)
                void* rax_3 = *i
                *(rax_3 + 0x16)
                return sub_142835944(3, "Preset %03d %03d: Invalid instrument reference", 
                    zx.q(*(rax_3 + 0x18)))
        
        *rsi_1 = rax_2

return 1
