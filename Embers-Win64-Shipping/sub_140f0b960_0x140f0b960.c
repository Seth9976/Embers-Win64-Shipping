// 函数: sub_140f0b960
// 地址: 0x140f0b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rsi = *(arg4 + 0x28)
int64_t rax_2 = *(arg4 + 0x18)

if (rsi != 0)
    rsi[1].d += 1

char rax_4

if (rax_2 == data_143e1e0f8)
    int64_t* rcx = *(arg1 + 0x4d0)
    rax_4 = (*(*rcx + 0x1a0))(rcx)

if (rax_2 != data_143e1e0f8 || rax_4 == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp1_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rsi + 8))(rsi, 1)
else
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t r12_1 = 0
    
    if (rbx_1 != 0)
        int32_t rax_5 = rbx_1[1].d
        
        if (rax_5 != 0)
            rbx_1[1].d = rax_5 + 1
            rax_5.b = 1
        
        if (rax_5.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_6 = rbx_1[1].d
            r12_1 = *(arg1 + 8)
            rbx_1[1].d = rax_6
            
            if (rax_6 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_108 = r12_1
    int64_t* var_100_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int32_t var_44
    int32_t var_44_1 = var_44 & 0xffffff00
    char var_f8 = 1
    int512_t zmm1
    zmm1.o = zx.o(0)
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    char var_d8_1 = 0
    int64_t var_d0
    __builtin_memset(&var_d0, 0, 0x88)
    int32_t var_48_1 = 0x20702
    sub_140596b00(arg2, sub_140dbdce0(&var_f8, &var_108, 3, 0))
    sub_140597700(&var_f8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            int64_t r8_1 = *rsi
            (*r8_1)(rsi, zmm1, r8_1)
            int32_t temp5_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp5_1 == 1)
                int64_t r8_2 = *rsi
                (*(r8_2 + 8))(rsi, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
