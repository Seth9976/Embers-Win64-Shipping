// 函数: sub_140994920
// 地址: 0x140994920
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
int64_t var_28

for (int32_t* i = *arg2; i != &i[rax * 2]; i = &i[2])
    if (arg1[1].d s> 1)
        sub_140a20ba0(arg1, &data_142d8adc4, 2)
    
    int64_t* rax_3 = sub_1409e46d0(&i[1], &var_28)
    
    if (rax_3[1].d != 0)
        *rax_3
    
    sub_140a2e390(&var_38, u"ContourIndex:%d, VertexInstanceIDs:%s", zx.q(*i))
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int32_t var_30
    int32_t r8_2 = var_30 - 1
    
    if (var_30 == 0)
        r8_2 = 0
    
    sub_140a20ba0(arg1, var_38, r8_2)
    int16_t* rcx_7 = var_38
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int32_t rax_5 = arg1[1].d
int32_t rdx_3 = 0
var_38 = nullptr
int16_t* r15_1 = nullptr
int32_t var_30_1 = 0
int32_t rsi_2 = 0
int32_t var_2c_1 = 0
int32_t rbx_1 = rax_5 - 1

if (rax_5 == 0)
    rbx_1 = 0

if (rbx_1 + 2 s> 0)
    sub_1405947f0(&var_38, rbx_1 + 2)
    rdx_3 = var_30_1
    rsi_2 = var_2c_1
    r15_1 = var_38

int32_t r14_2 = rbx_1 + 2 + rdx_3

if (r14_2 s> rsi_2)
    sub_140594770(&var_38)
    rsi_2 = var_2c_1
    r15_1 = var_38

*r15_1 = 0x5b
int64_t rbx_2 = sx.q(rbx_1)
memcpy(&r15_1[1], *arg1, rbx_2.d * 2)
r15_1[rbx_2 + 1] = 0
var_38 = r15_1
int32_t rax_7
rax_7.b = r14_2 == 0
int32_t rdx_7 = r14_2 + 1 + rax_7

if (rdx_7 s> rsi_2)
    sub_1405947f0(&var_38, rdx_7)

sub_140a20ba0(&var_38, &data_142d84a20, 1)
int16_t* rbx_3 = var_38
var_38 = nullptr
int32_t var_30_3
var_30_3.q = 0

if (arg1 != &var_28)
    int64_t rcx_13 = *arg1
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    *arg1 = rbx_3
    arg1[1].d = r14_2
    *(arg1 + 0xc) = rsi_2
else if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

return arg1
