// 函数: sub_140d3a650
// 地址: 0x140d3a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r8_1 = *arg1
    int64_t r9_1 = sx.q(*(r8_1 + rdi * 0x10 + 4))
    arg1[6].d = r9_1.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8_1 + r9_1 * 0x10) = 0xffffffff

void* rax_6 = arg1[4]
void* r8_2 = &arg1[2]
*arg2 = rdi.d

if (rax_6 != 0)
    r8_2 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rdi.b & 0x1f)
*(arg2 + 8) = (sx.q(rdi.d) << 4) + *arg1
return arg2
