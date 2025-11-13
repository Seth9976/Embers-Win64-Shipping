// 函数: __std_fs_get_file_id
// 地址: 0x140a8c380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rbx = *(arg1 + 0x20)
int64_t var_38
sub_140a765b0(&var_38, arg2)
int64_t var_58
sub_140a73ec0(rbx, &var_58, &var_38, 0)
int64_t rbx_1 = var_38

if (rbx_1 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rbx_1)

int64_t rcx_3 = var_58
int64_t* var_50
int64_t* rbx_2

if (rcx_3 == 0 || *(arg1 + 0x38) == rcx_3)
    rbx_2 = var_50
else
    uint128_t zmm1_1 = var_58.o
    uint128_t var_48 = zmm1_1
    rbx_2 = _mm_bsrli_si128(zmm1_1, 8).q
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = var_50
        zmm1_1 = var_48
    
    if (&var_48 != arg1 + 0x38)
        uint128_t var_28_1 = zmm1_1
        var_48 = *(arg1 + 0x38)
        *(arg1 + 0x38) = zmm1_1
    
    void* rcx_4 = var_48:8.q
    
    if (rcx_4 != 0)
        int32_t rax_4 = *(rcx_4 + 8)
        *(rcx_4 + 8) -= 1
        
        if (rax_4 == 1)
            int64_t* rbx_3 = var_48:8.q
            (**rbx_3)(rbx_3)
            int32_t rax_6 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_6 == 1)
                int64_t* rcx_6 = var_48:8.q
                (*(*rcx_6 + 8))(rcx_6, 1)
        
        rbx_2 = var_50
    
    sub_140599090(arg1 + 8)

void* rsi
rsi.b = *(arg1 + 0x38) == var_58

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**var_50)(var_50)
        int32_t rdi_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_2 = *var_50
            (*(r8_2 + 8))(var_50, zx.q(rdi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_78)
return zx.q(rsi.b)
