// 函数: sub_1421f8e50
// 地址: 0x1421f8e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg2 + 0x438))
uint64_t rax_2 = zx.q((rax.d * 2) s>> 0x1f)
int32_t rdx_1 = (rax << 2).d s>> 2

if (rdx_1 != 0xffffffff)
    if (rax_2.d == 0)
        rax_2 = (sx.q(rdx_1) << 4) + *(arg1 + 0x38)
        *(rax_2 + 0xd) &= 0xfd
        *(arg2 + 0x438) &= 0x7fffffff
    
    rax_2.b = 1
    return rax_2

if (rax_2.d != 0)
    rax_2.b = 0
    return rax_2

int64_t rbx = sx.q(*(arg1 + 0x70))
int32_t rax_3 = (rbx + 1).d
*(arg1 + 0x70) = rax_3

if (rax_3 s> *(arg1 + 0x74))
    sub_1405a4d70(arg1 + 0x68)

*(*(arg1 + 0x68) + (rbx << 3)) = arg2
*(arg2 + 0x438) &= 0xc0000000
*(arg2 + 0x438) |= (rbx.d & 0x3fffffff) | 0x40000000
int64_t rax_4
rax_4.b = 1
return rax_4
