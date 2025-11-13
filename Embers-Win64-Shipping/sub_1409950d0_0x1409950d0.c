// 函数: sub_1409950d0
// 地址: 0x1409950d0
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

int64_t* rbx_1 = *arg2
int32_t rax_3 = 0
void* r14_1 = &rbx_1[rax * 3]
int16_t* var_58
int64_t var_28

if (rbx_1 != r14_1)
    do
        if (arg1[1].d s> 1)
            sub_140a20ba0(arg1, &data_142d8adc4, 2)
        
        int64_t* rax_4 = sub_1409e46d0(&rbx_1[2], &var_28)
        
        if (rax_4[1].d != 0)
            *rax_4
        
        int64_t var_38
        int64_t* rax_5 = sub_140993b50(&var_38, rbx_1)
        int16_t* const r8_1
        
        if (rax_5[1].d == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *rax_5
        
        sub_140a2e390(&var_58, u"Attributes:%s", r8_1)
        int64_t rcx_7 = var_38
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int16_t* const r8_2 = &data_142d40450
        int32_t var_50
        
        if (var_50 != 0)
            r8_2 = var_58
        
        int64_t var_48
        sub_140a2e390(&var_48, u"VertexAttributes:%s, OriginalVertexID:%s", r8_2)
        int16_t* rcx_9 = var_58
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = var_28
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int32_t var_40
        int32_t r8_3 = var_40 - 1
        
        if (var_40 == 0)
            r8_3 = 0
        
        sub_140a20ba0(arg1, var_48, r8_3)
        int64_t rcx_12 = var_48
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rbx_1 = &rbx_1[3]
    while (rbx_1 != r14_1)
    
    rax_3 = arg1[1].d

var_58 = nullptr
int32_t rbx_2 = rax_3 - 1
int32_t var_4c_1 = 0

if (rax_3 == 0)
    rbx_2 = 0

int32_t rdx_4 = 0
int16_t* r15_1 = nullptr
int32_t var_50_1 = 0
int32_t r14_2 = 0

if (rbx_2 + 2 s> 0)
    sub_1405947f0(&var_58, rbx_2 + 2)
    rdx_4 = var_50_1
    r14_2 = var_4c_1
    r15_1 = var_58

int32_t rsi_3 = rdx_4 + 2 + rbx_2

if (rsi_3 s> r14_2)
    sub_140594770(&var_58)
    r14_2 = var_4c_1
    r15_1 = var_58

*r15_1 = 0x5b
int64_t rbx_3 = sx.q(rbx_2)
memcpy(&r15_1[1], *arg1, rbx_3.d * 2)
r15_1[rbx_3 + 1] = 0
var_58 = r15_1
int32_t rax_8
rax_8.b = rsi_3 == 0
int32_t rdx_8 = rsi_3 + 1 + rax_8

if (rdx_8 s> r14_2)
    sub_1405947f0(&var_58, rdx_8)

sub_140a20ba0(&var_58, &data_142d84a20, 1)
int16_t* rbx_4 = var_58
var_58 = nullptr
int32_t var_50_3
var_50_3.q = 0

if (arg1 != &var_28)
    int64_t rcx_18 = *arg1
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    *arg1 = rbx_4
    arg1[1].d = rsi_3
    *(arg1 + 0xc) = r14_2
else if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

return arg1
