// 函数: sub_1428298d4
// 地址: 0x1428298d4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
sub_142828d00(*(arg1 + 8))
int32_t var_c8 = 3
sub_1428256bc(*(arg1 + 0x18), &var_c8)

while (true)
    void var_b0
    void var_a0
    struct std::exception::VTable* exceptionObject
    
    if (sub_142828cbc(*(arg1 + 8)) != 0)
        sub_14058a5c0(&var_a0, "end of map flow not found")
        sub_1428244f0(&exceptionObject, sub_1427bde30(*(arg1 + 8), &var_b0), &var_a0)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    void* rax_2 = sub_142828cd8(*(arg1 + 8))
    int64_t var_c0 = *(rax_2 + 8)
    int32_t var_b8_1 = *(rax_2 + 0x10)
    
    if (*(rax_2 + 4) == 0xb)
        break
    
    if (*(rax_2 + 4) != 0xe)
        (*(*arg2 + 0x18))(arg2, &var_c0, 0)
    else
        sub_142828d00(*(arg1 + 8))
        sub_142829ce4(arg1, arg2, arg3)
    
    char rax_4 = sub_142828cbc(*(arg1 + 8))
    void* rax_5
    
    if (rax_4 == 0)
        rax_5 = sub_142828cd8(*(arg1 + 8))
    
    if (rax_4 != 0 || *(rax_5 + 4) != 0xf)
        (*(*arg2 + 0x18))(arg2, &var_c0, 0)
    else
        sub_142828d00(*(arg1 + 8))
        sub_142829ce4(arg1, arg2, arg3)
    
    if (sub_142828cbc(*(arg1 + 8)) != 0)
        sub_14058a5c0(&var_a0, "end of map flow not found")
        sub_1428244f0(&exceptionObject, sub_1427bde30(*(arg1 + 8), &var_b0), &var_a0)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    void* rax_8 = sub_142828cd8(*(arg1 + 8))
    
    if (*(rax_8 + 4) != 0xd)
        if (*(rax_8 + 4) != 0xb)
            sub_14058a5c0(&var_a0, "end of map flow not found")
            sub_1428244f0(&exceptionObject, rax_8 + 8, &var_a0)
            _CxxThrowException(&exceptionObject, &data_143946450)
            noreturn
    else
        sub_142828d00(*(arg1 + 8))

sub_142828d00(*(arg1 + 8))
void* result = *(arg1 + 0x18)
int64_t temp0 = *(result + 0x20)
*(result + 0x20) -= 1

if (temp0 == 1)
    *(result + 0x18) = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
