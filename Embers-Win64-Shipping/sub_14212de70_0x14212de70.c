// 函数: sub_14212de70
// 地址: 0x14212de70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x28)
int64_t result

if ((*(rdi + 0x1f8) & 8) == 0)
    int32_t rcx
    rcx.b = sub_140b5b8a0(*(rdi + 0x120), 0).b == 0
    result.b = *(rdi + 0x124) != 0
    result.b |= rcx.b
    
    if (result.b != 0 || (*(*(arg1 + 0x28) + 0x20b) & 1) != 0)
        result.b = 0
        return result

result.b = 1
return result
