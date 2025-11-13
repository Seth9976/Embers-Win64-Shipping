// 函数: sub_140f52cb0
// 地址: 0x140f52cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rbx = *(arg4 + 0x48)
int64_t rax_2 = *(arg4 + 0x38)

if (rbx != 0)
    rbx[1].d += 1

char rax_3

if (rax_2 == data_143e1e008)
    rax_3 = sub_140f4a4b0(arg1)

int64_t rdi

if (rax_2 != data_143e1e008 || rax_3 != 0)
    rdi.b = 0
else
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t var_118_1 = 1
    int32_t* rax_6 = sub_140f46600(&arg1[0x47])
    int32_t rax_7
    
    if (rax_6[1].b == 0)
        rax_7 = 1
    else
        rax_7 = *rax_6
    
    arg1[0x70].d = rax_7
    
    if (arg1[0x78].d != 0)
        int64_t* rcx_3 = arg1[0x77]
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            int64_t* rcx_4
            
            if (arg1[0x78].d == 0)
                rcx_4 = nullptr
            else
                rcx_4 = arg1[0x77]
            
            (*(*rcx_4 + 0x50))(rcx_4)
    
    int64_t rbx_1 = *arg1
    int128_t zmm0_1
    int512_t zmm1_1
    zmm0_1, zmm1_1 = sub_140f5a560(arg1, arg3, arg4 + 0x20)
    zmm1_1.o = zmm0_1
    (*(rbx_1 + 0x240))(arg1, zmm1_1)
    sub_140f5be70(arg1)
    int64_t* rbx_2 = arg1[2]
    int64_t r15_1 = 0
    
    if (rbx_2 != 0)
        int32_t rax_11 = rbx_2[1].d
        
        if (rax_11 != 0)
            rbx_2[1].d = rax_11 + 1
            rax_11.b = 1
        
        if (rax_11.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            int32_t rax_12 = rbx_2[1].d
            r15_1 = arg1[1]
            rbx_2[1].d = rax_12
            
            if (rax_12 == 0)
                (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
            
            rbx_2[1].d += 1
    
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
    char var_108 = 1
    zmm1_1.o = zx.o(0)
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0
    char var_e8_1 = 0
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x70)
    int32_t var_58_1 = 0x20702
    int64_t var_d0_1 = r15_1
    
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
        rbx_2[1].d -= 1
        var_c8.q = rbx_2
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_140596b00(arg2, &var_108)
    sub_140597700(&var_108)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            int64_t r8_1 = *rbx_2
            (*r8_1)(rbx_2, zmm1_1, r8_1)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                int64_t r8_2 = *rbx_2
                (*(r8_2 + 8))(rbx_2, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
