// 函数: sub_140a8bf80
// 地址: 0x140a8bf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi
void* arg_20 = rsi
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rbx = *(arg1 + 0x20)
int64_t var_58
sub_140a765b0(&var_58, arg2)
int64_t var_78
sub_140a73ec0(rbx, &var_78, &var_58, 0)
int64_t rbx_1 = var_58

if (rbx_1 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rbx_1)

int64_t rax_3 = var_78
int64_t* var_70
int64_t* rbx_2

if (rax_3 == 0 || *(arg1 + 0x28) == rax_3)
    rbx_2 = var_70
else
    uint128_t zmm1_1 = var_78.o
    uint128_t var_68 = zmm1_1
    rbx_2 = _mm_bsrli_si128(zmm1_1, 8).q
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = var_70
        zmm1_1 = var_68
    
    if (&var_68 != arg1 + 0x28)
        uint128_t var_38_1 = zmm1_1
        var_68 = *(arg1 + 0x28)
        *(arg1 + 0x28) = zmm1_1
    
    void* rcx_3 = var_68:8.q
    
    if (rcx_3 != 0)
        int32_t rax_4 = *(rcx_3 + 8)
        *(rcx_3 + 8) -= 1
        
        if (rax_4 == 1)
            int64_t* rbx_3 = var_68:8.q
            (**rbx_3)(rbx_3)
            int32_t rax_6 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_6 == 1)
                int64_t* rcx_5 = var_68:8.q
                (*(*rcx_5 + 8))(rcx_5, 1)
        
        rbx_2 = var_70
    
    int64_t var_48 = *(arg1 + 0x28)
    void* rax_9 = *(arg1 + 0x30)
    void* var_40_1 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
        rbx_2 = var_70
    
    sub_140a7d580(*(arg1 + 0x20), &var_48)
    sub_140599090(arg1 + 8)

rsi.b = *(arg1 + 0x28) == var_78

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**var_70)(var_70)
        int32_t rdi_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_2 = *var_70
            (*(r8_2 + 8))(var_70, zx.q(rdi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_98)
return zx.q(rsi.b)
