// 函数: sub_141c6bf80
// 地址: 0x141c6bf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rbp_1 = sx.q(arg3)
int64_t* rax = sub_141c5d7c0(arg1)

if (rax == 0)
    return 

int64_t r9_1 = *rax
int32_t r14_1 = *(arg2 + 0xc)
int64_t var_28 = 0
int64_t var_20_1 = 0
int64_t rbx_1

if ((*(r9_1 + 0xf0))(rax, zx.q(r14_1), &var_28, r9_1, var_28, var_20_1) != 0
        || &var_28 == arg2 + 0x28)
    rbx_1 = zx.q(var_20_1.d)
else
    rbx_1 = sx.q(*(arg2 + 0x30))
    int64_t r15_1 = *(arg2 + 0x28)
    int32_t r8_1 = var_20_1:4.d
    var_20_1.d = rbx_1.d
    
    if (rbx_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(&var_28, rbx_1.d, r8_1)
        memcpy(var_28, r15_1, (rbx_1 << 4).d)
        rbx_1 = zx.q(var_20_1.d)
    else
        var_20_1:4.d = 0

if (rbp_1.d s< rbx_1.d)
    int32_t rax_4 = rbx_1.d - rbp_1.d
    
    if (rax_4 != 1)
        memmove((rbp_1 << 4) + var_28, (sx.q((rbp_1 + 1).d) << 4) + var_28, (rax_4 - 1) << 4)
        rbx_1 = zx.q(var_20_1.d)
    
    var_20_1.d = rbx_1.d - 1
    sub_1405a5010(&var_28)

(*(*rax + 0xe8))(rax, zx.q(r14_1), &var_28, *(arg2 + 0x38) & 1)
int64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)
