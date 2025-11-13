// 函数: sub_14298ba80
// 地址: 0x14298ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* r9 = *(arg1 + 0x28)
int64_t _Count = sx.q(arg3)

if ((*(sx.q(*(*r9 + 4)) + r9 + 0x10) & 6) != 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297ab20(&exceptionObject, "Unexpected end of file.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

*_errno() = 0
std::istream::read(*(arg1 + 0x28), arg2, _Count)
int32_t* result = sub_14298b880(*(arg1 + 0x28), _Count)
__security_check_cookie(rax_1 ^ &var_a8)
return result
