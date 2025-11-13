// 函数: sub_14225c6b0
// 地址: 0x14225c6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t var_130 = 0
char var_1c8
int64_t* var_158
int64_t* var_140
char var_128
char var_c0
char var_b8
char var_50
int32_t rsi
char* r15

if (*(arg3 + 0x178) == 0)
    var_c0 = 0
    
    if (*(arg3 + 0x158) != 0)
        char rax_25 = var_128
        var_128 = rax_25 ^ ((*(arg3 + 0xf0) ^ rax_25) & 1)
        char var_127_1 = *(arg3 + 0xf1)
        char var_126_1 = *(arg3 + 0xf2)
        int64_t var_120_1 = *(arg3 + 0xf8)
        void* rax_29 = *(arg3 + 0x100)
        void* var_118_1 = rax_29
        
        if (rax_29 != 0)
            *(rax_29 + 8) += 1
        
        int32_t var_110_1 = *(arg3 + 0x108)
        char var_108_1 = *(arg3 + 0x110)
        int64_t var_100 = 0
        int32_t var_f8_1 = 0
        
        if (arg3 + 0x118 != &var_100 && *(arg3 + 0x120) != 0)
            int64_t* rcx_8 = *(arg3 + 0x118)
            
            if (rcx_8 != 0)
                (*(*rcx_8 + 0x40))(rcx_8, &var_100)
        
        int64_t var_f0_1 = *(arg3 + 0x128)
        void* rax_34 = *(arg3 + 0x130)
        void* var_e8_1 = rax_34
        
        if (rax_34 != 0)
            *(rax_34 + 8) += 1
        
        int32_t var_e0_1 = *(arg3 + 0x138)
        char var_d8_1 = *(arg3 + 0x140)
        int64_t var_d0 = 0
        int32_t var_c8_1 = 0
        
        if (arg3 + 0x148 != &var_d0 && *(arg3 + 0x150) != 0)
            int64_t* rcx_10 = *(arg3 + 0x148)
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x40))(rcx_10, &var_d0)
        
        var_c0 = 1
    
    r15 = &var_128
    rsi = 8
else
    int64_t var_160
    arg4 = sub_140a96170(&var_160)
    int64_t rax_2 = *(arg3 + 0x160)
    int64_t* rcx_1 = nullptr
    var_1c8 |= 1
    void* rax_3 = *(arg3 + 0x168)
    char var_148_1 = 0
    var_140 = nullptr
    int32_t var_138_1 = 0
    int16_t var_1c7_1 = 0x100
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
        rcx_1 = var_140
    
    int32_t rax_4 = *(arg3 + 0x170)
    char rax_5 = *(arg3 + 0x178)
    int64_t* var_1a0 = nullptr
    int32_t var_198_1 = 0
    
    if (arg3 + 0x180 != &var_1a0 && *(arg3 + 0x188) != 0)
        int64_t* r8_1 = *(arg3 + 0x180)
        
        if (r8_1 != 0)
            (*(*r8_1 + 0x40))(r8_1, &var_1a0)
            rcx_1 = var_140
    
    int64_t rax_7 = var_160
    
    if (var_158 != 0)
        var_158[1].d += 1
        rcx_1 = var_140
    
    int64_t* var_170 = nullptr
    int32_t var_168_1 = 0
    
    if (var_138_1 != 0 && rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_170)
    
    char rcx_3 = var_b8
    char var_b7_1 = var_1c7_1.b
    char var_b6_1 = var_1c7_1:1.b
    int64_t var_b0_1 = rax_2
    var_b8 = rcx_3 ^ ((rcx_3 ^ var_1c8) & 1)
    void* var_a8_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_a0_1 = rax_4
    char var_98_1 = rax_5
    int64_t var_90 = 0
    int32_t var_88_1 = 0
    
    if (var_198_1 != 0)
        int64_t* rcx_4 = var_1a0
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x40))(rcx_4, &var_90)
    
    int64_t var_80_1 = rax_7
    int64_t* var_78_1 = var_158
    
    if (var_158 != 0)
        var_158[1].d += 1
    
    int32_t var_150
    int32_t var_70_1 = var_150
    char var_68_1 = var_148_1
    int64_t var_60 = 0
    int32_t var_58_1 = 0
    
    if (var_168_1 != 0)
        int64_t* rcx_5 = var_170
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x40))(rcx_5, &var_60)
    
    var_50 = 1
    r15 = &var_b8
    rsi = 7

sub_140e23130(*arg1, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), r15, arg3 + 0x190)

if ((rsi.b & 8) != 0)
    rsi &= 0xfffffff7
    
    if (var_c0 != 0)
        char var_c0_1 = 0
        sub_140ddef20(&var_128)

if ((rsi.b & 4) != 0)
    rsi &= 0xfffffffb
    
    if (var_50 != 0)
        char var_50_1 = 0
        sub_140ddef20(&var_b8)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_140ddef20(&var_1c8)

if ((rsi.b & 1) != 0)
    sub_140745b20(&var_140)
    
    if (var_158 != 0)
        var_158[1].d -= 1
        
        if (var_158[1].d == 1)
            (**var_158)(var_158)
            int32_t rsi_1 = *(var_158 + 0xc)
            *(var_158 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_158 + 8))(var_158, zx.q(rsi_1))

sub_140f3c8d0(*arg1, arg3)
int64_t* rbx_2 = *arg1
char rax_46

if ((rbx_2[5].b & 0x20) == 0)
    rax_46 = (*(*rbx_2 + 0x220))(rbx_2)

if ((rbx_2[5].b & 0x20) != 0 || rax_46 != 0)
    rax_46 = 0x40

rbx_2[5].b &= 0xbf
rbx_2[5].b |= rax_46
*arg2 = *arg1
void* rcx_22 = arg1[1]
arg2[1] = rcx_22

if (rcx_22 != 0)
    *(rcx_22 + 8) += 1

__security_check_cookie(rax_1 ^ &var_248)
return arg2
