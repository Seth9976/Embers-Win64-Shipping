// 函数: sub_1424284b0
// 地址: 0x1424284b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
void* rbx = &arg1[6]
*arg1 = &data_14334b198
__builtin_memset(&arg1[2], 0, 0x20)
void* rcx = rbx
*(rbx + 0x10) = 0
*(rbx + 0x18) = 0
*(rbx + 0x1c) = 0x80
void* rax = *(rbx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xa].d = arg3
int64_t rbp = sx.q(*(arg2 + 0x30))
int64_t r15 = sx.q(arg1[3].d)
int32_t rax_1 = (r15 + rbp).d
arg1[3].d = rax_1

if (rax_1 s> *(arg1 + 0x1c))
    sub_1405a4d70(&arg1[2])

memset(&arg1[2][r15], 0, rbp << 3)
int64_t rbp_1 = sx.q(*(arg2 + 0x30))
int64_t rsi = sx.q(arg1[5].d)
int32_t rax_3 = (rsi + rbp_1).d
arg1[5].d = rax_3

if (rax_3 s> *(arg1 + 0x2c))
    sub_1405a4d70(&arg1[4])

memset(&arg1[4][rsi], 0, rbp_1 << 3)
int32_t rax_5 = *(arg2 + 0x30)
void* r15_1 = rbx + 0x18
int32_t rcx_6 = *(rbx + 0x1c) + 0x1f
*r15_1 = rax_5
uint64_t rcx_7 = zx.q(rcx_6 u>> 5)
uint32_t rsi_2 = (rax_5 + 0x1f) u>> 5

if (rsi_2 u<= rcx_7.d)
    void* rax_11 = *(rbx + 0x10)
    
    if (rax_11 != 0)
        rbx = rax_11
    
    if (rcx_7.d u> 8)
        memset(rbx, 0, zx.q(rcx_7.d) << 2)
    else if (rcx_7.d != 0)
        __builtin_memset(rbx, 0, rcx_7 << 2)
else
    sub_1405a4a00(rbx, 0, rsi_2, 4)
    *(rbx + 0x1c) = rsi_2 << 5
    void* rax_8 = *(rbx + 0x10)
    
    if (rax_8 != 0)
        rbx = rax_8
    
    if (rsi_2 u> 8)
        memset(rbx, 0, zx.q(rsi_2) << 2)
    else if (rsi_2 != 0)
        __builtin_memset(rbx, 0, zx.q(rsi_2) << 2)
    
    void* rdx_2 = rbx + (zx.q(rsi_2 - 1) << 2)
    *rdx_2 &= 0xffffffff u>> ((neg.d(*r15_1)).b & 0x1f)

arg1[0xb] = sub_1408f3520(sub_141f88540())
return arg1
