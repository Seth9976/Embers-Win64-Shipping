// 函数: sub_142c7a5b0
// 地址: 0x142c7a5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
void* r9 = *arg1
void* rdi = *(r9 + 0x250)
uint64_t result

if (arg2 == 0x2a)
    void var_28
    
    if (sub_1425f29b0(*(r9 + 0xa80) + 2, "OK [UIDVALIDITY %19[0123456789]]", &var_28) == 1)
        data_143ccb8a0(arg1[0xe9])
        arg1[0xe9] = 0
        arg1[0xe9] = data_143ccb8b0(&var_28)
    
    result = 0
else if (arg2 != 0x4f)
    sub_142c64760(r9, "Select failed", arg3, arg4)
    result = 0x43
else
    char* rax_4 = *(rdi + 0x10)
    
    if (rax_4 == 0)
    label_142c7a687:
        arg1[0xe8] = data_143ccb8b0(*(rdi + 8), arg2, arg3)
        
        if (*(rdi + 0x38) != 0)
            result = sub_142c79be0(arg1)
        else if (*(rdi + 0x30) == 0)
            result = sub_142c79b50(arg1)
        else
            result = sub_142c79d70(arg1)
    else
        arg3 = arg1[0xe9]
        
        if (arg3 == 0)
            goto label_142c7a687
        
        arg3 -= rax_4
        uint32_t i
        
        do
            uint32_t rdx = zx.d(*rax_4)
            i = zx.d(*(rax_4 + arg3))
            arg2 = rdx - i
            
            if (rdx != i)
                break
            
            rax_4 = &rax_4[1]
        while (i != 0)
        
        if (arg2 == 0)
            goto label_142c7a687
        
        sub_142c64760(r9, "Mailbox UIDVALIDITY has changed", arg3, arg4)
        result = 0x4e

__security_check_cookie(rax_1 ^ &var_48)
return result
