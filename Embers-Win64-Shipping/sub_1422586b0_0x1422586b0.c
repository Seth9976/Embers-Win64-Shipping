// 函数: sub_1422586b0
// 地址: 0x1422586b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140dbc660(arg1)
    
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
    int64_t rdx = sx.q(*(r9 + rbp * 0x90 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(r9 + rdx * 0x90) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]
int128_t zmm1 = data_142d3f660

if (rax_9 != 0)
    r8 = rax_9

int32_t var_90 = 0
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
char var_60 = 0
int64_t rdx_8 = sx.q((temp3 + (temp2 & 0x1f)) s>> 5)
*(r8 + (rdx_8 << 2)) |= 1 << (rbp.b & 0x1f)
int64_t var_50 = 0
int64_t* r9_3 = sx.q(rbp.d) * 0x90 + *arg1
int64_t rcx_9 = **arg3
*(r9_3 + 0x10) = 0.o
*r9_3 = rcx_9
*(r9_3 + 0x20) = zmm1
*(r9_3 + 0x30) = zx.o(0)
*(r9_3 + 0x40) = 0.o
*(r9_3 + 0x50) = 0.o
int128_t var_48
*(r9_3 + 0x60) = var_48
int128_t var_38
*(r9_3 + 0x70) = var_38
r9_3[0x10].d = 0xffffffff
sub_142268800(arg1, arg2, (rcx_9 u>> 0x20).d ^ rcx_9.d, r9_3, rbp.d, arg4)
return arg2
