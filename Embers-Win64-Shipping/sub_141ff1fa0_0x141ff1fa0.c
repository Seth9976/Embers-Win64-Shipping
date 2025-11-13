// 函数: sub_141ff1fa0
// 地址: 0x141ff1fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140775520(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t rdx = sx.q(*(r9 + rbp * 0x48 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(r9 + rdx * 0x48) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
uint64_t rbx_2 = *arg1 + sx.q(rbp.d) * 0x48
int64_t* rcx_9 = arg3[1]
*rbx_2 = **arg3
void* rax_16 = *rcx_9
*(rbx_2 + 0x10) = rax_16

if (rax_16 != 0)
    *(rax_16 + 8) += 1

void* rax_17 = rcx_9[1]
*(rbx_2 + 0x18) = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1

*(rbx_2 + 0x20) = *(rcx_9 + 0x10)
*(rbx_2 + 0x30) = *(rcx_9 + 0x20)
*(rbx_2 + 0x40) = 0xffffffff
sub_142002120(arg1, arg2, zx.q(sub_140a6b260(rbx_2, 0x10)), rbx_2, rbp.d, arg4)
return arg2
