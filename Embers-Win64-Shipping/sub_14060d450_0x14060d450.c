// 函数: sub_14060d450
// 地址: 0x14060d450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[2]
*arg1 = &data_142d636f8

if (rsi == 0)
    arg1[2] = 0
    return &data_142d636f8

int64_t rcx = *(rsi + 8)

if (rcx != 0)
    j_sub_140a74f90(rcx)

*(rsi + 8) = 0
int64_t result = j_sub_140a74f90(rsi)
arg1[2] = 0
return result
