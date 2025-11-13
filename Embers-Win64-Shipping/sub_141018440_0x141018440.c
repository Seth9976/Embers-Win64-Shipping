// 函数: sub_141018440
// 地址: 0x141018440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_5 = 0
void* rax

if (*(arg1 + 0x2298) s>= 0)
    void* rsi_1 = arg1 + 0xa68
    int32_t i = 0
    
    do
        rax = *rsi_1
        
        if (rax != 0 && *(rax + 0x40) == arg2)
            sub_14103d970(arg1 + 0x250, nullptr, i)
        
        i += 1
        rsi_1 += 8
    while (i s<= *(arg1 + 0x2298))

if (*(arg1 + 0x229c) s>= 0)
    void* rsi_2 = arg1 + 0xc68
    int32_t i_1 = 0
    
    do
        rax = *rsi_2
        
        if (rax != 0 && *(rax + 0x40) == arg2)
            sub_14103d600(arg1 + 0x250, nullptr, i_1)
        
        i_1 += 1
        rsi_2 += 8
    while (i_1 s<= *(arg1 + 0x229c))

if (*(arg1 + 0x22a0) s>= 0)
    void** rsi_3 = arg1 + 0xe68
    int32_t i_2 = 0
    
    do
        rax = *rsi_3
        
        if (rax != 0 && *(rax + 0x40) == arg2)
            sub_14103d6b0(arg1 + 0x250, nullptr, i_2)
        
        i_2 += 1
        rsi_3 = &rsi_3[1]
    while (i_2 s<= *(arg1 + 0x22a0))

if (*(arg1 + 0x22a4) s>= 0)
    void** rsi_4 = arg1 + 0x1068
    int32_t i_3 = 0
    
    do
        rax = *rsi_4
        
        if (rax != 0 && *(rax + 0x40) == arg2)
            sub_14103d760(arg1 + 0x250, nullptr, i_3)
        
        i_3 += 1
        rsi_4 = &rsi_4[1]
    while (i_3 s<= *(arg1 + 0x22a4))

if (*(arg1 + 0x22a8) s>= 0)
    void** rsi_5 = arg1 + 0x1268
    int32_t i_4 = 0
    
    do
        rax = *rsi_5
        
        if (rax != 0 && *(rax + 0x40) == arg2)
            sub_14103d810(arg1 + 0x250, nullptr, i_4)
        
        i_4 += 1
        rsi_5 = &rsi_5[1]
    while (i_4 s<= *(arg1 + 0x22a8))

if (*(arg1 + 0x22ac) s< 0)
    return 

void** rdi_1 = arg1 + 0x1468

do
    rax = *rdi_1
    
    if (rax != 0 && *(rax + 0x40) == arg2)
        sub_14103d8c0(arg1 + 0x250, nullptr, i_5)
    
    i_5 += 1
    rdi_1 = &rdi_1[1]
while (i_5 s<= *(arg1 + 0x22ac))
