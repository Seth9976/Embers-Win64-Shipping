// 函数: sub_140a4bcc0
// 地址: 0x140a4bcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _ArgList = arg2
int64_t r8
int64_t arg_18 = r8
int64_t r9
int64_t arg_20 = r9
void var_488
int64_t rax_1 = __security_cookie ^ &var_488
wchar16 _Buffer[0x200]
wchar16 (* lpOutputString)[0x200] = &_Buffer
wchar16 (* _Buffer_1)[0x200] = nullptr
int32_t _BufferCount_1 = 0x400
int32_t i = __stdio_common_vswprintf(data_143cd5b30, &_Buffer, 0x200, arg1, nullptr, &_ArgList)

if (i s< 0)
    i = -1

wchar16 (* result)[0x200]

if (i u>= 0x200 || i == 0xffffffff)
    do
        free(_Buffer_1)
        uint64_t _BufferCount = sx.q(_BufferCount_1)
        result = malloc(_BufferCount * 2)
        _Buffer_1 = result
        lpOutputString = result
        
        if (result == 0)
            goto label_140a4bdcd
        
        i = __stdio_common_vswprintf(data_143cd5b30, _Buffer_1, _BufferCount, arg1, nullptr, 
            &_ArgList)
        
        if (i s< 0)
            i = -1
        
        if (i s>= _BufferCount_1)
            i = -1
        
        _BufferCount_1 *= 2
    while (i == 0xffffffff)

(*lpOutputString)[sx.q(i)] = 0
OutputDebugStringW(lpOutputString)
result = free(_Buffer_1)
label_140a4bdcd:
__security_check_cookie(rax_1 ^ &var_488)
return result
