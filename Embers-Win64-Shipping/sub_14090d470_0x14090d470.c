// 函数: sub_14090d470
// 地址: 0x14090d470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rbp << 5) + r9_1 + 4))
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
temp0:temp1 = sx.q(rbp.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rbp.b & 0x1f)
int64_t* rdi_2 = (sx.q(rbp.d) << 5) + *arg1
*rdi_2 = *arg2
sub_140596d10(&rdi_2[1], arg3)
rdi_2[3].d = 0xffffffff
int64_t rbx_1 = *rdi_2
int32_t arg_8
sub_14090fbf0(arg1, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), rdi_2, rbp.d, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 8
