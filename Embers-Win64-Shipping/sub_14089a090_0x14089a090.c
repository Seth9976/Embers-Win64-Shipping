// 函数: sub_14089a090
// 地址: 0x14089a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0xf8)
int64_t rdx = *(r8 + 0x20)

if (rdx != 0)
    int64_t* rcx = *(r8 + 8)
    (*(*rcx + 0x98))(rcx, rdx, zx.q(*(r8 + 0x14)), 0, 0)
