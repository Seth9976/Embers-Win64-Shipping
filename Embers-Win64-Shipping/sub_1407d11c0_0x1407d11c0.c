// 函数: sub_1407d11c0
// 地址: 0x1407d11c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1408094f0(arg1)
    
    int32_t rbx_1 = arg1[5].d
    void* rdi_1 = &arg1[2]
    sub_1405a4980(rdi_1, rbx_1 + 1)
    *(rdi_1 + 0x18) += 1
    void* rax_2 = *(rdi_1 + 0x10)
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_5 << 2)) &= not.d(1 << (rbx_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t rdx = sx.q(*(rbp * 0xc0 + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(rdx * 0xc0 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

char var_c0 = 0
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
int64_t rdx_8 = sx.q((temp3 + (temp2 & 0x1f)) s>> 5)
*(r8 + (rdx_8 << 2)) |= 1 << (rbp.b & 0x1f)
int64_t* r9_3 = sx.q(rbp.d) * 0xc0 + *arg1
int64_t rcx_9 = **arg3
*r9_3 = rcx_9
*(r9_3 + 0x10) = 0.o
int128_t var_b8
*(r9_3 + 0x20) = var_b8
int128_t var_a8
*(r9_3 + 0x30) = var_a8
int128_t var_98
*(r9_3 + 0x40) = var_98
int128_t var_88
*(r9_3 + 0x50) = var_88
int128_t var_78
*(r9_3 + 0x60) = var_78
int128_t var_68
*(r9_3 + 0x70) = var_68
int128_t var_58
*(r9_3 + 0x80) = var_58
int128_t var_48
*(r9_3 + 0x90) = var_48
*(r9_3 + 0xa0) = 0x3d08850a.o
r9_3[0x16].d = 0xffffffff
sub_1407ec630(arg1, arg2, (rcx_9 u>> 0x20).d * 0x17 + rcx_9.d, r9_3, rbp.d, arg4)
return arg2
