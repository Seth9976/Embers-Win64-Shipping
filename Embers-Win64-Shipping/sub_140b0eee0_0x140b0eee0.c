// 函数: sub_140b0eee0
// 地址: 0x140b0eee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
wchar16 _Buffer[0x200]
wchar16 (* result_1)[0x200] = &_Buffer
wchar16* _Buffer_1 = nullptr
int32_t _BufferCount_1 = 0x400
void arg_28
va_list _ArgList = &arg_28
_locale_t _Locale = nullptr
int32_t i = __stdio_common_vswprintf(data_143cd5b30, &_Buffer, 0x200, arg4, _Locale, _ArgList)

if (i s< 0)
    i = -1

wchar16* result

if (i u>= 0x200 || i == 0xffffffff)
    do
        free(_Buffer_1)
        uint64_t _BufferCount = sx.q(_BufferCount_1)
        result = malloc(_BufferCount * 2)
        _Buffer_1 = result
        result_1 = result
        
        if (result == 0)
            goto label_140b0f007
        
        _ArgList = &arg_28
        _Locale = nullptr
        i = __stdio_common_vswprintf(data_143cd5b30, _Buffer_1, _BufferCount, arg4, _Locale, 
            _ArgList)
        
        if (i s< 0)
            i = -1
        
        if (i s>= _BufferCount_1)
            i = -1
        
        _BufferCount_1 *= 2
    while (i == 0xffffffff)

(*result_1)[sx.q(i)] = 0
(*(*arg1 + 0x10))(arg1, result_1, zx.q(arg3), arg2, _Locale, _ArgList)
result = free(_Buffer_1)
label_140b0f007:
__security_check_cookie(rax_1 ^ &var_498)
return result
