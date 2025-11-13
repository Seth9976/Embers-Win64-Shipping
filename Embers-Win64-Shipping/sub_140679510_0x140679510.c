// 函数: sub_140679510
// 地址: 0x140679510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x80))

if (rcx.d == 0)
    return 0

int32_t rsi = 0
int32_t r15 = 0
int64_t r12
r12.b = **(arg1 + 0x78) != arg2
int64_t rdi = 0

do
    int64_t r9_1 = sx.q(rsi)
    rdi += 1
    rsi += 1
    
    if (rdi s< rcx)
        int64_t* rcx_1 = *(arg1 + 0x78) + (rdi << 3)
        
        do
            int32_t rax_3
            rax_3.b = *rcx_1 != arg2
            
            if (zx.d(r12.b) != rax_3)
                break
            
            rsi += 1
            rdi += 1
            rcx_1 = &rcx_1[1]
        while (rdi s< rcx)
    
    int32_t r14_2 = rsi - r9_1.d
    
    if (r12.b != 0)
        if (r15 != r9_1.d)
            int64_t rcx_2 = *(arg1 + 0x78)
            memmove(rcx_2 + (sx.q(r15) << 3), rcx_2 + (r9_1 << 3), r14_2 << 3)
        
        r15 += r14_2
    
    r12.b ^= 1
while (rdi s< rcx)

*(arg1 + 0x80) = r15
return zx.q(rcx.d - r15)
