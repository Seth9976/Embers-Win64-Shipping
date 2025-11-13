// 函数: sub_140e1e1d0
// 地址: 0x140e1e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
char rax_2 = 0
int64_t* rbx
int64_t r14

if (*(arg1 + 0x768) == 0)
    rbx = 0.q
    r14.b = 0
else
    rbx = *(arg4 + 0x48)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rax_2 = 1
    
    if (*(arg4 + 0x38) != data_143e1e008)
        r14.b = 0
    else
        r14 = 1

if ((rax_2 & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (r14.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t r14_1 = 0
    *(arg1 + 0x718) = *(arg1 + 0x858)
    int64_t* rbx_1 = *(arg1 + 0x10)
    
    if (rbx_1 != 0)
        int32_t rax_6 = rbx_1[1].d
        
        if (rax_6 != 0)
            rbx_1[1].d = rax_6 + 1
            rax_6.b = 1
        
        if (rax_6.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_7 = rbx_1[1].d
            r14_1 = *(arg1 + 8)
            rbx_1[1].d = rax_7
            
            if (rax_7 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            rbx_1[1].d += 1
    
    int32_t var_44
    int32_t var_44_1 = var_44 & 0xffffff00
    char var_f8 = 1
    int512_t zmm1
    zmm1.o = zx.o(0)
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    char var_d8_1 = 0
    int64_t var_d0_1 = 0
    int64_t var_c8_1 = 0
    int128_t var_b8
    __builtin_memset(&var_b8, 0, 0x70)
    int32_t var_48_1 = 0x20702
    int64_t var_c0_1 = r14_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rbx_1[1].d -= 1
        var_b8.q = rbx_1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_140596b00(arg2, &var_f8)
    sub_140597700(&var_f8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t r8 = *rbx_1
            (*r8)(rbx_1, zmm1, r8)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                int64_t r8_1 = *rbx_1
                (*(r8_1 + 8))(rbx_1, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
