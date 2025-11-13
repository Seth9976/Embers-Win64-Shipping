// 函数: sub_142c70dd0
// 地址: 0x142c70dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t ch = sx.d(*arg1)
char arg_8
char* r14 = &arg_8
int32_t rbx = 0
int32_t rsi = 0
arg_8 = 0
char* rbp = arg1

if (ch != 0)
    while (true)
        rbp = &rbp[1]
        char* rax_1 = strchr("0123456789", ch)
        
        if (rax_1 == 0)
            if (ch != 0x2e)
                break
            
            if (rbx == 0)
                break
            
            if (rsi == 4)
                break
            
            r14 = &r14[1]
            rbx = 0
            *r14 = 0
        else
            uint64_t rcx = zx.q(*r14)
            int32_t rax_5 = (rcx * 5).d * 2 - 0x436b57e8 + rax_1.d
            
            if (rbx != 0 && rcx.b == 0)
                break
            
            if (rax_5 u> 0xff)
                break
            
            *r14 = rax_5.b
            
            if (rbx == 0)
                rsi += 1
                
                if (rsi s> 4)
                    break
                
                rbx = 1
        
        ch = sx.d(*rbp)
        
        if (ch == 0)
            if (rsi s< 4)
                break
            
            *arg2 = arg_8.d
            return zx.q(ch + 1)

return 0
