// 函数: sub_140a8bd30
// 地址: 0x140a8bd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rbx = *(arg1 + 0x20)
int64_t var_68
sub_140a765b0(&var_68, arg2)
int64_t var_98
sub_140a73ec0(rbx, &var_98, &var_68, 0)
int64_t rbx_1 = var_68

if (rbx_1 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rbx_1)

int64_t rax_3 = var_98
int64_t* var_90

if (rax_3 != 0 && (*(arg1 + 0x28) != rax_3 || *(arg1 + 0x38) != rax_3 || *(arg1 + 0x50) s> 0))
    uint128_t zmm1_1 = var_98.o
    uint128_t var_88 = zmm1_1
    int64_t* rcx_3 = _mm_bsrli_si128(zmm1_1, 8).q
    var_90 = rcx_3
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
        zmm1_1 = var_88
    
    if (&var_88 != arg1 + 0x28)
        uint128_t var_48_1 = zmm1_1
        var_88 = *(arg1 + 0x28)
        *(arg1 + 0x28) = zmm1_1
    
    void* rcx_4 = var_88:8.q
    
    if (rcx_4 != 0)
        int32_t rax_4 = *(rcx_4 + 8)
        *(rcx_4 + 8) -= 1
        
        if (rax_4 == 1)
            int64_t* rbx_2 = var_88:8.q
            (**rbx_2)(rbx_2)
            int32_t rax_6 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_6 == 1)
                int64_t* rcx_6 = var_88:8.q
                (*(*rcx_6 + 8))(rcx_6, 1)
    
    zmm1_1 = var_98.o
    uint128_t var_78 = zmm1_1
    
    if (var_90 != 0)
        var_90[1].d += 1
        zmm1_1 = var_78
    
    if (&var_78 != arg1 + 0x38)
        uint128_t var_38_1 = zmm1_1
        var_78 = *(arg1 + 0x38)
        *(arg1 + 0x38) = zmm1_1
    
    void* rcx_8 = var_78:8.q
    
    if (rcx_8 != 0)
        int32_t rax_9 = *(rcx_8 + 8)
        *(rcx_8 + 8) -= 1
        
        if (rax_9 == 1)
            int64_t* rbx_3 = var_78:8.q
            (**rbx_3)(rbx_3)
            int32_t rax_11 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_11 == 1)
                int64_t* rcx_10 = var_78:8.q
                (*(*rcx_10 + 8))(rcx_10, 1)
    
    sub_140a87d90(arg1 + 0x48, 0)
    int64_t var_58 = *(arg1 + 0x28)
    void* rax_14 = *(arg1 + 0x30)
    void* var_50_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    sub_140a7d580(*(arg1 + 0x20), &var_58)
    sub_140599090(arg1 + 8)

int64_t rax_15 = var_98
void* rdi

if (*(arg1 + 0x28) != rax_15 || *(arg1 + 0x38) != rax_15 || *(arg1 + 0x50) != 0)
    rdi.b = 0
else
    rdi.b = 1

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t rsi_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *var_90
            (*(r8_2 + 8))(var_90, zx.q(rsi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(rdi.b)
