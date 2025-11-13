// 函数: sub_1429b88c0
// 地址: 0x1429b88c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
struct Imf_2_3::Compressor::Imf_2_3::Pxr24Compressor::VTable** result = arg1
struct Imf_2_3::Compressor::VTable** var_100 = arg1
Microsoft::WRL::Wrappers::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>(
    arg1, arg2)
*result = &Imf_2_3::Pxr24Compressor::`vftable'{for `Imf_2_3::Compressor'}
result[2].d = arg3.d
*(result + 0x14) = arg4.d
result[3] = 0
result[4] = 0
result[5] = sub_14297e970(arg2)
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (arg3 != 0 && arg4 u> divu.dp.q(-1, arg3))
    sub_14298bd40(&exceptionObject, "Integer multiplication overflow.")
    _CxxThrowException(&exceptionObject, &data_1439467f8)
    noreturn

int64_t rdi_1 = arg4 * arg3
int64_t zmm0 = float.d(rdi_1)

if (rdi_1 s< 0)
    zmm0 = zmm0 f+ 1.8446744073709552e+19

double zmm0_1 = ceil(zmm0 f* 0.01)
int64_t rax_4 = 0
double zmm1 = 9.2233720368547758e+18

if (not(zmm0_1 < zmm1))
    zmm0_1 = zmm0_1 - zmm1
    
    if (not(zmm0_1 >= zmm1))
        rax_4 = -0x8000000000000000

int64_t rcx_2 = int.q(zmm0_1) + rax_4

if (rdi_1 u> not.q(rcx_2))
    sub_14298bd40(&exceptionObject, "Integer addition overflow.")
    _CxxThrowException(&exceptionObject, &data_1439467f8)
    noreturn

int64_t rbx_1 = rcx_2 + rdi_1

if (rbx_1 u> -0x65)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
    sub_14298bd40(&exceptionObject_1, "Integer addition overflow.")
    _CxxThrowException(&exceptionObject_1, &data_1439467f8)
    noreturn

result[3] = j_sub_140a82f30(rdi_1)
result[4] = j_sub_140a82f30(rbx_1 + 0x64)
int32_t* rax_9 = sub_142980a30(arg2)
result[6].d = *rax_9
*(result + 0x34) = rax_9[2]
result[7].d = rax_9[3]
__security_check_cookie(rax_1 ^ &var_128)
return result
