// 函数: sub_142bcdc30
// 地址: 0x142bcdc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[2]
char* i = *arg1

if (i u>= rdx)
    *arg1 = i
    return i

do
    char r8_1 = *i
    
    if (r8_1 u> 0x20 || not(test_bit(0x100003601, zx.q(r8_1))))
        if (r8_1 != 0x25)
            break
        
        for (; i u< rdx; i = &i[1])
            char rcx_1 = *i
            
            if (rcx_1 == 0xd)
                break
            
            if (rcx_1 == 0xa)
                break
    
    i = &i[1]
while (i u< rdx)

*arg1 = i
return i
