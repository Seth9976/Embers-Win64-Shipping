// 函数: sub_141d873e0
// 地址: 0x141d873e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140af87b0()
char rdx = data_143f0f1d4
char r8 = data_143f138f5
char r9 = data_143de5426
int64_t rcx

if (result.b == 0 || r9 != 0 || r8 == 0 || rdx != 0)
    rcx = data_143f38720
else
    result = data_143f38708
    rcx = result + 0x10
    
    if (result == 0)
        rcx = 0

if (rcx != 0)
    return result

if (r9 == 0 && r8 != 0 && rdx == 0)
    return sub_141d87000() __tailcall

return sub_141d87170() __tailcall
