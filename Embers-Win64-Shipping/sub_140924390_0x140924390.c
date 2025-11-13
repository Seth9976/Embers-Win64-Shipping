// 函数: sub_140924390
// 地址: 0x140924390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x28)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = *(arg1 + 0x20)

if (rcx_1 == 0)
    return 

int32_t temp0_1 = *(rcx_1 + 0xc)
*(rcx_1 + 0xc) -= 1

if (temp0_1 == 1)
    jump(*(*rcx_1 + 8))
