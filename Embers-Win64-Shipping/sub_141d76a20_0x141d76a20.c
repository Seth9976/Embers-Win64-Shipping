// 函数: sub_141d76a20
// 地址: 0x141d76a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rcx = *(arg1 + 0xc0)
int64_t var_58 = 0
void* var_48 = nullptr
void var_68
int64_t* result = (*(*rcx + 0x10))(rcx, &var_68, &var_58)

if (arg1 + 0xc8 != result)
    *(arg1 + 0xc8) = *result
    *result = 0
    result = sub_1405aeff0(arg1 + 0xd0, &result[1])

int64_t* var_60

if (var_60 != 0)
    result = zx.q(var_60[1].d)
    var_60[1].d -= 1
    
    if (result.d == 1)
        result = (**var_60)(var_60)
        int32_t rdi_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*var_60 + 8))(var_60, zx.q(rdi_1))

if (var_58 != 0)
    void var_38
    void* rcx_5 = &var_38
    
    if (var_48 != 0)
        rcx_5 = var_48
    
    result = (*(*rcx_5 + 0x10))(rcx_5)

__security_check_cookie(rax_1 ^ &var_88)
return result
