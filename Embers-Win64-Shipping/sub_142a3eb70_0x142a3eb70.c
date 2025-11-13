// 函数: sub_142a3eb70
// 地址: 0x142a3eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int64_t* r8 = *(8 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (arg1 u<= 0x400)
    void* rdx = r8[((arg1 + 7) u>> 3) + 1]
    int64_t* result = *(rdx + 8)
    
    if (result != 0)
        int64_t rcx = *result
        *(rdx + 0x10) += 1
        *(rdx + 8) = rcx
        return result

return sub_142a3fd80(r8, arg1) __tailcall
