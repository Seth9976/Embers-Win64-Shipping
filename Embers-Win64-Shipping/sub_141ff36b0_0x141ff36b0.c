// 函数: sub_141ff36b0
// 地址: 0x141ff36b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t arg_20
sub_140b58170(&arg_20, "FEngineService", 1)
void var_68
int64_t rbx = *sub_140b58170(&var_68, "Messaging", 1)
j_sub_140b3db50()
int64_t* rax_1 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t r8 = *rax_1
void var_60
int64_t* rax_2 = (*(r8 + 0x68))(rax_1, &var_60, r8)
int64_t var_118 = *rax_2
int64_t* rcx_4 = rax_2[1]

if (rcx_4 != 0)
    *(rcx_4 + 0xc) += 1

int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t rax_5 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_58 + 8))(var_58, 1)

int64_t var_dc = arg_20
char var_108 = 0
int64_t var_100 = 0
int32_t var_f8 = 0
void**** var_f0 = nullptr
int32_t var_e4 = 0
char var_e0 = 0
int64_t* rax_8 = sub_140a242a0()
int64_t r8_1 = *rax_8
int32_t var_d4 = (*(r8_1 + 0x10))(rax_8, 0, r8_1)
void*** rax_10 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_10

if (rax_10 == 0)
    rbx_2 = nullptr
else
    rbx_2[1] = arg1
    *rbx_2 = &data_14329add0
    rbx_2[2] = sub_142007ac0

void*** rax_11 = j_sub_140a82f30(0x18)

if (rax_11 == 0)
    rax_11 = nullptr
else
    rax_11[1].d = 1
    *rax_11 = &data_142d42e98
    *(rax_11 + 0xc) = 1
    rax_11[2] = rbx_2

int32_t var_e8 = 1
sub_1405a4f90(&var_f0)
void**** r14 = var_f0
*r14 = rbx_2
r14[1] = rax_11
int64_t var_b8_1 = 0
int64_t var_c0_1 = 0
void*** rax_14 = j_sub_140a82f30(0x18)
void*** rbx_3 = rax_14

if (rax_14 == 0)
    rbx_3 = nullptr
else
    rbx_3[1] = arg1
    *rbx_3 = &data_14329ade0
    rbx_3[2] = sub_142007b90

void*** rax_15 = j_sub_140a82f30(0x18)

if (rax_15 == 0)
    rax_15 = nullptr
else
    rax_15[1].d = 1
    *rax_15 = &data_142d42e98
    *(rax_15 + 0xc) = 1
    rax_15[2] = rbx_3

int64_t rbx_4 = sx.q(var_e8)
int32_t r12 = var_e4
int32_t r15 = (rbx_4 + 1).d

if (r15 s> r12)
    sub_1405a4f90(&var_f0)
    r12 = var_e4
    r14 = var_f0

int64_t rcx_11 = rbx_4 * 2
r14[rcx_11] = rbx_3
r14[rcx_11 + 1] = rax_15
int64_t var_a8_1 = 0
int64_t var_b0_1 = 0
void*** rax_18 = j_sub_140a82f30(0x18)
void*** rbx_5 = rax_18

if (rax_18 == 0)
    rbx_5 = nullptr
else
    rbx_5[1] = arg1
    *rbx_5 = &data_14329adf0
    rbx_5[2] = sub_142007cc0

void*** rax_19 = j_sub_140a82f30(0x18)

if (rax_19 == 0)
    rax_19 = nullptr
else
    rax_19[1].d = 1
    *rax_19 = &data_142d42e98
    *(rax_19 + 0xc) = 1
    rax_19[2] = rbx_5

int32_t r13 = r15 + 1

if (r13 s> r12)
    sub_1405a4f90(&var_f0)
    r12 = var_e4
    r14 = var_f0

int64_t rcx_14 = sx.q(r15) * 2
r14[rcx_14] = rbx_5
r14[rcx_14 + 1] = rax_19
int64_t var_98_1 = 0
int64_t var_a0_1 = 0
void*** rax_22 = j_sub_140a82f30(0x18)
void*** rbx_6 = rax_22

if (rax_22 == 0)
    rbx_6 = nullptr
else
    rbx_6[1] = arg1
    *rbx_6 = &data_14329ae00
    rbx_6[2] = sub_1420081a0

void*** rax_23 = j_sub_140a82f30(0x18)

if (rax_23 == 0)
    rax_23 = nullptr
else
    rax_23[1].d = 1
    *rax_23 = &data_142d42e98
    *(rax_23 + 0xc) = 1
    rax_23[2] = rbx_6

int32_t r15_1 = r13 + 1

if (r15_1 s> r12)
    sub_1405a4f90(&var_f0)
    r12 = var_e4
    r14 = var_f0

int64_t rcx_17 = sx.q(r13) * 2
r14[rcx_17] = rbx_6
r14[rcx_17 + 1] = rax_23
int64_t var_88_1 = 0
int64_t var_90_1 = 0
void*** rax_26 = j_sub_140a82f30(0x18)
void*** rbx_7 = rax_26

if (rax_26 == 0)
    rbx_7 = nullptr
else
    rbx_7[1] = arg1
    *rbx_7 = &data_14329ae10
    rbx_7[2] = sub_1420081b0

void*** rax_27 = j_sub_140a82f30(0x18)

if (rax_27 == 0)
    rax_27 = nullptr
else
    rax_27[1].d = 1
    *rax_27 = &data_142d42e98
    *(rax_27 + 0xc) = 1
    rax_27[2] = rbx_7

int32_t var_e8_4 = r15_1 + 1

if (r15_1 + 1 s> r12)
    sub_1405a4f90(&var_f0)
    r14 = var_f0

int64_t rcx_20 = sx.q(r15_1) * 2
int32_t var_d4_1 = 2
r14[rcx_20] = rbx_7
r14[rcx_20 + 1] = rax_27
int64_t var_78_1 = 0
int64_t var_80_1 = 0
int64_t var_d0
sub_141ffcd60(&var_118, &var_d0)
int64_t* var_c8

if (arg1 != &var_d0)
    *arg1 = var_d0
    var_d0 = 0
    sub_1405aeff0(&arg1[1], &var_c8)

int64_t* rcx_23 = var_c8

if (rcx_23 != 0)
    rcx_23[1].d -= 1
    
    if (rcx_23[1].d == 1)
        int64_t* rbx_8 = var_c8
        (**rbx_8)(rbx_8)
        int32_t rax_34 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (rax_34 == 1)
            int64_t* rcx_25 = var_c8
            (*(*rcx_25 + 8))(rcx_25, 1)

sub_140596e10(&var_f0)
sub_140745b20(&var_100)

if (rcx_4 != 0)
    int32_t rsi_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, zx.q(rsi_1))

void* rbx_9 = *arg1

if (rbx_9 != 0)
    int16_t arg_8 = 1
    int16_t arg_18 = 1
    int16_t arg_10 = 2
    int16_t arg_1a = 2
    int64_t var_70 = *(sub_141cbc340() + 0x18)
    sub_142010ae0(rbx_9, &var_70, &arg_18)

return arg1
