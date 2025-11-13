// 函数: sub_142822bcc
// 地址: 0x142822bcc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_8 = arg1
char** result = arg1
char* rax = j_sub_140a82f30(0xa8)
arg_8 = rax
char* rdi

if (rax == 0)
    rdi = nullptr
else
    rdi = sub_14281c994(rax)

*result = nullptr
result[1] = 0
arg_8 = rdi
struct std::_Ref_count_base::std::_Ref_count<class YAML::detail::node_data>::VTable** rax_2 =
    j_sub_140a82f30(0x18)
arg_8 = rax_2

if (rax_2 != 0)
    *rax_2 = zx.o(0)
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rax_2 = &std::_Ref_count<class YAML::detail::node_data>::`vftable'{for `std::_Ref_count_base'}
    rax_2[2] = rdi

*result = rdi
result[1] = rax_2
return result
