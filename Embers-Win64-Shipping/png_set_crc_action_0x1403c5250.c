// 函数: png_set_crc_action
// 地址: 0x1403c5250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t rdx = zx.q(arg2 - 2)

if (rdx.d u> 3)
    *(arg1 + 0x159) &= 0xf3
else
    switch (rdx)
        case 0
            png_warning(arg1, "Can't discard critical data on CRC error")
            *(arg1 + 0x159) &= 0xf3
        case 1
            *(arg1 + 0x158) = (0xfffff3ff & *(arg1 + 0x158)) | 0x400
        case 2
            *(arg1 + 0x159) |= 0xc

uint64_t rdi_2 = zx.q(arg3 - 1)

if (rdi_2.d u> 4)
    *(arg1 + 0x159) &= 0xfc
    return 

switch (rdi_2)
    case 0
        *(arg1 + 0x158) = (0xfffffcff & *(arg1 + 0x158)) | 0x200
    case 1
        *(arg1 + 0x159) &= 0xfc
    case 2
        *(arg1 + 0x158) = (0xfffffcff & *(arg1 + 0x158)) | 0x100
    case 3
        *(arg1 + 0x159) |= 3
