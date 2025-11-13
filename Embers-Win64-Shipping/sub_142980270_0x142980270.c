// 函数: sub_142980270
// 地址: 0x142980270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* result = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<class std::vector<float> > `RTTI Type Descriptor', 0)

if (result == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d630(&exceptionObject, "Unexpected attribute type.")
    _CxxThrowException(&exceptionObject, &data_143946630)
    noreturn

if (arg1 + 8 != result + 8)
    result = sub_14297c110(arg1 + 8, *(result + 8), *(result + 0x10))

__security_check_cookie(rax_1 ^ &var_b8)
return result
