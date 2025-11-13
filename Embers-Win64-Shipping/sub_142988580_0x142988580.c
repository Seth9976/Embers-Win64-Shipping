// 函数: sub_142988580
// 地址: 0x142988580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
(*(*arg2 + 0x28))(arg2, 0)
*(*(arg1 + 8) + 0xd0) = 1
struct Imf_2_3::GenericInputFile::Imf_2_3::MultiPartInputFile::VTable** rax_2 =
    j_sub_140a82f30(0x10)
struct Imf_2_3::GenericInputFile::Imf_2_3::MultiPartInputFile::VTable** arg_8 = rax_2
struct Imf_2_3::GenericInputFile::Imf_2_3::MultiPartInputFile::VTable** rcx_3

if (rax_2 == 0)
    rcx_3 = nullptr
else
    rcx_3 = sub_1429aebd0(rax_2, arg2, *(*(arg1 + 8) + 0xc0), 1)

*(*(arg1 + 8) + 0xd8) = rcx_3
int64_t* rax_5 = sub_1429b0690(*(*(arg1 + 8) + 0xd8), 0)
*(*(arg1 + 8) + 0xe0) = rax_5[5]
*(*(arg1 + 8) + 0x68) = rax_5[4].d
sub_14297d930(*(arg1 + 8) + 0x50, rax_5)
*(*(arg1 + 8) + 0xc4) = *(rax_5 + 0x1c)
*(*(arg1 + 8) + 0xc8) = rax_5
return sub_142988810(arg1) __tailcall
