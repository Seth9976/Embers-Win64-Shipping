// 函数: sub_14082fa30
// 地址: 0x14082fa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_140b63b70(arg1 + 0x28, &var_28)
int32_t rdx_1 = 0
int64_t* var_38 = nullptr
int64_t* r14 = nullptr
int32_t var_30 = 0
int32_t rcx_1 = rax[1].d
int32_t rbp = 0
int32_t var_2c = 0
int32_t rbx = rcx_1 - 1

if (rcx_1 == 0)
    rbx = 0

if (rbx + 5 s> 0)
    sub_1405947f0(&var_38, rbx + 5)
    rdx_1 = var_30
    rbp = var_2c
    r14 = var_38

int32_t rsi_1 = rbx + 5 + rdx_1

if (rsi_1 s> rbp)
    sub_140594770(&var_38)
    rbp = var_2c
    r14 = var_38

*r14 = 0x2e00430050004e
int64_t rbx_1 = sx.q(rbx)
memcpy(&r14[1], *rax, rbx_1.d * 2)
*(r14 + (rbx_1 << 1) + 8) = 0
var_38 = r14
int32_t r15
r15.b = rsi_1 == 0
int32_t rdx_5 = rsi_1 + 1 + r15

if (rdx_5 s> rbp)
    sub_1405947f0(&var_38, rdx_5)

sub_140a20ba0(&var_38, &data_142d404c4, 1)
int64_t rcx_7 = var_28
*arg2 = var_38
arg2[1].d = rsi_1
*(arg2 + 0xc) = rbp

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
