// 函数: sub_142996150
// 地址: 0x142996150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::Compressor::VTable** arg_8 = arg1
int64_t var_18 = -2
struct Imf_2_3::Compressor::Imf_2_3::DwaCompressor::VTable** result = arg1
Microsoft::WRL::Wrappers::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>::HandleT<struct x09cf6481::HandleT::operator[]::HMODULETraits>(
    arg1, arg2)
*result = &Imf_2_3::DwaCompressor::`vftable'{for `Imf_2_3::Compressor'}
result[2].d = arg5
*(result + 0x14) = arg3
result[3].d = arg4
void* var_10 = &result[6]
sub_142991270(&result[6], sub_14297e970(arg2))
__builtin_memset(&result[8], 0, 0x88)
result[0x1f] = 0
result[0x20].d = 0x42340000
*(result + 0x1c) = *sub_142980a30(arg2)
result[4].d = *(sub_142980a30(arg2) + 4)
*(result + 0x24) = *(sub_142980a30(arg2) + 8)
result[5].d = *(sub_142980a30(arg2) + 0xc)
__builtin_memset(&result[0x19], 0, 0x30)

if (Concurrency::details::UMSSchedulingContext::OnPrimary(arg2) != 0)
    result[0x20].d = *sub_14298af50(arg2)

return result
