// 函数: sub_142044e50
// 地址: 0x142044e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(r9_1 + rdi * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int32_t* rcx_10 = sx.q(rdi.d) * 0x30 + *arg1
*rcx_10 = *arg2
*(rcx_10 + 8) = 0
*(rcx_10 + 8) = *arg3
*arg3 = 0
rcx_10[4] = arg3[1].d
rcx_10[5] = *(arg3 + 0xc)
arg3[1] = 0
rcx_10[6] = arg3[2].d
rcx_10[7] = *(arg3 + 0x14)
rcx_10[8] = arg3[3].d
rcx_10[0xa] = 0xffffffff
int32_t arg_8
sub_142057110(arg1, &arg_8, *rcx_10, rcx_10, rdi.d, nullptr)
return *arg1 + 8 + sx.q(arg_8) * 0x30
