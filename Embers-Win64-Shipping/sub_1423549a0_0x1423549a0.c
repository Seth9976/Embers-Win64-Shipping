// 函数: sub_1423549a0
// 地址: 0x1423549a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rax_2 = *(arg1 + 0x10)
int64_t var_68 = rax_2
void* var_58 = nullptr

if (rax_2 != 0)
    void* rax_3 = *(arg1 + 0x20)
    void* rcx = &arg1[0xc]
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx, &var_58)

int32_t var_28 = arg1[0x15]
void var_b8

if (sub_140d3e110(arg1) == 0 || arg2 u> 1)
    sub_141f79600(&var_b8)
else
    int64_t rax_7 = sub_140d3c6e0(arg1)
    int64_t* rax_9 = sub_1405f7040(sub_141f88540())
    (*(*rax_9 + 0xf0))(rax_9, &var_b8, rax_7, zx.q(arg1[0x14]), 1, 0)

void var_90
sub_142354d60(&var_68, sub_141f79510(&var_90, &var_b8))
int64_t result = sub_141f7baf0(&var_b8)

if (var_68 != 0)
    void* rax_11 = var_58
    void var_48
    void* rcx_9 = &var_48
    
    if (rax_11 != 0)
        rcx_9 = rax_11
    
    result = (*(*rcx_9 + 0x10))(rcx_9)

__security_check_cookie(rax_1 ^ &var_e8)
return result
