// 函数: sub_141000fa0
// 地址: 0x141000fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg2
int32_t rdx = *(arg1 + 0x34)
int64_t rbp

if (rdx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1410345f0(arg1)
    
    int32_t rsi_1 = arg1[5].d
    void* rdi_1 = &arg1[2]
    sub_1405a4980(rdi_1, rsi_1 + 1)
    *(rdi_1 + 0x18) += 1
    void* rax_2 = *(rdi_1 + 0x10)
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_5 << 2)) &= not.d(1 << (rsi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rbp * 0x310 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x310 + r9_1) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
char* i_1 = 6
*rdx_8 |= 1 << (rbp.b & 0x1f)
void* rdx_10 = sx.q(rbp.d) * 0x310 + *arg1
void* rax_15 = rdx_10
char* i

do
    rax_15 += 0x80
    int128_t zmm0 = *rbx
    rbx = &rbx[8]
    *(rax_15 - 0x80) = zmm0
    *(rax_15 - 0x70) = rbx[-7]
    *(rax_15 - 0x60) = rbx[-6]
    *(rax_15 - 0x50) = rbx[-5]
    *(rax_15 - 0x40) = rbx[-4]
    *(rax_15 - 0x30) = rbx[-3]
    *(rax_15 - 0x20) = rbx[-2]
    *(rax_15 - 0x10) = rbx[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
*(rdx_10 + 0x300) = *arg3
*(rdx_10 + 0x308) = 0xffffffff
int32_t arg_8
sub_14101e2e0(arg1, &arg_8, *(rdx_10 + 0x2d0), rdx_10, rbp.d, i_1)
return *arg1 + sx.q(arg_8) * 0x310 + 0x300
