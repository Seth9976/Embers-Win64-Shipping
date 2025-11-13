// 函数: sub_140f28060
// 地址: 0x140f28060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t var_1c8 = 0
int64_t* var_1b0
int64_t var_198
char var_188
void var_120
char var_b8
void var_b0
void* rsi
int32_t rdi

if (*(arg3 + 0x178) == 0)
    rsi = sub_14065fb60(&var_b0, arg3 + 0xf0)
    rdi = 8
else
    int64_t var_1b8
    arg4 = sub_140a96170(&var_1b8)
    int64_t rax_2 = *(arg3 + 0x160)
    var_188 |= 1
    int64_t var_180_1 = rax_2
    void* rax_3 = *(arg3 + 0x168)
    char var_1a0_1 = 0
    var_198 = 0
    int32_t var_190_1 = 0
    int16_t var_187_1 = 0x100
    void* var_178_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_170_1 = *(arg3 + 0x170)
    char var_168_1 = *(arg3 + 0x178)
    int64_t var_160 = 0
    int32_t var_158_1 = 0
    sub_140692f90(&var_160, arg3 + 0x180)
    int64_t var_150_1 = var_1b8
    int64_t* var_148_1 = var_1b0
    
    if (var_1b0 != 0)
        var_1b0[1].d += 1
    
    int32_t var_1a8
    int32_t var_140_1 = var_1a8
    char var_138_1 = var_1a0_1
    int64_t var_130 = 0
    int32_t var_128_1 = 0
    sub_140692f90(&var_130, &var_198)
    sub_140e92ae0(&var_120, &var_188)
    var_b8 = 1
    rsi = &var_120
    rdi = 7

sub_140e23130(*arg1, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), rsi, arg3 + 0x190)

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
    sub_140ddef20(&var_188)

if ((rdi.b & 1) != 0)
    sub_140745b20(&var_198)
    
    if (var_1b0 != 0)
        var_1b0[1].d -= 1
        
        if (var_1b0[1].d == 1)
            (**var_1b0)(var_1b0)
            int32_t rdi_1 = *(var_1b0 + 0xc)
            *(var_1b0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_1b0 + 8))(var_1b0, zx.q(rdi_1))

void* rsi_1 = *arg1
*(rsi_1 + 0x2d0) = 0
int64_t i_1 = 3
*(rsi_1 + 0x2d4) = 0x3f800000
*(rsi_1 + 0x2d8) = 0x420c0000
*(rsi_1 + 0x2e0) = *(arg3 + 0x1d0)
int64_t i

do
    void*** rax_19 = j_sub_140a82f30(0x20)
    void*** rbx_2 = rax_19
    
    if (rax_19 == 0)
        rbx_2 = nullptr
    else
        sub_140ddb700(rax_19)
        *rbx_2 = &data_142ec8878
    
    if (*(rsi_1 + 0x2c8) == 0)
        int64_t r14_1 = sx.q(*(rsi_1 + 0x2c0))
        int32_t rax_20 = (r14_1 + 1).d
        *(rsi_1 + 0x2c0) = rax_20
        
        if (rax_20 s> *(rsi_1 + 0x2c4))
            sub_140638870(rsi_1 + 0x2b8)
        
        *(*(rsi_1 + 0x2b8) + (r14_1 << 3)) = rbx_2
        int64_t rax_22 = *(rsi_1 + 0x2b0)
        
        if (rax_22 != 0 && rbx_2[1] != rax_22)
            rbx_2[1] = rax_22
            sub_140de7bf0(rbx_2)
    
    i = i_1
    i_1 -= 1
while (i != 1)
sub_140e99b50(**(rsi_1 + 0x2b8), arg3 + 0x1a0)
sub_140e99b50(*(*(rsi_1 + 0x2b8) + 8), arg3 + 0x1c0)
sub_140e99b50(*(*(rsi_1 + 0x2b8) + 0x10), arg3 + 0x1b0)
int64_t* rbx_3 = *arg1
char rax_23

if ((rbx_3[5].b & 0x20) == 0)
    rax_23 = (*(*rbx_3 + 0x220))(rbx_3)

if ((rbx_3[5].b & 0x20) != 0 || rax_23 != 0)
    rax_23 = 0x40

rbx_3[5].b &= 0xbf
rbx_3[5].b |= rax_23
*arg2 = *arg1
void* rcx_24 = arg1[1]
arg2[1] = rcx_24

if (rcx_24 != 0)
    *(rcx_24 + 8) += 1

__security_check_cookie(rax_1 ^ &var_248)
return arg2
