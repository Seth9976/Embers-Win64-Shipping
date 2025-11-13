// 函数: sub_141869ca0
// 地址: 0x141869ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t var_30 = *arg1
void** const var_38 = &data_142da2668
void* (* var_58)(int64_t* arg1) = sub_14187ad80
void*** var_48 = nullptr
void* var_68
void** result = sub_14185baa0(&var_68, &var_58)
void** result_1 = result

if (*result != 0)
    while (true)
        void* rcx_1 = *result_1
        
        if (rcx_1 != 0)
            int64_t* rcx_2 = *(rcx_1 + 0x70)
            int64_t r9_1 = *rcx_2
            result = (*(r9_1 + 0x20))(rcx_2, 0xffffffff, 0, r9_1)
            
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
    void** const* rcx_5 = &var_38
    
    if (var_48 != 0)
        rcx_5 = var_48
    
    result = (*rcx_5)[2](rcx_5)

__security_check_cookie(rax_1 ^ &var_88)
return result
