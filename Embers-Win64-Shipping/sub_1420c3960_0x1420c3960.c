// 函数: sub_1420c3960
// 地址: 0x1420c3960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_1 = *(arg1 + 0x98) & 8
int512_t result

if (arg2 == neg.d(sbb.d(arg4, arg4, r10_1 != 0)) - 1)
    result.o = *(sx.q(arg3) * 0x2c + *(arg1 + 0x48) + 4)
    return result

int32_t r9_3 = 1
int32_t rax_4 = 1

if (r10_1 == 0)
    rax_4 = -1

if (arg2 == rax_4)
    result.o = *(sx.q(arg3) * 0x2c + *(arg1 + 0x48) + 8)
    return result

int32_t rcx_2 = 2
int32_t rax_7 = 2

if (r10_1 == 0)
    rax_7 = -1

if (arg2 == rax_7)
    result.o = *(sx.q(arg3) * 0x2c + *(arg1 + 0x48) + 0xc)
    return result

int32_t rax_11 = *(arg1 + 0x98) & 0x11
int32_t rbx

if (rax_11 != 0x10)
    rbx = -1
    r10_1 = *(arg1 + 0x98) & 8
else if (r10_1 == 0)
    rbx = 0
else
    rbx = rax_11 - 0xd

if (arg2 == rbx)
    result.o = *(sx.q(arg3) * 0x2c + *(arg1 + 0x60) + 4)
    return result

if (rax_11 != 0x10)
    r9_3 = -1
else if (r10_1 != 0)
    r9_3 = 4

if (arg2 == r9_3)
    result.o = *(sx.q(arg3) * 0x2c + *(arg1 + 0x60) + 8)
    return result

if (rax_11 != 0x10)
    rcx_2 = -1
else if (r10_1 != 0)
    rcx_2 = 5

if (arg2 != rcx_2)
    result.o = zx.o(0)
    return result

result.o = *(sx.q(arg3) * 0x2c + *(arg1 + 0x60) + 0xc)
return result
