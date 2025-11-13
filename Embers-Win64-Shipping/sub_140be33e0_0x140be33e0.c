// 函数: sub_140be33e0
// 地址: 0x140be33e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

while (true)
    result = nullptr
    bool z_1
    
    if (0 == arg1[6])
        arg1[6] = 0
        z_1 = true
    else
        result = arg1[6]
        z_1 = false
    
    if (z_1)
        break
    
    bool z_2
    
    if (result == arg1[6])
        arg1[6] = *result
        z_2 = true
    else
        result = arg1[6]
        z_2 = false
    
    int64_t rcx
    rcx.b = z_2
    
    if (rcx.b != 0)
        EnterCriticalSection(&arg1[1])
        result[1].b = 1
        int64_t* rcx_2 = *arg1
        result = (*(*rcx_2 + 0x10))(rcx_2)
        
        if (arg1 != -8)
            return LeaveCriticalSection(&arg1[1])
        
        break

return result
