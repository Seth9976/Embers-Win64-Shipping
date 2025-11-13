// 函数: sub_141e8d8c0
// 地址: 0x141e8d8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405fdd60(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x70 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x70 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int32_t rax_8 = *arg2
int32_t* rcx_8 = sx.q(rdi.d) * 0x70 + *arg1
*rcx_8 = rax_8
*(rcx_8 + 8) = *arg3
*(rcx_8 + 0x18) = arg3[1]
*(rcx_8 + 0x28) = arg3[2]
*(rcx_8 + 0x38) = arg3[3]
*(rcx_8 + 0x48) = arg3[4]
*(rcx_8 + 0x58) = arg3[5]
rcx_8[0x1a] = 0xffffffff
int32_t arg_8
sub_141e9e3b0(arg1, &arg_8, rax_8, rcx_8, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x70 + 8
