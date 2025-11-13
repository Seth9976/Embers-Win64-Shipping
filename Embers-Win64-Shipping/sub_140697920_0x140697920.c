// 函数: sub_140697920
// 地址: 0x140697920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t var_130 = 0
int64_t* var_1c0
int64_t* var_1a8
int32_t var_1a0
int64_t var_190
int64_t var_160
int64_t var_120
int64_t var_f0
char var_c0
int32_t rdi
char* r12

if (*(arg3 + 0x178) == 0)
    void var_b8
    r12 = sub_14065fb60(&var_b8, arg3 + 0xf0)
    rdi = 8
else
    int64_t var_1c8
    arg4 = sub_140a96170(&var_1c8)
    int64_t* rcx_1 = nullptr
    char var_198
    char var_198_1 = var_198 | 1
    var_190 = *(arg3 + 0x160)
    void* rax_3 = *(arg3 + 0x168)
    char var_1b0_1 = 0
    var_1a8 = nullptr
    var_1a0 = 0
    int16_t var_197_1 = 0x100
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
        rcx_1 = var_1a8
    
    int32_t rax_4 = *(arg3 + 0x170)
    char rax_5 = *(arg3 + 0x178)
    int64_t* var_170 = nullptr
    int32_t var_168_1 = 0
    
    if (arg3 + 0x180 != &var_170 && *(arg3 + 0x188) != 0)
        int64_t* r8_1 = *(arg3 + 0x180)
        
        if (r8_1 != 0)
            (*(*r8_1 + 0x40))(r8_1, &var_170)
            rcx_1 = var_1a8
    
    var_160 = var_1c8
    
    if (var_1c0 != 0)
        var_1c0[1].d += 1
        rcx_1 = var_1a8
    
    int64_t* var_140 = nullptr
    int32_t var_138_1 = 0
    
    if (var_1a0 != 0 && rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_140)
    
    char var_128
    char rcx_3 = var_128
    char var_127_1 = var_197_1.b
    char var_126_1 = var_197_1:1.b
    var_120 = var_190
    var_128 = rcx_3 ^ ((rcx_3 ^ var_198_1) & 1)
    void* var_118_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_110_1 = rax_4
    char var_108_1 = rax_5
    int64_t var_100 = 0
    int32_t var_f8_1 = 0
    
    if (var_168_1 != 0)
        int64_t* rcx_4 = var_170
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x40))(rcx_4, &var_100)
    
    var_f0 = var_160
    int64_t* var_e8_1 = var_1c0
    
    if (var_1c0 != 0)
        var_1c0[1].d += 1
    
    int32_t var_1b8
    int32_t var_e0_1 = var_1b8
    char var_d8_1 = var_1b0_1
    int64_t var_d0 = 0
    int32_t var_c8_1 = 0
    
    if (var_138_1 != 0)
        int64_t* rcx_5 = var_140
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x40))(rcx_5, &var_d0)
    
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
        void var_80
        sub_1406601b0(&var_80)
        void var_b0
        sub_1406601b0(&var_b0)

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    
    if (var_c0 != 0)
        char var_c0_1 = 0
        sub_1406601b0(&var_f0)
        sub_1406601b0(&var_120)

if ((rdi.b & 2) != 0)
    sub_1406601b0(&var_160)
    sub_1406601b0(&var_190)

if ((rdi.b & 1) != 0)
    int64_t* rcx_15 = var_1a8
    
    if (var_1a0 == 0)
    label_140697c66:
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    else
        if (rcx_15 != 0)
        label_140697c45:
            (*(*rcx_15 + 0x38))(rcx_15, 0)
            rcx_15 = var_1a8
            
            if (rcx_15 != 0)
                int64_t* rax_32 = sub_140a84c80(rcx_15, 0, 0)
                rcx_15 = rax_32
                int64_t* var_1a8_1 = rax_32
            
            int32_t var_1a0_1 = 0
            goto label_140697c66
        
        if (var_1a0 == 0)
            goto label_140697c66
        
        if (rcx_15 != 0)
            goto label_140697c45
    
    if (var_1c0 != 0)
        var_1c0[1].d -= 1
        
        if (var_1c0[1].d == 1)
            (**var_1c0)(var_1c0)
            int32_t rdi_1 = *(var_1c0 + 0xc)
            *(var_1c0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_1c0 + 8))(var_1c0, zx.q(rdi_1))

sub_140f3ca90(*arg1, arg3)
int64_t* rbx_2 = *arg1
char rax_36

if ((rbx_2[5].b & 0x20) == 0)
    rax_36 = (*(*rbx_2 + 0x220))(rbx_2)

if ((rbx_2[5].b & 0x20) != 0 || rax_36 != 0)
    rax_36 = 0x40

rbx_2[5].b &= 0xbf
rbx_2[5].b |= rax_36
*arg2 = *arg1
void* rcx_21 = arg1[1]
arg2[1] = rcx_21

if (rcx_21 != 0)
    *(rcx_21 + 8) += 1

__security_check_cookie(rax_1 ^ &var_248)
return arg2
