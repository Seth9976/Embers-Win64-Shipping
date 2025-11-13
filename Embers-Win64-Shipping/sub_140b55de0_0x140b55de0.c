// 函数: sub_140b55de0
// 地址: 0x140b55de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
void* result = __security_cookie ^ &var_98
void* result_1 = result

if ((arg1[5].b & 1) == 0)
    sub_140b508e0()
    AcquireSRWLockShared(&data_143de8578)
    int128_t var_38
    sub_140b4fcd0(&data_143de8578, &var_38, arg2)
    ReleaseSRWLockShared(&data_143de8578)
    int128_t var_78 = var_38
    int128_t var_28
    int128_t var_68_1 = var_28
    int128_t var_48 = *arg2
    int64_t var_20
    char rax_2 = sub_140b5b8a0(var_20.d, 0)
    int32_t rcx
    rcx.b = (var_20 u>> 0x20).d == 0
    
    if ((rcx.b & rax_2) != 0)
        sub_140b508e0()
        AcquireSRWLockShared(&data_143de8578)
        sub_140b4fcd0(&data_143de8578, &var_38, &var_78)
        ReleaseSRWLockShared(&data_143de8578)
    
    char var_18
    int64_t rbx_3
    
    if ((rcx.b & rax_2) == 0 || var_18 == 0)
        rbx_3 = var_68_1:8.q
    else
        void var_58
        rbx_3 = *sub_140b50d70(&var_38, &var_58)
        var_68_1:8.q = rbx_3
        char var_18_1 = 0
    
    result = sub_140b55580((*(*arg1 + 0x48))(arg1), &var_48, var_68_1.d, rbx_3)

__security_check_cookie(result_1 ^ &var_98)
return result
