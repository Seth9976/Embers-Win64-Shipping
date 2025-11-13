// 函数: sub_142a9f6f0
// 地址: 0x142a9f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = 0x110001

if (arg2 s<= 0x110001)
    rax = zx.q(arg2)

if (rax.d s<= *(arg1 + 0x18))
    rax.b = 1
    return rax

int32_t rbx

if (rax.d s< 0x19)
    rbx = (rax + 0x19).d
else if (rax.d s> 0x9c4)
    rbx = (rax * 2).d
    
    if (rbx s> 0x110001)
        rbx = 0x110001
else
    rbx = (rax * 5).d

int64_t rax_1 = sub_142a7dd00(sx.q(rbx) << 2)

if (rax_1 == 0)
    sub_142aa0650(arg1)
    int64_t rax_2
    rax_2.b = 0
    return rax_2

memcpy(rax_1, *(arg1 + 0x10), *(arg1 + 0x1c) << 2)
int64_t rcx_4 = *(arg1 + 0x10)

if (rcx_4 != arg1 + 0x60)
    sub_142a7dcd0(rcx_4)

*(arg1 + 0x10) = rax_1
void* rax_3
rax_3.b = 1
*(arg1 + 0x18) = rbx
return rax_3
