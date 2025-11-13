// 函数: sub_140d10ca0
// 地址: 0x140d10ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg3)
    int64_t rcx = *arg2
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg2 = *arg3
    *arg3 = 0
    arg2[1].d = arg3[1].d
    *(arg2 + 0xc) = *(arg3 + 0xc)
    arg3[1] = 0

int64_t rcx_1 = *arg3

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
