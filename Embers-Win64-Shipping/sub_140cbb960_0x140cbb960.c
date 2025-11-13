// 函数: sub_140cbb960
// 地址: 0x140cbb960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
int64_t rax_1 = sx.q(*((rsi << 7) + *(arg1 + 0x18) + 0xc))
int32_t temp0 = rax_1.d
int32_t arg_8
int64_t rax_3

if (temp0 != 0)
    int64_t* rax_6
    
    if (temp0 s>= 0)
        rax_6 = *(arg1 + 0x18) - 0x80 + (rax_1 << 7)
    else
        rax_6 = sx.q(0xffffffff - rax_1.d) * 0x38 + *(arg1 + 8)
    
    rax_3 = *rax_6
else
    void arg_18
    arg_8 = *sub_140b5e500(&arg_18, (rax_1 + 0x69).d)
    int32_t arg_c = 0
    rax_3 = arg_8.q

arg_8.q = rax_3
int64_t var_58
int64_t* rax_9 = sub_140b63b70(&arg_8, &var_58)
uint64_t rcx_6 = *rax_9
int32_t rdx_2 = rax_9[1].d
int32_t rdx_3 = neg.d(rdx_2)
*rax_9 = 0
int32_t r8 = rax_9[1].d
uint64_t var_78 = rcx_6
int32_t rcx_7 = *(rax_9 + 0xc)
int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 2 + r8
rax_9[1] = 0

if (rdx_6 s> rcx_7)
    sub_1405947f0(&var_78, rdx_6)

int32_t r12 = 1
sub_140a20ba0(&var_78, &data_142d404d4, 1)
uint64_t r14 = var_78
var_78 = 0
int32_t var_70
var_70.q = 0
uint64_t var_48[0x2]
uint64_t* rax_11 = sub_140cbbb90(arg1, &var_48, rsi.d, arg4, arg5)

if (r8 s> 1)
    int32_t rax_12 = rax_11[1].d
    int32_t rsi_1 = rax_12 - 1
    
    if (rax_12 == 0)
        rsi_1 = 0
    
    if (r8 != 0 || rsi_1 == 0)
        r12 = 0
    
    uint64_t var_68 = r14
    int32_t rdx_12 = r8 + r12 + rsi_1
    
    if (rdx_12 s> rcx_7)
        sub_1405947f0(&var_68, rdx_12)
    
    sub_140a20ba0(&var_68, *rax_11, rsi_1)
    *arg2 = var_68
    arg2[1].d = r8
    *(arg2 + 0xc) = rcx_7
else
    *arg2 = 0
    *arg2 = *rax_11
    *rax_11 = 0
    arg2[1].d = rax_11[1].d
    *(arg2 + 0xc) = *(rax_11 + 0xc)
    rax_11[1] = 0
    
    if (r14 != 0)
        sub_140a74f90(r14)

int64_t rcx_14 = var_58

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

uint64_t rcx_15 = var_48[0]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return arg2
