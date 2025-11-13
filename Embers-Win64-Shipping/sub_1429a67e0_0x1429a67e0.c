// 函数: sub_1429a67e0
// 地址: 0x1429a67e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_180 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
char result_1
(*(*arg2 + 0x10))(arg2, &result_1, 4)
char var_187
char var_186
char var_185
int32_t rdi_6 = ((sx.d(var_185) << 8 | zx.d(var_186)) << 8 | zx.d(var_187)) << 8 | zx.d(result_1)
(*(*arg2 + 0x10))(arg2, &result_1, 4)
uint32_t result = zx.d(result_1)
int32_t rcx_8 = ((sx.d(var_185) << 8 | zx.d(var_186)) << 8 | zx.d(var_187)) << 8 | result
*arg3 = rcx_8
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (rdi_6 != 0x1312f76)
    sub_14297ab20(&exceptionObject, "File is not an image file.")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

void* var_178
void var_168

if (rcx_8.b != 2)
    sub_1429779b0(&var_178, 3, 1)
    sub_14058b120(
        std::ostream::operator<<(sub_14058b120(
            std::ostream::operator<<(sub_14058b120(&var_168, "Cannot read version ")), 
            " image files.  Current file format version is ")), 
        .")
    sub_14297d5a0(&exceptionObject, &var_178)
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

if ((rcx_8 & 0xffffe100) == 0)
    __security_check_cookie(rax_1 ^ &var_1a8)
    return result

sub_1429779b0(&var_178, 3, 1)
sub_14058b120(&var_168, "The file format version number's flag field contains unrecognized flags.")
sub_14297d5a0(&exceptionObject, &var_178)
_CxxThrowException(&exceptionObject, &data_1439465c8)
noreturn
