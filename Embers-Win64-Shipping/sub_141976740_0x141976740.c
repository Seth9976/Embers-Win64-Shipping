// 函数: sub_141976740
// 地址: 0x141976740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (data_143f0fb5c != 0)
    result = zx.d(data_143f0fb5d)
else
    data_143f0fb5c = 1
    sub_140af2b60()
    result = sub_140b21a10(&data_143dbb3f0, u"psocache")
    data_143f0fb5d = result.b

if (data_143f0f150 != 0)
    int64_t rcx_1
    int64_t rbx_1
    
    if (result.b == 0)
        rbx_1 = data_143f01f20
        
        if (data_143de5480 == result.b)
            rcx_1 = 0
        else
            rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (result.b != 0 || *(rbx_1 + (rcx_1 << 2)) == 1)
        result.b = 1
        return result

result.b = 0
return result
