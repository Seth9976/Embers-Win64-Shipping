// 函数: sub_140687c50
// 地址: 0x140687c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406a4e00(arg1)
    
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
    int64_t r8 = sx.q(*(rbp * 0xa0 + r9 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0xa0 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_10 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_10 |= 1 << (rbp.b & 0x1f)
int64_t r14_2 = sx.q(rbp.d) * 0xa0
int64_t* r14_3 = r14_2 + *arg1

if (r14_2 == neg.q(*arg1))
    r14_3 = nullptr
else
    void* rbx_2 = arg3[1]
    sub_140596d10(r14_3, *arg3)
    sub_14068e310(&r14_3[2], rbx_2)
    r14_3[2] = &data_142d8ad18
    r14_3[0x13].d = 0xffffffff

int32_t rax_15 = r14_3[1].d
int16_t* rdx_13

if (rax_15 == 0)
    rdx_13 = &data_142d40450
else
    rdx_13 = *r14_3

int32_t rcx_11 = rax_15 - 1

if (rax_15 == 0)
    rcx_11 = 0

sub_1406991c0(arg1, arg2, sub_1405969c0(rcx_11, rdx_13), r14_3, rbp.d, arg4)
return arg2
