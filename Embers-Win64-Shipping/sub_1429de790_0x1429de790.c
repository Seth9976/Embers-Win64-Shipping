// 函数: sub_1429de790
// 地址: 0x1429de790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0xbb4)
int32_t r10 = 0
void* rax = *(arg1 + 0xbf0)

if (r11 s> 0)
    int32_t r9_1 = *(arg1 + 0xbb8)
    
    do
        int32_t r8_1 = 0
        
        if (r9_1 s> 0)
            do
                if (zx.d(*(rax + 2)) == arg2)
                    return 1
                
                r8_1 += 1
                rax += 0x4c
            while (r8_1 s< r9_1)
        
        rax += 0x4c
        r10 += 1
    while (r10 s< r11)

return 0
