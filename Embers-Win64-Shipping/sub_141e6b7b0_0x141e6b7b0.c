// 函数: sub_141e6b7b0
// 地址: 0x141e6b7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
arg1[1].d = 0
int32_t rcx = *(arg1 + 0xc)

if (rcx != arg3 + 0x2c)
    sub_1405c5510(arg1, arg3 + 0x2c)
    rcx = *(arg1 + 0xc)
    rdi = arg1[1].d

int32_t rax = rdi + arg3 + 0x2c
arg1[1].d = rax

if (rax s> rcx)
    sub_1405daba0(arg1)

memset(sx.q(rdi) + *arg1, 0, sx.q(arg3 + 0x2c))
**arg1 = 0x52
*(*arg1 + 1) = 0x49
*(*arg1 + 2) = 0x46
*(*arg1 + 3) = 0x46
*(*arg1 + 4) = (arg3 + 0x24).b
*(*arg1 + 5) = ((arg3 + 0x24) u>> 8).b
*(*arg1 + 6) = ((arg3 + 0x24) u>> 0x10).b
*(*arg1 + 7) = ((arg3 + 0x24) u>> 0x18).b
*(*arg1 + 8) = 0x57
*(*arg1 + 9) = 0x41
*(*arg1 + 0xa) = 0x56
*(*arg1 + 0xb) = 0x45
*(*arg1 + 0xc) = 0x66
*(*arg1 + 0xd) = 0x6d
*(*arg1 + 0xe) = 0x74
*(*arg1 + 0xf) = 0x20
*(*arg1 + 0x10) = 0x10
*(*arg1 + 0x11) = 0
*(*arg1 + 0x12) = 0
*(*arg1 + 0x13) = 0
*(*arg1 + 0x14) = 1
*(*arg1 + 0x15) = 0
*(*arg1 + 0x16) = arg4.b
*(*arg1 + 0x17) = (arg4.w u>> 8).b
*(*arg1 + 0x18) = arg5.b
*(*arg1 + 0x19) = (arg5 u>> 8).b
*(*arg1 + 0x1a) = (arg5 u>> 0x10).b
int32_t r14_2 = arg4 * arg5 * 2
*(*arg1 + 0x1b) = (arg5 u>> 0x18).b
*(*arg1 + 0x1c) = r14_2.b
*(*arg1 + 0x1d) = (r14_2 u>> 8).b
*(*arg1 + 0x1e) = (r14_2 u>> 0x10).b
*(*arg1 + 0x1f) = (r14_2 u>> 0x18).b
*(*arg1 + 0x20) = 2
*(*arg1 + 0x21) = 0
*(*arg1 + 0x22) = 0x10
*(*arg1 + 0x23) = 0
*(*arg1 + 0x24) = 0x64
*(*arg1 + 0x25) = 0x61
*(*arg1 + 0x26) = 0x74
*(*arg1 + 0x27) = 0x61
*(*arg1 + 0x28) = arg3.b
*(*arg1 + 0x29) = (arg3 u>> 8).b
*(*arg1 + 0x2a) = (arg3 u>> 0x10).b
*(*arg1 + 0x2b) = (arg3 u>> 0x18).b
return memcpy(*arg1 + 0x2c, arg2, arg3) __tailcall
