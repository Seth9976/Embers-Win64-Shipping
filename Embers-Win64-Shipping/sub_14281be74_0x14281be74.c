// 函数: sub_14281be74
// 地址: 0x14281be74
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58

if (sub_14281c208(arg1) != 0)
    sub_14281b79c(arg1, 2)
    char* rax_3 = sub_14281aa14(arg1)
    int64_t var_28_1 = 0
    int64_t var_20_1 = 0xf
    char var_38 = 0
    SimpleString::operator=(&var_38, rax_3)
    sub_14281f344(&arg1[1], &var_38)
    
    if (var_20_1 u>= 0x10)
        sub_14058ba50(var_38.q, var_20_1 + 1)
    
    sub_14281bb0c(arg1)

__security_check_cookie(rax_1 ^ &var_58)
return arg1
