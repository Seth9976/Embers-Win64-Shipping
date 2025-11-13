// 函数: sub_142898870
// 地址: 0x142898870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r9 = *arg1
int32_t rax = 0

if (r9 s> 0)
    int64_t* r10_1 = *(arg1 + 8)
    int64_t* r8_1 = r10_1
    
    do
        if (*r8_1 == arg2)
            void* rcx_1 = &r10_1[sx.q(rax)]
            int64_t result = *rcx_1
            
            if (rax != r9 - 1)
                memmove(rcx_1, &r10_1[sx.q(rax + 1)], (r9 - rax - 1) << 3)
                r9 = *arg1
            
            *arg1 = r9 - 1
            return result
        
        rax += 1
        r8_1 = &r8_1[1]
    while (rax s< r9)

return 0
