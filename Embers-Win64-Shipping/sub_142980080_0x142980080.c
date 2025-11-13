// 函数: sub_142980080
// 地址: 0x142980080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rax_3 = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<class Imath_2_3::Vec3<float> > `RTTI Type Descriptor', 0)

if (rax_3 == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d630(&exceptionObject, "Unexpected attribute type.")
    _CxxThrowException(&exceptionObject, &data_143946630)
    noreturn

*(arg1 + 8) = *(rax_3 + 8)
*(arg1 + 0xc) = *(rax_3 + 0xc)
int32_t result = *(rax_3 + 0x10)
*(arg1 + 0x10) = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
