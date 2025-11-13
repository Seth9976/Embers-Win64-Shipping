// 函数: sub_142b3ac00
// 地址: 0x142b3ac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(arg1[2].b)
void* rsi = arg1 + 9
char r10 = rax.b & 0x80

if (*rsi != 0 || *arg1 != 1 || (rax.b & 0x70) != 0)
    arg1[2].b = 0
    arg1[1] = 0
    *arg1 = 1
    *rsi = 0
    int32_t rcx_1 = arg2[3]
    bool cond:1_1
    
    if (rcx_1 == 0)
        cond:1_1 = r10 == 0
    label_142b3ac95:
        
        if (not(cond:1_1))
            goto label_142b3ac9c
        
        arg1[2].b = r10 | 0x40
        *arg3 |= 0xa20
    else
        if (rcx_1 == 5)
        label_142b3ac9c:
            int32_t rbx = *arg2
            *arg1 = rbx
            
            if (rbx s> 1)
                uint64_t rdx = zx.q(rbx - 1)
                rbx -= rdx.d
                __builtin_memset(rsi, 9, zx.q(rdx.d))
                rsi += rdx
            
            *rsi = *(&data_14366c468 + (sx.q(rbx) << 2)) - 1
            arg1[2].b = 0
            int32_t rax_4 = arg2[1] - *arg2 + 1
            arg1[2].b = r10
            arg1[1] = rax_4
            *arg3 |= 0xa20
            return rax_4
        
        if (rcx_1 == 6)
            rax.b = r10 == 0
            cond:1_1 = rax.b == 0
            goto label_142b3ac95
        
        if (rcx_1 == 7)
            goto label_142b3ac9c
        
        arg1[2].b = r10 | 0x40
        *arg3 |= 0xa20
else
    rax = arg2[1]
    
    if (arg2[6].b != 0)
        rax += 1 - *arg2
    
    if (arg1[1] s> rax)
        arg1[1] = rax
        *arg3 |= 0x400

return rax
