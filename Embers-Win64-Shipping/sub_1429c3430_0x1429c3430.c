// 函数: sub_1429c3430
// 地址: 0x1429c3430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1a8 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
enum WAIT_EVENT result = WaitForSingleObject(*(arg1 + 8), 0xffffffff)

if (result == WAIT_OBJECT_0)
    __security_check_cookie(rax_1 ^ &var_1c8)
    return result

void* var_198
sub_1429779b0(&var_198, 3, 1)
void var_98
char* rax_2 = sub_1429c32a0(&var_98)
void var_188
sub_14058b120(
    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::operator+=(
        sub_14058b120(&var_188, "Could not wait on semaphore ("), rax_2), 
    ").")
sub_14058a4d0(&var_98)
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
sub_142985b80(&exceptionObject, &var_198)
_CxxThrowException(&exceptionObject, &data_143946700)
noreturn
