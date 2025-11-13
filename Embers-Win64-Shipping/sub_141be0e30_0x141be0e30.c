// 函数: sub_141be0e30
// 地址: 0x141be0e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
*(arg1 + 0xb4) |= 8
*(arg1 + 0xc1) = arg2
void* var_48
int64_t* result = sub_141bab3c0(arg1, &var_48)
void* rcx = var_48

if (rcx != 0)
    uint32_t var_38 = zx.d(*(arg1 + 0xc1))
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    char var_34_1 = 1
    char var_30_1 = 1
    sub_140e23ec0(rcx, &var_38)
    result = sub_140745b20(&var_28)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        result = (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_40 + 8))(var_40, 1)

__security_check_cookie(rax_1 ^ &var_68)
return result
