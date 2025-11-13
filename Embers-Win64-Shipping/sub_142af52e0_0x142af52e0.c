// 函数: sub_142af52e0
// 地址: 0x142af52e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
int64_t rbx
rbx.b = 0
char* r9 = arg2
char* r11 = arg1
uint32_t rax_10
uint32_t rcx_4

while (true)
    char r8_1 = *r11
    
    if (r8_1 == 0)
    label_142af5337:
        r11 = &r11[1]
    else
        uint32_t rcx
        
        while (true)
            r11 = &r11[1]
            
            if (r8_1 s< 0)
                arg2.b = 0
            else
                arg2 = zx.q(*(zx.q(r8_1) + &data_14365d260))
            
            rcx = zx.d(arg2.b)
            
            if (arg2.b != 0)
                break
            
            r8_1 = *r11
            rdi.b = 0
            
            if (r8_1 == 0)
                goto label_142af5337
        
        if (rcx == 1)
            if (rdi.b == 0)
                char rax_3 = *r11
                
                if (rax_3 s>= 0 && *(zx.q(rax_3) + &data_14365d260) - 1 u<= 1)
                    continue
        else if (rcx == 2)
            rdi.b = 1
        else
            r8_1 = arg2.b
            rdi.b = 0
    
    arg2 = zx.q(*r9)
    
    if (arg2.b == 0)
    label_142af53cb:
        r9 = &r9[1]
    else
        while (true)
            r9 = &r9[1]
            char r10
            
            if (arg2.b s< 0)
                r10 = 0
            else
                r10 = *(zx.q(arg2.b) + &data_14365d260)
            
            uint32_t rax_5 = zx.d(r10)
            
            if (r10 == 0)
                rbx.b = 0
            else
                if (rax_5 != 1)
                    if (rax_5 == 2)
                        rbx.b = 1
                    else
                        arg2 = zx.q(r10)
                        rbx.b = 0
                    
                    break
                
                if (rbx.b != 0)
                    break
                
                char rax_7 = *r9
                
                if (rax_7 s< 0)
                    break
                
                if (*(zx.q(rax_7) + &data_14365d260) - 1 u> 1)
                    break
            
            arg2 = zx.q(*r9)
            
            if (arg2.b == 0)
                goto label_142af53cb
    
    if ((arg2.b | r8_1) == 0)
        return 0
    
    rcx_4 = zx.d(arg2.b)
    rax_10 = zx.d(r8_1)
    
    if (rax_10 != rcx_4)
        break

return zx.q(rax_10 - rcx_4)
