// 函数: sub_142b75050
// 地址: 0x142b75050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)

if (*arg4 s> 0 || arg3 s<= 0)
    return 

if (rdi.d s<= arg1[1].d)
    memcpy(*arg1, *arg2, (rdi << 4).d)
    return 

int64_t rax = sub_142a7dd00(rdi << 4)

if (rax == 0)
    *arg4 = 7
    return 

if (*(arg1 + 0xc) != 0)
    sub_142a7dcd0(*arg1)

*arg1 = rax
arg1[1].d = rdi.d
*(arg1 + 0xc) = 1
memcpy(*arg1, *arg2, (rdi << 4).d)
