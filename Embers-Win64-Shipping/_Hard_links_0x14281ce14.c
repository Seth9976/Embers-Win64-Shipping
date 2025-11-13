// 函数: _Hard_links
// 地址: 0x14281ce14
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rax_2 = *(arg1 + 0x10)

if (rax_2 s>= 0)
    if (rax_2 s<= 1)
        sub_14281cd64(arg1, arg4)
    else
        if (rax_2 == 2)
            struct std::exception::VTable* exceptionObject
            sub_14281c350(&exceptionObject, arg1 + 4)
            _CxxThrowException(&exceptionObject, &data_1439463d8)
            noreturn
        
        if (rax_2 == 3)
            sub_14281cd64(arg1, arg4)

int64_t* result = sub_14281ceb0(arg1, arg2, arg3)
__security_check_cookie(rax_1 ^ &var_88)
return result
