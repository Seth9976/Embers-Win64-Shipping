// 函数: sub_1428238b0
// 地址: 0x1428238b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rbx = rax
arg_8 = rax

if (rax == 0)
    rbx = nullptr
else
    sub_1428236b8(rax)

*arg1 = 0
arg1[1] = 0
arg_8 = rbx
int64_t* rax_1 = j_sub_140a82f30(0x18)
arg_8 = rax_1

if (rax_1 != 0)
    *rax_1 = zx.o(0)
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rax_1 = &std::_Ref_count<class YAML::detail::memory>::`vftable'{for `std::_Ref_count_base'}
    rax_1[2] = rbx

*arg1 = rbx
arg1[1] = rax_1
return arg1
