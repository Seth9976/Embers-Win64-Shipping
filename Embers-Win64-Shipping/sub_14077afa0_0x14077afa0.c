// 函数: sub_14077afa0
// 地址: 0x14077afa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x34)
int64_t rbp

if (r9 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1407c39b0(arg1)
    
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
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*(rbp * 0xe0 + r10_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r9 - 1
    
    if (r9 != 1)
        *(rdx * 0xe0 + r10_1) = 0xffffffff

void* rax_9 = arg1[4]
void* r8 = &arg1[2]

if (rax_9 != 0)
    r8 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t* rbx_3 = sx.q(rbp.d) * 0xe0 + *arg1
int128_t var_e8
memset(&var_e8, 0, 0xc0)
*rbx_3 = *arg3
*(rbx_3 + 0x10) = var_e8
int128_t var_d8
*(rbx_3 + 0x20) = var_d8
int128_t var_c8
*(rbx_3 + 0x30) = var_c8
int128_t var_b8
*(rbx_3 + 0x40) = var_b8
int128_t var_a8
*(rbx_3 + 0x50) = var_a8
int128_t var_98
*(rbx_3 + 0x60) = var_98
int128_t var_88
*(rbx_3 + 0x70) = var_88
int128_t var_78
*(rbx_3 + 0x80) = var_78
int128_t var_68
*(rbx_3 + 0x90) = var_68
int128_t var_58
*(rbx_3 + 0xa0) = var_58
int128_t var_48
*(rbx_3 + 0xb0) = var_48
int128_t var_38
*(rbx_3 + 0xc0) = var_38
rbx_3[0x1a].d = 0xffffffff
int32_t arg_8
sub_14078b360(arg1, &arg_8, arg2, rbx_3, rbp.d, nullptr)
return *arg1 + sx.q(arg_8) * 0xe0 + 0x10
