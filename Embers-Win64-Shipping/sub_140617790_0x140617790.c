// 函数: sub_140617790
// 地址: 0x140617790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
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
    int64_t rdx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_7 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rbp * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9 + r8 * 0x30) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_10 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_10 |= 1 << (rbp.b & 0x1f)
int64_t r9_2 = sx.q(rbp.d) * 0x30
char* r9_3 = r9_2 + *arg1

if (r9_2 == neg.q(*arg1))
    r9_3 = nullptr
else
    int64_t* rdx_11 = arg3[1]
    *r9_3 = **arg3
    *(r9_3 + 8) = 0
    *(r9_3 + 8) = *rdx_11
    __builtin_memset(rdx_11, 0, 0x20)
    *(r9_3 + 0x10) = rdx_11[1].d
    *(r9_3 + 0x14) = *(rdx_11 + 0xc)
    *(r9_3 + 0x18) = 0
    *(r9_3 + 0x18) = rdx_11[2]
    *(r9_3 + 0x20) = rdx_11[3].d
    *(r9_3 + 0x24) = *(rdx_11 + 0x1c)
    *(r9_3 + 0x28) = 0xffffffff

sub_140619610(arg1, arg2, zx.d(*r9_3), r9_3, rbp.d, arg4)
return arg2
