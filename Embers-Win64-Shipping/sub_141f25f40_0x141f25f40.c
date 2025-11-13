// 函数: sub_141f25f40
// 地址: 0x141f25f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rdx = *(arg1 + 0x212)
uint8_t result = rdx & 1

if (arg2 != result)
label_141f25f84:
    rdx = (((((rdx & 0xfe) | arg2) & 0xfd) | (arg3 * 2)) & 0xfb) | arg4 << 2
    *(arg1 + 0x212) = rdx
    void* rcx = *(arg1 + 0x3e8)
    
    if (rcx != 0)
        return sub_1422ac950(rcx, rdx) __tailcall
else
    result = rdx u>> 1 & 1
    
    if (arg3 != result)
        goto label_141f25f84
    
    result = rdx u>> 2 & 1
    
    if (arg4 != result)
        goto label_141f25f84

return result
