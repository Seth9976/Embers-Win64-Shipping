// 函数: sub_141e17040
// 地址: 0x141e17040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x278))(arg1, *arg2, arg2[1])
void* rcx = *arg2

if (rcx != 0)
    result = sub_141f3b9f0(rcx)
    
    if (result != 0)
        result = sub_141e02fc0(result, arg2[3].d)
        
        if (result != 0)
            *(result + 0x188) -= 1

return result
