// 函数: sub_140f28430
// 地址: 0x140f28430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t i = 0
void* r13 = arg3
void** r15 = arg1
int32_t var_1d8 = 0
int64_t* var_1b0
int64_t var_198
char var_188
void var_120
char var_b8
void var_b0
int32_t rsi
char* r14

if (*(arg3 + 0x178) == 0)
    r14 = sub_14065fb60(&var_b0, arg3 + 0xf0)
    rsi = 8
else
    int64_t var_1b8
    arg4 = sub_140a96170(&var_1b8)
    int64_t rax_2 = *(r13 + 0x160)
    var_188 |= 1
    int64_t var_180_1 = rax_2
    void* rax_3 = *(r13 + 0x168)
    char var_1a0_1 = 0
    var_198 = 0
    int32_t var_190_1 = 0
    int16_t var_187_1 = 0x100
    void* var_178_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_170_1 = *(r13 + 0x170)
    char var_168_1 = *(r13 + 0x178)
    int64_t var_160 = 0
    int32_t var_158_1 = 0
    sub_140692f90(&var_160, r13 + 0x180)
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
    r14 = &var_120
    rsi = 7

sub_140e23130(*r15, r13, r13 + 0x30, r13 + 0x40, arg4, r13 + 0x60, r13 + 0x78, *(r13 + 0x90), 
    r13 + 0x98, r13 + 0xc8, r13 + 0xe8, *(r13 + 0x94), *(r13 + 0x95), *(r13 + 0x96), r14, 
    r13 + 0x190)

if ((rsi.b & 8) != 0)
    rsi &= 0xfffffff7
    char var_48
    
    if (var_48 != 0)
        char var_48_1 = 0
        sub_140ddef20(&var_b0)

if ((rsi.b & 4) != 0)
    rsi &= 0xfffffffb
    
    if (var_b8 != 0)
        char var_b8_1 = 0
        sub_140ddef20(&var_120)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_140ddef20(&var_188)

if ((rsi.b & 1) != 0)
    sub_140745b20(&var_198)
    
    if (var_1b0 != 0)
        var_1b0[1].d -= 1
        
        if (var_1b0[1].d == 1)
            (**var_1b0)(var_1b0)
            int32_t rsi_1 = *(var_1b0 + 0xc)
            *(var_1b0 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_1b0 + 8))(var_1b0, zx.q(rsi_1))

void* r12 = *r15
int64_t* rbx_2 = *r15[2]
*(r12 + 0x2a8) = 0
int32_t rax_19 = rbx_2[1].d

if (rax_19 s> *(r12 + 0x2cc))
    sub_140638c50(r12 + 0x2c0, rax_19)
    rax_19 = rbx_2[1].d

if (rax_19 s> 0)
    int64_t* r15_1 = nullptr
    
    do
        if (*(r12 + 0x2d0) == 0)
            int64_t r14_1 = sx.q(*(r12 + 0x2c8))
            void* rbx_3 = *(r15_1 + *rbx_2)
            int32_t rax_21 = (r14_1 + 1).d
            *(r12 + 0x2c8) = rax_21
            
            if (rax_21 s> *(r12 + 0x2cc))
                sub_140638870(r12 + 0x2c0)
            
            *(*(r12 + 0x2c0) + (r14_1 << 3)) = rbx_3
            int64_t rax_23 = *(r12 + 0x2b8)
            
            if (rax_23 != 0 && *(rbx_3 + 8) != rax_23)
                *(rbx_3 + 8) = rax_23
                sub_140de7bf0(rbx_3)
        
        i += 1
        r15_1 = &r15_1[1]
    while (i s< rbx_2[1].d)
    
    r13 = arg3
    r15 = arg1

*(r12 + 0x2d8) = *(r13 + 0x1a0)
int64_t* rbx_4 = *r15
int32_t rax_25

if ((rbx_4[5].b & 0x20) == 0)
    rax_25 = (*(*rbx_4 + 0x220))(rbx_4)

if ((rbx_4[5].b & 0x20) != 0 || rax_25.b != 0)
    rax_25.b = 0x40

rbx_4[5].b &= 0xbf
rbx_4[5].b |= rax_25.b
*arg2 = *r15
void* rcx_18 = r15[1]
arg2[1] = rcx_18

if (rcx_18 != 0)
    *(rcx_18 + 8) += 1

__security_check_cookie(rax_1 ^ &var_258)
return arg2
