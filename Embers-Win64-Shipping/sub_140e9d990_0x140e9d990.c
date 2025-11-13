// 函数: sub_140e9d990
// 地址: 0x140e9d990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int32_t var_218 = 0
int64_t* var_208
int64_t var_1f0
char var_1e0
void var_128
char var_c0
void var_b8
char* rdx_3
int32_t r14

if (*(arg3 + 0x178) == 0)
    rdx_3 = sub_14065fb60(&var_b8, arg3 + 0xf0)
    r14 = 8
else
    int64_t var_210
    arg4 = sub_140a96170(&var_210)
    int64_t rax_2 = *(arg3 + 0x160)
    var_1e0 |= 1
    int64_t var_1d8_1 = rax_2
    void* rax_3 = *(arg3 + 0x168)
    char var_1f8_1 = 0
    var_1f0 = 0
    int32_t var_1e8_1 = 0
    int16_t var_1df_1 = 0x100
    void* var_1d0_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_1c8_1 = *(arg3 + 0x170)
    char var_1c0_1 = *(arg3 + 0x178)
    int64_t var_1b8 = 0
    int32_t var_1b0_1 = 0
    sub_140692f90(&var_1b8, arg3 + 0x180)
    int64_t var_1a8_1 = var_210
    int64_t* var_1a0_1 = var_208
    
    if (var_208 != 0)
        var_208[1].d += 1
    
    int32_t var_200
    int32_t var_198_1 = var_200
    char var_190_1 = var_1f8_1
    int64_t var_188 = 0
    int32_t var_180_1 = 0
    sub_140692f90(&var_188, &var_1f0)
    sub_140e92ae0(&var_128, &var_1e0)
    rdx_3 = &var_128
    var_c0 = 1
    r14 = 7

sub_140e23130(*arg1 + 8, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), rdx_3, arg3 + 0x190)

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
    sub_140ddef20(&var_1e0)

if ((r14.b & 1) != 0)
    sub_140745b20(&var_1f0)
    
    if (var_208 != 0)
        var_208[1].d -= 1
        
        if (var_208[1].d == 1)
            (**var_208)(var_208)
            int32_t rdi_1 = *(var_208 + 0xc)
            *(var_208 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_208 + 8))(var_208, zx.q(rdi_1))

void* rdi_2 = *arg1
int128_t* (* var_178)(void* arg1, int128_t* arg2) = sub_140ec13a0
int32_t var_170 = 0
*(rdi_2 + 0x3d0) = 0
*(rdi_2 + 0x3d8) = 0
void*** rax_18 = sub_140a84c80(0, 0x30, 0)

if (rax_18 != 0)
    rax_18[1] = rdi_2
    *rax_18 = &data_142eded78
    *(rax_18 + 0x10) = var_178.o
    rax_18[5] = sub_140a387b0()

char var_140 = 1
int64_t var_138 = 0
int32_t var_130 = 0
int128_t var_168
__builtin_memcpy(&var_168, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)

if (rax_18 != 0)
    (*rax_18)[8](rax_18, &var_138)

sub_140dd5630(rdi_2 + 8, rdi_2 + 0x358, &var_168, 2)
sub_140745b20(&var_138)
int64_t* rdi_3 = zx.o(0):8.q

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp2_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

uint64_t rax_21

if (rax_18 != 0)
    (*rax_18)[7](rax_18, 0)
    rax_21 = sub_140a84c80(rax_18, 0, 0)
    
    if (rax_21 != 0)
        sub_140a74f90(rax_21)

void* rbx_3 = *arg1

if ((*(rbx_3 + 0x30) & 0x20) == 0)
    rax_21 = (*(*(rbx_3 + 8) + 0x220))(rbx_3 + 8)

if ((*(rbx_3 + 0x30) & 0x20) != 0 || rax_21.b != 0)
    rax_21.b = 0x40

*(rbx_3 + 0x30) &= 0xbf
*(rbx_3 + 0x30) |= rax_21.b
*arg2 = *arg1
void* rcx_23 = arg1[1]
arg2[1] = rcx_23

if (rcx_23 != 0)
    *(rcx_23 + 8) += 1

__security_check_cookie(rax_1 ^ &var_298)
return arg2
