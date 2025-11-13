// 函数: sub_1426065b0
// 地址: 0x1426065b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1].d

if (arg3 s< result)
    result = arg3

int64_t r11 = 0
int64_t result_1 = sx.q(result)

if (result_1 s>= 4)
    void* r8 = arg2 + 0x14
    int64_t rdx = 0
    int64_t i_2 = ((result_1 - 4) u>> 2) + 1
    r11 = i_2 << 2
    int64_t i
    
    do
        int64_t rcx = *arg1
        r8 += 0x30
        rdx += 0x80
        *(r8 - 0x44) = *(rdx + rcx - 0x74)
        *(r8 - 0x40) = *(rdx + rcx - 0x70)
        *(r8 - 0x3c) = *(rdx + rcx - 0x6c)
        int64_t rcx_1 = *arg1
        *(r8 - 0x38) = *(rdx + rcx_1 - 0x54)
        *(r8 - 0x34) = *(rdx + rcx_1 - 0x50)
        *(r8 - 0x30) = *(rdx + rcx_1 - 0x4c)
        int64_t rcx_2 = *arg1
        *(r8 - 0x2c) = *(rdx + rcx_2 - 0x34)
        *(r8 - 0x28) = *(rdx + rcx_2 - 0x30)
        *(r8 - 0x24) = *(rdx + rcx_2 - 0x2c)
        int64_t rcx_3 = *arg1
        *(r8 - 0x20) = *(rdx + rcx_3 - 0x14)
        *(r8 - 0x1c) = *(rdx + rcx_3 - 0x10)
        result = *(rdx + rcx_3 - 0xc)
        *(r8 - 0x18) = result
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r11 s< result_1)
    int64_t rdx_2 = r11 << 5
    void* r8_3 = arg2 + ((r11 + ((r11 + 1) << 1)) << 2)
    int64_t i_3 = result_1 - r11
    int64_t i_1
    
    do
        int64_t rcx_4 = *arg1
        r8_3 += 0xc
        rdx_2 += 0x20
        *(r8_3 - 0x14) = *(rdx_2 + rcx_4 - 0x14)
        *(r8_3 - 0x10) = *(rdx_2 + rcx_4 - 0x10)
        result = *(rdx_2 + rcx_4 - 0xc)
        *(r8_3 - 0xc) = result
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
