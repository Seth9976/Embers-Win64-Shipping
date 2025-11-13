// 函数: sub_142b77760
// 地址: 0x142b77760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x58) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t* rcx = *(rsi_1 + *(arg1 + 0x50))
            
            if (rcx != 0)
                if (rcx[-1] == 0)
                    j_sub_140a74f90(&rcx[-1])
                else
                    (**rcx)(rcx, 3)
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0x58))
    
    sub_142a7dcd0(*(arg1 + 0x50))
    *(arg1 + 0x50) = 0
    *(arg1 + 0x58) = 0

int64_t rcx_3 = *(arg1 + 0x60)

if (rcx_3 != 0)
    sub_142a7dcd0(rcx_3)
    *(arg1 + 0x60) = 0

int64_t rcx_4 = *(arg1 + 0x68)

if (rcx_4 == 0)
    return 

sub_142a7dcd0(rcx_4)
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
