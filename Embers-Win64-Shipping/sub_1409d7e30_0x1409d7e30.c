// 函数: sub_1409d7e30
// 地址: 0x1409d7e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x18)
void* r9_2 = &r8[sx.q(*(arg1 + 0x20)) * 2]

while (r8 != r9_2)
    int64_t rcx = *r8
    r8 = &r8[2]
    *(rcx + (sx.q(arg2) << 2)) = *(arg1 + 0x28)
