// 函数: sub_142c70cb0
// 地址: 0x142c70cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg3
char* result = arg1

if (arg1 == 0)
    result = *arg3

char i = *result

while (i != 0)
    if (strchr(arg2, sx.d(i)) == 0)
        if (*result == 0)
            break
        
        *rbx = &result[1]
        
        if (result[1] != 0)
            do
                if (strchr(arg2, sx.d(**rbx)) != 0)
                    break
                
                *rbx += 1
            while (**rbx != 0)
        
        void* rax_6 = *rbx
        
        if (*rax_6 != 0)
            *rax_6 = 0
            *rbx += 1
        
        return result
    
    i = result[1]
    result = &result[1]

return 0
