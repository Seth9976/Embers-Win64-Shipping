// 函数: sub_1418194b0
// 地址: 0x1418194b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t r10 = *(arg1 + 0x34)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_4 = (rbp + 1).d
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_1407755b0(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_5 = *(rbx_1 + 0x10)
    
    if (rax_5 != 0)
        rbx_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    void* rdx_5 = rbx_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)
    *rdx_5 &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r8 = *arg1
    int64_t rdx = sx.q(*(rbp * 0x58 + r8 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r10 - 1
    
    if (r10 != 1)
        *(rdx * 0x58 + r8) = 0xffffffff

void* rax_12 = arg1[4]
void* r8_1 = &arg1[2]
int32_t var_58 = 0x100000

if (rax_12 != 0)
    r8_1 = rax_12

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int32_t* r9_1 = sx.q(rbp.d) * 0x58 + *arg1
int128_t* rax_18 = *arg4
int64_t var_88
__builtin_memset(&var_88, 0, 0x2d)
int128_t zmm0 = *rax_18
*(r9_1 + 0x10) = var_88.o
int64_t var_50 = 0
*r9_1 = zmm0
int64_t var_78
*(r9_1 + 0x20) = var_78.o
int32_t var_a8 = rbp.d
int64_t var_68
*(r9_1 + 0x30) = var_68.o
*(r9_1 + 0x40) = var_58.o
r9_1[0x14] = 0xffffffff
sub_141836460(arg1, arg2, arg3, r9_1, var_a8, arg5)
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
