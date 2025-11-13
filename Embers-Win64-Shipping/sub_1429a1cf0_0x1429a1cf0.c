// 函数: sub_1429a1cf0
// 地址: 0x1429a1cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct Imf_2_3::Attribute::Imf_2_3::OpaqueAttribute::VTable** result = j_sub_140a82f30(0x30)
struct Imf_2_3::Attribute::Imf_2_3::OpaqueAttribute::VTable** result_1 = result

if (result == 0)
    return nullptr

std::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>(
    result)
*result = &Imf_2_3::OpaqueAttribute::`vftable'{for `Imf_2_3::Attribute'}
int64_t rbx_1 = -1

do
    rbx_1 += 1
while ((*(arg1 + 0x10))[rbx_1] != 0)

result[2] = j_sub_140a82f30(sx.q(rbx_1.d + 1))
result[1].d = rbx_1.d + 1
result[3].d = *(arg1 + 0x18)
int64_t rbx_3 = sx.q(*(arg1 + 0x18))
result[5] = j_sub_140a82f30(rbx_3)
result[4].d = rbx_3.d
char* rcx_3 = *(arg1 + 0x10)
char* rdx_1 = result[2]
char i

do
    i = *rcx_3
    *rdx_1 = i
    rcx_3 = &rcx_3[1]
    rdx_1 = &rdx_1[1]
while (i != 0)
int64_t rdi_1 = sx.q(*(arg1 + 0x18))
int64_t rax_4 = j_sub_140a82f30(rdi_1)
j_sub_140a74f90(result[5])
result[4].d = rdi_1.d
result[5] = rax_4
memcpy(rax_4, *(arg1 + 0x28), *(arg1 + 0x18))
return result
