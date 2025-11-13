// 函数: sub_140b353d0
// 地址: 0x140b353d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int16_t* var_a8
sub_140add5c0(&var_a8, &arg2[2], 0, nullptr)
char var_90

if (var_90 != 0)
    int32_t rbx_1 = 0
    int64_t rsi_1 = 0
    int16_t* r12_1 = var_a8
    int64_t var_a0
    int32_t rdi_3 = ((var_a0 - r12_1) s>> 1).d
    int32_t r15_1 = 0
    int64_t var_f8 = 0
    int64_t var_f0_1 = 0
    
    if (r12_1 != 0 && *r12_1 != 0 && rdi_3 s> 0)
        if (rdi_3 + 1 s> 0)
            sub_1405947f0(&var_f8, rdi_3 + 1)
            r15_1 = var_f0_1:4.d
            rbx_1 = var_f0_1.d
            rsi_1 = var_f8
        
        rbx_1 += rdi_3 + 1
        var_f0_1.d = rbx_1
        
        if (rbx_1 s> r15_1)
            sub_140594770(&var_f8)
            r15_1 = var_f0_1:4.d
            rbx_1 = var_f0_1.d
            rsi_1 = var_f8
        
        UnDecorator::getReferenceType(rsi_1, r12_1, rdi_3 * 2)
        *(rsi_1 + (sx.q(rbx_1) << 1) - 2) = 0
    
    var_f8 = rsi_1
    var_f0_1.d = rbx_1
    int64_t var_e8_1 = 0
    int64_t var_e0_1 = 0
    var_f0_1:4.d = r15_1
    sub_140b4ae80(&var_f8)
    void var_d0
    int64_t* rax_3 = sub_140b2f970(&var_d0, &var_f8, 1, 0)
    sub_140b3e980()
    int128_t var_88 = data_143de7cd0.o
    int64_t rax_4 = *rax_3
    __builtin_memset(rax_3, 0, 0x20)
    var_f8 = rax_4
    var_f0_1.d = rax_3[1].d
    var_f0_1:4.d = *(rax_3 + 0xc)
    int64_t var_e8_2 = rax_3[2]
    var_e0_1.d = rax_3[3].d
    var_e0_1:4.d = *(rax_3 + 0x1c)
    char var_d8_1 = rax_3[4].b
    char var_d7_1 = *(rax_3 + 0x21)
    void** var_78
    sub_140b2d700(&var_78, &var_f8)
    int64_t rcx_7 = rax_3[2]
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = *rax_3
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    sub_140b0e240(arg2, &var_a8, &var_88)
    sub_140b0bbf0(&var_88)

*(arg1 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_118)
return arg1
