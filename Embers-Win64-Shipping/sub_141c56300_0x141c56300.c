// 函数: sub_141c56300
// 地址: 0x141c56300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rax = sub_141c5d7c0(arg1)

if (rax == 0)
    return 

int64_t r9_1 = *rax
int32_t r14_1 = *(arg2 + 0xc)
int64_t var_28 = 0
int64_t var_20_1 = 0

if ((*(r9_1 + 0xf0))(rax, zx.q(r14_1), &var_28, r9_1, var_28, var_20_1) == 0
        && &var_28 != arg2 + 0x28)
    int64_t rsi_1 = sx.q(*(arg2 + 0x30))
    int32_t r8_1 = var_20_1:4.d
    int64_t rbp_1 = *(arg2 + 0x28)
    var_20_1.d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(&var_28, rsi_1.d, r8_1)
        memcpy(var_28, rbp_1, (rsi_1 << 4).d)
    else
        var_20_1:4.d = 0

int64_t rsi_2 = sx.q(var_20_1.d)
int32_t rax_3 = (rsi_2 + 1).d
var_20_1.d = rax_3

if (rax_3 s> var_20_1:4.d)
    sub_1405a4f90(&var_28)

*(var_28 + rsi_2 * 0x10) = *arg3
(*(*rax + 0xe8))(rax, zx.q(r14_1), &var_28, *(arg2 + 0x38) & 1)
int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)
