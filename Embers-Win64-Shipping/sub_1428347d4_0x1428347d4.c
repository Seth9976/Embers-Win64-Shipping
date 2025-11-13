// 函数: sub_1428347d4
// 地址: 0x1428347d4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168

if (strlen(arg2) == 0)
    *(arg2 + 0x16)
    sub_1425f2950(arg1 + 0x10, "Bank%d,Preset%d", zx.q(*(arg2 + 0x18)))
else
    strcpy(arg1 + 0x10, arg2)

int32_t rdi = 0
*(arg1 + 0x28) = zx.d(*(arg2 + 0x18))
*(arg1 + 0x2c) = zx.d(*(arg2 + 0x16))
int64_t** rbx_1 = *(arg2 + 0x28)
int64_t result

while (true)
    if (rbx_1 == 0)
        result = 0
        break
    
    int64_t* r15_1 = *rbx_1
    char var_148[0x100]
    sub_1425f2950(&var_148, "%s/%d", arg1 + 0x10)
    int64_t* rax_5 = sub_142837350(&var_148)
    
    if (rax_5 != 0 && sub_142835524(rax_5, r15_1, arg3) == 0)
        int64_t rax_7
        
        if (rdi == 0)
            rax_7 = sub_1405948b0(rax_5)
        
        if (rdi != 0 || rax_7 != 0)
            sub_1428347c4(arg1, rax_5)
        else
            sub_142834c54(arg1, rax_5)
        
        rbx_1 = rbx_1[1]
        rdi += 1
        continue
    
    result = 0xffffffff
    break

__security_check_cookie(rax_1 ^ &var_168)
return result
