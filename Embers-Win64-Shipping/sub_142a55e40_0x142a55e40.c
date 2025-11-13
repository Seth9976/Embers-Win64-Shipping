// 函数: sub_142a55e40
// 地址: 0x142a55e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg2 != 0)
    __builtin_memset(arg1, 0, 0x20)
    __builtin_memcpy(&arg1[4], 
        "\xe0\x59\xa5\x42\x01\x00\x00\x00\x50\x5a\xa5\x42\x01\x00\x00\x00\x30\x5a\xa5\x42\x01\x00\x00\x"
    "00\x40\x5a\xa5\x42\x01\x00\x00\x00\x90\x59\xa5\x42\x01\x00\x00\x00\xc0\x5a\xa5\x42\x01\x00\x00"
    "00\x00\x5b\xa5\x42\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x20\x5a\xa5\x42\x01\x00\x00"
    "00\x40\x5b\xa5\x42\x01\x00\x00\x00", 
        0x50)
    *arg1 = arg2
    return 

__builtin_memset(arg1, 0, 0x20)
int128_t zmm1 = data_14363c460.o
*(arg1 + 0x20) = data_14363c450.o
int128_t zmm0 = data_14363c470.o
*(arg1 + 0x30) = zmm1
zmm1 = data_14363c480.o
*(arg1 + 0x40) = zmm0
zmm0 = data_14363c490.o
*(arg1 + 0x50) = zmm1
*(arg1 + 0x60) = zmm0
