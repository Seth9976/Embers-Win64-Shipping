// 函数: sub_142abb900
// 地址: 0x142abb900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rsi = 0
int32_t rdi = 0

if (sub_142a4a1f0(arg1) s> 0)
    int32_t rax_4
    
    do
        int32_t rax_1 = sub_142a486d0(arg1, rsi)
        
        if (rbx == 0)
            if (rax_1 != 0x27)
                rdi += 1
            else
                rbx = rax_1 - 0x26
        else if (rbx == 1)
            rbx = 2
            
            if (rax_1 == 0x27)
                rbx = 0
            
            rdi += 1
        else if (rbx != 2)
            if (rbx != 3)
                abort()
                noreturn
            
            if (rax_1 == 0x27)
                rbx = 2
            
            rdi += 1
        else if (rax_1 != 0x27)
            rdi += 1
        else
            rbx = rax_1 - 0x24
        
        int32_t rax_2
        rax_2.b = rax_1 u> 0xffff
        rsi += rax_2 + 1
        rax_4 = sub_142a4a1f0(arg1)
    while (rsi s< rax_4)

if (rbx - 1 u<= 1)
    *arg2 = 1

return zx.q(rdi)
