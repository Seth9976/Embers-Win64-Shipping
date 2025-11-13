// 函数: sub_141c45470
// 地址: 0x141c45470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 8) s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rbx_2 = *(arg1 + 0x48) + rsi_1
        memset(*(rbx_2 + 0x18), 0, sx.q(*(rbx_2 + 0x20)) << 2)
        memset(*(rbx_2 + 0x28), 0, sx.q(*(rbx_2 + 0x30)) << 2)
        i += 1
        rsi_1 += 0x38
    while (i s< *(arg1 + 8))

int32_t i_1 = 0

if (*(arg1 + 0xc) s<= 0)
    return 

int32_t* r14_1 = nullptr

do
    int64_t rbx_3 = *(arg1 + 0x58)
    int32_t j = 0
    
    if (*(r14_1 + rbx_3) s> 0)
        int64_t rsi_2 = 0
        
        do
            memset(*(*(r14_1 + rbx_3 + 0x38) + rsi_2), 0, sx.q(*(r14_1 + rbx_3 + 8)) << 2)
            j += 1
            rsi_2 += 0x10
        while (j s< *(r14_1 + rbx_3))
    
    memset(*(r14_1 + rbx_3 + 0x20), 0, sx.q(*(r14_1 + rbx_3 + 4)) << 3)
    i_1 += 1
    r14_1 = &r14_1[0x12]
while (i_1 s< *(arg1 + 0xc))
