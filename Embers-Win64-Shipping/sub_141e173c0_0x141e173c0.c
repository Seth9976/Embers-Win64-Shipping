// 函数: sub_141e173c0
// 地址: 0x141e173c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result = *(arg1 + 0x90)
void* r8

if (result == 0xffff || *(arg1 + 0x88) == -1)
    r8 = *arg2
label_141e173f1:
    *(arg1 + 0x90) = *(r8 + 0x410)
    *(arg1 + 0x88) = *(r8 + 0x408)
    result = *(r8 + 0x412)
    *(arg1 + 0x92) = result
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0)
        jump(*(*rcx + 8))
else
    r8 = *arg2
    
    if (result != *(r8 + 0x410))
        goto label_141e173f1
return result
