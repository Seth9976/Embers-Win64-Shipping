// 函数: sub_1429839b0
// 地址: 0x1429839b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rax_3 = __RTDynamicCast(sub_14297db80(arg1, "tiles"), 0, 
    &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<class Imf_2_3::TileDescription> `RTTI Type Descriptor', 0)

if (rax_3 != 0)
    __security_check_cookie(rax_1 ^ &var_a8)
    return rax_3 + 8

struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
sub_14297d630(&exceptionObject, "Unexpected attribute type.")
_CxxThrowException(&exceptionObject, &data_143946630)
noreturn
