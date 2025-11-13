// 函数: sub_14298b370
// 地址: 0x14298b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::OStream::VTable** arg_8 = arg1
int64_t var_28 = -2
struct Imf_2_3::OStream::Imf_2_3::StdOSStream::VTable** result = arg1
int32_t arg_10 = 0
sub_14297ab50(arg1, "(string)")
*result = &Imf_2_3::StdOSStream::`vftable'{for `Imf_2_3::OStream'}
void* arg_18 = &result[5]
result[5] = &data_142d68768
std::ios::ios<char, struct std::char_traits<char> >(&result[0x16])
arg_10 = 1
std::ostream::ostream<char, struct std::char_traits<char> >(&result[5], &result[6], 0)
*(sx.q(*(&result[5]->__offset(0x0).q + 4)) + &result[5]) = &std::ostringstream::`vftable'
int64_t rdx_2 = sx.q(*(&result[5]->__offset(0x0).q + 4))
*(rdx_2 + &result[5] - 4) = (rdx_2 - 0x88).d
sub_14058a890(&result[6], 2)
return result
