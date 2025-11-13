// 函数: sub_140b1e3e0
// 地址: 0x140b1e3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
uint64_t rbx
rbx.b = 0
int16_t** r11 = arg1
int64_t rdi
rdi.b = 0
*arg2 = 0
int16_t* rax = *arg1
int16_t i = *rax

if (i != 0)
    int16_t* rcx = rax
    
    do
        rax = rcx
        
        if (i == 0xa)
            break
        
        if (i == 0xd)
            break
        
        arg3 -= 1
        
        if (arg3 s<= 0)
            break
        
        if (rdi.b == 0 && arg4 == 0)
            if (i == 0x2f)
                rbx = zx.q(rbx.b)
                
                if (rcx[1] == i)
                    rbx = 1
            
            if (i == 0x7c)
                goto label_140b1e4e7
        
        rsi = 1
        rax.b = i == 0x22
        rdi.b ^= rax.b
        
        if (rbx.b != 0)
            rax = &rcx[1]
            *r11 = rax
        else
            *arg2 = i
            arg2 = &arg2[1]
            *r11 = &(*r11)[1]
            rax = *r11
        
        i = *rax
        rcx = rax
    while (i != 0)

if (arg4 == 0)
label_140b1e4e7:
    
    while (true)
        int16_t rcx_2 = *rax
        
        if (rcx_2 != 0xa && rcx_2 != 0xd && rcx_2 != 0x7c)
            break
        
        rax = &rax[1]
        *r11 = rax
else
    int16_t rcx_1 = *rax
    
    if (rcx_1 == 0xd)
        rax = &rax[1]
        *r11 = rax
        rcx_1 = *rax
    
    if (rcx_1 == 0xa)
        *r11 = &rax[1]

*arg2 = 0
int16_t* result

if (**r11 == 0 && rsi.b == 0)
    result.b = 0
    return result

result.b = 1
return result
