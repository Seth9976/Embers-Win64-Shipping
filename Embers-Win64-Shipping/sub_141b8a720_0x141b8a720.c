// 函数: sub_141b8a720
// 地址: 0x141b8a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t var_1c8 = 0
char var_1b8
int64_t* var_148
int64_t var_130
char var_120
char var_b8
void var_b0
int32_t rdi
char* r12

if (*(arg3 + 0x178) == 0)
    r12 = sub_14065fb60(&var_b0, arg3 + 0xf0)
    rdi = 8
else
    int64_t var_150
    arg4 = sub_140a96170(&var_150)
    int64_t rax_2 = *(arg3 + 0x160)
    var_1b8 |= 1
    void* rax_3 = *(arg3 + 0x168)
    char var_138_1 = 0
    var_130 = 0
    int32_t var_128_1 = 0
    int16_t var_1b7_1 = 0x100
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t rax_4 = *(arg3 + 0x170)
    char rax_5 = *(arg3 + 0x178)
    int64_t var_190 = 0
    int32_t var_188_1 = 0
    sub_140692f90(&var_190, arg3 + 0x180)
    int64_t rax_6 = var_150
    
    if (var_148 != 0)
        var_148[1].d += 1
    
    int64_t var_160 = 0
    int32_t var_158_1 = 0
    sub_140692f90(&var_160, &var_130)
    char rcx_3 = var_120
    char var_11f_1 = var_1b7_1.b
    char var_11e_1 = var_1b7_1:1.b
    int64_t var_118_1 = rax_2
    var_120 = rcx_3 ^ ((rcx_3 ^ var_1b8) & 1)
    void* var_110_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_108_1 = rax_4
    char var_100_1 = rax_5
    int64_t var_f8 = 0
    int32_t var_f0_1 = 0
    sub_1407473e0(&var_f8, &var_190)
    int64_t var_e8_1 = rax_6
    int64_t* var_e0_1 = var_148
    
    if (var_148 != 0)
        var_148[1].d += 1
    
    int32_t var_140
    int32_t var_d8_1 = var_140
    char var_d0_1 = var_138_1
    int64_t var_c8 = 0
    int32_t var_c0_1 = 0
    sub_1407473e0(&var_c8, &var_160)
    var_b8 = 1
    r12 = &var_120
    rdi = 7

sub_140e23130(*arg1, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), r12, arg3 + 0x190)

if ((rdi.b & 8) != 0)
    rdi &= 0xfffffff7
    char var_48
    
    if (var_48 != 0)
        char var_48_1 = 0
        sub_140ddef20(&var_b0)

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    
    if (var_b8 != 0)
        char var_b8_1 = 0
        sub_140ddef20(&var_120)

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    sub_140ddef20(&var_1b8)

if ((rdi.b & 1) != 0)
    sub_140745b20(&var_130)
    
    if (var_148 != 0)
        var_148[1].d -= 1
        
        if (var_148[1].d == 1)
            (**var_148)(var_148)
            int32_t rdi_1 = *(var_148 + 0xc)
            *(var_148 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_148 + 8))(var_148, zx.q(rdi_1))

int64_t* r9_1 = arg1[2]
char var_1c4 = 0
int32_t* rax_29 = r9_1[3]
int32_t* rcx_15 = r9_1[4]

if (rax_29[1].b != 0)
    var_1c8 = *rax_29
    char var_1c4_1 = 1

int32_t* rax_31 = r9_1[2]
char var_1bc = 0
int32_t var_1c0

if (rax_31[1].b != 0)
    var_1c0 = *rax_31
    char var_1bc_1 = 1

sub_141b9d630(*arg1, arg3, **r9_1, r9_1[1], &var_1c0, &var_1c8, *rcx_15)
int64_t* rbx_2 = *arg1
char rax_34

if ((rbx_2[5].b & 0x20) == 0)
    rax_34 = (*(*rbx_2 + 0x220))(rbx_2)

if ((rbx_2[5].b & 0x20) != 0 || rax_34 != 0)
    rax_34 = 0x40

rbx_2[5].b &= 0xbf
rbx_2[5].b |= rax_34
*arg2 = *arg1
void* rcx_19 = arg1[1]
arg2[1] = rcx_19

if (rcx_19 != 0)
    *(rcx_19 + 8) += 1

__security_check_cookie(rax_1 ^ &var_248)
return arg2
