// 函数: sub_140ace660
// 地址: 0x140ace660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
sub_140ad89e0()
int32_t r14 = arg4[3]
int32_t rdi = arg4[2]
int32_t r15 = arg4[1]
int32_t r12 = data_143dbb224
int32_t rsi = data_143dbb220
int32_t r13 = data_143dbb21c
int32_t rbp = data_143dbb218
int32_t rbx_1 = *arg4
sub_140ad89e0()
void* r8_1 = &arg4[6]

if (((rbp ^ rbx_1) | (rsi ^ rdi) | (r12 ^ r14) | (r13 ^ r15)) != 0)
    r8_1 = nullptr

void* rax_8 = &arg3[6]

if (((arg3[3] ^ data_143dbb224) | (arg3[2] ^ data_143dbb220) | (arg3[1] ^ data_143dbb21c)
        | (*arg3 ^ data_143dbb218)) != 0)
    rax_8 = nullptr

void var_b8
int64_t* rax_9 = sub_140acdf10(arg1, &var_b8, zx.o(*rax_8), *r8_1)
arg2[3].b = 0

if (rax_9[3].b != 0)
    *arg2 = *rax_9
    void* rcx_2 = rax_9[1]
    arg2[1] = rcx_2
    
    if (rcx_2 != 0)
        *(rcx_2 + 8) += 1
    
    arg2[2].d = rax_9[2].d
    arg2[3].b = 1

arg2[0xc].b = 0

if (rax_9[0xc].b != 0)
    sub_140b0a670(&arg2[4], &rax_9[4])
    arg2[0xc].b = 1

char var_58

if (var_58 != 0)
    char var_58_1 = 0
    void var_98
    sub_140b0bbf0(&var_98)

char var_a0

if (var_a0 != 0)
    char var_a0_1 = 0
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            int64_t rdx_8 = *var_b0
            (*rdx_8)(var_b0, rdx_8)
            int32_t rsi_2 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rsi_2 == 1)
                int64_t r8_2 = *var_b0
                (*(r8_2 + 8))(var_b0, zx.q(rsi_2), r8_2)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
