// 函数: sub_14239dd60
// 地址: 0x14239dd60
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
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r9 = &arg1[2]

if (rax_2 != 0)
    r9 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9 + (r8_1 << 2)) |= 1 << (rdi.b & 0x1f)
int32_t* rdx_6 = arg3[1]
int64_t* r9_3 = sx.q(rdi.d) * 0x30 + *arg1
*r9_3 = **arg3
r9_3[1].d = *rdx_6
*(r9_3 + 0xc) = rdx_6[1]
r9_3[2].b = rdx_6[2].b
*(r9_3 + 0x11) = *(rdx_6 + 9)
r9_3[3] = 0
r9_3[3] = *(rdx_6 + 0x10)
*(rdx_6 + 0x10) = 0
r9_3[4].d = rdx_6[6]
*(r9_3 + 0x24) = rdx_6[7]
*(rdx_6 + 0x18) = 0
r9_3[5].d = 0xffffffff
int64_t rcx_8 = *r9_3
sub_1423aeb40(arg1, arg2, (rcx_8 s>> 0x20).d * 0x17 + rcx_8.d, r9_3, rdi.d, arg4)
return arg2
