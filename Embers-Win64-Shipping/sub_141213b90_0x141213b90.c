// 函数: sub_141213b90
// 地址: 0x141213b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rdx = *(arg1 + 0x34)
int64_t rbp

if (rdx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_3 = (rbp + 1).d
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_1406798d0(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_4 = *(rbx_1 + 0x10)
    
    if (rax_4 != 0)
        rbx_1 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rbp * 0x38 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x38 + r9_1) = 0xffffffff

void* rax_11 = arg1[4]
void* r8_1 = &arg1[2]
int128_t var_58 = zx.o(0)

if (rax_11 != 0)
    r8_1 = rax_11

int64_t i = 2
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int64_t var_60
int64_t* rsi_1 = &var_60
int64_t* r15_1 = sx.q(rbp.d) * 0x38 + *arg1
int64_t rax_17 = *arg3
int64_t var_70
__builtin_memset(&var_70, 0, 0x18)
*r15_1 = rax_17
__builtin_memset(&r15_1[1], 0, 0x28)

do
    int64_t* rcx_7 = rsi_1[-1]
    rsi_1 = &rsi_1[-1]
    i -= 1
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7)
while (i != 0)

r15_1[6].d = 0xffffffff
int32_t var_78
sub_1412241a0(arg1, &var_78, arg2, r15_1, rbp.d, nullptr)
int64_t result = *arg1 + sx.q(var_78) * 0x38 + 8
__security_check_cookie(rax_1 ^ &var_a8)
return result
