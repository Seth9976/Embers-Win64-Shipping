// 函数: sub_140a20d00
// 地址: 0x140a20d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _ArgList = arg3
int64_t r9
int64_t arg_20 = r9
void var_488
int64_t rax_1 = __security_cookie ^ &var_488
wchar16 _Buffer[0x200]
wchar16 (* _Buffer_1)[0x200] = &_Buffer
int32_t _BufferCount_1 = 0x200
int32_t i = __stdio_common_vswprintf(data_143cd5b30, &_Buffer, 0x200, arg2, nullptr, &_ArgList)
int64_t rbx_1 = -1

if (i s< 0)
    i = -1

if (i s>= 0x200 || i == 0xffffffff)
    _Buffer_1 = nullptr
    
    do
        _BufferCount_1 *= 2
        int64_t _BufferCount = sx.q(_BufferCount_1)
        _Buffer_1 = sub_140a84c80(_Buffer_1, _BufferCount * 2, 0)
        i = __stdio_common_vswprintf(data_143cd5b30, _Buffer_1, _BufferCount, arg2, nullptr, 
            &_ArgList)
        
        if (i s< 0)
            i = -1
        
        if (i s>= _BufferCount_1)
            i = -1
    while (i == 0xffffffff)

(*_Buffer_1)[sx.q(i)] = 0

do
    rbx_1 += 1
while ((*_Buffer_1)[rbx_1] != 0)

int64_t result = sub_140a20ba0(arg1, _Buffer_1, rbx_1.d)

if (_BufferCount_1 != 0x200)
    result = sub_140a74f90(_Buffer_1)

__security_check_cookie(rax_1 ^ &var_488)
return result
