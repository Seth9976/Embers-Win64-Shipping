// 函数: sub_142a4c930
// 地址: 0x142a4c930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = nullptr
int64_t r15 = sx.q(arg4)
char* string = arg1
int32_t rsi = 0
char i_1

if (arg2 == 0x5f || arg2 == 0x2d)
    i_1 = *arg1

char rbp

if ((arg2 != 0x5f && arg2 != 0x2d) || i_1 == 0)
    rbp = arg5
label_142a4c9d5:
    
    if (arg2 != 0x40)
        char* result = strchr(string, 0x40)
        
        if (result == 0)
            return result
        
        string = &result[1]
    
    char i = *string
    
    if (i != 0)
        while (i != 0x2e)
            if (i == 0x40)
                break
            
            if (rbp != 0)
                if (rbx s< r15)
                    rbx[arg3] = 0x5f
                
                rsi += 1
                rbx = &rbx[1]
                rbp = 0
            
            if (rbx s< r15)
                char rax_2 = sub_142a863a0(zx.d(*string))
                rbx[arg3] = rax_2
                
                if (rax_2 - 0x2c u<= 1)
                    rbx[arg3] = 0x5f
            
            i = string[1]
            string = &string[1]
            rsi += 1
            rbx = &rbx[1]
            
            if (i == 0)
                break
else
    rbp = arg5
    char* rdi_1 = nullptr
    
    while (i_1 != 0x2e)
        if (i_1 == 0x40)
            break
        
        if (rbp != 0)
            if (rdi_1 s< r15)
                rdi_1[arg3] = 0x5f
            
            rsi += 1
            rdi_1 = &rdi_1[1]
            rbp = 0
        
        if (rdi_1 s< r15)
            char rax_1 = sub_142a863a0(zx.d(*string))
            rdi_1[arg3] = rax_1
            
            if (rax_1 == 0x2d)
                rdi_1[arg3] = 0x5f
        
        i_1 = string[1]
        string = &string[1]
        rsi += 1
        rdi_1 = &rdi_1[1]
        
        if (i_1 == 0)
            break
    
    if (rsi == 0)
        goto label_142a4c9d5
return zx.q(rsi)
