// 函数: sub_142c720e0
// 地址: 0x142c720e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rbx = *arg1
int32_t rbp = 0
int64_t rsi = sx.q(arg2)
void* rdi = &arg1[rsi * 5]

if (*(rbx + 0x600) == 2)
    sub_142850b10(*(rdi + 0x2d8))

if (*(rdi + 0x2d8) != 0)
    while (true)
        int32_t rax_3
        int64_t r8_1
        rax_3, r8_1 = sub_142c64080(arg1[rsi + 0x47], -1, -1, 0x2710)
        
        if (rax_3 s<= 0)
            if (rax_3 != 0)
                sub_142c64760(rbx, "select/poll on SSL socket, errno: %d", zx.q(WSAGetLastError()), 
                    arg3)
                rbp = -1
            else
                sub_142c64760(rbx, "SSL shutdown timeout", r8_1, arg3)
            
            break
        
        sub_1428a49e0()
        char var_138[0x100]
        int32_t rax_4 = sub_142850380(*(rdi + 0x2d8), &var_138, 0x100)
        int32_t rax_5
        int64_t r8_2
        rax_5, r8_2 = sub_14284fa70(*(rdi + 0x2d8), rax_4)
        
        if (rax_5 == 0)
            break
        
        if (rax_5 != 2)
            if (rax_5 == 3)
                sub_142c64850(rbx, "SSL_ERROR_WANT_WRITE\n", r8_2, arg3)
            else if (rax_5 != 6)
                int32_t rax_6 = sub_1428a4e50()
                char (* rbx_1)[0x100]
                
                if (rax_6 == 0)
                    rbx_1 = sub_142c72360(rax_5)
                else
                    arg3 = sub_1428a4aa0(rax_6, &var_138, 0x100)
                    rbx_1 = &var_138
                
                WSAGetLastError()
                sub_142c64760(*arg1, "OpenSSL SSL_read on shutdown: %s, errno %d", rbx_1, arg3)
            
            break
        
        arg3 = sub_142c64850(rbx, "SSL_ERROR_WANT_READ\n", r8_2, arg3)
    
    sub_14284f4d0(*(rdi + 0x2d8))
    *(rdi + 0x2d8) = 0

__security_check_cookie(rax_1 ^ &var_158)
return zx.q(rbp)
