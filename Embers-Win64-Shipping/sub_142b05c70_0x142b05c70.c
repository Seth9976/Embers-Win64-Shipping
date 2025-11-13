// 函数: sub_142b05c70
// 地址: 0x142b05c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = &data_143ccb480
int32_t result

if (arg1 == 0 || *arg1 == 0)
    result.b = 0
    return result

if (data_143ccb480 != 0)
    do
        char* _Str1 = *rbx
        char rdx_1 = *arg1
        result = zx.d(*_Str1)
        
        if (result.b == rdx_1)
            uint64_t _MaxCount = -1
            
            do
                _MaxCount += 1
            while (_Str1[_MaxCount] != 0)
            
            if (strncmp(_Str1, arg1, _MaxCount) == 0)
                return zx.q(rbx[1].b)
        else if (result.b s> rdx_1)
            break
        
        rbx = &rbx[2]
    while (*rbx != 0)

result.b = 1
return result
