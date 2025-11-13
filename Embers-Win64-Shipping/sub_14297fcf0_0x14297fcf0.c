// 函数: sub_14297fcf0
// 地址: 0x14297fcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rax_3 = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<class Imath_2_3::Matrix44<double> > `RTTI Type Descriptor', 0)

if (rax_3 == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d630(&exceptionObject, "Unexpected attribute type.")
    _CxxThrowException(&exceptionObject, &data_143946630)
    noreturn

*(arg1 + 8) = *(rax_3 + 8)
*(arg1 + 0x10) = *(rax_3 + 0x10)
*(arg1 + 0x18) = *(rax_3 + 0x18)
*(arg1 + 0x20) = *(rax_3 + 0x20)
*(arg1 + 0x28) = *(rax_3 + 0x28)
*(arg1 + 0x30) = *(rax_3 + 0x30)
*(arg1 + 0x38) = *(rax_3 + 0x38)
*(arg1 + 0x40) = *(rax_3 + 0x40)
*(arg1 + 0x48) = *(rax_3 + 0x48)
*(arg1 + 0x50) = *(rax_3 + 0x50)
*(arg1 + 0x58) = *(rax_3 + 0x58)
*(arg1 + 0x60) = *(rax_3 + 0x60)
*(arg1 + 0x68) = *(rax_3 + 0x68)
*(arg1 + 0x70) = *(rax_3 + 0x70)
*(arg1 + 0x78) = *(rax_3 + 0x78)
int64_t result = *(rax_3 + 0x80)
*(arg1 + 0x80) = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
