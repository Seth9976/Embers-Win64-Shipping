// 函数: sub_141aede20
// 地址: 0x141aede20
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
    int64_t r8 = sx.q(*(rdi * 0x38 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x38 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int32_t* rcx_8 = sx.q(rdi.d) * 0x38 + *arg1
*rcx_8 = *arg2
rcx_8[0xa].b = (rcx_8[0xa].b & 0xfe) | 2

if ((arg3[2].b & 1) != 0)
    rcx_8[0xa].b |= 1
    arg3[2].b &= 0xfe
    rcx_8[0xa].b &= 0xfd
    rcx_8[0xa].b |= arg3[2].b & 2
    *(rcx_8 + 8) = *arg3
    *(rcx_8 + 0x18) = arg3[1]

rcx_8[0xc] = 0xffffffff
int32_t arg_8
sub_141b11330(arg1, &arg_8, *rcx_8, rcx_8, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x38 + 8
