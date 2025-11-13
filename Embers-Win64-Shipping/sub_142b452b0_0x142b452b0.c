// 函数: sub_142b452b0
// 地址: 0x142b452b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_17 = sx.d(*arg1)

if (rax_17 == 0x66)
    if (arg1[1] == 0x65 && arg1[2] == 0x77 && arg1[3] == 0)
        return 3
else if (rax_17 == 0x6d)
    int64_t rax_11 = 0
    
    while (true)
        char rcx_2 = arg1[rax_11 + 1]
        rax_11 += 1
        
        if (rcx_2 != *(rax_11 + 0x14366e9d3))
            break
        
        if (rax_11 == 4)
            return rax_11
else if (rax_17 == 0x6f)
    int64_t rax_6 = 0
    
    while (true)
        char rcx_1 = arg1[rax_6 + 1]
        rax_6 += 1
        
        if (rcx_1 != *(rax_6 + 0x14366e9d7))
            break
        
        if (rax_6 == 5)
            return rax_6
    
    if (arg1[1] == 0x6e && arg1[2] == 0x65 && arg1[3] == 0)
        return 1
else if (rax_17 == 0x74)
    if (arg1[1] == 0x77 && arg1[2] == 0x6f && arg1[3] == 0)
        return 2
else if (rax_17 == 0x7a)
    int64_t rax = 0
    
    while (true)
        char rcx = arg1[rax + 1]
        rax += 1
        
        if (rcx != *(rax + 0x14366e9df))
            break
        
        if (rax == 4)
            return 0

return 0xffffffff
