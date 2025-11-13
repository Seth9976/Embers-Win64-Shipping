// 函数: sub_142a1f160
// 地址: 0x142a1f160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(arg6)
uint32_t rbx = 0
uint32_t rsi_1 = arg5.d - arg3.d
int32_t* r10_1 = sx.q((r15 * 3).d) + arg2

if (r15.d s>= arg7 - 1)
    rbx = rsi_1
else if (r10_1 + 3 u> r10_1 && r10_1 + 3 u<= arg4)
    int64_t rax_4 = *(arg1 + 0x3840)
    
    if (rax_4 != 0)
        rax_4(*(arg1 + 0x3848), r10_1, &arg6, 3)
        r10_1 = &arg6
    
    rbx = (zx.d(*(r10_1 + 2)) << 0x10) + (zx.d(*(r10_1 + 1)) << 8) + zx.d(*r10_1)
else if (*(arg1 + 0x382c) != 0)
    rbx = rsi_1
else
    sub_1429da010(arg1 + 0x12c0, 7, "Truncated partition size data", arg4)

int64_t rax_9 = zx.q(rbx) + arg3

if (rax_9 u<= arg3 || rax_9 u> arg5)
    if (*(arg1 + 0x382c) != 0)
        return zx.q(rsi_1)
    
    sub_1429da010(arg1 + 0x12c0, 7, "Truncated packet or corrupt partition %d length", 
        zx.q((r15 + 1).d))

return zx.q(rbx)
