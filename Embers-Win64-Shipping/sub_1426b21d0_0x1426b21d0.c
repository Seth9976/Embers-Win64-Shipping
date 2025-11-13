// 函数: sub_1426b21d0
// 地址: 0x1426b21d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0xc0)
int64_t result

if (r9 == 0)
    result.b = 0xff
    return result

int32_t r10 = *(r9 + 0x40)
int32_t r8 = 0

if (r10 s> 0)
    do
        if (*(*(r9 + 0x38) + sx.q(r8) * 0x18) == *arg2)
            return *(r9 + 0x4c) + r8.b
        
        r8 += 1
    while (r8 s< r10)

void* rcx_1 = *(r9 + 0x30)

if (rcx_1 != 0)
    return sub_1426b5dd0(rcx_1, arg2, 0) __tailcall

result.b = 0xff
return result
