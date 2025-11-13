// 函数: sub_140f50410
// 地址: 0x140f50410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118

if (*(arg1 + 0x608) != 0 || *arg4 - 1 u> 1)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    sub_140f44290(arg1)
    int64_t* rdi_1 = *(arg1 + 0x400)
    char r8 = *arg4
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t var_f8 = *(arg1 + 0x3f8)
    int64_t* var_f0_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int32_t var_34
    int32_t var_34_1 = var_34 & 0xffffff00
    char var_e8 = 1
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    char var_c8_1 = 0
    int64_t var_c0
    __builtin_memset(&var_c0, 0, 0x88)
    int32_t var_38_1 = 0x20702
    sub_140596b00(arg2, sub_140dbdce0(&var_e8, &var_f8, r8, 0))
    sub_140597700(&var_e8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            int64_t rdx_2 = *rdi_1
            (*rdx_2)(rdi_1, rdx_2)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_1 = *rdi_1
                (*(r8_1 + 8))(rdi_1, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
