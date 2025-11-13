// 函数: sub_140f69260
// 地址: 0x140f69260
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
int32_t rdi
void* r12

if (*(arg3 + 0x178) == 0)
    r12 = sub_14065fb60(&var_b8, arg3 + 0xf0)
    rdi = 8
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
    r12 = &var_128
    rdi = 7

int128_t zmm1 = sub_140e23130(*arg1, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, 
    arg3 + 0x78, *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), 
    *(arg3 + 0x95), *(arg3 + 0x96), r12, arg3 + 0x190)

if ((rdi.b & 8) != 0)
    rdi &= 0xfffffff7
    char var_50
    
    if (var_50 != 0)
        char var_50_1 = 0
        zmm1 = sub_140ddef20(&var_b8)

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    
    if (var_c0 != 0)
        char var_c0_1 = 0
        zmm1 = sub_140ddef20(&var_128)

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    zmm1 = sub_140ddef20(&var_1a0)

if ((rdi.b & 1) != 0)
    zmm1 = sub_140745b20(&var_1b0)
    
    if (var_1c8 != 0)
        var_1c8[1].d -= 1
        
        if (var_1c8[1].d == 1)
            (**var_1c8)(var_1c8)
            int32_t rdi_1 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_1c8 + 8))(var_1c8, zx.q(rdi_1))

int64_t** r8_1 = arg1[2]
void* rcx_13 = *arg1
int64_t* r8_2 = *r8_1
int128_t var_138 = *r8_1[1]
sub_140f6f8e0(rcx_13, arg3, r8_2, &var_138, zmm1)
int64_t* rbx_2 = *arg1
char rax_19

if ((rbx_2[5].b & 0x20) == 0)
    rax_19 = (*(*rbx_2 + 0x220))(rbx_2)

if ((rbx_2[5].b & 0x20) != 0 || rax_19 != 0)
    rax_19 = 0x40

rbx_2[5].b &= 0xbf
rbx_2[5].b |= rax_19
*arg2 = *arg1
void* rcx_16 = arg1[1]
arg2[1] = rcx_16

if (rcx_16 != 0)
    *(rcx_16 + 8) += 1

__security_check_cookie(rax_1 ^ &var_258)
return arg2
