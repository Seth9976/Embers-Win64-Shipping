// 函数: sub_142149a30
// 地址: 0x142149a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x40))
void* r9_1

if (rax.d s<= 0)
label_142149ab1:
    int64_t rax_7 = sx.q(*(arg1 + 0x50))
    
    if (rax_7.d s<= 0)
    label_142149b0b:
        *arg2 = 0
    else
        r9_1 = *(arg1 + 0x48)
        int64_t r8_1 = 0
        void* rdx_1 = r9_1 + 0x10
        
        while (((*(rdx_1 - 8) ^ *arg3) | (*(rdx_1 - 4) ^ arg3[1]) | (*(rdx_1 + 4) ^ arg3[3])
                | (*rdx_1 ^ arg3[2])) != 0)
            r8_1 += 1
            r9_1 += 0x28
            rdx_1 += 0x28
            
            if (r8_1 s>= rax_7)
                goto label_142149b0b
        
        *arg2 = *r9_1
else
    r9_1 = *(arg1 + 0x38)
    void* rdx = r9_1 + 0x10
    int64_t r8 = 0
    
    while (((*(rdx - 8) ^ *arg3) | (*(rdx - 4) ^ arg3[1]) | (*(rdx + 4) ^ arg3[3])
            | (arg3[2] ^ *rdx)) != 0)
        r8 += 1
        r9_1 += 0x1c
        rdx += 0x1c
        
        if (r8 s>= rax)
            goto label_142149ab1
    
    *arg2 = *r9_1
return arg2
