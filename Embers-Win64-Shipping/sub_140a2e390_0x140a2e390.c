// 函数: sub_140a2e390
// 地址: 0x140a2e390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _ArgList = arg3
int64_t r9
int64_t arg_20 = r9
void var_488
int64_t rax_1 = __security_cookie ^ &var_488
wchar16 _Buffer[0x200]
wchar16 (* _Buffer_1)[0x200] = &_Buffer
int32_t _BufferCount_1 = 0x200
int32_t rbp = 0
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
*arg1 = 0
arg1[1] = 0

if (_Buffer_1 != 0 && *_Buffer_1 != 0)
    do
        rbx_1 += 1
    while ((*_Buffer_1)[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rbp = arg1[1].d
    
    int32_t rax_4 = rbx_1.d + 1 + rbp
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, _Buffer_1, (rbx_1.d + 1) * 2)

if (_BufferCount_1 != 0x200)
    sub_140a74f90(_Buffer_1)

__security_check_cookie(rax_1 ^ &var_488)
return arg1
