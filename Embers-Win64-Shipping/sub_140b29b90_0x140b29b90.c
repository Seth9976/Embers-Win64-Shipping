// 函数: sub_140b29b90
// 地址: 0x140b29b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void var_48
sub_140b15670(&data_143de6a10, &var_48, arg2, sub_140b17e20())
char var_20
uint64_t result
int64_t* var_40
uint64_t var_30

if (var_20 == 0)
    if (var_30.b == 0 || var_40 == 0)
        result.b = 0
    else
    label_140b29bf5:
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            int64_t rdx_1 = *var_40
            (*rdx_1)(var_40, rdx_1)
            int32_t rdi_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_1 = *var_40
                (*(r8_1 + 8))(var_40, zx.q(rdi_1), r8_1)
        
        result.b = 0
else if (var_30.b != 0)
    if (var_40 != 0)
        goto label_140b29bf5
    
    result.b = 0
else
    uint64_t var_28
    *arg1 = var_28
    result.b = 1
__security_check_cookie(rax_1 ^ &var_68)
return result
