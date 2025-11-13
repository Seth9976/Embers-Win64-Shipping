// 函数: sub_140fc51c0
// 地址: 0x140fc51c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET s = *(arg1 + 0x28)

if (s == -1)
    int64_t rax
    rax.b = 0
    return rax

bool cond:0 = closesocket(s) == 0
*(arg1 + 0x28) = -1
int32_t rax_1
rax_1.b = cond:0
return rax_1
