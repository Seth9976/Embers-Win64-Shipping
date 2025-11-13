// 函数: sub_140f68640
// 地址: 0x140f68640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rbx = *(arg1 + 0x10)
int64_t* rsi = rbx

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
        rsi = nullptr

int64_t rax_3

if (rsi != 0)
    rax_3 = *(arg1 + 8)

if (rsi == 0 || rax_3 == 0)
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
    if (rbx != 0)
        rbx[1].d += 2
    
    int32_t var_24
    int32_t var_24_1 = var_24 & 0xffffff00
    char var_d8 = 1
    int512_t zmm1
    zmm1.o = zx.o(0)
    int64_t var_d0_1 = 0
    int64_t var_c8_1 = 0
    char var_b8_1 = 0
    int64_t var_b0_1 = 0
    int64_t var_a8_1 = 0
    int128_t var_98
    __builtin_memset(&var_98, 0, 0x70)
    int32_t var_28_1 = 0x20702
    int64_t var_a0_1 = rax_3
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rbx[1].d -= 1
        var_98.q = rbx
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    sub_140596b00(arg2, &var_d8)
    sub_140597700(&var_d8)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp6_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            int64_t r8_1 = *rbx
            (*r8_1)(rbx, zmm1, r8_1)
            int32_t temp7_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp7_1 == 1)
                int64_t r8_2 = *rbx
                (*(r8_2 + 8))(rbx, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
