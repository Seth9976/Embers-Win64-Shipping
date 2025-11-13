// 函数: sub_140f4f960
// 地址: 0x140f4f960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
char* result = arg2

if (*(arg1 + 0x390) != 0)
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    arg2.b = 1
    sub_140f5fbb0(arg1, arg2.b)
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t r15_1 = 0
    
    if (rbx_1 != 0)
        int32_t rax_2 = rbx_1[1].d
        
        if (rax_2 != 0)
            rbx_1[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_3 = rbx_1[1].d
            r15_1 = *(arg1 + 8)
            rbx_1[1].d = rax_3
            
            if (rax_3 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_108 = r15_1
    int64_t* var_100_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int32_t var_44
    int32_t var_44_1 = var_44 & 0xffffff00
    char var_f8 = 1
    int512_t zmm1_1
    zmm1_1.o = zx.o(0)
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    char var_d8_1 = 0
    int64_t var_d0
    __builtin_memset(&var_d0, 0, 0x88)
    int32_t var_48_1 = 0x20702
    sub_140596b00(result, sub_140dbdce0(&var_f8, &var_108, 2, 0))
    sub_140597700(&var_f8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t r8_2 = *rbx_1
            (*r8_2)(rbx_1, zmm1_1, r8_2)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_3 = *rbx_1
                (*(r8_3 + 8))(rbx_1, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_128)
return result
