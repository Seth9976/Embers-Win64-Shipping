// 函数: sub_141ac5ab0
// 地址: 0x141ac5ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

ModQueryFile(arg1)
sub_141e29640(&arg1[2], arg2)
*(arg1 + 0x2c) = 0
*(arg1 + 0x34) = 0
int16_t result = arg1[8].w
void* rcx_1

if (result == 0xffff || arg1[7] == -1)
    rcx_1 = *arg2
else
    rcx_1 = *arg2
    
    if (result == *(rcx_1 + 0x440))
        return result

arg1[8].w = *(rcx_1 + 0x440)
arg1[7] = *(rcx_1 + 0x438)
*(arg1 + 0x42) = *(rcx_1 + 0x442)
return sub_141e0ae50(*arg2, &arg1[4])
