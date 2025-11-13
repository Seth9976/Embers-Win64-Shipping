// 函数: sub_1429ced00
// 地址: 0x1429ced00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int64_t _ArgList = arg3
int64_t r9
int64_t arg_20 = r9
__chkstk(0x2840)
void var_2858
int64_t rax_1 = __security_cookie ^ &var_2858
int64_t rdi = sx.q(arg1)
char _Buffer[0x2800]
__stdio_common_vsprintf(data_143cd5b30 | 2, &_Buffer, 0x2800, arg2, nullptr, &_ArgList)
int64_t rax_2 = data_143fed238
int64_t result

if (rax_2 == 0)
    result = sub_140b4b300("%s: %s\n", (&data_143cc6fa0)[rdi])
else
    result = rax_2(zx.q(rdi.d), &_Buffer)

__security_check_cookie(rax_1 ^ &var_2858)
return result
