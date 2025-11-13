// 函数: sub_1429806d0
// 地址: 0x1429806d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* result = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<class Imf_2_3::TileDescription> `RTTI Type Descriptor', 0)

if (result == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d630(&exceptionObject, "Unexpected attribute type.")
    _CxxThrowException(&exceptionObject, &data_143946630)
    noreturn

*(arg1 + 8) = *(result + 8)
__security_check_cookie(rax_1 ^ &var_a8)
return result
