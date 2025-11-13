// 函数: sub_140b57af0
// 地址: 0x140b57af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*arg2)
int64_t r10 = 0
char* r8_1 = arg1 - 1 + r11
int32_t r9 = 0

if (r8_1 u>= arg1)
    while (*r8_1 - 0x30 u<= 9)
        r9 += 1
        r8_1 -= 1
        
        if (r8_1 u< arg1)
            break

int64_t rbx = sx.q(r9)
char* r8_2 = r11 - rbx + arg1

if (r9 != 0 && r9 s< r11.d && r8_2[-1] == 0x5f && r9 s<= 0xa && (r9 == 1 || *r8_2 != 0x30))
    if (r9 s> 0)
        int64_t rdx = 0
        
        do
            int64_t rcx = sx.q(r8_2[rdx])
            rdx += 1
            r10 = rcx + ((r10 * 5 - 0x18) << 1)
        while (rdx s< rbx)
    
    if (r9 s<= 0 || r10 s< 0x7fffffff)
        *arg2 = r11.d - r9 - 1
        return zx.q((r10 + 1).d)

return 0
