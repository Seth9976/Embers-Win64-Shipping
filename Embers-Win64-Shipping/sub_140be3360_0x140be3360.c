// 函数: sub_140be3360
// 地址: 0x140be3360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = nullptr
bool z

if (0 == arg1[6])
    arg1[6] = 0
    z = true
else
    result = arg1[6]
    z = false

int64_t* i = result

if (not(z))
    do
        result = i
        bool z_1
        
        if (result == arg1[6])
            arg1[6] = *i
            z_1 = true
        else
            result = arg1[6]
            z_1 = false
        
        i = result
        result.b = z_1
        
        if (result.b != 0)
            EnterCriticalSection(&arg1[1])
            i[1].b = 1
            int64_t* rcx_1 = *arg1
            result = (*(*rcx_1 + 0x10))(rcx_1)
            
            if (arg1 != -8)
                result = LeaveCriticalSection(&arg1[1])
    while (i != 0)

return result
