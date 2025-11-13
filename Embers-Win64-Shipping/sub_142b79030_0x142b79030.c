// 函数: sub_142b79030
// 地址: 0x142b79030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9 = 0
int32_t r10 = 0
char i = **arg1

if (i == 0)
    *arg2 = 1
else
    do
        if (r10 s>= 4)
            return zx.q(r9)
        
        int16_t rax_2
        
        if (i - 0x30 u<= 9)
            rax_2 = sx.w(i) - 0x30
        else if (i - 0x61 u> 5)
            if (i - 0x41 u> 5)
                *arg2 = 1
                return 0
            
            rax_2 = sx.w(i) - 0x37
        else
            rax_2 = sx.w(i) - 0x57
        
        *arg1 += 1
        r10 += 1
        r9 = r9 << 4 | rax_2
        i = **arg1
    while (i != 0)
    
    if (r10 s< 4)
        *arg2 = 1

return zx.q(r9)
