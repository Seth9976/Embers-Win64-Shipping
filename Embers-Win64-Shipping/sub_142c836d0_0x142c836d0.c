// 函数: sub_142c836d0
// 地址: 0x142c836d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void var_1a8
memset(&var_1a8, 0, 0x80)
void var_128
memset(&var_128, 0, 0x100)
void* rbp = *arg1
int32_t result_1 = 0
void* rbx = *(rbp + 0x250)

if (arg1[0x7f].b == 0)
    goto label_142c837a0

int512_t entry_zmm2 = sub_142c564b0(&var_128, 0x100, "USER,%s", arg1[0x3e], entry_zmm2)
int64_t* rax_2 = sub_142c52470(*(rbx + 0x1cb0), &var_128)
uint64_t result

if (rax_2 != 0)
    *(rbx + 0x1cb0) = rax_2
    *(rbx + 0x8a4) = 1
label_142c837a0:
    
    for (int64_t* i = *(rbp + 0x410); i != 0; i = i[1])
        if (sub_1425f29b0(*i, "%127[^= ]%*[ =]%255s", &var_1a8) != 2)
        label_142c83963:
            sub_142c64760(rbp, "Syntax error in telnet option: %s", *i, entry_zmm2)
            result_1 = 0x31
        label_142c83974:
            sub_142c524d0(*(rbx + 0x1cb0))
            *(rbx + 0x1cb0) = 0
            break
        
        if (sub_142c70460(&var_1a8, "TTYPE") == 0)
            if (sub_142c70460(&var_1a8, "XDISPLOC") == 0)
                if (sub_142c70460(&var_1a8, "NEW_ENV") == 0)
                    if (sub_142c70460(&var_1a8, "WS") == 0)
                        if (sub_142c70460(&var_1a8, "BINARY") == 0)
                            sub_142c64760(rbp, "Unknown telnet option %s", *i, entry_zmm2)
                            result_1 = 0x30
                            goto label_142c83974
                        
                        if (atoi(&var_128) != 1)
                            *(rbx + 0x808) = 0
                            *(rbx + 0x1408) = 0
                    else
                        if (sub_1425f29b0(&var_128, "%hu%*[xX]%hu", rbx + 0x1ca8) != 2)
                            goto label_142c83963
                        
                        *(rbx + 0x884) = 1
                else
                    int64_t* rax_7 = sub_142c52470(*(rbx + 0x1cb0), &var_128)
                    
                    if (rax_7 == 0)
                        result_1 = 0x1b
                        goto label_142c83974
                    
                    *(rbx + 0x1cb0) = rax_7
                    *(rbx + 0x8a4) = 1
            else
                strncpy(rbx + 0x1c28, &var_128, 0x7f)
                *(rbx + 0x1ca7) = 0
                *(rbx + 0x894) = 1
        else
            strncpy(rbx + 0x1c08, &var_128, 0x1f)
            *(rbx + 0x1c27) = 0
            *(rbx + 0x868) = 1
    
    result = zx.q(result_1)
else
    sub_142c524d0(*(rbx + 0x1cb0))
    result = 0x1b
    *(rbx + 0x1cb0) = 0

__security_check_cookie(rax_1 ^ &var_1c8)
return result
