// 函数: sub_1428e5670
// 地址: 0x1428e5670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
__time64_t var_68 = arg2
struct tm var_60
struct tm* rax_2 = sub_14292b0d0(&var_68, &var_60)
int32_t* result

if (rax_2 != 0)
    int32_t rax_3
    
    if (arg3 != 0 || arg4 != 0)
        rax_3 = sub_14292b100(rax_2, arg3, arg4)
    
    if ((arg3 != 0 || arg4 != 0) && rax_3 == 0)
        result = nullptr
    else
        result = sub_1428e5a90(arg1, rax_2, 0xffffffff)
else
    sub_1428a5670((&rax_2->tm_mday + 1).d, 0xd9, 0xad, "crypto\asn1\a_time.c", 0x146)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_98)
return result
