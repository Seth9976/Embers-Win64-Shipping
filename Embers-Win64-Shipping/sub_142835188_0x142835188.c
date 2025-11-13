// 函数: sub_142835188
// 地址: 0x142835188
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t** rdi = *(arg2 + 0x18)
char const* const _Source = "<untitled>"

if (strlen(arg2) != 0)
    _Source = arg2

strcpy(arg1, _Source)
int32_t rsi = 0
int64_t result

while (true)
    if (rdi == 0)
        result = 0
        break
    
    int64_t* r14_1 = *rdi
    char var_138[0x100]
    sub_1425f2950(&var_138, "%s/%d", arg1)
    int64_t* rax_3 = sub_142837350(&var_138)
    
    if (rax_3 != 0 && sub_142835288(rax_3, r14_1, arg3) == 0)
        int64_t rax_5
        
        if (rsi == 0)
            rax_5 = sub_1405948b0(rax_3)
        
        if (rsi != 0 || rax_5 != 0)
            sub_142835178(arg1, rax_3)
        else
            sub_142835280(arg1, rax_3)
        
        rdi = rdi[1]
        rsi += 1
        continue
    
    result = 0xffffffff
    break

__security_check_cookie(rax_1 ^ &var_158)
return result
