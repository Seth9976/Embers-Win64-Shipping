// 函数: sub_142a55ef0
// 地址: 0x142a55ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg2 != 0 && arg3 s>= 0xffffffff)
    int32_t r9 = -1
    __builtin_memset(arg1, 0, 0x20)
    __builtin_memcpy(&arg1[4], 
        "\x40\x62\xa5\x42\x01\x00\x00\x00\xb0\x66\xa5\x42\x01\x00\x00\x00\x80\x66\xa5\x42\x01\x00\x00\x"
    "00\xa0\x66\xa5\x42\x01\x00\x00\x00\x80\x60\xa5\x42\x01\x00\x00\x00\x90\x6a\xa5\x42\x01\x00\x00"
    "00\xd0\x6c\xa5\x42\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x70\x66\xa5\x42\x01\x00\x00"
    "00\xa0\x6d\xa5\x42\x01\x00\x00\x00", 
        0x50)
    *arg1 = arg2
    
    if (arg3 s>= 0)
        *(arg1 + 0x14) = arg3
        
        if (arg3 s<= 1)
            r9 = arg3
        
        arg1[1].d = r9
        return 
    
    int64_t rax = -1
    
    do
        rax += 1
    while (arg2[rax] != 0)
    
    *(arg1 + 0x14) = rax.d
    
    if (rax.d s<= 1)
        r9 = rax.d
    
    arg1[1].d = r9
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
