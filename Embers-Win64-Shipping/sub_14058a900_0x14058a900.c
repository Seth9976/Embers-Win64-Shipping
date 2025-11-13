// 函数: sub_14058a900
// 地址: 0x14058a900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t _Last2 = __security_cookie ^ &var_68

if (arg1[0xd] == 0 || *(arg1 + 0x71) == 0)
    int64_t rax_1
    rax_1.b = 1
    __security_check_cookie(_Last2 ^ &var_68)
    return rax_1

uint64_t rax_3

if ((*(*arg1 + 0x18))(arg1, 0xffffffff).d == 0xffffffff)
    rax_3.b = 0
else
    char* _Mid2
    char var_30[0x20]
    int32_t rax_4 = std::codecvt<char, char, struct _Mbstatet>::unshift(arg1[0xd], arg1 + 0x74, 
        &var_30, &_Last2, &_Mid2)
    
    if (rax_4 == 0)
        *(arg1 + 0x71) = 0
    label_14058a998:
        char* _Mid2_1 = _Mid2
        uint64_t _ElementCount = _Mid2_1 - &var_30
        
        if (_Mid2_1 == &var_30)
            rax_3.b = *(arg1 + 0x71) == 0
        else if (_ElementCount != fwrite(&var_30, 1, _ElementCount, arg1[0x10]))
            rax_3.b = 0
        else
            rax_3.b = *(arg1 + 0x71) == 0
    else
        if (rax_4 == 1)
            goto label_14058a998
        
        if (rax_4 != 3)
            rax_3.b = 0
        else
            *(arg1 + 0x71) = 0
            rax_3.b = 1

__security_check_cookie(_Last2 ^ &var_68)
return rax_3
