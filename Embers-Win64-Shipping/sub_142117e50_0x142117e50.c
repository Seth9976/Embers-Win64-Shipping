// 函数: sub_142117e50
// 地址: 0x142117e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1408888d0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rdi << 7) + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 7) + r9_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int32_t* rcx_8 = (sx.q(rdi.d) << 7) + *arg1
*rcx_8 = *arg2
*(rcx_8 + 0x10) = *arg3
*(rcx_8 + 0x20) = 0
*(rcx_8 + 0x20) = arg3[1].q
arg3[1].q = 0
rcx_8[0xa] = *(arg3 + 0x18)
rcx_8[0xb] = *(arg3 + 0x1c)
*(arg3 + 0x18) = 0
rcx_8[0xc] = arg3[2].d
rcx_8[0xd] = *(arg3 + 0x24)
*(rcx_8 + 0x40) = arg3[3]
rcx_8[0x14].b = arg3[4].b
rcx_8[0x15] = *(arg3 + 0x44)
*(rcx_8 + 0x58) = *(arg3 + 0x48)
rcx_8[0x18].b = arg3[5].b
rcx_8[0x1c] = 0xffffffff
int32_t arg_8
sub_142123230(arg1, &arg_8, *rcx_8, rcx_8, rdi.d, nullptr)
return *arg1 + (sx.q(arg_8) << 7) + 0x10
