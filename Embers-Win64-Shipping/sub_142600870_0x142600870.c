// 函数: sub_142600870
// 地址: 0x142600870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(*(arg1 + 0x80) + 0x7b0)
bool z

if (0 == *(r8 + 0x1b0))
    *(r8 + 0x1b0) = 0
    z = true
else
    *(r8 + 0x1b0)
    z = false

void*** rax_2 = zx.q(*(arg1 + 0x78))

if (z)
    rax_2 = zx.q(rax_2.d) | 1
    *(arg1 + 0x78) = rax_2.d

*(arg1 + 0x10) = arg2

if ((rax_2.b & 1) != 0)
    *(arg1 + 0x19c) = 0
    rax_2.b = 1
    return rax_2

*(arg1 + 0x1ac) &= 0xfffffffb

if (arg2[0x25].d != 1)
    *(arg1 + 0x74) &= 0xef
    float temp1_1 = *(arg2 + 0xfc)
    0f - temp1_1
    r8.b = 0f < temp1_1
    rax_2 = sub_1425ff970(arg2[0x18][0xa], *arg2, r8.b)
    *(arg1 + 0x90) = rax_2
    
    if (rax_2 != 0)
        void** rdx_1 = *rax_2
        
        if (rdx_1[8](rax_2, rdx_1) == 0)
            *(arg1 + 0x1ac) |= 1
        
        *(arg1 + 0x18) = *(arg1 + 0x90)
        int64_t rax_4
        rax_4.b = 1
        *(arg1 + 0x24) = 0x469c4000
        *(arg1 + 0x2c) = 0x7f7fffff
        *(arg1 + 0x19c) = 0
        return rax_4

rax_2.b = 0
return rax_2
