// 函数: sub_142c87e40
// 地址: 0x142c87e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi = 0x520

if (arg2 != 0)
    rsi = 0x540

int32_t* rsi_1 = rsi + arg1
int32_t rax
int64_t r8
rax, r8 = j_sub_142c704d0("NTLM", arg3, 4)

if (rax != 0)
    char i = arg3[4]
    void* rbx_1 = &arg3[4]
    
    while (i != 0)
        int32_t rax_1
        rax_1, r8 = isspace(zx.d(i))
        
        if (rax_1 == 0)
            if (*rbx_1 == 0)
                break
            
            int32_t result = sub_142c8c990(*arg1, rbx_1, rsi_1, arg4)
            
            if (result != 0)
                return result
            
            *rsi_1 = 2
            return result
        
        i = *(rbx_1 + 1)
        rbx_1 += 1
    
    int32_t rax_2 = *rsi_1
    
    if (rax_2 != 4)
        if (rax_2 == 3)
            sub_142c64850(*arg1, "NTLM handshake rejected\n", r8, arg4)
            sub_142c8caf0(&arg1[0xa4])
            sub_142c8caf0(&arg1[0xa8])
            *rsi_1 = 0
            return 9
        
        if (rax_2 s>= 1)
            sub_142c64850(*arg1, "NTLM handshake failure (internal error)\n", r8, arg4)
            return 9
    else
        sub_142c64850(*arg1, "NTLM auth restarted\n", r8, arg4)
        sub_142c8caf0(&arg1[0xa4])
        sub_142c8caf0(&arg1[0xa8])
    
    *rsi_1 = 1

return 0
