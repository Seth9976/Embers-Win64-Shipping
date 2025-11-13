// 函数: sub_142acd4b0
// 地址: 0x142acd4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xa0)

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0xa8)

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = *(arg1 + 0xb8)

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = *(arg1 + 0xd0)

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

if (*(arg1 + 0xc0) != 0)
    int32_t i = 0
    
    if (0 s< *(arg1 + 0xc8))
        int64_t* rsi_1 = nullptr
        
        do
            int64_t* rcx_4 = *(rsi_1 + *(arg1 + 0xc0))
            
            if (rcx_4 != 0)
                (**rcx_4)(rcx_4, 1)
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< sx.d(*(arg1 + 0xc8)))
    
    sub_142a7dcd0(*(arg1 + 0xc0))

__builtin_memset(arg1 + 0xa0, 0, 0x12)
__builtin_memset(arg1 + 0xb8, 0, 0x12)
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
