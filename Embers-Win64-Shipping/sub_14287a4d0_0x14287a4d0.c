// 函数: sub_14287a4d0
// 地址: 0x14287a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1d0)
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t rbx = *(arg1 + 0x578)
int32_t rsi = 0
uint64_t rbp = 0
int64_t r12 = 0
int64_t r15 = 0
uint64_t r14 = 0
char var_1d8[0x90]
void var_148

if (rbx != 0)
    memset(&var_1d8, 0, 0x81)
    int32_t rax_2 = rbx(arg1, *(*(arg1 + 0x508) + 0xe0), &var_1d8, 0x80, &var_148, 0x100)
    r14 = zx.q(rax_2)
    
    if (r14 u> 0x100)
        sub_142856580(arg1, 0x28, 0x197, 0x44, "ssl\statem\statem_clnt.c", 0xb57)
    else if (rax_2 != 0)
        int32_t i = 0
        char (* rcx_2)[0x90] = &var_1d8
        
        if (var_1d8[0] != 0)
            while (i u< 0x80000000)
                rcx_2 = &(*rcx_2)[1]
                i += 1
                
                if (*rcx_2 == 0)
                    break
        
        rbp = zx.q(i) & 0x7fffffff
        
        if (rbp u<= 0x80)
            r12 = sub_1428a6af0(&var_148, r14, "ssl\statem\statem_clnt.c", 0xb67)
            int64_t rax_4 = sub_1428a6ba0(&var_1d8)
            r15 = rax_4
            
            if (r12 == 0 || rax_4 == 0)
                sub_142856580(arg1, 0x50, 0x197, 0x41, "ssl\statem\statem_clnt.c", 0xb6b)
            else
                sub_1428a6780(*(*(arg1 + 0xa8) + 0x2c8))
                *(*(arg1 + 0xa8) + 0x2c8) = r12
                r12 = 0
                *(*(arg1 + 0xa8) + 0x2d0) = r14
                sub_1428a6780(*(*(arg1 + 0x508) + 0xe8))
                *(*(arg1 + 0x508) + 0xe8) = r15
                r15 = 0
                int32_t rax_8 = sub_142874080(arg2, &var_1d8, rbp, 2)
                
                if (rax_8 != 0)
                    rsi = 1
                else
                    sub_142856580(arg1, 0x50, 0x197, rax_8 + 0x44, "ssl\statem\statem_clnt.c", 
                        0xb79)
        else
            sub_142856580(arg1, 0x50, 0x197, 0x44, "ssl\statem\statem_clnt.c", 0xb63)
    else
        sub_142856580(arg1, rax_2 + 0x28, 0x197, 0xdf, "ssl\statem\statem_clnt.c", 0xb5c)
else
    sub_142856580(arg1, 0x50, 0x197, 0xe0, "ssl\statem\statem_clnt.c", 0xb4b)

sub_1428b8960(&var_148, r14)
sub_1428b8960(&var_1d8, 0x81)
sub_1428a6890(r12, r14, "ssl\statem\statem_clnt.c", 0xb82)
sub_1428a6890(r15, rbp, "ssl\statem\statem_clnt.c", 0xb83)
__security_check_cookie(rax_1 ^ &var_208)
return zx.q(rsi)
