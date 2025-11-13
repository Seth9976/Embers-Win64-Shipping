// 函数: sub_142a84920
// 地址: 0x142a84920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r11 = *arg2
int32_t rbx = 0
int32_t* r10

if (arg4 == 0)
    r10 = nullptr
else
    r10 = *arg4

int64_t r8 = sx.q(*(arg1 + 0x5b))
int64_t rdx = 0
uint64_t result

if (r8 s<= 0)
label_142a84988:
    *(arg1 + 0x5b) = 0
    *arg2 = r11
    
    if (r10 != 0)
        *arg4 = r10
    
    result.b = 0
else
    while (r11 != arg3)
        result = zx.q(*(rdx + arg1 + 0x68))
        rdx += 1
        *r11 = result.b
        r11 = &r11[1]
        
        if (r10 != 0)
            *r10 = 0xffffffff
            r10 = &r10[1]
        
        if (rdx s>= r8)
            goto label_142a84988
    
    do
        char rax = *(rdx + arg1 + 0x68)
        rdx += 1
        int64_t rcx = sx.q(rbx)
        rbx += 1
        *(rcx + arg1 + 0x68) = rax
    while (rdx s< r8)
    
    *(arg1 + 0x5b) = rbx.b
    *arg2 = r11
    
    if (r10 != 0)
        *arg4 = r10
    
    *arg5 = 0xf
    result.b = 1

return result
