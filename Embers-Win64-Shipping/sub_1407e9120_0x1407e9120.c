// 函数: sub_1407e9120
// 地址: 0x1407e9120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = zx.d(arg1[1].b) | *arg1 << 0x10
int32_t i_1 = arg1[4]

if (i_1 s> 0)
    uint64_t i_2 = zx.q(i_1)
    void* rdx_1 = nullptr
    uint64_t i
    
    do
        void* rcx_1 = *(arg1 + 8)
        
        if ((arg1[2].b & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + &arg1[2]
        
        uint32_t rcx_2 = zx.d(*(rdx_1 + rcx_1))
        rdx_1 += 4
        r8_1 ^= rcx_2
        i = i_2
        i_2 -= 1
    while (i != 1)

while (i_1 u>= 4)
    void* r11_2 = *(arg1 + 8)
    int64_t r9_3 = r11_2 s>> 1
    char r10_1 = arg1[2].b & 1
    void* rdx_3
    
    if (r10_1 == 0)
        rdx_3 = r11_2
    else
        rdx_3 = &arg1[2] + r9_3
    
    void* rdx_6
    
    if (r10_1 == 0)
        rdx_6 = r11_2
    else
        rdx_6 = &arg1[2] + r9_3
    
    int32_t r8_3 = r8_1 ^ zx.d(*(rdx_3 + (sx.q(i_1 - 1) << 2) + 2))
        ^ zx.d(*(rdx_6 + (sx.q(i_1 - 2) << 2) + 2)) << 8
    int64_t rcx_5 = sx.q(i_1 - 3)
    void* rdx_10 = &arg1[2] + r9_3
    
    if (r10_1 == 0)
        rdx_10 = r11_2
    
    i_1 -= 4
    void* rdx_14 = &arg1[2] + r9_3
    
    if (r10_1 == 0)
        rdx_14 = r11_2
    
    r8_1 = r8_3 ^ zx.d(*(rdx_10 + (rcx_5 << 2) + 2)) << 0x10
        ^ zx.d(*(rdx_14 + (sx.q(i_1) << 2) + 2)) << 0x18

if (i_1 u>= 2)
    void* r10_2 = *(arg1 + 8)
    char r11_3 = arg1[2].b & 1
    int64_t r9_5 = r10_2 s>> 1
    
    do
        void* rdx_18
        
        if (r11_3 == 0)
            rdx_18 = r10_2
        else
            r9_5 = r10_2 s>> 1
            rdx_18 = &arg1[2] + r9_5
        
        int64_t rcx_7 = sx.q(i_1 - 1)
        i_1 -= 2
        void* rdx_21
        
        if (r11_3 == 0)
            rdx_21 = r10_2
            r9_5 = r10_2 s>> 1
        else
            rdx_21 = &arg1[2] + r9_5
        
        r8_1 = r8_1 ^ zx.d(*(rdx_18 + (rcx_7 << 2) + 2))
            ^ zx.d(*(rdx_21 + (sx.q(i_1) << 2) + 2)) << 0x10
    while (i_1 u>= 2)

while (i_1 != 0)
    i_1 -= 1
    void* rdx_24 = *(arg1 + 8)
    
    if ((arg1[2].b & 1) != 0)
        rdx_24 = (rdx_24 s>> 1) + &arg1[2]
    
    r8_1 ^= zx.d(*(rdx_24 + (sx.q(i_1) << 2) + 2))

arg1[0xc] = r8_1
return i_1
