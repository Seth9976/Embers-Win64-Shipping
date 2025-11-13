// 函数: sub_1428650b0
// 地址: 0x1428650b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg3 == 0xffffffff)
    return 1

int32_t rax_1 = sub_1428a2cb0(arg2)
int64_t rcx_1 = 0

if (arg3 != 0)
    rcx_1.b = rax_1 == arg3
    return zx.q(rcx_1.d)

int64_t r8 = *(arg1 + 0x1c0)

if (r8 == 0)
    return 0

int64_t* rdx = *(arg1 + 0x1b8)

while (true)
    if (rax_1 == *(*rdx + 0x1c))
        return 1
    
    rcx_1 += 1
    rdx = &rdx[1]
    
    if (rcx_1 u>= r8)
        return 0
