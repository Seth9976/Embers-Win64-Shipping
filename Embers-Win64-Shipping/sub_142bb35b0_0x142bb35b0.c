// 函数: sub_142bb35b0
// 地址: 0x142bb35b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

char* str1 = *(arg1 + 0x18)
uint64_t rax_2

if (str1 == 0)
label_142bb361a:
    rax_2.b = sub_142bb3640(arg1).b != 0
else
    int32_t rbx_1 = 0
    
    while (true)
        if (strstr(str1, &"cpop"[sx.q(rbx_1) * 4]) != 0)
            rax_2.b = 1
            break
        
        rbx_1 += 1
        
        if (rbx_1 s>= 0x1a)
            goto label_142bb361a

return rax_2
