// 函数: sub_141a2a300
// 地址: 0x141a2a300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
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
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rbp << 6) + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 6) + r9_1) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int128_t* rbx_4 = (sx.q(rbp.d) << 6) + *arg1
char var_38
char rdx_9 = (var_38 & 0xfe) | 2
*rbx_4 = *arg3
char rcx_7 = (rbx_4[3].b & 0xfe) | 2
rbx_4[3].b = rcx_7

if ((rdx_9 & 1) != 0)
    rcx_7 |= 1
    rdx_9 &= 0xfe
    rbx_4[3].b = ((rdx_9 ^ rcx_7) & 2) ^ rcx_7
    int128_t var_58
    rbx_4[1] = var_58
    int128_t var_48
    rbx_4[2] = var_48
    
    if ((rdx_9 & 1) != 0)
        int128_t* rcx_8 = &var_58
        
        if ((rdx_9 & 2) == 0)
            rcx_8 = var_58.q
        
        (**rcx_8)(rcx_8, 0)
        
        if ((rdx_9 & 2) == 0)
            sub_140a74f90(var_58.q)

*(rbx_4 + 0x38) = 0xffffffff
int32_t arg_8
sub_141a451e0(arg1, &arg_8, arg2, rbx_4, rbp.d, nullptr)
return *arg1 + (sx.q(arg_8) << 6) + 0x10
