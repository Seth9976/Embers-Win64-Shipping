// 函数: sub_1429cedc0
// 地址: 0x1429cedc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_8 = arg1
int64_t _ArgList = arg2
int64_t r8
int64_t arg_18 = r8
int64_t r9
int64_t arg_20 = r9
__chkstk(0x2848)
void var_2858
int64_t rax_1 = __security_cookie ^ &var_2858
char _Buffer[0x2800]
__stdio_common_vsprintf(data_143cd5b30 | 2, &_Buffer, 0x2800, arg1, nullptr, &_ArgList)
int64_t rax_2 = data_143fed240
int64_t result

if (rax_2 == 0)
    result = sub_141528310(__acrt_iob_func(1), "Warning: %s\n", &_Buffer)
else
    result = rax_2(&_Buffer)

__security_check_cookie(rax_1 ^ &var_2858)
return result
