// 函数: sub_140e9d110
// 地址: 0x140e9d110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t var_1d8 = 0
int64_t* var_1b8
int64_t var_1a0
char var_190
void var_128
char var_c0
void var_b8
int32_t rdi
void* r12

if (*(arg3 + 0x178) == 0)
    r12 = sub_14065fb60(&var_b8, arg3 + 0xf0)
    rdi = 8
else
    int64_t var_1c0
    arg4 = sub_140a96170(&var_1c0)
    int64_t rax_2 = *(arg3 + 0x160)
    var_190 |= 1
    int64_t var_188_1 = rax_2
    void* rax_3 = *(arg3 + 0x168)
    char var_1a8_1 = 0
    var_1a0 = 0
    int32_t var_198_1 = 0
    int16_t var_18f_1 = 0x100
    void* var_180_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_178_1 = *(arg3 + 0x170)
    char var_170_1 = *(arg3 + 0x178)
    int64_t var_168 = 0
    int32_t var_160_1 = 0
    sub_140692f90(&var_168, arg3 + 0x180)
    int64_t var_158_1 = var_1c0
    int64_t* var_150_1 = var_1b8
    
    if (var_1b8 != 0)
        var_1b8[1].d += 1
    
    int32_t var_1b0
    int32_t var_148_1 = var_1b0
    char var_140_1 = var_1a8_1
    int64_t var_138 = 0
    int32_t var_130_1 = 0
    sub_140692f90(&var_138, &var_1a0)
    sub_140e92ae0(&var_128, &var_190)
    var_c0 = 1
    r12 = &var_128
    rdi = 7

sub_140e23130(*arg1, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), r12, arg3 + 0x190)

if ((rdi.b & 8) != 0)
    rdi &= 0xfffffff7
    char var_50
    
    if (var_50 != 0)
        char var_50_1 = 0
        sub_140ddef20(&var_b8)

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    
    if (var_c0 != 0)
        char var_c0_1 = 0
        sub_140ddef20(&var_128)

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    sub_140ddef20(&var_190)

if ((rdi.b & 1) != 0)
    sub_140745b20(&var_1a0)
    
    if (var_1b8 != 0)
        var_1b8[1].d -= 1
        
        if (var_1b8[1].d == 1)
            (**var_1b8)(var_1b8)
            int32_t rdi_1 = *(var_1b8 + 0xc)
            *(var_1b8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_1b8 + 8))(var_1b8, zx.q(rdi_1))

int64_t* rcx_13 = *arg1[2]
int64_t var_1d0 = *rcx_13
int64_t* rax_20 = rcx_13[1]

if (rax_20 != 0)
    rax_20[1].d += 1

sub_140f6d4e0(*arg1, arg3, &var_1d0)

if (rax_20 != 0)
    rax_20[1].d -= 1
    
    if (rax_20[1].d == 1)
        (**rax_20)(rax_20)
        int32_t temp2_1 = *(rax_20 + 0xc)
        *(rax_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rax_20 + 8))(rax_20, 1)

int64_t* rbx_3 = *arg1
char rax_21

if ((rbx_3[5].b & 0x20) == 0)
    rax_21 = (*(*rbx_3 + 0x220))(rbx_3)

if ((rbx_3[5].b & 0x20) != 0 || rax_21 != 0)
    rax_21 = 0x40

rbx_3[5].b &= 0xbf
rbx_3[5].b |= rax_21
*arg2 = *arg1
void* rcx_19 = arg1[1]
arg2[1] = rcx_19

if (rcx_19 != 0)
    *(rcx_19 + 8) += 1

__security_check_cookie(rax_1 ^ &var_258)
return arg2
