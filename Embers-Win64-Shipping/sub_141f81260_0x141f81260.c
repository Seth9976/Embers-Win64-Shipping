// 函数: sub_141f81260
// 地址: 0x141f81260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x50)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    int128_t zmm2 = *(arg1 + 0x28)
    int32_t r8_1 = *(arg1 + 0x4c)
    int128_t zmm5_1 = *(arg1 + 0x60)
    int32_t rax_1 = *(arg1 + 0x38)
    int128_t zmm0_1 = *(arg1 + 0x50)
    int128_t zmm7 = *(arg1 + 0x3c)
    *rcx = &data_143283768
    *(rcx + 0x1c) = zmm7
    *(rcx + 0x2c) = r8_1
    *(rcx + 8) = zmm2
    rcx[3].d = rax_1
    *(rcx + 0x30) = zmm0_1
    *(rcx + 0x40) = zmm5_1

void arg_10

if (arg2 + 0x88 != &arg_10)
    void*** r8_2 = *(arg2 + 0x88)
    *(arg2 + 0x88) = rcx
    
    if (r8_2 != 0)
        jump(*(*r8_2 + 0x10))
else if (rcx != 0)
    jump(*(*rcx + 0x10))

return arg2 + 0x88
