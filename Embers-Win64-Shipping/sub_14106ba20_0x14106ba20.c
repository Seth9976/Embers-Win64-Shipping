// 函数: sub_14106ba20
// 地址: 0x14106ba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
arg1[0x13].d = 1
int64_t rax_2 = *arg1
int64_t var_58 = 0
void* var_48 = nullptr
void var_68
int64_t* result = (*(rax_2 + 0x10))(arg2, &var_68, &var_58)
int64_t* result_1 = result

if (*result != 0)
    while (true)
        int64_t rcx = *result_1
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x70)
            int64_t r9_1 = *rcx_1
            result = (*(r9_1 + 0x20))(rcx_1, 0xffffffff, 0, r9_1)
            
            if (result.b != 0)
                break

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
    void* rcx_4 = &var_38
    
    if (var_48 != 0)
        rcx_4 = var_48
    
    result = (*(*rcx_4 + 0x10))(rcx_4)

__security_check_cookie(rax_1 ^ &var_88)
return result
