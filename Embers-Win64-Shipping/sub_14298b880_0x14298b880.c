// 函数: sub_14298b880
// 地址: 0x14298b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
class std::basic_istream<unsigned short>* rbx = arg1
int32_t* result

if ((*(sx.q((*arg1)[1]) + rbx + 0x10) & 6) == 0)
    result.b = 1
else
    if (*_errno() != 0)
        sub_142c9cdd0()
        noreturn
    
    if (rbx->_Chcount s< arg2)
        void* var_178
        sub_1429779b0(&var_178, 3, 1)
        std::istream::gcount(rbx)
        void var_168
        sub_14058b120(
            std::ostream::operator<<(sub_14058b120(
                std::ostream::operator<<(sub_14058b120(&var_168, "Early end of file: read ")), 
                " out of ")), 
            " requested bytes.")
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297d5a0(&exceptionObject, &var_178)
        _CxxThrowException(&exceptionObject, &data_1439465c8)
        noreturn
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_1a8)
return result
