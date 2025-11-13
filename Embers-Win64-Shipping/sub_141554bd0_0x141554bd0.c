// 函数: sub_141554bd0
// 地址: 0x141554bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = i_1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

void* rax_1 = sub_1407c35c0(arg1, arg3 + arg5, arg4)
uint64_t r8_1 = *arg1

if (i_1 != 0)
    void* rdx_1 = r8_1 + 0x28
    rax_1 = arg2 + 0x28
    int32_t i
    
    do
        rdx_1 += 0x40
        r8_1 += 0x40
        uint128_t zmm0_1 = *(rax_1 - 0x28)
        rax_1 += 0x40
        *(r8_1 - 0x40) = zmm0_1
        *(r8_1 - 0x30) = *(rax_1 - 0x58)
        *(r8_1 - 0x20) = *(rax_1 - 0x48)
        *(rdx_1 - 0x40) = *(rax_1 - 0x40)
        *(rdx_1 - 0x38) = *(rax_1 - 0x38)
        *(rdx_1 - 0x34) = *(rax_1 - 0x34)
        *(rdx_1 - 0x2c) = *(rax_1 - 0x2c)
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
