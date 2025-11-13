// 函数: sub_14101c400
// 地址: 0x14101c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x98)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0xa0)) * 4]; i != rbp_2; i = &i[4])
    sub_14101c0a0(arg1, i[2].d, *(i + 0x14))
    int32_t rdx_3 = *(arg1 + 0x74) << (*(i + 0x14)).b
    *(arg1 + 0x58) -= rdx_3
    *(arg1 + 0x5c) -= i[3].d
    *(arg1 + 0xbc) -= rdx_3
    
    if (*(arg1 + 0x7c) == 0)
        int64_t* rcx_2 = *i
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1 && rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        *i = 0
    
    *(arg1 + 0x60) -= 1

*(arg1 + 0xa0) = 0

if (*(arg1 + 0xa4) != 0)
    sub_1405a51b0(arg1 + 0x98, 0)

void* rcx_4 = *(arg1 + 0x88)

if (rcx_4 != 0)
    if (0 == *(rcx_4 + 8))
        *(rcx_4 + 8) = 0
    else
        *(rcx_4 + 8)
    
    int64_t* rcx_5 = *(arg1 + 0x88)
    *(arg1 + 0x88) = 0
    
    if (rcx_5 != 0)
        int32_t rsi_1 = rcx_5[1].d
        rcx_5[1].d -= 1
        
        if (rsi_1 == 1)
            (**rcx_5)(rcx_5, zx.q(rsi_1))

void* rcx_6 = *(arg1 + 0x90)

if (rcx_6 != 0)
    sub_1410497e0(rcx_6)
