// 函数: sub_142983430
// 地址: 0x142983430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1d8 = -2
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* rbx = arg2
char rax_2
char r9
rax_2, r9 = sub_1429a3540(arg2)
struct Imf_2_3::Attribute::Imf_2_3::TypedAttribute<class std::string>::VTable* const var_1d0
struct Imf_2_3::Attribute::Imf_2_3::TypedAttribute<int32_t>::VTable* const var_1a8

if (rax_2 == 0)
    void var_188
    void var_168
    void var_148
    void var_128
    void var_108
    void var_e8
    int64_t* rax_12 = sub_14281d238(&var_e8, 
        sub_14281d2a0(&var_108, 
            sub_14281d238(&var_128, 
                sub_14281d2a0(&var_148, 
                    sub_14281d238(&var_168, 
                        sub_14281d2a0(&var_188, 
                            sub_140687be0(&var_1a8, rbx, "is not a supported image type.", r9), 
                            "The following are supported: "), 
                        &data_143b86908), 
                    ", "), 
                &data_143b86928), 
            ", "), 
        &data_143b86948)
    void var_c8
    void var_a8
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d3c0(&exceptionObject, 
        sub_14281d2a0(&var_1d0, 
            sub_14281d238(&var_a8, sub_14281d2a0(&var_c8, rax_12, " or "), &data_143b86968), ."))
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

std::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>(
    &var_1d0)
var_1d0 = &Imf_2_3::TypedAttribute<class std::string>::`vftable'{for `Imf_2_3::Attribute'}
char var_1c8
sub_140592d30(&var_1c8, rbx)
sub_142981040(arg1, "type", &var_1d0)
var_1d0 = &Imf_2_3::TypedAttribute<class std::string>::`vftable'{for `Imf_2_3::Attribute'}
int64_t var_1b0

if (var_1b0 u>= 0x10)
    void* rcx_4 = var_1c8.q
    void* rax_3 = rcx_4
    
    if (var_1b0 + 1 u>= 0x1000)
        rcx_4 = *(rcx_4 - 8)
        
        if (rax_3 - rcx_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_4)

int128_t var_1b8 = data_143702ea0
var_1c8 = 0
sub_14298c720(&var_1d0)
int64_t result = sub_1429a34a0(rbx)

if (result.b != 0)
    result = sub_14297cd10(arg1, "version")
    
    if (result == 0)
        std::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>::_Func_base<void,class Concurrency::message<uint64_t>* __ptr64,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>(
            &var_1a8)
        var_1a8 = &Imf_2_3::TypedAttribute<int32_t>::`vftable'{for `Imf_2_3::Attribute'}
        int32_t var_1a0_1 = 1
        sub_142981040(arg1, "version", &var_1a8)
        var_1a8 = &Imf_2_3::TypedAttribute<int32_t>::`vftable'{for `Imf_2_3::Attribute'}
        result = sub_14298c720(&var_1a8)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
