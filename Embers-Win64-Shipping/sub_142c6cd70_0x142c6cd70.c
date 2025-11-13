// 函数: sub_142c6cd70
// 地址: 0x142c6cd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
char* rbx = arg3
void* const rax
void* const r8

if (arg2 == 0)
    rax = 0x4f10
    r8 = 0x4ba0
else
    rax = 0x4f0c
    r8 = 0x4bb0

void* rdi = r8 + rsi
int32_t* rbp = rax + rsi

while (*rbx != 0)
    int64_t r8_2
    
    if (j_sub_142c704d0("NTLM", rbx, 4) == 0)
        int32_t rax_5
        int64_t r8_3
        rax_5, r8_3 = j_sub_142c704d0("Digest", rbx, 6)
        
        if (rax_5 == 0)
            int32_t rax_8
            rax_8, r8_2 = j_sub_142c704d0("Basic", rbx, 5)
            
            if (rax_8 != 0)
                *rbp |= 1
                *(rdi + 8) |= 1
                
                if (*(rdi + 4) == 1)
                    *(rdi + 8) = 0
                    arg4 =
                        sub_142c64850(rsi, "Authentication problem. Ignoring this.\n", r8_2, arg4)
                    *(rsi + 0x4bc0) = 1
        else if ((*(rdi + 8) & 2) == 0)
            if (sub_14058f640() != 0)
                *rbp |= 2
                *(rdi + 8) |= 2
                int32_t rax_7
                rax_7, r8_2 = sub_142c87bc0(arg1, arg2, rbx)
                
                if (rax_7 != 0)
                    arg4 =
                        sub_142c64850(rsi, "Authentication problem. Ignoring this.\n", r8_2, arg4)
                    *(rsi + 0x4bc0) = 1
        else
            arg4 = sub_142c64850(rsi, "Ignoring duplicate digest auth header.\n", r8_3, arg4)
    else
        char rax_2
        
        if ((*(rdi + 8) & 0x28) == 0)
            rax_2 = sub_14058f640()
        
        if ((*(rdi + 8) & 0x28) != 0 || rax_2 != 0)
            *rbp |= 8
            *(rdi + 8) |= 8
            int32_t rax_3 = *(rdi + 4)
            
            if (rax_3 == 8 || rax_3 == 0x20)
                int32_t rax_4
                rax_4, r8_2, arg4 = sub_142c87e40(arg1, arg2, rbx, arg4)
                
                if (rax_4 != 0)
                    arg4 =
                        sub_142c64850(rsi, "Authentication problem. Ignoring this.\n", r8_2, arg4)
                    *(rsi + 0x4bc0) = 1
                else
                    *(rsi + 0x4bc0) = 0
    char i = *rbx
    
    if (i != 0)
        while (i != 0x2c)
            i = rbx[1]
            rbx = &rbx[1]
            
            if (i == 0)
                break
    
    char* rax_9 = &rbx[1]
    
    if (*rbx != 0x2c)
        rax_9 = rbx
    
    rbx = rax_9
    
    if (*rax_9 != 0)
        while (isspace(zx.d(*rbx)) != 0)
            rbx = &rbx[1]
            
            if (*rbx == 0)
                return 0

return 0
