// 函数: sub_140de4da0
// 地址: 0x140de4da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t rdi = 0
void** r15 = arg1
int32_t var_170 = 0
char var_1d8
int64_t* var_150
int64_t var_138
char var_128
char var_c0
void var_b8
int32_t rsi
char* r14

if (*(arg3 + 0x178) == 0)
    r14 = sub_14065fb60(&var_b8, arg3 + 0xf0)
    rsi = 8
else
    int64_t var_158
    arg4 = sub_140a96170(&var_158)
    int64_t rax_2 = *(arg3 + 0x160)
    var_1d8 |= 1
    void* rax_3 = *(arg3 + 0x168)
    char var_140_1 = 0
    var_138 = 0
    int32_t var_130_1 = 0
    int16_t var_1d7_1 = 0x100
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t rax_4 = *(arg3 + 0x170)
    char rax_5 = *(arg3 + 0x178)
    int64_t var_1b0 = 0
    int32_t var_1a8_1 = 0
    sub_140692f90(&var_1b0, arg3 + 0x180)
    int64_t rax_6 = var_158
    
    if (var_150 != 0)
        var_150[1].d += 1
    
    int64_t var_180 = 0
    int32_t var_178_1 = 0
    sub_140692f90(&var_180, &var_138)
    char rcx_3 = var_128
    char var_127_1 = var_1d7_1.b
    char var_126_1 = var_1d7_1:1.b
    int64_t var_120_1 = rax_2
    var_128 = rcx_3 ^ ((rcx_3 ^ var_1d8) & 1)
    void* var_118_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_110_1 = rax_4
    char var_108_1 = rax_5
    int64_t var_100 = 0
    int32_t var_f8_1 = 0
    sub_1407473e0(&var_100, &var_1b0)
    int64_t var_f0_1 = rax_6
    int64_t* var_e8_1 = var_150
    
    if (var_150 != 0)
        var_150[1].d += 1
    
    int32_t var_148
    int32_t var_e0_1 = var_148
    char var_d8_1 = var_140_1
    int64_t var_d0 = 0
    int32_t var_c8_1 = 0
    sub_1407473e0(&var_d0, &var_180)
    var_c0 = 1
    r14 = &var_128
    rsi = 7

sub_140de9d00(*r15, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, *(arg3 + 0x90), 
    arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), *(arg3 + 0x96), r14, 
    arg3 + 0x190)

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
    sub_140ddef20(&var_1d8)

if ((rsi.b & 1) != 0)
    sub_140745b20(&var_138)
    
    if (var_150 != 0)
        var_150[1].d -= 1
        
        if (var_150[1].d == 1)
            (**var_150)(var_150)
            int32_t rsi_1 = *(var_150 + 0xc)
            *(var_150 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_150 + 8))(var_150, zx.q(rsi_1))

void* r14_1 = *r15
int64_t* rsi_2 = *r15[2]
*(r14_1 + 0x2e) &= 0xfb

if (sub_140db3510(r14_1 + 0x18) != 0)
    sub_140dc03a0(r14_1 + 0x18, *(r14_1 + 0x2e))

*(r14_1 + 0x2d0) = *rsi_2
void* rbx_2 = rsi_2[1]
int64_t* rcx_17 = *(r14_1 + 0x2d8)

if (rbx_2 != rcx_17)
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
        rcx_17 = *(r14_1 + 0x2d8)
    
    if (rcx_17 != 0)
        int32_t temp1_1 = *(rcx_17 + 0xc)
        *(rcx_17 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_17 + 8))(rcx_17, 1)
    
    *(r14_1 + 0x2d8) = rbx_2

int64_t r12 = sx.q(*(arg3 + 0x1a8))
int64_t rax_32

if (r12 s> 0)
    do
        if (*(r14_1 + 0x2c8) == 0)
            int64_t r15_1 = sx.q(*(r14_1 + 0x2c0))
            void* rsi_3 = *(*(arg3 + 0x1a0) + (rdi << 3))
            int32_t rax_34 = (r15_1 + 1).d
            *(r14_1 + 0x2c0) = rax_34
            
            if (rax_34 s> *(r14_1 + 0x2c4))
                sub_140638870(r14_1 + 0x2b8)
            
            *(*(r14_1 + 0x2b8) + (r15_1 << 3)) = rsi_3
            rax_32 = *(r14_1 + 0x2b0)
            
            if (rax_32 != 0 && *(rsi_3 + 8) != rax_32)
                *(rsi_3 + 8) = rax_32
                sub_140de7bf0(rsi_3)
        
        rdi += 1
    while (rdi s< r12)
    
    r15 = arg1

int64_t* rbx_3 = *r15

if ((rbx_3[5].b & 0x20) == 0)
    rax_32 = (*(*rbx_3 + 0x220))(rbx_3)

if ((rbx_3[5].b & 0x20) != 0 || rax_32.b != 0)
    rax_32.b = 0x40

rbx_3[5].b &= 0xbf
rbx_3[5].b |= rax_32.b
*arg2 = *r15
void* rcx_22 = r15[1]
arg2[1] = rcx_22

if (rcx_22 != 0)
    *(rcx_22 + 8) += 1

__security_check_cookie(rax_1 ^ &var_258)
return arg2
