// 函数: sub_141fa1830
// 地址: 0x141fa1830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = arg2
int32_t rdx = *(arg1 + 0x34)
int64_t r8
int64_t var_20 = r8
int64_t rbp

if (rdx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_14090a6a0(arg1)
    
    int32_t rbx_1 = arg1[5].d
    void* rdi_1 = &arg1[2]
    sub_1405a4980(rdi_1, rbx_1 + 1)
    *(rdi_1 + 0x18) += 1
    void* rax_2 = *(rdi_1 + 0x10)
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_5 << 2)) &= not.d(1 << (rbx_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8_1 = sx.q(*(rbp * 0x60 + r9_1 + 4))
    arg1[6].d = r8_1.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8_1 * 0x60 + r9_1) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_9 != 0)
    r8_2 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
int64_t rdx_8 = sx.q((temp3 + (temp2 & 0x1f)) s>> 5)
*(r8_2 + (rdx_8 << 2)) |= 1 << (rbp.b & 0x1f)
int32_t* rbx_5 = sx.q(rbp.d) * 0x60 + *arg1
sub_141fa0a30(&var_28, rbx_5)
rbx_5[0x16] = 0xffffffff
int32_t arg_8 = *rbx_5
sub_141faf360(arg1, &arg_8, arg_8, rbx_5, rbp.d, nullptr)
return *arg1 + 8 + sx.q(arg_8) * 0x60
