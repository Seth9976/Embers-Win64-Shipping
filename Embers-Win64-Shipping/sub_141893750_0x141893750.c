// 函数: sub_141893750
// 地址: 0x141893750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x50)
*(arg1 + 0x50) += 1
int32_t arg_8 = rax + 1
EnterCriticalSection(arg1 + 0x58)
int64_t var_58 = 0
int32_t var_50 = 0

if (arg3 != &var_58 && arg3[1].d != 0)
    int64_t* rcx_1 = *arg3
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_58)

int64_t var_48 = 0
int32_t var_40 = 0

if (arg4 != &var_48 && arg4[1].d != 0)
    int64_t* rcx_2 = *arg4
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2, &var_48)

int32_t* var_68 = &arg_8
int64_t* var_60 = &var_58
void arg_10
sub_14185a000(arg1 + 0x80, &arg_10, &var_68, nullptr)
sub_140745b20(&var_48)
sub_140745b20(&var_58)
LeaveCriticalSection(arg1 + 0x58)
EnterCriticalSection(arg1 + 0xd0)
int32_t r8_1 = *(arg1 + 0x12c)
int64_t rbp

if (r8_1 == 0)
    rbp = zx.q(*(arg1 + 0x100))
    int32_t rax_9 = (rbp + 1).d
    *(arg1 + 0x100) = rax_9
    
    if (rax_9 s> *(arg1 + 0x104))
        sub_1405c4e40(arg1 + 0xf8)
    
    int32_t rdi_1 = *(arg1 + 0x120)
    void* rbx_1 = arg1 + 0x108
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_10 = *(rbx_1 + 0x10)
    
    if (rax_10 != 0)
        rbx_1 = rax_10
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rdi_1)
    int64_t rdx_8 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_8 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(*(arg1 + 0x128))
    int64_t rdx_3 = *(arg1 + 0xf8)
    int64_t rcx_8 = sx.q(*((rbp << 5) + rdx_3 + 4))
    *(arg1 + 0x128) = rcx_8.d
    *(arg1 + 0x12c) = r8_1 - 1
    
    if (r8_1 != 1)
        *((rcx_8 << 5) + rdx_3) = 0xffffffff

void* rax_17 = *(arg1 + 0x118)
void* r8_2 = arg1 + 0x108

if (rax_17 != 0)
    r8_2 = rax_17

int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(rbp.d)
void* rdx_11 = r8_2 + (sx.q((temp4 + (temp3 & 0x1f)) s>> 5) << 2)
*rdx_11 |= 1 << (rbp.b & 0x1f)
int32_t* rbx_4 = (sx.q(rbp.d) << 5) + *(arg1 + 0xf8)
*rbx_4 = arg_8
sub_140596d10(&rbx_4[2], arg2)
rbx_4[6] = 0xffffffff
void arg_18
sub_140619c60(arg1 + 0xf8, &arg_18, *rbx_4, rbx_4, rbp.d, nullptr)
LeaveCriticalSection(arg1 + 0xd0)
return zx.q(arg_8)
