// 函数: sub_141e64720
// 地址: 0x141e64720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(0f f== *(arg1 + 0xfc)))
    void* rcx = *arg1
    
    if ((*(rcx + 0x16d) & 5) == 0)
        if (rcx == 0)
            return true
        
        if (sub_14236bfb0(rcx, nullptr) == 0)
            return true
        
        if (sub_14236bfa0(*arg1) != 0)
            return true

return false
