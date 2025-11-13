// 函数: sub_141db29a0
// 地址: 0x141db29a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_140610660(arg1)
    
    int32_t rbx_1 = arg1[5].d
    void* rdi_1 = &arg1[2]
    sub_1405a4980(rdi_1, rbx_1 + 1)
    *(rdi_1 + 0x18) += 1
    void* rax_6 = *(rdi_1 + 0x10)
    
    if (rax_6 != 0)
        rdi_1 = rax_6
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_5 << 2)) &= not.d(1 << (rbx_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*(r9_1 + rbp * 0x10 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + rdx * 0x10) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
int64_t rdx_8 = sx.q((temp3 + (temp2 & 0x1f)) s>> 5)
*(r8 + (rdx_8 << 2)) |= 1 << (rbp.b & 0x1f)
int32_t* rcx_8 = (sx.q(rbp.d) << 4) + *arg1
*rcx_8 = *arg2
rcx_8[1] = *arg3
rcx_8[2] = 0xffffffff
int32_t arg_8
sub_1412685a0(arg1, &arg_8, *rcx_8, rcx_8, rbp.d, nullptr)
return *arg1 + (sx.q(arg_8) << 4) + 4
