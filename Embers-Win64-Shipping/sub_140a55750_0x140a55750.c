// 函数: sub_140a55750
// 地址: 0x140a55750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
char* var_18 = __security_cookie ^ &var_138

if (data_143de5429 != 0)
    int64_t* rax_2 = sub_140ac6680(arg2)
    int16_t* const rdx
    
    if (rax_2[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *rax_2
    
    sub_1405a65a0(u"%ls", rdx)
    sub_1405a65a0(u"%ls", u" (Y/N): ")
    char rax_3
    
    if (data_143de542f != 1)
        rax_3 = sub_140a4aa30()
    
    char _Buffer[0x100]
    
    if (data_143de542f == 1 || rax_3 == 1)
        sub_1405a65a0(u"%ls", &(*U"RGBXYZF10|")[4])
    else if (fgets(&_Buffer, 0x100, __acrt_iob_func(0)) != 0)
        bool rax_5 = ((_Buffer[0] - 0x59) & 0xdf) == 0
        __security_check_cookie(var_18 ^ &var_138)
        return rax_5

char* rax_1
rax_1.b = 1
__security_check_cookie(var_18 ^ &var_138)
return rax_1
