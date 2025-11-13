// 函数: sub_14281d238
// 地址: 0x14281d238
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg3

if (arg3[3] u>= 0x10)
    rdx = *arg3

int64_t* rax_1 = sub_14058c1d0(arg2, rdx, arg3[2])
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
memcpy(arg1, rax_1, 0x20)
rax_1[2] = 0
rax_1[3] = 0xf
*rax_1 = 0
return arg1
