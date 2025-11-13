// 函数: sub_1419019a0
// 地址: 0x1419019a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x450)
float zmm0 = arg5 - arg2
float zmm4 = arg6 - arg3
*(rdx + 0x10) = zmm0
*(rdx + 0x14) = zmm4
*(rdx + 8) = arg2
*(rdx + 0xc) = arg3
*(rdx + 0x18) = arg4

if (arg4 != arg7)
    arg4 = arg7
else
    arg4 = arg4 + 1f

*(rdx + 0x1c) = arg4
*(rdx + 0x38) = 0
*(rdx + 0x20) = (int.q(arg2)).d
*(rdx + 0x24) = (int.q(arg3)).d
*(rdx + 0x28) = (int.q(zmm0)).d
int32_t result = (int.q(zmm4)).d
*(rdx + 0x2c) = result
return result
