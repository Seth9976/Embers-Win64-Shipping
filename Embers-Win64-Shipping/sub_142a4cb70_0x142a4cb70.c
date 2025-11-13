// 函数: sub_142a4cb70
// 地址: 0x142a4cb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *arg2
int32_t rsi = 0
char* rbx = arg2

if (rax != 0)
    char* rdi_1 = nullptr
    
    while (sub_142a86230(rax) != 0 || *rbx - 0x30 u<= 9)
        if (rdi_1 s>= 0x18)
            *arg3 = 5
            return 0
        
        char rax_3 = sub_142a86220(zx.d(*rbx))
        rbx = &rbx[1]
        rdi_1[arg1] = rax_3
        rsi += 1
        rdi_1 = &rdi_1[1]
        rax = *rbx
        
        if (rax == 0)
            if (rsi == 0)
                break
            
            *(sx.q(rsi) + arg1) = rax
            return zx.q(rsi)

*arg3 = 1
return 0
