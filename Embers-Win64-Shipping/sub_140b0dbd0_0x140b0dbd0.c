// 函数: sub_140b0dbd0
// 地址: 0x140b0dbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
sub_140ad89e0()
int32_t rdi = arg4[3]
int32_t rbp = arg4[2]
int32_t r15 = arg4[1]
int32_t r12 = *arg4
int32_t r13 = data_143dbb224
int32_t rbx = data_143dbb220
int32_t rsi = data_143dbb21c
int32_t r14_1 = data_143dbb218
sub_140ad89e0()
void* rdx_1 = &arg4[6]

if (((r13 ^ rdi) | (rbp ^ rbx) | (r15 ^ rsi) | (r12 ^ r14_1)) != 0)
    rdx_1 = nullptr

void* rax_8 = arg3 + 0x18

if (((*(arg3 + 0xc) ^ data_143dbb224) | (*(arg3 + 8) ^ data_143dbb220)
        | (*(arg3 + 4) ^ data_143dbb21c) | (data_143dbb218 ^ *arg3)) != 0)
    rax_8 = nullptr

int64_t var_b0
sub_140b1f9a0(&var_b0, zx.o(*rax_8), zx.o(*rdx_1))
int64_t* var_a8
int64_t* rbx_1 = var_a8
arg2[3].b = 0
char var_98

if (var_98 != 0)
    *arg2 = var_b0
    arg2[1] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = var_a8
    
    int32_t var_a0
    arg2[2].d = var_a0
    arg2[3].b = 1

arg2[0xc].b = 0
char var_50

if (var_50 != 0)
    arg2[4] = 0
    arg2[5] = 0
    int32_t var_90
    sub_140b0c1e0(&arg2[4], &var_90)
    arg2[0xc].b = 1
    
    if (var_50 != 0)
        void var_80
        void* rcx_7 = &var_80
        char var_50_1 = 0
        int32_t var_8c
        int32_t var_88
        int32_t var_84
        
        if ((var_90 | var_8c | var_88 | var_84) == 0)
            rcx_7 = nullptr
        
        if (rcx_7 != 0)
            (**rcx_7)(rcx_7, 0)
    
    rbx_1 = var_a8

if (var_98 != 0)
    char var_98_1 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_3 = *rbx_1
            (*rdx_3)(rbx_1, rdx_3)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8 = *rbx_1
                (*(r8 + 8))(rbx_1, zx.q(rsi_1), r8)

__security_check_cookie(rax_1 ^ &var_e8)
return arg2
