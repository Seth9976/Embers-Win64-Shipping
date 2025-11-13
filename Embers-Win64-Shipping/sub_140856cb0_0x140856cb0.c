// 函数: sub_140856cb0
// 地址: 0x140856cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd9) != 0)
    jump(*(*arg2 + 0x18))

if (*(arg1 + 0xd8) == 0)
    int64_t rax
    rax.b = 0
    return rax

void* i = *(arg1 + 0xc0)
int64_t r11 = sx.q(*(i + 0x268))

if (r11.d s> 0)
    void* rbx_1 = *(i + 0x260)
    int32_t rdx_1 = 0
    int64_t rcx_1 = 0
    i = rbx_1 + 0x24
    
    do
        if (arg3 u>= *(i - 4) && arg3 u< *i)
            void* r10_1 = rbx_1 + sx.q(rdx_1) * 0x28
            
            if (r10_1 == 0)
                goto label_140856d1e
            
            if (arg2 == 0)
                goto label_140856d83
            
            int64_t rdx_3 = arg2[3]
            
            if (rdx_3 == 0)
                goto label_140856d1e
            
            i = *(r10_1 + 0x10)
            
            for (void* r8 = i + (sx.q(*(r10_1 + 0x18)) << 3); i != r8; i += 8)
                if (*i == rdx_3)
                    i.b = 1
                    return i
            
            goto label_140856d83
        
        rdx_1 += 1
        rcx_1 += 1
        i += 0x28
    while (rcx_1 s< r11)

label_140856d1e:

if (arg2 != 0 && r11.d == 0)
    jump(*(*arg2 + 0x18))

label_140856d83:
i.b = 0
return i
