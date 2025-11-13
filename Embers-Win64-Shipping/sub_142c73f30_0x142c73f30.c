// 函数: sub_142c73f30
// 地址: 0x142c73f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rbp = *arg1
int64_t rax_2 = sx.q(arg2)
int32_t* rbx = 0x314
void* rsi_2 = &arg1[rax_2 + ((rax_2 + 0x16) << 2)]
int32_t* rax_3
int32_t* r12_1

if (*(arg1 + 0x164) == 2)
    rax_3 = 0x314
    r12_1 = 0x534
    
    if (arg1[0x48] != -1)
        rax_3 = 0x33c

if (*(arg1 + 0x164) != 2 || *(rax_3 + arg1) == 2)
    r12_1 = 0x494

sub_1428a49e0()
int32_t rax_4 = sub_14284ea90(*(rsi_2 + 0x18))
void* rcx_1 = *(rsi_2 + 0x18)
uint64_t result

if (rax_4 == 1)
    *(rsi_2 + 8) = 4
    sub_142858cc0(sub_14284fa30(rcx_1))
    int512_t zmm2 =
        sub_142c64850(rbp, "SSL connection using %s / %s\n", sub_142c732f0(*(rsi_2 + 0x18)), arg3)
    
    if (arg1[0x82].b == 0)
        result = 0
    else
        int32_t var_158
        int64_t* var_150
        sub_14284f7c0(*(rsi_2 + 0x18), &var_150, &var_158)
        uint64_t r8_5 = zx.q(var_158)
        
        if (r8_5.d == 0)
            sub_142c64850(rbp, "ALPN, server did not agree to a protocol\n", r8_5, zmm2)
            result = 0
        else
            sub_142c64850(rbp, "ALPN, server accepted to use %.*s\n", r8_5, zmm2)
            
            if (var_158 != 8 || 0x312e312f70747468 != *var_150)
                result = 0
            else
                arg1[0xf5].d = 2
                result = 0
else
    int32_t rax_5 = sub_14284fa70(rcx_1, rax_4)
    
    if (rax_5 == 2)
        *(rsi_2 + 8) = rax_5
        result = 0
    else if (rax_5 != 3)
        int128_t var_148
        memset(&var_148, 0, 0x100)
        *(rsi_2 + 8) = 1
        int32_t rax_6 = sub_1428a4e50()
        int32_t rcx_6
        
        if ((rax_6 & 0xff000000) == 0x14000000)
            rcx_6 = rax_6 & 0xfff
        
        int32_t result_1
        
        if ((rax_6 & 0xff000000) != 0x14000000 || rcx_6 != 0x86)
            result_1 = 0x23
            arg3 = sub_1428a4aa0(rax_6, &var_148, 0x100)
            
            if (rax_6 != 0)
                sub_142c64760(rbp, "%s", &var_148, arg3)
            else
                int32_t rcx_14 = *(arg1 + 0x164)
                int32_t* rax_9
                
                if (rcx_14 == 2)
                    rax_9 = 0x314
                    
                    if (arg1[0x48] != -1)
                        rax_9 = 0x33c
                
                if (rcx_14 != 2 || *(rax_9 + arg1) == rcx_14)
                    arg1[0x1a]
                else
                    arg1[0x2a]
                
                if (rcx_14 == 2 && arg1[0x48] != -1)
                    rbx = 0x33c
                
                int32_t r9_2
                
                if (rcx_14 != 2 || *(rbx + arg1) == rcx_14)
                    r9_2 = *(arg1 + 0x17c)
                else
                    r9_2 = arg1[0x2f].d
                
                int32_t var_168_1 = r9_2
                sub_142c64760(rbp, "OpenSSL SSL_connect: %s in connection to %s:%ld ", 
                    sub_142c72360(rax_5), arg3)
        else
            result_1 = rcx_6 - 0x4a
            int32_t rax_7 = sub_14284fcd0(*(rsi_2 + 0x18))
            
            if (rax_7 == 0)
                __builtin_strcpy(&var_148, "SSL certificate verification failed")
            else
                *(r12_1 + rbp) = rax_7
                arg3 = sub_142c564b0(&var_148, 0x100, "SSL certificate problem: %s", 
                    sub_1428b85a0(rax_7), arg3)
            
            sub_142c64760(rbp, "%s", &var_148, arg3)
        
        result = zx.q(result_1)
    else
        *(rsi_2 + 8) = rax_5
        result = 0

__security_check_cookie(rax_1 ^ &var_188)
return result
