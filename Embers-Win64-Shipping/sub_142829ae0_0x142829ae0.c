// 函数: sub_142829ae0
// 地址: 0x142829ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
sub_142828d00(*(arg1 + 8))
int32_t var_b8 = 4
sub_1428256bc(*(arg1 + 0x18), &var_b8)

while (true)
    void var_b0
    void var_a0
    struct std::exception::VTable* exceptionObject
    
    if (sub_142828cbc(*(arg1 + 8)) != 0)
        sub_14058a5c0(&var_a0, "end of sequence flow not found")
        sub_1428244f0(&exceptionObject, sub_1427bde30(*(arg1 + 8), &var_b0), &var_a0)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    if (*(sub_142828cd8(*(arg1 + 8)) + 4) == 0xa)
        break
    
    sub_142829ce4(arg1, arg2, arg3)
    
    if (sub_142828cbc(*(arg1 + 8)) != 0)
        sub_14058a5c0(&var_a0, "end of sequence flow not found")
        sub_1428244f0(&exceptionObject, sub_1427bde30(*(arg1 + 8), &var_b0), &var_a0)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    void* rax_4 = sub_142828cd8(*(arg1 + 8))
    
    if (*(rax_4 + 4) != 0xd)
        if (*(rax_4 + 4) != 0xa)
            sub_14058a5c0(&var_a0, "end of sequence flow not found")
            sub_1428244f0(&exceptionObject, rax_4 + 8, &var_a0)
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

__security_check_cookie(rax_1 ^ &var_d8)
return result
