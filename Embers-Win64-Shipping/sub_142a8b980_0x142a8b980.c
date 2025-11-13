// 函数: sub_142a8b980
// 地址: 0x142a8b980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg2)
char* rbx = arg1

if (arg2 s< 0)
    rax = -1
    
    do
        rax += 1
    while (arg1[rax] != 0)

int64_t rsi = sx.q(rax.d)

if (rax.d != 2)
    if (rax.d != 3)
    label_142a8ba12:
        rax.b = 0
        return rax
    
    if (rax.d s> 0)
        while (true)
            rax.b = *rbx - 0x30
            
            if (rax.b u> 9)
                break
            
            rbx = &rbx[1]
            
            if (&rbx[neg.q(arg1)] s>= rsi)
                void* rax_1
                rax_1.b = 1
                return rax_1
        
        goto label_142a8ba12
else
    char* rdi_1 = nullptr
    
    if (rax.d s> 0)
        do
            if (sub_142a86230(*(rdi_1 + rbx)).b == 0)
                goto label_142a8ba12
            
            rdi_1 = &rdi_1[1]
        while (rdi_1 s< rsi)

rax.b = 1
return rax
