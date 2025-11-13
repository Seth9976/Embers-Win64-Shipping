// 函数: sub_142b36d00
// 地址: 0x142b36d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_2 = arg2
int64_t r10 = arg1

if (arg4 u> 0x24)
    arg4 = 0x24
else if (arg4 u< 2)
    arg4 = 2

uint64_t rdi = zx.q(arg4)
void* i_3 = i_2

if (arg3 != 0)
    bool cond:0_1 = r10 != 0
    
    if (r10 s>= 0)
        goto label_142b36d62
    
    int16_t rax_1
    
    if (arg4 != 0xa || arg5 != 0)
        cond:0_1 = r10 != 0
    label_142b36d62:
        
        if (not(cond:0_1))
            rax_1 = 0x30
            
            if (arg5 != 0)
                rax_1 = 0
            
            goto label_142b36d6e
    else
        r10 = neg.q(r10)
        rax_1 = 0x2d
    label_142b36d6e:
        arg3 -= 1
        *arg2 = rax_1
        i_3 = &arg2[1]
    
    if (arg3 != 0)
        int32_t i
        
        do
            if (r10 == 0)
                if (arg3 != 0)
                    *i_3 = 0
                
                break
            
            int64_t temp0_1 = divs.dp.q(sx.o(r10), rdi)
            uint32_t r10_1 = r10.d - rdi.d * temp0_1.d
            
            if (arg5 == 0)
                r10_1 = zx.d((*"0123456789abcdefghijklmnopqrstuvwxyz")[sx.q(r10_1)])
            
            *i_3 = r10_1.w
            i_3 += 2
            r10 = temp0_1
            i = arg3
            arg3 -= 1
        while (i != 1)

void* i_1 = i_2 + 2

if (*i_2 != 0x2d)
    i_1 = i_2

for (void* rcx = i_3 - 2; rcx u> i_1; i_1 += 2)
    int16_t r8 = *rcx
    *rcx = *i_1
    rcx -= 2
    *i_1 = r8

return (i_3 - i_2) s>> 1
