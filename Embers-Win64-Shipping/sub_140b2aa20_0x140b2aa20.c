// 函数: sub_140b2aa20
// 地址: 0x140b2aa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140b28470(arg1, arg2, 0)

if (result != 0)
    int64_t rax = -1
    
    do
        rax += 1
    while (arg2[rax] != 0)
    
    void* _String = result + (sx.q(rax.d) << 1)
    result = _wtoi(_String)
    *arg3 = result.b
    
    if (result.b != 0)
        result.b = 1
        return result
    
    if (iswdigit(*_String).d != 0)
        result.b = 1
        return result

result.b = 0
return result
