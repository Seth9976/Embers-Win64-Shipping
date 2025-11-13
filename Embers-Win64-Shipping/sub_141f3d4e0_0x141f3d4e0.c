// 函数: sub_141f3d4e0
// 地址: 0x141f3d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rbx)[0x4] = arg2

if (arg4 == 1)
    void* rdx = *(*(arg1 + 0xa0) + 0x130)
    int128_t* r8 = rdx + 0x1c0
    
    if (rdx == 0)
        r8 = &data_143dbb0c0
    
    sub_140ad7d70(arg1 + 0x1c0, rbx, r8)
    return rbx

if (arg4 - 2 u> 1)
    *arg2 = *(arg1 + 0x1c0)
    arg2[1] = *(arg1 + 0x1d0)
    arg2[2] = *(arg1 + 0x1e0)
    return arg2

*arg2 = data_143dbb0c0
arg2[1] = data_143dbb0d0
arg2[2] = data_143dbb0e0
return arg2
