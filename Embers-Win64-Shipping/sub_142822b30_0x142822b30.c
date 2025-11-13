// 函数: sub_142822b30
// 地址: 0x142822b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
char** rax = j_sub_140a82f30(0x10)
char** arg_10 = rax
char** rdi

if (rax == 0)
    rdi = nullptr
else
    rdi = sub_142822bcc(rax)

*arg1 = 0
arg1[1] = 0
arg_10 = rdi
struct std::_Ref_count_base::std::_Ref_count<class YAML::detail::node_ref>::VTable** rax_2 =
    j_sub_140a82f30(0x18)
arg_10 = rax_2

if (rax_2 != 0)
    *rax_2 = zx.o(0)
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rax_2 = &std::_Ref_count<class YAML::detail::node_ref>::`vftable'{for `std::_Ref_count_base'}
    rax_2[2] = rdi

*arg1 = rdi
arg1[1] = rax_2
sub_142822ac0(&arg1[2])
arg1[4] = 0
return arg1
