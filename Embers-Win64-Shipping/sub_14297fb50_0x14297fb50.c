// 函数: sub_14297fb50
// 地址: 0x14297fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* result = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<class Imath_2_3::Matrix33<double> > `RTTI Type Descriptor', 0)

if (result == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d630(&exceptionObject, "Unexpected attribute type.")
    _CxxThrowException(&exceptionObject, &data_143946630)
    noreturn

*(arg1 + 8) = *(result + 8)
*(arg1 + 0x18) = *(result + 0x18)
*(arg1 + 0x28) = *(result + 0x28)
*(arg1 + 0x38) = *(result + 0x38)
*(arg1 + 0x48) = *(result + 0x48)
__security_check_cookie(rax_1 ^ &var_a8)
return result
