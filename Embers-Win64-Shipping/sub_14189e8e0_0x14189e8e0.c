// 函数: sub_14189e8e0
// 地址: 0x14189e8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

if (&arg1[2] != &arg2[2])
    int64_t rcx_1 = arg1[2]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg1[2] = arg2[2]
    arg2[2] = 0
    arg1[3].d = arg2[3].d
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    arg2[3] = 0

if (&arg1[4] != &arg2[4])
    int128_t zmm2 = *(arg1 + 0x20)
    int128_t zmm3 = *(arg1 + 0x30)
    int128_t zmm4 = *(arg1 + 0x40)
    int128_t zmm5 = *(arg1 + 0x50)
    *(arg1 + 0x20) = *(arg2 + 0x20)
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg1 + 0x40) = *(arg2 + 0x40)
    *(arg1 + 0x50) = *(arg2 + 0x50)
    *(arg2 + 0x20) = zmm2
    *(arg2 + 0x30) = zmm3
    *(arg2 + 0x40) = zmm4
    *(arg2 + 0x50) = zmm5

return arg1
