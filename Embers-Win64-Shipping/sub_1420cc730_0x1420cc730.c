// 函数: sub_1420cc730
// 地址: 0x1420cc730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
__builtin_memset(arg1, 0, 0x18)
void var_c0
int128_t var_e8 = *sub_140a1dfc0(arg2, &var_c0)
sub_140d2c760(arg1, &var_e8)

if (arg2[1].d s> 1 && *arg1 == 0)
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int32_t var_78_1 = 0xffffffff
    int32_t var_7c_1 = 0x80
    int32_t var_74_1 = 0
    int64_t var_68_1 = 0
    int32_t var_60_1 = 0
    void var_d8
    int64_t* rax_3 = sub_140a9fca0(&var_d8, arg2)
    int32_t var_58 = 4
    int64_t var_48_1 = *rax_3
    int64_t* rcx_3 = rax_3[1]
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    int32_t var_38_1 = rax_3[2].d
    char var_30_1 = 1
    int64_t var_118 = 0
    int32_t var_110_1 = 0
    sub_1405947f0(&var_118, 0xb)
    int32_t rax_6 = var_110_1 + 0xb
    var_110_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_118)
    
    UnDecorator::getReferenceType(var_118, u"PathString", 0x16)
    int64_t* var_100 = &var_118
    int32_t* var_f8_1 = &var_58
    void var_108
    sub_140b91dc0(&var_a8, &var_108, &var_100, nullptr)
    int64_t rcx_8 = var_118
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    if (var_30_1 != 0)
        char var_30_2 = 0
        
        if (rcx_3 != 0)
            rcx_3[1].d -= 1
            
            if (rcx_3[1].d == 1)
                (**rcx_3)(rcx_3)
                int32_t rax_9 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* var_d0
    
    if (var_d0 != 0)
        var_d0[1].d -= 1
        
        if (var_d0[1].d == 1)
            (**var_d0)(var_d0)
            int32_t rdi_1 = *(var_d0 + 0xc)
            *(var_d0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_2 = *var_d0
                (*(r8_2 + 8))(var_d0, zx.q(rdi_1), r8_2)
    
    int32_t var_60_2 = 0
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    sub_140acd610(&var_a8)

__security_check_cookie(rax_1 ^ &var_138)
return arg1
