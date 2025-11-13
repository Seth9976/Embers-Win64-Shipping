// 函数: sub_140b98ce0
// 地址: 0x140b98ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x118)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    memset(rax, 0, 0x118)
    sub_140b94c60(rbx)
    rbx[0x21] = &data_142d40488
    rbx[0x22].d = GetCurrentThreadId()
    *rbx = &data_142e82878
    rbx[0x21] = &data_142e82890

if (rbx == 0)
    return nullptr

return &rbx[0x21]
