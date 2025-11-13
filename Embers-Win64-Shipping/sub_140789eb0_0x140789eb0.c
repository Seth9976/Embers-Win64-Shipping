// 函数: sub_140789eb0
// 地址: 0x140789eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x48)

if (rcx != 0)
    sub_140a74f90(rcx)

while (*(arg2 + 0x18) != 0)
    int64_t* rcx_1 = *(arg2 + 0x18)
    *(arg2 + 0x18) = *rcx_1
    j_sub_140a74f90(rcx_1)
