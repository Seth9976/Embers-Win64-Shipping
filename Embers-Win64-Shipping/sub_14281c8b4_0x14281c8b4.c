// 函数: sub_14281c8b4
// 地址: 0x14281c8b4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
struct std::exception::VTable** var_48 = arg1
char var_40
char* rax_2 = sub_140686d00(&var_40, arg2, arg3)

if (*(rax_2 + 0x18) u>= 0x10)
    rax_2 = *rax_2

*arg1 = &std::exception::`vftable'
*(arg1 + 8) = zx.o(0)
struct __std_exception_data from
from._What = rax_2
from._DoFree = 1
__std_exception_copy(&from, &arg1[1])
*arg1 = &std::runtime_error::`vftable'{for `std::exception'}
int64_t var_28

if (var_28 u>= 0x10)
    sub_14058ba50(var_40.q, var_28 + 1)

int64_t var_30 = 0
int64_t var_28_1 = 0xf
var_40 = 0
*arg1 = &YAML::Exception::`vftable'{for `std::runtime_error'}
arg1[3] = *arg2
arg1[4].d = arg2[1].d
arg1[7] = 0
arg1[8] = 0
sub_140593830(&arg1[5], arg3)
__security_check_cookie(rax_1 ^ &var_78)
return arg1
