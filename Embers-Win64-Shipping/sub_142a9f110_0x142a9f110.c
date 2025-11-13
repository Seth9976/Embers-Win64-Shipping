// 函数: sub_142a9f110
// 地址: 0x142a9f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0 && (*(arg1 + 0x20) & 1) == 0)
    sub_142a9f7b0(arg1, *(arg2 + 0x10), *(arg2 + 0x1c), 0)
    void* rax_1 = *(arg2 + 0x50)
    
    if (rax_1 != 0)
        int32_t i = 0
        
        if (*(rax_1 + 8) s> 0)
            do
                void* rax_2 = sub_142ae72d0(rax_1, i)
                void* rcx_1 = *(arg1 + 0x50)
                char rax_3
                
                if (rcx_1 != 0)
                    rax_3 = sub_142ae7710(rcx_1, rax_2)
                
                if (rcx_1 == 0 || rax_3 == 0)
                    sub_142a9de00(arg1, rax_2)
                
                rax_1 = *(arg2 + 0x50)
                i += 1
            while (i s< *(rax_1 + 8))

return arg1
