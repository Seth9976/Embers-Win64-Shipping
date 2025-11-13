// 函数: sub_142bb8cf0
// 地址: 0x142bb8cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x240))
int32_t r11 = 0

if (rax.d s> 0)
    int64_t* r10_1 = *(arg1 + 0x248)
    int64_t r9_1 = 0
    
    do
        char* rax_1 = arg2
        uint32_t i
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_1)
            i = zx.d(*(rax_1 + *r10_1 - arg2))
            
            if (rdx != i)
                break
            
            rax_1 = &rax_1[1]
        while (i != 0)
        
        if (rdx - i == 0)
            return zx.q(r11)
        
        r11 += 1
        r9_1 += 1
        r10_1 = &r10_1[1]
    while (r9_1 s< rax)

return 0
