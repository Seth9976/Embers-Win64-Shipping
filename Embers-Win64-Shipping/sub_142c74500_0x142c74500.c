// 函数: sub_142c74500
// 地址: 0x142c74500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t rsi = arg4
sub_1428a49e0()
void* rbp = &arg1[sx.q(arg2) * 5]

if (rsi u> 0x7fffffff)
    rsi = 0x7fffffff

int32_t result_1 = sub_142850bd0(*(rbp + 0x2d8), arg3, rsi.d)
int64_t result

if (result_1 s> 0)
    *arg6 = 0
    result = sx.q(result_1)
else
    int32_t rax_2 = sub_14284fa70(*(rbp + 0x2d8), result_1)
    
    if (rax_2 == 1)
        int32_t rax_6 = sub_1428a4e50()
        int32_t rcx_9
        
        if ((rax_6 & 0xff000000) == 0x14000000)
            rcx_9 = rax_6 & 0xfff
        
        char* rdx_3
        void* r8_3
        int512_t zmm2
        
        if ((rax_6 & 0xff000000) != 0x14000000 || rcx_9 != 0x80 || *(rbp + 0x2c4) != 2
                || *(rbp + 0x314) != 2)
            char var_148[0x100]
            zmm2 = sub_1428a4aa0(rax_6, &var_148, 0x100)
            r8_3 = &var_148
            rdx_3 = "SSL_write() error: %s"
        else
            void var_1c8
            zmm2 = sub_142c72290(&var_1c8, zx.q(rcx_9 - 8), arg5)
            r8_3 = &var_1c8
            rdx_3 = "Error: %s does not support double SSL tunneling."
        
        sub_142c64760(*arg1, rdx_3, r8_3, zmm2)
        result = -1
        *arg6 = 0x37
    else if (rax_2 s<= 1)
    label_142c745c4:
        WSAGetLastError()
        int64_t rax_5 = sub_142c72360(rax_2)
        sub_142c64760(*arg1, "OpenSSL SSL_write: %s, errno %d", rax_5, arg5)
        result = -1
        *arg6 = 0x37
    else if (rax_2 s<= 3)
        *arg6 = 0x51
        result = -1
    else
        if (rax_2 != 5)
            goto label_142c745c4
        
        enum WSA_ERROR rax_3 = WSAGetLastError()
        sub_142c64760(*arg1, "SSL_write() returned SYSCALL, errno = %d", zx.q(rax_3), arg5)
        result = -1
        *arg6 = 0x37

__security_check_cookie(rax_1 ^ &var_1e8)
return result
