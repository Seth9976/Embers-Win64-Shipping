// 函数: sub_140b50d70
// 地址: 0x140b50d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68

if ((*(arg1 + 0x1c) == 0 & sub_140b5b8a0(*(arg1 + 0x18), 0)) != 0)
    sub_140b508e0()
    AcquireSRWLockShared(&data_143de8578)
    void var_40
    sub_140b4fcd0(&data_143de8578, &var_40, arg1)
    ReleaseSRWLockShared(&data_143de8578)
    char var_20
    void var_48
    
    if (var_20 != 0)
        *(arg1 + 0x18) = *sub_140b50d70(&var_40, &var_48)

*arg2 = *(arg1 + 0x18)
__security_check_cookie(rax_1 ^ &var_68)
return arg2
