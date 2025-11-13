// 函数: sub_1429a1bf0
// 地址: 0x1429a1bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::Attribute::VTable** arg_8 = arg1
int64_t var_18 = -2
char* rbx = arg2
struct Imf_2_3::Attribute::Imf_2_3::OpaqueAttribute::VTable** result = arg1
std::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>(
    arg1)
*result = &Imf_2_3::OpaqueAttribute::`vftable'{for `Imf_2_3::Attribute'}
int64_t rdi = -1

do
    rdi += 1
while (rbx[rdi] != 0)

result[2] = j_sub_140a82f30(sx.q(rdi.d + 1))
result[1].d = rdi.d + 1
result[3].d = 0
result[5] = 0
result[4].d = 0
char* rcx_1 = result[2]
char i

do
    i = *rbx
    *rcx_1 = i
    rbx = &rbx[1]
    rcx_1 = &rcx_1[1]
while (i != 0)
return result
