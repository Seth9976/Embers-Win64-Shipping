// 函数: sub_140b0d8d0
// 地址: 0x140b0d8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
sub_140ad89e0()
void* rax_8 = &arg3[6]

if (((arg3[3] ^ data_143dbb224) | (arg3[2] ^ data_143dbb220) | (arg3[1] ^ data_143dbb21c)
        | (*arg3 ^ data_143dbb218)) != 0)
    rax_8 = nullptr

void var_88
sub_140b09fc0(arg2, sub_140b0d5f0(arg1, &var_88, zx.o(*rax_8)))
char var_28

if (var_28 != 0)
    void var_58
    void* rcx_2 = &var_58
    char var_28_1 = 0
    int32_t var_68
    int32_t var_64
    int32_t var_60
    int32_t var_5c
    
    if ((var_68 | var_64 | var_60 | var_5c) == 0)
        rcx_2 = nullptr
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 0)

char var_70

if (var_70 != 0)
    char var_70_1 = 0
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            int64_t rdx_2 = *var_80
            (*rdx_2)(var_80, rdx_2)
            int32_t rdi_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8 = *var_80
                (*(r8 + 8))(var_80, zx.q(rdi_1), r8)

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
