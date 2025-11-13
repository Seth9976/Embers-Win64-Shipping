// 函数: sub_1428237b4
// 地址: 0x1428237b4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct YAML::EventHandler::YAML::NodeBuilder::VTable** arg_8 = arg1
*arg1 = &YAML::NodeBuilder::`vftable'{for `YAML::EventHandler'}
int64_t* rax = j_sub_140a82f30(0x10)
int64_t* arg_10 = rax
int64_t* rdi

if (rax == 0)
    rdi = nullptr
else
    rdi = sub_1428238b0(rax)

arg1[1] = 0
arg1[2] = 0
arg_10 = rdi
struct std::_Ref_count_base::std::_Ref_count<class YAML::detail::memory_holder>::VTable** rax_2 =
    j_sub_140a82f30(0x18)
arg_10 = rax_2

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = zx.o(0)
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rax_2 =
        &std::_Ref_count<class YAML::detail::memory_holder>::`vftable'{for `std::_Ref_count_base'}
    rax_2[2] = rdi

arg1[1] = rdi
arg1[2] = rax_2
__builtin_memset(&arg1[3], 0, 0x58)
arg_10 = nullptr
int64_t* rdx = arg1[8]

if (rdx == arg1[9])
    sub_14281c4cc(&arg1[7], rdx, &arg_10)
else
    *rdx = 0
    arg1[8] = &arg1[8]->vFunc_1

return arg1
