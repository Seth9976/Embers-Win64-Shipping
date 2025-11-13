// 函数: sub_1429bb240
// 地址: 0x1429bb240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rbx = *arg1
int64_t zmm0 = float.d(rbx)

if (rbx s< 0)
    zmm0 = zmm0 f+ 1.8446744073709552e+19

double zmm0_1 = ceil(zmm0 f* 0.01)
double zmm1 = 9.2233720368547758e+18
int64_t rax_2 = 0

if (not(zmm0_1 < zmm1))
    zmm0_1 = zmm0_1 - zmm1
    
    if (not(zmm0_1 >= zmm1))
        rax_2 = -0x8000000000000000

int64_t rcx_1 = int.q(zmm0_1) + rax_2

if (rbx u> not.q(rcx_1))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14298bd40(&exceptionObject, "Integer addition overflow.")
    _CxxThrowException(&exceptionObject, &data_1439467f8)
    noreturn

int64_t rax_5 = rcx_1 + rbx

if (rax_5 u<= -0x65)
    __security_check_cookie(rax_1 ^ &var_f8)
    return rax_5 + 0x64

struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
sub_14298bd40(&exceptionObject_1, "Integer addition overflow.")
_CxxThrowException(&exceptionObject_1, &data_1439467f8)
noreturn
