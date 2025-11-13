// 函数: sub_1428a7f90
// 地址: 0x1428a7f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rdi = *(arg1 + 0x38)
int32_t rbp = arg3 - 1
char* rsi = arg2
int32_t r14 = 0
sub_142899cc0(arg1, 0xf)
int32_t rbx = rdi[4]

while (true)
    int64_t rdx = *(rdi + 8)
    
    if (rbx s<= 0)
        int32_t rax_4 = sub_14289a950(*(arg1 + 0x40), rdx, *rdi)
        rbx = rax_4
        
        if (rax_4 s> 0)
        label_1428a805e:
            rdi[4] = rbx
            rdi[5] = 0
            continue
        else
            sub_142899cd0(arg1)
            *rsi = 0
            
            if (rbx s< 0)
                break
            
            if (rbx != 0)
                goto label_1428a805e
    else
        int32_t r10_1 = 0
        char* r8_1 = sx.q(rdi[5]) + rdx
        char* rcx = r8_1
        int32_t rdx_1 = 0
        
        while (rcx - r8_1 s< sx.q(rbp))
            *rsi = *rcx
            rsi = &rsi[1]
            rbx = rdi[4]
            rdx_1 += 1
            
            if (*rcx == 0xa)
                r10_1 = 1
                break
            
            rcx = &rcx[1]
            
            if (rdx_1 s>= rbx)
                break
        
        rdi[5] += rdx_1
        rbx -= rdx_1
        r14 += rdx_1
        rdi[4] = rbx
        rbp -= rdx_1
        
        if (r10_1 == 0 && rbp != 0)
            continue
        
        *rsi = 0
    
    return zx.q(r14)

if (r14 s> 0)
    rbx = r14

return zx.q(rbx)
