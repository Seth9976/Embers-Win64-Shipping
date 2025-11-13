// 函数: sub_140ecd380
// 地址: 0x140ecd380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140e19840(arg1, arg4)
int64_t rcx

if (rax != 0)
    rcx = *(arg1 + 0x2e0)

if (rax == 0 || rcx == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t var_f8 = rcx
    void* rcx_1 = *(arg1 + 0x2e8)
    void* var_f0_1 = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) += 1
    
    void var_28
    
    if (arg1 + 0x2e0 != &var_28)
        *(arg1 + 0x2e0) = 0
        int64_t* rbx_1 = *(arg1 + 0x2e8)
        
        if (rbx_1 != 0)
            *(arg1 + 0x2e8) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int32_t rax_4 = sub_140eaf190(arg1, arg3, &var_f8)
    sub_140ed4fe0(arg1 + 0x2a8, &var_f8)
    sub_140ec0a30(arg1 + 0x2a8, &var_f8, rax_4)
    uint128_t zmm0_1 = var_f8.o
    var_f8.o = zmm0_1
    int64_t* rbx_3 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    sub_140ea49e0(arg1, &var_f8)
    char var_e8 = 1
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    char var_c8_1 = 0
    int32_t var_34
    int32_t var_34_1 = (var_34 & 0xffffff01) | 1
    int64_t var_c0
    __builtin_memset(&var_c0, 0, 0x88)
    int32_t var_38_1 = 0x20702
    sub_140596b00(arg2, &var_e8)
    sub_140597700(&var_e8)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

return arg2
