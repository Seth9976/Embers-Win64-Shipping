// 函数: sub_140b204a0
// 地址: 0x140b204a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
double zmm6[0x2] = arg2

if (arg2[0] > 0.0)
    arg2 = 0x3ff0000000000000
    arg2[0] = arg2[0] / zmm6[0]
    sub_140b1ff30(arg1, arg2)
else
    void var_90
    char* var_78
    char** rax_3
    int64_t zmm6_1
    rax_3, zmm6_1 =
        sub_140a96390(&var_78, _vfprintf_p_l(&var_90, Invalid interval specified: {0}", FFrameRate")
        )
    int32_t var_68_1 = 3
    char var_40_1 = 0
    int32_t* var_e8 = nullptr
    int32_t var_e0_1 = 1
    sub_1405a4b40(&var_e8, 1, 0)
    int32_t* rcx_3 = var_e8
    *rcx_3 = var_68_1
    *(rcx_3 + 8) = zmm6_1
    *(rcx_3 + 8) = zmm6_1
    rcx_3[2] = zmm6_1.d
    *(rcx_3 + 8) = zmm6_1
    rcx_3[0xa].b = 0
    int64_t* var_50
    
    if (var_40_1 != 0)
        int64_t var_58
        *(rcx_3 + 0x10) = var_58
        *(rcx_3 + 0x18) = var_50
        
        if (var_50 != 0)
            var_50[1].d += 1
        
        int32_t var_48
        rcx_3[8] = var_48
        rcx_3[0xa].b = 1
    
    char* var_b8 = *rax_3
    void* rax_11 = rax_3[1]
    void* var_b0_1 = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    void var_a8
    int64_t* rax_12 = sub_140aac870(&var_a8, &var_b8, &var_e8)
    int64_t var_d0 = *rax_12
    int64_t* rax_14 = rax_12[1]
    
    if (rax_14 != 0)
        rax_14[1].d += 1
    
    int32_t var_c0_1 = rax_12[2].d
    int64_t* var_a0
    
    if (var_a0 != 0)
        var_a0[1].d -= 1
        
        if (var_a0[1].d == 1)
            (**var_a0)(var_a0)
            int32_t rax_18 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (rax_18 == 1)
                (*(*var_a0 + 8))(var_a0, 1)
    
    sub_140596f50(&var_e8)
    
    if (var_40_1 != 0)
        char var_40_2 = 0
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rax_22 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rax_22 == 1)
                    (*(*var_50 + 8))(var_50, 1)
    
    int64_t* rdi_3 = rax_3[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_26 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* var_d8 = &var_d0
    sub_140aca4f0(arg1, &var_d8)
    
    if (rax_14 != 0)
        rax_14[1].d -= 1
        
        if (rax_14[1].d == 1)
            (**rax_14)(rax_14)
            int32_t rax_30 = *(rax_14 + 0xc)
            *(rax_14 + 0xc) -= 1
            
            if (rax_30 == 1)
                (*(*rax_14 + 8))(rax_14, 1)
    
    int64_t* var_88
    
    if (var_88 != 0)
        var_88[1].d -= 1
        
        if (var_88[1].d == 1)
            (**var_88)(var_88)
            int32_t rbx_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (rbx_1 == 1)
                int64_t r8_3 = *var_88
                (*(r8_3 + 8))(var_88, zx.q(rbx_1), r8_3)

__security_check_cookie(rax_1 ^ &var_108)
return arg1
