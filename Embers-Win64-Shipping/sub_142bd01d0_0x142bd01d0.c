// 函数: sub_142bd01d0
// 地址: 0x142bd01d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i = *arg1
int32_t r10 = 0
int64_t rsi
rsi.b = 0
int64_t rdi
rdi.b = 0

if (i u< arg2 && arg3 - 2 u<= 0x22)
    char r8 = *i
    
    if (((r8 - 0x2b) & 0xfd) != 0)
    label_142bd0240:
        int32_t temp0 = divs.dp.d(0:0x7fffffff, arg3)
        
        for (; i u< arg2; i = &i[1])
            uint64_t rcx = zx.q(*i)
            
            if (rcx.b u<= 0x20 && test_bit(0x100003601, rcx))
                break
            
            if (rcx.b u>= 0x80)
                break
            
            char rcx_1 = *((zx.q(rcx.b) & 0x7f) + &data_143688590)
            
            if (rcx_1 s< 0)
                break
            
            int32_t rax_7 = sx.d(rcx_1)
            
            if (rax_7 s>= arg3)
                break
            
            if (r10 s> temp0 || (r10 == temp0 && rcx_1 s> (mods.dp.d(0:0x7fffffff, arg3)).b))
                rdi.b = 1
            else
                r10 = r10 * arg3 + rax_7
        
        *arg1 = i
        
        if (rdi.b != 0)
            r10 = 0x7fffffff
        
        if (rsi.b == 0)
            return zx.q(r10)
        
        return zx.q(neg.d(r10))
    
    rsi.b = r8 == 0x2d
    i = &i[1]
    
    if (i != arg2 && ((*i - 0x2b) & 0xfd) != 0)
        goto label_142bd0240

return 0
