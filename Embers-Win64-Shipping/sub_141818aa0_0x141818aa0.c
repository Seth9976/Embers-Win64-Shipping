// 函数: sub_141818aa0
// 地址: 0x141818aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_6 = *(rbx_1 + 0x10)
    
    if (rax_6 != 0)
        rbx_1 = rax_6
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t rdx = sx.q(*((rbp << 5) + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r9) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* rcx_7 = *arg3
int64_t* rbx_4 = (sx.q(rbp.d) << 5) + *arg1
int64_t* rdx_9 = arg3[1]
*rbx_4 = 0
*rbx_4 = *rcx_7
*rcx_7 = 0
rbx_4[1].d = rcx_7[1].d
*(rbx_4 + 0xc) = *(rcx_7 + 0xc)
rcx_7[1] = 0
rbx_4[2] = *rdx_9
rbx_4[3].d = 0xffffffff
int32_t rax_22 = rbx_4[1].d
int16_t* rdx_10

if (rax_22 == 0)
    rdx_10 = &data_142d40450
else
    rdx_10 = *rbx_4

int32_t rcx_8 = rax_22 - 1

if (rax_22 == 0)
    rcx_8 = 0

sub_1409249d0(arg1, arg2, sub_1405969c0(rcx_8, rdx_10), rbx_4, rbp.d, arg4)
return arg2
