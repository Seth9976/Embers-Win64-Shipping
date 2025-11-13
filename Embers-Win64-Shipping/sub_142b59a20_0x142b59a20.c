// 函数: sub_142b59a20
// 地址: 0x142b59a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1e8) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x1f8) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t* rcx = *(rsi_1 + *(arg1 + 0x1e8))
            
            if (rcx != 0)
                if (rcx[-1] == 0)
                    j_sub_140a74f90(&rcx[-1])
                else
                    (**rcx)(rcx, 3)
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0x1f8))
    
    sub_142a7dcd0(*(arg1 + 0x1e8))

if (*(arg1 + 0x1f0) != 0)
    int32_t i_1 = 0
    
    if (*(arg1 + 0x1f8) s> 0)
        int64_t* rsi_2 = nullptr
        
        do
            int64_t* rcx_3 = *(rsi_2 + *(arg1 + 0x1f0))
            
            if (rcx_3 != 0)
                if (rcx_3[-1] == 0)
                    j_sub_140a74f90(&rcx_3[-1])
                else
                    (**rcx_3)(rcx_3, 3)
            
            i_1 += 1
            rsi_2 = &rsi_2[1]
        while (i_1 s< *(arg1 + 0x1f8))
    
    sub_142a7dcd0(*(arg1 + 0x1f0))

__builtin_memset(arg1 + 0x1e8, 0, 0x18)
