// 函数: sub_142c60b30
// 地址: 0x142c60b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void var_98
void* rbx = &var_98
char* rdi = **(arg1 + 0x438)
char i = *rdi

while (i != 0)
    *rbx = tolower(sx.d(i))
    rdi = &rdi[1]
    i = *rdi
    rbx += 1

__builtin_strncpy(rbx, "_proxy", 7)
int64_t result = j_sub_142c87750(&var_98)

if (result == 0)
    int32_t rax_4 = sub_142c70460("http_proxy", &var_98)
    
    if (rax_4 == 0)
        sub_142c70550(&var_98, &var_98, 0x80)
        result = j_sub_142c87750(&var_98)
    
    if (rax_4 != 0 || result == 0)
        result = j_sub_142c87750("all_proxy")
        
        if (result == 0)
            result = j_sub_142c87750("ALL_PROXY")

__security_check_cookie(rax_1 ^ &var_b8)
return result
