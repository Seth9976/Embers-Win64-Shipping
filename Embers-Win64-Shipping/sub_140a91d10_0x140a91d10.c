// 函数: sub_140a91d10
// 地址: 0x140a91d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c5060(arg1)
    
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
    int64_t rdx = sx.q(*(r9 + rbp * 0x50 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(r9 + rdx * 0x50) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* rcx_10 = arg3[1]
int128_t* rax_15 = *arg3
int64_t* r9_3 = sx.q(rbp.d) * 0x50 + *arg1
*r9_3 = *rax_15
*(r9_3 + 0x10) = rax_15[1]
r9_3[4] = 0
r9_3[4] = *rcx_10
*rcx_10 = 0
r9_3[5].d = rcx_10[1].d
*(r9_3 + 0x2c) = *(rcx_10 + 0xc)
rcx_10[1] = 0
*(r9_3 + 0x30) = *(rcx_10 + 0x10)
r9_3[8].d = rcx_10[4].d
*(r9_3 + 0x44) = *(rcx_10 + 0x24)
r9_3[9].d = 0xffffffff
int32_t r8_1 = r9_3[3].d
int32_t rdx_11 = (r9_3[1].d - r8_1) ^ r8_1 u>> 0xd
int32_t rcx_13 = (0x9e3779b9 - r8_1 - rdx_11) ^ rdx_11 << 8
int32_t r8_4 = (r8_1 - rcx_13 - rdx_11) ^ rcx_13 u>> 0xd
int32_t rdx_14 = (rdx_11 - rcx_13 - r8_4) ^ r8_4 u>> 0xc
int32_t rcx_16 = (rcx_13 - r8_4 - rdx_14) ^ rdx_14 << 0x10
int32_t r8_7 = (r8_4 - rcx_16 - rdx_14) ^ rcx_16 u>> 5
int32_t rdx_17 = (rdx_14 - rcx_16 - r8_7) ^ r8_7 u>> 3
int32_t rcx_19 = (rcx_16 - r8_7 - rdx_17) ^ rdx_17 << 0xa
sub_140aa8310(arg1, arg2, (r8_7 - rcx_19 - rdx_17) ^ rcx_19 u>> 0xf, r9_3, rbp.d, arg4)
return arg2
