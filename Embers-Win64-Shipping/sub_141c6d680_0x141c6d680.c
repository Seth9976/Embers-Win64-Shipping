// 函数: sub_141c6d680
// 地址: 0x141c6d680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rbp_1 = sx.q(arg3)
int64_t* rax = sub_141c5d7c0(arg1)

if (rax == 0)
    return 

int64_t r9 = *rax
int32_t r14_1 = *(arg2 + 0xc)
uint64_t var_38 = 0
int64_t var_30_1 = 0

if ((*(r9 + 0xf0))(rax, zx.q(r14_1), &var_38, r9, var_38, var_30_1) == 0 && &var_38 != arg2 + 0x28)
    int32_t r8_1 = var_30_1:4.d
    int64_t rsi_1 = sx.q(*(arg2 + 0x30))
    int64_t r12_1 = *(arg2 + 0x28)
    var_30_1.d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(&var_38, rsi_1.d, r8_1)
        memcpy(var_38, r12_1, (rsi_1 << 4).d)
    else
        var_30_1:4.d = 0

if (rbp_1.d s< var_30_1.d)
    int64_t r8_6 = (rbp_1 << 4) + var_38
    *(r8_6 + 8) &= 0xfffffffe
    *(r8_6 + 8) |= zx.d(arg4)

(*(*rax + 0xe8))(rax, zx.q(r14_1), &var_38, *(arg2 + 0x38) & 1)
uint64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
