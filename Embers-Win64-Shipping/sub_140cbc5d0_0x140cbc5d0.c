// 函数: sub_140cbc5d0
// 地址: 0x140cbc5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int64_t var_48
int64_t* rax
int32_t rdx_1
rax, rdx_1 = sub_140b63b70(*(arg1 + 8) + 0x14 + rdi * 0x38, &var_48)
int64_t r9_1 = *rax
bool c = rax[1].d != 0
*rax = 0
int32_t r8 = rax[1].d
int32_t rcx_3 = *(rax + 0xc)
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, c) + 2 + r8
int64_t var_68 = r9_1
rax[1] = 0

if (rdx_4 s> rcx_3)
    sub_1405947f0(&var_68, rdx_4)

int32_t r15 = 1
sub_140a20ba0(&var_68, &data_142d404d4, 1)
int64_t rbp = var_68
var_68 = 0
int32_t var_60
var_60.q = 0
int64_t var_38
int64_t* rax_1 = sub_140cbc770(arg1, &var_38, rdi.d)

if (r8 s> 1)
    int32_t rax_2 = rax_1[1].d
    int32_t rsi_1 = rax_2 - 1
    
    if (rax_2 == 0)
        rsi_1 = 0
    
    if (r8 != 0 || rsi_1 == 0)
        r15 = 0
    
    int64_t var_58 = rbp
    int32_t rdx_10 = rsi_1 + r8 + r15
    
    if (rdx_10 s> rcx_3)
        sub_1405947f0(&var_58, rdx_10)
    
    sub_140a20ba0(&var_58, *rax_1, rsi_1)
    *arg2 = var_58
    arg2[1].d = r8
    *(arg2 + 0xc) = rcx_3
else
    *arg2 = 0
    *arg2 = *rax_1
    *rax_1 = 0
    arg2[1].d = rax_1[1].d
    *(arg2 + 0xc) = *(rax_1 + 0xc)
    rax_1[1] = 0
    
    if (rbp != 0)
        sub_140a74f90(rbp)

int64_t rcx_10 = var_48

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return arg2
