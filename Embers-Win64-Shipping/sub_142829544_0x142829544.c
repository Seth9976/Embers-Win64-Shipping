// 函数: sub_142829544
// 地址: 0x142829544
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
sub_142828d00(*(arg1 + 8))
int32_t var_118 = 2
sub_1428256bc(*(arg1 + 0x18), &var_118)
int32_t var_f8

while (true)
    void var_98
    struct std::exception::VTable* exceptionObject
    
    if (sub_142828cbc(*(arg1 + 8)) != 0)
        sub_14058a5c0(&var_98, "end of sequence not found")
        void var_110
        sub_1428244f0(&exceptionObject, sub_1427bde30(*(arg1 + 8), &var_110), &var_98)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    int32_t* rax_3 = sub_142828cd8(*(arg1 + 8))
    var_f8 = *rax_3
    int32_t rcx_5 = rax_3[1]
    int64_t var_f0 = *(rax_3 + 8)
    int32_t var_e8_1 = rax_3[4]
    int64_t var_d0_1 = 0
    int64_t var_c8_1 = 0
    void var_e0
    sub_140593830(&var_e0, &rax_3[6])
    void* var_c0
    sub_142829008(&var_c0, &rax_3[0xe])
    int32_t var_a8_1 = rax_3[0x14]
    
    if (rcx_5 != 7 && rcx_5 != 5)
        sub_14058a5c0(&var_98, "end of sequence not found")
        sub_1428244f0(&exceptionObject, &var_f0, &var_98)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    sub_142828d00(*(arg1 + 8))
    
    if (rcx_5 == 5)
        break
    
    char rax_5 = sub_142828cbc(*(arg1 + 8))
    void* rax_6
    
    if (rax_5 == 0)
        rax_6 = sub_142828cd8(*(arg1 + 8))
    
    if (rax_5 != 0 || ((*(rax_6 + 4) - 5) & 0xfffffffd) != 0)
        sub_142829ce4(arg1, arg2, arg3)
    else
        int64_t r9_1 = *arg2
        (*(r9_1 + 0x18))(arg2, rax_6 + 8, 0, r9_1)
    
    sub_1428272a0(&var_f8)

sub_1428272a0(&var_f8)
void* result = *(arg1 + 0x18)
int64_t temp0 = *(result + 0x20)
*(result + 0x20) -= 1

if (temp0 == 1)
    *(result + 0x18) = 0

__security_check_cookie(rax_1 ^ &var_138)
return result
