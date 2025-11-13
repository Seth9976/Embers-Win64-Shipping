// 函数: sub_142883df0
// 地址: 0x142883df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xe8)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t result
int64_t var_88[0x2]
void var_78

if (sub_1428821e0(arg1, 0) == 0)
    result = 0
else if (sub_142851d80(arg1, &var_78, 0x40, &var_88) == 0)
    result = 0
else
    void* rax_4 = *(arg1 + 0x508)
    int32_t var_90_1 = 1
    
    if (sub_142883000(arg1, arg2, arg3, &var_78, (var_88[0]).d, 0, 0, 0, 0, 0, 0, rax_4 + 0x50, 
            (*(rax_4 + 8)).d, arg4, 0xc) == 0)
        result = 0
    else
        sub_1428b8960(&var_78, var_88[0])
        result = 0xc
__security_check_cookie(rax_1 ^ &var_108)
return result
