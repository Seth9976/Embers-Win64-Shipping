// 函数: sub_141f4a580
// 地址: 0x141f4a580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rcx = arg1[0x18]

if (rcx != 0)
    void var_68
    (*(*rcx + 0x408))(rcx, &var_68, arg1[0x19], 0)
    float var_98[0x4]
    sub_140ad7d70(arg2, &var_98, &var_68)
    char rax_3 = *(arg1 + 0x14c)
    
    if ((rax_3 & 4) != 0)
        float var_88_1[0x4] = arg2[1]
    
    if ((rax_3 & 8) != 0)
        var_98 = *arg2
    
    if ((rax_3 & 0x10) != 0)
        float var_78_1[0x4] = arg2[2]
    
    arg2 = &var_98

int64_t result = sub_141f49090(arg1, arg2, arg3, arg4, arg5)
__security_check_cookie(rax_1 ^ &var_c8)
return result
