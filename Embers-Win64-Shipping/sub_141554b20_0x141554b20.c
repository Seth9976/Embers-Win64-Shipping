// 函数: sub_141554b20
// 地址: 0x141554b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = i_1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

int32_t rax_1 = sub_1405c4b20(arg1, arg3 + arg5, arg4)
int32_t* r8_1 = *arg1

if (i_1 != 0)
    void* rdx_1 = &r8_1[1]
    int64_t* rcx = arg2 + 4
    int32_t i
    
    do
        rdx_1 += 0x1c
        *r8_1 = *(rcx - 4)
        r8_1 = &r8_1[7]
        int64_t zmm0_1 = *rcx
        rcx += 0x1c
        *(rdx_1 - 0x1c) = zmm0_1
        *(rdx_1 - 0x14) = *(rcx - 0x14)
        *(rdx_1 - 0x10) = rcx[-2]
        rax_1 = rcx[-1].d
        *(rdx_1 - 8) = rax_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
