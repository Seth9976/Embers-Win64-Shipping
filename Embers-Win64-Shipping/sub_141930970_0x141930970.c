// 函数: sub_141930970
// 地址: 0x141930970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406798d0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r10_1 = sx.q(*(rdi * 0x38 + r9_1 + 4))
    arg1[6].d = r10_1.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 * 0x38 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_2 = &arg1[2]
*arg2 = rdi.d

if (rax_2 != 0)
    r8_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rdi.b & 0x1f)
*(arg2 + 8) = sx.q(rdi.d) * 0x38 + *arg1
return arg2
