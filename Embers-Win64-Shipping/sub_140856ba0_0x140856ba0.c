// 函数: sub_140856ba0
// 地址: 0x140856ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd9) != 0)
    jump(*(*arg2 + 0x20))

if (*(arg1 + 0xd8) == 0)
    int64_t rax
    rax.b = 0
    return rax

void** rax_2 = *(arg1 + 0xc0)
int64_t r11 = sx.q(rax_2[0x4d].d)

if (r11.d s> 0)
    void* rbx_1 = rax_2[0x4c]
    int32_t rdx_1 = 0
    int64_t rcx_1 = 0
    rax_2 = rbx_1 + 0x24
    
    do
        if (arg3 u>= *(rax_2 - 4) && arg3 u< *rax_2)
            rax_2 = rbx_1 + sx.q(rdx_1) * 0x28
            
            if (rax_2 == 0)
                goto label_140856c0e
            
            if (arg2 == 0)
                goto label_140856c6a
            
            int64_t rcx_4 = arg2[3]
            
            if (rcx_4 == 0)
                goto label_140856c0e
            
            rax_2 = *rax_2
            
            if (rax_2 == 0 || rax_2 != rcx_4)
                goto label_140856c6a
            
            rax_2.b = 1
            return rax_2
        
        rdx_1 += 1
        rcx_1 += 1
        rax_2 = &rax_2[5]
    while (rcx_1 s< r11)

label_140856c0e:

if (arg2 != 0 && r11.d == 0)
    jump(*(*arg2 + 0x20))

label_140856c6a:
rax_2.b = 0
return rax_2
