// 函数: sub_140b0d9e0
// 地址: 0x140b0d9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
sub_140ad89e0()
void* rax_8 = &arg3[6]

if (((arg3[3] ^ data_143dbb224) | (arg3[2] ^ data_143dbb220) | (arg3[1] ^ data_143dbb21c)
        | (*arg3 ^ data_143dbb218)) != 0)
    rax_8 = nullptr

int64_t var_88
sub_140b1ff30(&var_88, zx.o(*rax_8))
int64_t* var_80
int64_t* rbx_1 = var_80
arg2[3].b = 0
char var_70

if (var_70 != 0)
    *arg2 = var_88
    arg2[1] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = var_80
    
    int32_t var_78
    arg2[2].d = var_78
    arg2[3].b = 1

arg2[0xc].b = 0
char var_28

if (var_28 != 0)
    arg2[4] = 0
    arg2[5] = 0
    int32_t var_68
    sub_140b0c1e0(&arg2[4], &var_68)
    arg2[0xc].b = 1
    
    if (var_28 != 0)
        void var_58
        void* rcx_2 = &var_58
        char var_28_1 = 0
        int32_t var_64
        int32_t var_60
        int32_t var_5c
        
        if ((var_68 | var_64 | var_60 | var_5c) == 0)
            rcx_2 = nullptr
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 0)
    
    rbx_1 = var_80

if (var_70 != 0)
    char var_70_1 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_6 = *rbx_1
            (*rdx_6)(rbx_1, rdx_6)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8 = *rbx_1
                (*(r8 + 8))(rbx_1, zx.q(rsi_1), r8)

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
