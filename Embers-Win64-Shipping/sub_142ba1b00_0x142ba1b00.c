// 函数: sub_142ba1b00
// 地址: 0x142ba1b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0x62
int32_t r9 = arg3

if (arg2 != 0)
    int32_t* r11_1 = arg1 + 4
    uint64_t i_1 = zx.q(arg2)
    uint64_t i
    
    do
        int32_t rax_2 = arg3 - *r11_1
        int32_t rdx_1 = neg.d(rax_2)
        
        if (rax_2 s>= 0)
            rdx_1 = rax_2
        
        if (rdx_1 s< r10)
            r9 = *r11_1
        
        if (rdx_1 s>= r10)
            rdx_1 = r10
        
        r11_1 = &r11_1[3]
        r10 = rdx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rax_4 = (r9 + 0x20) & 0xffffffc0

if (arg3 s< r9)
    if (arg3 s> rax_4 - 0x30)
        arg3 = r9
else if (arg3 s< rax_4 + 0x30)
    return zx.q(r9)

return zx.q(arg3)
