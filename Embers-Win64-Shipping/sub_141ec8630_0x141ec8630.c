// 函数: sub_141ec8630
// 地址: 0x141ec8630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*((*(*arg1 + 0x150))() + 0x11d) & 4) == 0 && (*((*(*arg1 + 0x150))(arg1) + 0x11d) & 8) == 0)
    void* rax_5 = (*(*arg1 + 0x150))(arg1)
    int64_t rdx = *arg1
    void* rax_6 = (*(rdx + 0x150))(arg1, rdx)
    *(rax_6 + 0x11d) ^= (not.b(*(rax_5 + 0x11d) u>> 3) << 3 ^ *(rax_6 + 0x11d)) & 8
    return rax_6

void* rax_8 = (*(*arg1 + 0x150))(arg1)
*(rax_8 + 0x11d) &= 0xfb
void* rax_10 = (*(*arg1 + 0x150))(arg1)
*(rax_10 + 0x11d) &= 0xf7
return rax_10
