// 函数: sub_14194d680
// 地址: 0x14194d680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(arg2)
uint64_t rbx = zx.q(arg3)
uint64_t rax
uint64_t rdx

if (r10 == 0x68)
    rax = 0x28
    rdx = 0
else if (r10 == 0x69)
    rdx = 0x18
    rax = 0x40
else if (r10 == 0x6c)
    rdx = 0x10
    rax = 0x38
else if (r10 == 0x6d)
    rdx = 8
    rax = 0x30
else if (r10 != 0x75)
    rax = 0x28
    rdx = 0
else
    rdx = zx.q(r10 - 0x55)
    rax = zx.q((rdx + 0x28).d)

int32_t* r10_5 = rax + arg1
int32_t rcx = r10_5[1]
uint32_t r8_1 = (arg4 + 0xf) u>> 4
uint32_t r9_1 = rbx.d u>> 4

if (rcx != 0)
    uint32_t rax_1 = *r10_5
    uint32_t r8_2 = r8_1 + r9_1
    uint32_t rcx_1 = rcx + rax_1
    
    if (rax_1 u<= r9_1)
        r9_1 = rax_1
    
    if (rcx_1 u>= r8_2)
        r8_2 = rcx_1
    
    r8_1 = r8_2 - r9_1 + 1

r10_5[1] = r8_1
*r10_5 = r9_1
return memcpy(rbx + *(rdx + arg1), arg5, arg4) __tailcall
