// 函数: png_set_sRGB_gAMA_and_cHRM
// 地址: 0x1403cd630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

*(arg2 + 0x38) = arg3
*(arg2 + 0x34) = 0xb18f
*(arg2 + 8) |= 0x801

if (sub_1403beff0(arg1, 0x7a26, 0x8084, 0xfa00, 0x80e8, 0x7530, 0xea60, 0x3a98, 0x1770) != 0)
    __builtin_memcpy(arg2 + 0xa8, 
        "\x26\x7a\x00\x00\x84\x80\x00\x00\x00\xfa\x00\x00\xe8\x80\x00\x00\x30\x75\x00\x00\x60\xea\x00\x"
    "00\x98\x3a\x00\x00\x70\x17\x00\x00", 
        0x20)
    *(arg2 + 8) |= 4
