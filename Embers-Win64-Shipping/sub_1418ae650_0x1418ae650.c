// 函数: sub_1418ae650
// 地址: 0x1418ae650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406798d0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rbp * 0x38 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x38 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r9_2 = &arg1[2]

if (rax_2 != 0)
    r9_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9_2 + (r8_1 << 2)) |= 1 << (rbp.b & 0x1f)
int64_t* rdi_1 = sx.q(rbp.d) * 0x38 + *arg1
*rdi_1 = *arg2
sub_140596d10(&rdi_1[1], arg3)
sub_140596d10(&rdi_1[3], &arg3[2])
rdi_1[5].d = arg3[4].d
rdi_1[6].d = 0xffffffff
int64_t rbx_1 = *rdi_1
int32_t arg_8
sub_1418b2b60(arg1, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), rdi_1, rbp.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x38 + 8
