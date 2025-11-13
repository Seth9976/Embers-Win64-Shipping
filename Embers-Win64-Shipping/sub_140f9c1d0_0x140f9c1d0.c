// 函数: sub_140f9c1d0
// 地址: 0x140f9c1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t var_1d8 = 0
int64_t* var_1c8
int64_t var_1b0
char var_1a0
void var_128
char var_c0
void var_b8
int32_t rsi
void* r13

if (*(arg3 + 0x178) == 0)
    r13 = sub_14065fb60(&var_b8, arg3 + 0xf0)
    rsi = 8
else
    int64_t var_1d0
    arg4 = sub_140a96170(&var_1d0)
    int64_t rax_2 = *(arg3 + 0x160)
    var_1a0 |= 1
    int64_t var_198_1 = rax_2
    void* rax_3 = *(arg3 + 0x168)
    char var_1b8_1 = 0
    var_1b0 = 0
    int32_t var_1a8_1 = 0
    int16_t var_19f_1 = 0x100
    void* var_190_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_188_1 = *(arg3 + 0x170)
    char var_180_1 = *(arg3 + 0x178)
    int64_t var_178 = 0
    int32_t var_170_1 = 0
    sub_140692f90(&var_178, arg3 + 0x180)
    int64_t var_168_1 = var_1d0
    int64_t* var_160_1 = var_1c8
    
    if (var_1c8 != 0)
        var_1c8[1].d += 1
    
    int32_t var_1c0
    int32_t var_158_1 = var_1c0
    char var_150_1 = var_1b8_1
    int64_t var_148 = 0
    int32_t var_140_1 = 0
    sub_140692f90(&var_148, &var_1b0)
    sub_140e92ae0(&var_128, &var_1a0)
    var_c0 = 1
    r13 = &var_128
    rsi = 7

sub_140e23130(*arg1 + 8, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), r13, arg3 + 0x190)

if ((rsi.b & 8) != 0)
    rsi &= 0xfffffff7
    char var_50
    
    if (var_50 != 0)
        char var_50_1 = 0
        sub_140ddef20(&var_b8)

if ((rsi.b & 4) != 0)
    rsi &= 0xfffffffb
    
    if (var_c0 != 0)
        char var_c0_1 = 0
        sub_140ddef20(&var_128)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_140ddef20(&var_1a0)

if ((rsi.b & 1) != 0)
    sub_140745b20(&var_1b0)
    
    if (var_1c8 != 0)
        var_1c8[1].d -= 1
        
        if (var_1c8[1].d == 1)
            (**var_1c8)(var_1c8)
            int32_t rdi_1 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_1c8 + 8))(var_1c8, zx.q(rdi_1))

int64_t* rcx_13 = *arg1[2]
int64_t* rdi_2 = rcx_13[1]
void* rsi_1 = *rcx_13
void* var_138 = rsi_1
int64_t* var_130 = rdi_2

if (rdi_2 != 0)
    rdi_2[1].d += 1

int64_t* rbx_2 = *arg1
sub_140fa9970(rbx_2, arg3, &var_138)
(*(*rbx_2 + 0x78))(rbx_2, zx.q(*(rsi_1 + 0x398)), arg3 + 0x210, arg3 + 0x240)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp2_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

void* rbx_3 = *arg1
char rax_20

if ((*(rbx_3 + 0x30) & 0x20) == 0)
    rax_20 = (*(*(rbx_3 + 8) + 0x220))(rbx_3 + 8)

if ((*(rbx_3 + 0x30) & 0x20) != 0 || rax_20 != 0)
    rax_20 = 0x40

*(rbx_3 + 0x30) &= 0xbf
*(rbx_3 + 0x30) |= rax_20
*arg2 = *arg1
void* rcx_20 = arg1[1]
arg2[1] = rcx_20

if (rcx_20 != 0)
    *(rcx_20 + 8) += 1

__security_check_cookie(rax_1 ^ &var_258)
return arg2
