// 函数: sub_141cfd3f0
// 地址: 0x141cfd3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1 + 0x68

if (arg1 == 0)
    rdx = nullptr

int64_t result = sub_141cfd440(data_143f36250, rdx)
bool cond:1 = *(arg1 + 0xb4) == 0
*(arg1 + 0xb5) = 0

if (cond:1)
    return result

*(arg1 + 0xb4) = 0
return sub_140a536a0(arg1) __tailcall
