// 函数: sub_141036510
// 地址: 0x141036510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4].b != 0)
    return 

int32_t rdi_1 = 0
arg1[3] = 0
arg1[4].b = 0
arg1[6].d = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    sub_1405c5570(&arg1[5], 0)

int32_t rdx = arg1[0xb].d
int32_t rax_1

if (*(arg1 + 0x4c) + arg3 u<= rdx)
    rax_1 = arg1[0xa].d
else
    rdx.b = 1
    sub_14101cdc0(arg1, rdx.b)
    arg1[0xb].d = (arg3 + 0x1fff + arg1[0xb].d) & 0xffffe000
    sub_14101a3f0(arg1)
    rdx = arg1[0xb].d
    *(arg1 + 0x4c) = 0
    rax_1 = rdx - 1
    arg1[0xa].d = rax_1

arg1[4].b = 1

if (rax_1 + 1 u< rdx)
    rdi_1 = rax_1 + 1

arg1[3].d = rdi_1
