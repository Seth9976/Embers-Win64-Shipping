// 函数: sub_14278ff10
// 地址: 0x14278ff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg1[1].d)

if (r9.d s> 0)
    void* rax_1 = *arg1
    
    if (not(arg2 f< *(r9 * 0xb8 + rax_1 - 8)))
        return zx.q((r9 - 1).d)
    
    if (not(arg2 f> *(rax_1 + 0xb0)))
        return 0
    
    int32_t rdx_1 = 1
    
    if (r9.d s> 1)
        int64_t rcx_1 = 1
        void* rax_4 = rax_1 + 0x168
        
        do
            if (arg2 f< *rax_4)
                return zx.q(rdx_1 - 1)
            
            rdx_1 += 1
            rcx_1 += 1
            rax_4 += 0xb8
        while (rcx_1 s< r9)

return 0xffffffff
