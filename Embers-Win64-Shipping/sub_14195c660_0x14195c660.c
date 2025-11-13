// 函数: sub_14195c660
// 地址: 0x14195c660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1407c3920(arg1)
    
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
    int64_t rdx = sx.q(*(rbp * 0x78 + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(rdx * 0x78 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int128_t* rax_15 = *arg3
int32_t* r9_2 = sx.q(rbp.d) * 0x78 + *arg1
int64_t* rcx_7 = arg3[1]
*r9_2 = *rax_15
*(r9_2 + 0x10) = rax_15[1]
*(r9_2 + 0x20) = rax_15[2]
*(r9_2 + 0x30) = rax_15[3]
*(r9_2 + 0x40) = rax_15[4]
*(r9_2 + 0x50) = rax_15[5]
*(r9_2 + 0x60) = rax_15[6].q
*(r9_2 + 0x68) = *rcx_7
r9_2[0x1c] = 0xffffffff
int64_t rcx_8 = *(r9_2 + 0x60)
int64_t rdx_9 = *(r9_2 + 0x58)
int64_t r8_1 = *(r9_2 + 0x48)
int64_t r10_1 = *(r9_2 + 0x50)
int32_t r8_4 = (r8_1.d + (r8_1 u>> 0x20).d * 0x17) ^ ((rcx_8 u>> 0x20).d * 0x17 + rcx_8.d)
    ^ ((rdx_9 u>> 0x20).d * 0x17 + rdx_9.d) ^ ((r10_1 u>> 0x20).d * 0x17 + r10_1.d)
sub_14196c340(arg1, arg2, r8_4 ^ zx.d(r9_2[1].b) ^ *r9_2, r9_2, rbp.d, arg4)
return arg2
