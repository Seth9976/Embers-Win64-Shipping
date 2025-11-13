// 函数: sub_142397c60
// 地址: 0x142397c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0xd8 != arg2)
    int64_t rcx = *(arg1 + 0xd8)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0xd8) = *arg2
    *arg2 = 0
    *(arg1 + 0xe0) = arg2[1].d
    *(arg1 + 0xe4) = *(arg2 + 0xc)
    arg2[1] = 0

int64_t rcx_1 = *arg2

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
