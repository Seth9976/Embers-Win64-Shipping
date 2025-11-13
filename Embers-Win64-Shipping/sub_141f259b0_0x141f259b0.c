// 函数: sub_141f259b0
// 地址: 0x141f259b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_2 = *(arg1 + 0xa8)
void* result

if (arg2.d f<= 0f)
    if (rax_2 == 0)
        rax_2 = sub_141ee69e0(arg1)
    
    void* rbx_1 = *(rax_2 + 0x188)
    void* rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = *(rax_2 + 0x300)
    else
        rbx_2 = *(rbx_1 + 0xc0)
    
    result = sub_1423dce10(rbx_2, arg1 + 0x228)
    
    if (result != 0)
        result = sub_1423e60e0(rbx_2, *(arg1 + 0x228))
    
    *(arg1 + 0x228) = 0
else
    int32_t var_a0_1 = 0
    int64_t (* var_a8_1)(int64_t* arg1) = sub_141f05cfc
    
    if (rax_2 == 0)
        rax_2 = sub_141ee69e0(arg1)
    
    void* rcx_1 = *(rax_2 + 0x188)
    void* rbp_1
    
    if (rcx_1 == 0)
        rbp_1 = *(rax_2 + 0x300)
    else
        rbp_1 = *(rcx_1 + 0xc0)
    
    void*** rax_3 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_3 != 0)
        *rax_3 = &data_142e33ea8
        sub_140d3a3a0(&rax_3[1], arg1)
        *(rax_3 + 0x10) = var_a8_1.o
        rax_3[5] = sub_140a387b0()
        *rax_3 = &data_142e33f00
    
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    
    if (rax_3 != 0)
        (*rax_3)[8](rax_3, &var_98)
    
    void var_88
    sub_140d3a3a0(&var_88, nullptr)
    int64_t var_80_1 = 0
    int64_t var_78_1 = 0
    void* var_68_1 = nullptr
    sub_1423e6200(rbp_1, arg1 + 0x228, &var_98, arg2, 0, 0xbf800000)
    
    if (var_78_1 != 0)
        void var_58
        void* rcx_6 = &var_58
        
        if (var_68_1 != 0)
            rcx_6 = var_68_1
        
        (*(*rcx_6 + 0x10))(rcx_6)
    
    result = sub_140745b20(&var_98)
    
    if (rax_3 != 0)
        (*rax_3)[7](rax_3, 0)
        result = sub_140a84c80(rax_3, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_d8)
return result
