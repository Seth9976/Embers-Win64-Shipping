// 函数: sub_140ee6180
// 地址: 0x140ee6180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t var_160 = 0
char var_1c8
int64_t* var_150
int64_t var_138
char var_128
char var_c0
void var_b8
char* rdx_4
int32_t r14

if (*(arg3 + 0x178) == 0)
    rdx_4 = sub_14065fb60(&var_b8, arg3 + 0xf0)
    r14 = 8
else
    int64_t var_158
    arg4 = sub_140a96170(&var_158)
    int64_t rax_2 = *(arg3 + 0x160)
    var_1c8 |= 1
    void* rax_3 = *(arg3 + 0x168)
    char var_140_1 = 0
    var_138 = 0
    int32_t var_130_1 = 0
    int16_t var_1c7_1 = 0x100
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t rax_4 = *(arg3 + 0x170)
    char rax_5 = *(arg3 + 0x178)
    int64_t var_1a0 = 0
    int32_t var_198_1 = 0
    sub_140692f90(&var_1a0, arg3 + 0x180)
    int64_t rax_6 = var_158
    
    if (var_150 != 0)
        var_150[1].d += 1
    
    int64_t var_170 = 0
    int32_t var_168_1 = 0
    sub_140692f90(&var_170, &var_138)
    char rcx_3 = var_128
    char var_127_1 = var_1c7_1.b
    char var_126_1 = var_1c7_1:1.b
    int64_t var_120_1 = rax_2
    var_128 = rcx_3 ^ ((rcx_3 ^ var_1c8) & 1)
    void* var_118_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_110_1 = rax_4
    char var_108_1 = rax_5
    int64_t var_100 = 0
    int32_t var_f8_1 = 0
    sub_1407473e0(&var_100, &var_1a0)
    int64_t var_f0_1 = rax_6
    int64_t* var_e8_1 = var_150
    
    if (var_150 != 0)
        var_150[1].d += 1
    
    int32_t var_148
    int32_t var_e0_1 = var_148
    char var_d8_1 = var_140_1
    int64_t var_d0 = 0
    int32_t var_c8_1 = 0
    sub_1407473e0(&var_d0, &var_170)
    rdx_4 = &var_128
    var_c0 = 1
    r14 = 7

sub_140e23130(*arg1 + 8, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), rdx_4, arg3 + 0x190)

if ((r14.b & 8) != 0)
    r14 &= 0xfffffff7
    char var_50
    
    if (var_50 != 0)
        char var_50_1 = 0
        sub_140ddef20(&var_b8)

if ((r14.b & 4) != 0)
    r14 &= 0xfffffffb
    
    if (var_c0 != 0)
        char var_c0_1 = 0
        sub_140ddef20(&var_128)

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    sub_140ddef20(&var_1c8)

if ((r14.b & 1) != 0)
    sub_140745b20(&var_138)
    
    if (var_150 != 0)
        var_150[1].d -= 1
        
        if (var_150[1].d == 1)
            (**var_150)(var_150)
            int32_t rdi_1 = *(var_150 + 0xc)
            *(var_150 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_150 + 8))(var_150, zx.q(rdi_1))

void* rbx_2 = *arg1
char rax_26

if ((*(rbx_2 + 0x30) & 0x20) == 0)
    rax_26 = (*(*(rbx_2 + 8) + 0x220))(rbx_2 + 8)

if ((*(rbx_2 + 0x30) & 0x20) != 0 || rax_26 != 0)
    rax_26 = 0x40

*(rbx_2 + 0x30) &= 0xbf
*(rbx_2 + 0x30) |= rax_26
*arg2 = *arg1
void* rcx_17 = arg1[1]
arg2[1] = rcx_17

if (rcx_17 != 0)
    *(rcx_17 + 8) += 1

__security_check_cookie(rax_1 ^ &var_248)
return arg2
