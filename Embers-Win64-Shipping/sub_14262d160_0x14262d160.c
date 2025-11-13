// 函数: sub_14262d160
// 地址: 0x14262d160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
int64_t _ArgList = arg4
void var_268
int64_t result = __security_cookie ^ &var_268
int64_t result_1 = result

if (arg1[1].b != 0)
    char _Buffer[0x200]
    int32_t r9_1 =
        __stdio_common_vsprintf(data_143cd5b30 | 2, &_Buffer, 0x200, arg3, nullptr, &_ArgList)
    
    if (r9_1 s< 0)
        r9_1 = -1
    
    if (r9_1 == 0xffffffff || r9_1 s>= 0x200)
        r9_1 = -1
    
    result = (*(*arg1 + 0x10))(arg1, zx.q(arg2), &_Buffer, r9_1)

__security_check_cookie(result_1 ^ &var_268)
return result
