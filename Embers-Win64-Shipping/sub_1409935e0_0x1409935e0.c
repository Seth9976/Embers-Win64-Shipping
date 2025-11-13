// 函数: sub_1409935e0
// 地址: 0x1409935e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t rax = sx.q(arg2[1].d)

if (rax.d == 0)
    sub_1405947f0(arg1, 6)
    int32_t rax_1 = arg1[1].d + 6
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    int64_t* rcx_1 = *arg1
    *rcx_1 = 0x740070006d0045
    rcx_1[1].d = 0x79
    return arg1

int16_t* var_38

for (int32_t* i = *arg2; i != &i[rax]; i = &i[1])
    if (arg1[1].d s> 1)
        sub_140a20ba0(arg1, &data_142d8adc4, 2)
    
    sub_1409e46d0(i, &var_38)
    int32_t var_30
    int32_t r8_1 = var_30 - 1
    
    if (var_30 == 0)
        r8_1 = 0
    
    int16_t* rsi_1 = var_38
    sub_140a20ba0(arg1, rsi_1, r8_1)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

int32_t rax_4 = arg1[1].d
int32_t rdx_3 = 0
var_38 = nullptr
int16_t* r15_1 = nullptr
int32_t var_30_1 = 0
int32_t rsi_2 = 0
int32_t var_2c_1 = 0
int32_t rdi_1 = rax_4 - 1

if (rax_4 == 0)
    rdi_1 = 0

if (rdi_1 + 2 s> 0)
    sub_1405947f0(&var_38, rdi_1 + 2)
    rdx_3 = var_30_1
    rsi_2 = var_2c_1
    r15_1 = var_38

int32_t r14_3 = rdi_1 + 2 + rdx_3

if (r14_3 s> rsi_2)
    sub_140594770(&var_38)
    rsi_2 = var_2c_1
    r15_1 = var_38

*r15_1 = 0x5b
int64_t rdi_2 = sx.q(rdi_1)
memcpy(&r15_1[1], *arg1, rdi_2.d * 2)
r15_1[rdi_2 + 1] = 0
var_38 = r15_1
int32_t rax_6
rax_6.b = r14_3 == 0
int32_t rdx_7 = r14_3 + 1 + rax_6

if (rdx_7 s> rsi_2)
    sub_1405947f0(&var_38, rdx_7)

sub_140a20ba0(&var_38, &data_142d84a20, 1)
int16_t* rdi_3 = var_38
var_38 = nullptr
int32_t var_30_3
var_30_3.q = 0
void var_28

if (arg1 != &var_28)
    int64_t rcx_11 = *arg1
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    *arg1 = rdi_3
    arg1[1].d = r14_3
    *(arg1 + 0xc) = rsi_2
else if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

return arg1
