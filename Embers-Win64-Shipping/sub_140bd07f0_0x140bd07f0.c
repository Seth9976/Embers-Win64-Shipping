// 函数: sub_140bd07f0
// 地址: 0x140bd07f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0xc0)
*(arg1 + 0xc0) = arg2

if (arg2 != 0)
    *arg2 += 1

if (rbx == 0)
    return 

int32_t temp0_1 = *rbx
*rbx -= 1

if (temp0_1 == 1)
    sub_140d3a300(rbx)
    return j_sub_140a74f90(rbx) __tailcall
