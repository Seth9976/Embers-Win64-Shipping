// 函数: sub_14297f8b0
// 地址: 0x14297f8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rax_3 = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<struct Imf_2_3::Chromaticities> `RTTI Type Descriptor', 0)

if (rax_3 == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d630(&exceptionObject, "Unexpected attribute type.")
    _CxxThrowException(&exceptionObject, &data_143946630)
    noreturn

*(arg1 + 8) = *(rax_3 + 8)
*(arg1 + 0xc) = *(rax_3 + 0xc)
*(arg1 + 0x10) = *(rax_3 + 0x10)
*(arg1 + 0x14) = *(rax_3 + 0x14)
*(arg1 + 0x18) = *(rax_3 + 0x18)
*(arg1 + 0x1c) = *(rax_3 + 0x1c)
*(arg1 + 0x20) = *(rax_3 + 0x20)
int32_t result = *(rax_3 + 0x24)
*(arg1 + 0x24) = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
