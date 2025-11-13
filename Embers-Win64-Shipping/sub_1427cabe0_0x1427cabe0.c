// 函数: sub_1427cabe0
// 地址: 0x1427cabe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
uint64_t result = __security_cookie ^ &var_458
uint64_t result_1 = result

if ((data_143b7aaf4 & arg3) != 0)
    result = zx.q(data_143b7aaf8) & 0x1f
    
    if (result.b u>= (arg2 & 0x1f))
        uint64_t var_18_1 = arg4
        char _String[0x200]
        sub_1427cade0(&_String, 0x200, "%s", arg1)
        int32_t rax_2 = data_143b7aaf8
        
        if (test_bit(rax_2, 0x1a))
            arg4 = zx.q(sbb.d(arg4.d, arg4.d, (rax_2 & 0x8000000) != 0)) & 0xfffffff9
            uint64_t rax_5 = strnlen(&_String, 0x200)
            int64_t r9
            int64_t var_438_1 = r9
            sub_1427cade0(&_String[rax_5], 0x200 - rax_5, ":%*s", zx.q(arg4.d))
            rax_2 = data_143b7aaf8
        
        if (test_bit(rax_2, 0x19))
            arg4 = zx.q(sbb.d(arg4.d, arg4.d, (rax_2 & 0x8000000) != 0)) & 0xfffffff2
            uint64_t rax_8 = strnlen(&_String, 0x200)
            void* var_438_2 = data_143b7ab08
            sub_1427cade0(&_String[rax_8], 0x200 - rax_8, ":%*s", zx.q(arg4.d))
            rax_2 = data_143b7aaf8
        
        if (test_bit(rax_2, 0x18))
            uint64_t rax_12 = strnlen(&_String, 0x200)
            int64_t var_438_3 = arg5
            sub_1427cade0(&_String[rax_12], 0x200 - rax_12, ":%*s", 
                zx.q(sbb.d(arg4.d, arg4.d, (rax_2 & 0x8000000) != 0)) & 0xffffffe2)
        
        uint64_t rax_13 = strnlen(&_String, 0x200)
        sub_1427cade0(&_String[rax_13], 0x200 - rax_13, ": %s ", arg6)
        char outputString[0x200]
        void arg_38
        _vswprintf_c(&outputString, 0x200, &_String, &arg_38)
        result = OutputDebugStringA(&outputString)
        
        if ((data_143b7aaf8 & 0x80000000) != 0)
            result = sub_140b4b300("%s\n", &outputString)

__security_check_cookie(result_1 ^ &var_458)
return result
