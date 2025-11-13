// 函数: sub_142161140
// 地址: 0x142161140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* r14 = *(arg1 + 0x140)
int64_t var_a0
sub_140d3a3a0(&var_a0, r14)
int64_t var_98
sub_140d3a3a0(&var_98, arg1)
int64_t var_c8 = var_a0
int64_t var_c0 = var_98
int64_t var_b0
sub_140596d10(&var_b0, arg3)
uint64_t result

if (r14 == 0)
    int64_t rdi_1 = 0
    int64_t rbx_2 = 0
    
    if (sub_140d3e110(&var_c8) != 0)
        rdi_1 = sub_140d3c6e0(&var_c8)
    
    if (sub_140d3e110(&var_c0) != 0)
        rbx_2 = sub_140d3c6e0(&var_c0)
    
    result = sub_1423d2710(data_143f5b298, rdi_1, rbx_2, arg2, &var_b0)
else
    void* rax_4 = *(r14 + 0x188)
    void* rsi_1
    
    if (rax_4 == 0)
        rsi_1 = *(r14 + 0x300)
    else
        rsi_1 = *(rax_4 + 0xc0)
    
    void*** rax_5 = sub_140a84c80(0, 0x40, 0)
    
    if (rax_5 != 0)
        *rax_5 = &data_1432e28a0
        rax_5[1] = var_c8
        rax_5[2] = var_c0
        rax_5[3].d = arg2
        sub_140596d10(&rax_5[4], &var_b0)
        rax_5[7] = sub_140a387b0()
        *rax_5 = &data_1432e28f8
    
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    
    if (rax_5 != 0)
        (*rax_5)[8](rax_5, &var_88)
    
    void var_78
    sub_140d3a3a0(&var_78, nullptr)
    int64_t var_70_1 = 0
    int64_t var_68_1 = 0
    void* var_58_1 = nullptr
    int64_t var_90
    sub_1423e6520(rsi_1, &var_90, &var_88)
    
    if (var_68_1 != 0)
        void var_48
        void* rcx_10 = &var_48
        
        if (var_58_1 != 0)
            rcx_10 = var_58_1
        
        (*(*rcx_10 + 0x10))(rcx_10)
    
    result = sub_140745b20(&var_88)
    
    if (rax_5 != 0)
        (*rax_5)[7](rax_5, 0)
        result = sub_140a84c80(rax_5, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

int64_t rcx_20 = var_b0

if (rcx_20 != 0)
    result = sub_140a74f90(rcx_20)

__security_check_cookie(rax_1 ^ &var_f8)
return result
