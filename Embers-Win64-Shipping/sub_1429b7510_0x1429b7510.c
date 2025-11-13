// 函数: sub_1429b7510
// 地址: 0x1429b7510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
struct Imf_2_3::Compressor::Imf_2_3::RleCompressor::VTable** result = arg1
struct Imf_2_3::Compressor::VTable** var_80 = arg1
Microsoft::WRL::Wrappers::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>(
    arg1, arg2)
*result = &Imf_2_3::RleCompressor::`vftable'{for `Imf_2_3::Compressor'}
result[2].d = arg3.d
result[3] = 0
result[4] = 0
result[3] = j_sub_140a82f30(arg3)

if (arg3 != 0 && divu.dp.q(-1, arg3) u< 3)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14298bd40(&exceptionObject, "Integer multiplication overflow.")
    _CxxThrowException(&exceptionObject, &data_1439467f8)
    noreturn

result[4] = j_sub_140a82f30((arg3 * 3) u>> 1)
__security_check_cookie(rax_1 ^ &var_a8)
return result
