// 函数: sub_140993800
// 地址: 0x140993800
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

void* rbx_1 = *arg2
int32_t rax_3 = 0
void* r12_3 = (rax << 5) + rbx_1
int16_t* var_88
int64_t var_38

if (rbx_1 != r12_3)
    do
        if (arg1[1].d s> 1)
            sub_140a20ba0(arg1, &data_142d8adc4, 2)
        
        int64_t* rax_4 = sub_1409e46d0(rbx_1 + 0x18, &var_38)
        int16_t* const r15_1
        
        if (rax_4[1].d == 0)
            r15_1 = &data_142d40450
        else
            r15_1 = *rax_4
        
        int64_t var_68
        int64_t* rax_5 = sub_140993b50(&var_68, rbx_1 + 8)
        int16_t* const r8_1
        
        if (rax_5[1].d == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *rax_5
        
        sub_140a2e390(&var_88, u"Attributes:%s", r8_1)
        int64_t rcx_6 = var_68
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int16_t* const r14_1 = &data_142d40450
        int32_t var_80
        
        if (var_80 != 0)
            r14_1 = var_88
        
        int64_t var_48
        int64_t* rax_6 = sub_1409e46d0(rbx_1 + 4, &var_48)
        
        if (rax_6[1].d != 0)
            *rax_6
        
        int64_t var_58
        int64_t* rax_7 = sub_1409e46d0(rbx_1, &var_58)
        int16_t* const r8_2
        
        if (rax_7[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *rax_7
        
        int16_t* const var_90_1 = r15_1
        int16_t* const var_98_1 = r14_1
        int64_t var_78
        sub_140a2e390(&var_78, VertexID0:%s, VertexID1:%s, EdgeAttributes:%s, OriginalEdgeID:%s", 
            r8_2)
        int64_t rcx_10 = var_58
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_48
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int16_t* rcx_12 = var_88
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = var_38
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int32_t var_70
        int32_t r8_3 = var_70 - 1
        
        if (var_70 == 0)
            r8_3 = 0
        
        sub_140a20ba0(arg1, var_78, r8_3)
        int64_t rcx_15 = var_78
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        rbx_1 += 0x20
    while (rbx_1 != r12_3)
    
    rax_3 = arg1[1].d

int32_t rbx_2 = rax_3 - 1
var_88 = nullptr
int32_t rdx_6 = 0
int32_t var_7c_1 = 0

if (rax_3 == 0)
    rbx_2 = 0

int32_t var_80_1 = 0
int16_t* r15_2 = nullptr
int32_t r14_2 = 0

if (rbx_2 + 2 s> 0)
    sub_1405947f0(&var_88, rbx_2 + 2)
    rdx_6 = var_80_1
    r14_2 = var_7c_1
    r15_2 = var_88

int32_t rsi_3 = rbx_2 + 2 + rdx_6

if (rsi_3 s> r14_2)
    sub_140594770(&var_88)
    r14_2 = var_7c_1
    r15_2 = var_88

*r15_2 = 0x5b
int64_t rbx_3 = sx.q(rbx_2)
memcpy(&r15_2[1], *arg1, rbx_3.d * 2)
r15_2[rbx_3 + 1] = 0
var_88 = r15_2
int32_t rax_10
rax_10.b = rsi_3 == 0
int32_t rdx_10 = rsi_3 + 1 + rax_10

if (rdx_10 s> r14_2)
    sub_1405947f0(&var_88, rdx_10)

sub_140a20ba0(&var_88, &data_142d84a20, 1)
int16_t* rbx_4 = var_88
var_88 = nullptr
int32_t var_80_3
var_80_3.q = 0

if (arg1 != &var_38)
    int64_t rcx_21 = *arg1
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    *arg1 = rbx_4
    arg1[1].d = rsi_3
    *(arg1 + 0xc) = r14_2
else if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

return arg1
