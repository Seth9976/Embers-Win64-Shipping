// 函数: sub_1406aa9e0
// 地址: 0x1406aa9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rcx = arg1[0x25]

if (rcx == 0)
    std::_Xbad_function_call()
    noreturn

void* var_38
(*(*rcx + 0x10))(rcx, &var_38)
void* mtx = &arg1[8]
int32_t code = _Mtx_lock(&arg1[8])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_50 = 1

if (*(arg1 + 0xe1) != code.b)
    void var_48
    std::_Throw_future_error(std::make_error_code(&var_48, 3))
    noreturn

sub_14058a530(&arg1[2], &var_38)
int64_t result = (*(*arg1 + 0x28))(arg1, &mtx, 0)

if (var_50 != 0)
    result = _Mtx_unlock(mtx)

int64_t var_20

if (var_20 u>= 0x10)
    void* rcx_5 = var_38
    void* rax_4 = rcx_5
    
    if (var_20 + 1 u>= 0x1000)
        rcx_5 = *(rcx_5 - 8)
        
        if (rax_4 - rcx_5 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    result = j_sub_140a74f90(rcx_5)

__security_check_cookie(rax_1 ^ &var_78)
return result
