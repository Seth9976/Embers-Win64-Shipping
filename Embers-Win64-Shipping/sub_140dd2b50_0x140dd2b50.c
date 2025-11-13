// 函数: sub_140dd2b50
// 地址: 0x140dd2b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rdi << 5) + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r9_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int32_t* rcx_8 = (sx.q(rdi.d) << 5) + *arg1
*rcx_8 = *arg2
*(rcx_8 + 8) = *arg3
void* rax_13 = arg3[1]
*(rcx_8 + 0x10) = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

rcx_8[6] = 0xffffffff
int32_t arg_8
sub_140e0e130(arg1, &arg_8, *rcx_8, rcx_8, rdi.d, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 8
