// 函数: sub_142a3ebd0
// 地址: 0x142a3ebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int64_t* r8 = *(8 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
void* rdx = r8[((arg1 + 7) u>> 3) + 1]
int64_t* result = *(rdx + 8)

if (result == 0)
    return sub_142a3fd80(r8, arg1) __tailcall

int64_t rcx_2 = *result
*(rdx + 0x10) += 1
*(rdx + 8) = rcx_2
return result
