// 函数: sub_142b08450
// 地址: 0x142b08450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
int128_t result

if (arg2 s<= 1)
    result = data_143668d80
    __builtin_memcpy(r8, 
        "\x80\x00\x00\x00\xc0\x00\x00\x00\x00\x04\x00\x00\x00\x06\x00\x00\x00\x09\x00\x00\x40\x30\x00\x"
    "00\xa0\x30\x00\x00\x00\xff\x00\x00", 
        0x20)
    *(r8 + 0x40) = 1
    *(r8 + 0x44) = 0
    *(arg1 + 0x40) = 0

if (arg2 s> 1 || arg2 != 1)
    bool cond:0_1 = *(r8 + 0x4a) != 1
    result = data_143668d80
    __builtin_memcpy(r8 + 0x20, 
        "\x80\x00\x00\x00\xc0\x00\x00\x00\x00\x04\x00\x00\x00\x06\x00\x00\x00\x09\x00\x00\x40\x30\x00\x"
    "00\xa0\x30\x00\x00\x00\xff\x00\x00", 
        0x20)
    *(r8 + 0x48) = 1
    *(r8 + 0x4b) = 0
    int64_t rax_1 = 0x106050402030007
    
    if (not(cond:0_1))
        rax_1 = 0x605070001040203
    
    *(r8 + 0x4c) = rax_1
    *(arg1 + 0x54) = 0

return result
