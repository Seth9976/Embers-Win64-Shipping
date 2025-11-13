// 函数: sub_140f59b10
// 地址: 0x140f59b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_118 = *(arg4 + 0x50)
char var_114 = 1

if (sub_140e19910(arg1, *(arg4 + 0xc), &var_118, arg5) == 0)
    char rax_4 = sub_140e19840(arg1, arg5)
    char rax_5
    
    if (rax_4 == 0)
        rax_5 = sub_140e6a4f0(data_143e29f28, arg4, *(arg1 + 0x384), arg1[0x5c].d)
    
    if (rax_4 != 0 || rax_5 == 0)
        *arg2 = 0
        goto label_140f59d35
    
    var_118 = 1
    int32_t* rax_6 = sub_140f46600(&arg1[0x47])
    int32_t rcx_5
    
    if (rax_6[1].b == 0)
        rcx_5 = 1
    else
        rcx_5 = *rax_6
    
    arg1[0x70].d = rcx_5
    sub_140910050(&arg1[0x77])
    int64_t rbx_2 = *arg1
    int128_t zmm0_2
    int512_t zmm1_1
    zmm0_2, zmm1_1 = sub_140f5a560(arg1, arg3, arg4 + 0x18)
    zmm1_1.o = zmm0_2
    (*(rbx_2 + 0x240))(arg1, zmm1_1)
    sub_140f5be70(arg1)
    int64_t* rbx_3 = arg1[2]
    int64_t r15_1 = 0
    
    if (rbx_3 != 0)
        int32_t rax_7 = rbx_3[1].d
        
        if (rax_7 != 0)
            rbx_3[1].d = rax_7 + 1
            rax_7.b = 1
        
        if (rax_7.b == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            int32_t rax_8 = rbx_3[1].d
            r15_1 = arg1[1]
            rbx_3[1].d = rax_8
            
            if (rax_8 == 0)
                (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    
    var_118.q = r15_1
    int64_t* var_110_1 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
    char var_108 = 1
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0
    char var_e8_1 = 0
    int64_t var_e0
    __builtin_memset(&var_e0, 0, 0x88)
    int32_t var_58_1 = 0x20702
    sub_140596b00(arg2, sub_140eae530(&var_108, &var_118))
    sub_140597700(&var_108)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp1_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    int64_t rbx_1 = *arg1
    int128_t zmm0_1
    int512_t zmm1
    zmm0_1, zmm1 = sub_140f5a560(arg1, arg3, arg4 + 0x18)
    zmm1.o = zmm0_1
    (*(rbx_1 + 0x240))(arg1, zmm1)
    sub_140f5be70(arg1)
    *arg2 = 1
label_140f59d35:
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

__security_check_cookie(rax_1 ^ &var_138)
return arg2
