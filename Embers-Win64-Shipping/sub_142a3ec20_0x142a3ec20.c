// 函数: sub_142a3ec20
// 地址: 0x142a3ec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u<= 0x400)
    void* r8_1 = arg1[((arg2 + 7) u>> 3) + 1]
    int64_t* result = *(r8_1 + 8)
    
    if (result != 0)
        int64_t rcx = *result
        *(r8_1 + 0x10) += 1
        *(r8_1 + 8) = rcx
        return result

return sub_142a3fd80(arg1, arg2) __tailcall
