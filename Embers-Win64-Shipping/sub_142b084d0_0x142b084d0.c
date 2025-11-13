// 函数: sub_142b084d0
// 地址: 0x142b084d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = *(arg2 + 0x20)

if (*(arg2 + 8) != 0)
    return 

void* rax_1 = sub_142a7dd00(0x54)
*(arg1 + 0x10) = rax_1

if (rax_1 == 0)
    *arg3 = 7
else
    char rcx
    
    if (rdi != 0 && *rdi == 0x6a && rdi[1] == 0x61)
        rcx = rdi[2]
    
    if (rdi != 0 && *rdi == 0x6a && rdi[1] == 0x61 && (rcx == 0 || rcx == 0x5f))
        *(rax_1 + 0x4a) = 1
    else
        *(rax_1 + 0x4a) = 0
    
    void* rdx = *(arg1 + 0x10)
    __builtin_memcpy(rdx, 
        "\x80\x00\x00\x00\xc0\x00\x00\x00\x00\x04\x00\x00\x00\x06\x00\x00\x00\x09\x00\x00\x40\x30\x00\x"
    "00\xa0\x30\x00\x00\x00\xff\x00\x00\x80\x00\x00\x00\xc0\x00\x00\x00\x00\x04\x00\x00\x00\x06\x00"
    "00\x00\x09\x00\x00\x40\x30\x00\x00\xa0\x30\x00\x00\x00\xff\x00\x00\x01\x00\x00\x00\x00", 
        0x45)
    *(arg1 + 0x40) = 0
    bool cond:1_1 = *(rdx + 0x4a) != 1
    *(rdx + 0x48) = 1
    *(rdx + 0x4b) = 0
    int64_t rax_2 = 0x106050402030007
    
    if (not(cond:1_1))
        rax_2 = 0x605070001040203
    
    *(rdx + 0x4c) = rax_2
    *(arg1 + 0x54) = 0

*(arg1 + 0x88) = 0xfffd
*(arg1 + 0x59) = 0xff
