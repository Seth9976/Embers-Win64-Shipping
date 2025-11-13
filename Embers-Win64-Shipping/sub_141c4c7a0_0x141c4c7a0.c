// 函数: sub_141c4c7a0
// 地址: 0x141c4c7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x34)
int64_t rbp

if (r9 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406798d0(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*(rbp * 0x38 + r10_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r9 - 1
    
    if (r9 != 1)
        *(rdx * 0x38 + r10_1) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(rbp.d)
void* r8_1 = r8 + (sx.q((temp4 + (temp3 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rbp.b & 0x1f)
int32_t* rbx_3 = sx.q(rbp.d) * 0x38 + *arg1
*rbx_3 = *arg2
int64_t* r8_2 = arg3[1]
int64_t rax_16 = *arg3

if (r8_2 != 0)
    *(r8_2 + 0xc) += 1

*(rbx_3 + 8) = rax_16
*(rbx_3 + 0x10) = r8_2

if (r8_2 != 0)
    *(r8_2 + 0xc) += 1

__builtin_memset(&rbx_3[6], 0, 0x18)

if (r8_2 != 0)
    int32_t rax_17 = *(r8_2 + 0xc)
    *(r8_2 + 0xc) -= 1
    
    if (rax_17 == 1)
        (*(*r8_2 + 8))(r8_2, 1)

rbx_3[0xc] = 0xffffffff
int32_t arg_8
sub_141c5acf0(arg1, &arg_8, zx.q(*rbx_3), rbx_3, rbp.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x38 + 8
