// 函数: sub_1406b4be0
// 地址: 0x1406b4be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int64_t r9_1 = *arg1
    *arg1 += 1
    uint64_t rax
    int64_t r11_2
    
    if (r9_1 u< arg1[1])
        int64_t rdx_1 = arg1[4]
        int64_t r11_1 = r9_1
        uint64_t r8_1 = arg1[3]
        
        if (r9_1 s>= rdx_1)
            r11_1 = rdx_1
        
        r11_2 = r11_1 + r8_1 * r9_1
        rax = r8_1 + 1
        
        if (r9_1 s>= rdx_1)
            rax = r8_1
    
    if (r9_1 u>= arg1[1] || r9_1 == -1)
        return 
    
    int64_t rdx_2 = arg1[5]
    int32_t* r10_1 = rdx_2 + (r11_2 << 2)
    int64_t rbx_1 = rdx_2 + ((rax + r11_2) << 2)
    
    if (r10_1 != rbx_1)
        int64_t* r11_3 = arg1[6]
        
        do
            int64_t rdx_3 = sx.q(*r10_1)
            r10_1 = &r10_1[1]
            int64_t r8_2 = rdx_3 << 2
            char* r9_3 = sx.q((rdx_3 << 2).d) + **r11_3
            *r9_3 = *(*r11_3[1] + r8_2 + 2)
            r9_3[1] = *(*r11_3[1] + r8_2 + 1)
            r9_3[2] = *(r8_2 + *r11_3[1])
        while (r10_1 != rbx_1)
