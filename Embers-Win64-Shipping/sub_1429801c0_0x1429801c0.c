// 函数: sub_1429801c0
// 地址: 0x1429801c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* result = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::TypedAttribute<class std::string> `RTTI Type Descriptor', 0)

if (result == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d630(&exceptionObject, "Unexpected attribute type.")
    _CxxThrowException(&exceptionObject, &data_143946630)
    noreturn

if (arg1 + 8 != &result[1])
    int64_t* rdx = &result[1]
    
    if (result[4] u>= 0x10)
        rdx = result[1]
    
    result = sub_14058ad40(arg1 + 8, rdx, result[3])

__security_check_cookie(rax_1 ^ &var_a8)
return result
