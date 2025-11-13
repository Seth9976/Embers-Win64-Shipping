// 函数: sub_141d4e3f0
// 地址: 0x141d4e3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)
int32_t arg_18 = 0
int64_t var_28
int64_t* rax_2
int64_t rsi
int32_t rdi_1

if (rcx == 0)
    rsi = 0
    var_28 = 0
    int64_t var_20_1 = 0
    rax_2 = &var_28
    rdi_1 = 2
else
    int64_t* rax_1 = (*(*rcx + 0x10))(rcx)
    int64_t r9_1 = *rax_1
    rax_2 = (*(r9_1 + 0x28))(rax_1, &var_28, zx.q(arg3), r9_1)
    rsi = var_28
    rdi_1 = 1

*arg2 = 0
int64_t rbp = sx.q(rax_2[1].d)
int64_t r14 = *rax_2
arg2[1].d = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(arg2, rbp.d, 0)
    memcpy(*arg2, r14, (rbp << 4).d)
else
    *(arg2 + 0xc) = 0

if ((rdi_1.b & 2) != 0)
    rdi_1 &= 0xfffffffd
    
    if (rsi != 0)
        sub_140a74f90(rsi)

if ((rdi_1.b & 1) != 0)
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg2
