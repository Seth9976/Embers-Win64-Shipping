// 函数: sub_140f129f0
// 地址: 0x140f129f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118

if (sub_140e19840(arg1, arg3) != 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    sub_140ee7440(arg1, 0)
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t r15_1 = 0
    
    if (rbx_1 != 0)
        int32_t rax_3 = rbx_1[1].d
        
        if (rax_3 != 0)
            rbx_1[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_4 = rbx_1[1].d
            r15_1 = *(arg1 + 8)
            rbx_1[1].d = rax_4
            
            if (rax_4 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            rbx_1[1].d += 1
    
    int32_t var_44
    int32_t var_44_1 = var_44 & 0xffffff00
    int64_t var_c0_1 = r15_1
    int512_t zmm1
    zmm1.o = zx.o(0)
    char var_f8 = 1
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    char var_d8_1 = 0
    int64_t var_d0_1 = 0
    int64_t var_c8_1 = 0
    int128_t var_b8
    __builtin_memset(&var_b8, 0, 0x70)
    int32_t var_48_1 = 0x20702
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rbx_1[1].d -= 1
        var_b8.q = rbx_1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_140596b00(arg2, &var_f8)
    sub_140597700(&var_f8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t r8_1 = *rbx_1
            (*r8_1)(rbx_1, zmm1, r8_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_2 = *rbx_1
                (*(r8_2 + 8))(rbx_1, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
